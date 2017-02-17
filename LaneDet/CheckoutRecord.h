#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//////////////////////////////2017-1-5 10:36:01
// Exercise 12.20:
class Date {
public:
	Date() {}
	Date(int yy, int mm, int dd) :year(yy), month(mm), day(dd) {}
	friend ostream& operator<<(ostream&, const Date&);
	friend istream& operator>>(istream&, Date&);
	// ...others members
private:
	int year, month, day;
};

class CheckoutRecord {
public:
	CheckoutRecord() {}
	friend ostream& operator<<(ostream&, const CheckoutRecord&);
	friend istream& operator>>(istream&, CheckoutRecord&);
	CheckoutRecord& operator=(const CheckoutRecord&);
	CheckoutRecord& operator=(const Date&);
	CheckoutRecord& operator=(const pair<string, string>&);
	pair<string, string>& operator[](const size_t);
	const pair<string, string>& operator[](const size_t) const;
	// ...
private:
	double book_id;
	string title;
	Date date_borrowed;
	Date date_due;
	pair<string, string> borrower;
	vector< pair<string, string>* > wait_list;
};

// Exercise 14.7:
ostream& operator<<(ostream &out, const CheckoutRecord &cr)
{
	out << cr.book_id << "\t" << cr.title << endl
		<< "date borrowed:" << cr.date_borrowed << endl
		<< "date due:" << cr.date_due << endl
		<< "borrower:" << cr.borrower.first << "," << cr.borrower.second << endl;
	out << "wait list:" << endl;
	for (vector< pair<string, string>* >::const_iterator citer = cr.wait_list.begin(); citer != cr.wait_list.end(); ++citer)
	{
		out << "\t" << (*citer)->first << "," << (*citer)->second << endl;
	}
	return out;
}

// Exercise 14.8:
ostream& operator<<(ostream &out, const Date &d)
{
	out << d.year << "/" << d.month << "/" << d.day;
	return out;
}

// Exercise 14.11:
istream& operator>>(istream &in, CheckoutRecord &c)
{
	in >> c.book_id >> c.title
		>> c.date_borrowed >> c.date_due
		>> c.borrower.first >> c.borrower.second;
	if (!in)
	{
		c = CheckoutRecord();
		return in;
	}

	c.wait_list.clear();
	while (in)
	{
		pair<string, string> *pss = new pair<string, string>;
		in >> pss->first >> pss->second;
		if (!in)
		{
			return in;
		}
		c.wait_list.push_back(pss);
	}
	return in;
}

// Exercise 14.15:
CheckoutRecord & CheckoutRecord::operator=(const CheckoutRecord &c)
{
	book_id = c.book_id;
	title = c.title;
	date_borrowed = c.date_borrowed;
	date_due = c.date_due;
	borrower = c.borrower;
	
	wait_list.clear();
	for (vector< pair<string, string>* >::const_iterator citer = c.wait_list.begin(); citer != c.wait_list.end(); ++citer)
	{
		pair<string, string> *pss = new pair<string, string>;
		*pss = **citer;
		wait_list.push_back(pss);
	}

	return *this;
}

// Exercise 14.16:
inline CheckoutRecord & CheckoutRecord::operator=(const Date &new_due)
{
	date_due = new_due;
	return *this;
}
inline CheckoutRecord & CheckoutRecord::operator=(const pair<string, string> &awaiter)
{
	pair<string, string> *pss = new pair<string, string>;
	*pss = awaiter;
	wait_list.push_back(pss);
	return *this;
}

//////////////////////////////////2017-1-5 15:13:51
// 14.5. ÏÂ±ê²Ù×÷·û
class Foo {
public:
	int &operator[] (const size_t);
	const int &operator[] (const size_t) const;
	// other interface members
private:
	vector<int> data;
	// other member data and private utility functions
};
int& Foo::operator[] (const size_t index)
{
	return data[index]; // no range checking on index
}
const int& Foo::operator[] (const size_t index) const
{
	return data[index]; // no range checking on index
}

// Exercise 14.17:
inline pair<string, string>& CheckoutRecord::operator[](const size_t index)
{
	return *wait_list[index];
}
inline const pair<string, string>& CheckoutRecord::operator[](const size_t index) const
{
	return *wait_list[index];
}