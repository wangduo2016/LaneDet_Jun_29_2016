#pragma once
#include <iostream>
#include <string>
using namespace std;

class Sales_item1 {
public:
	// operations
	double avg_price() const;
	bool same_isbn(const Sales_item1 &rhs) const
	{
		return isbn == rhs.isbn;
	}
	// constructors
	//Sales_item1() : units_sold(0), revenue(0.0) {}
	//Sales_item1(const std::string &book) :isbn(book), units_sold(0), revenue(0.0) {}
	explicit Sales_item1(std::istream &);
	//friend std::istream& operator>>(std::istream &, Sales_item &);
	// alternative definition for Sales_item default constructor
	//Sales_item1(const std::string &book, int cnt, double price) :isbn(book), units_sold(cnt), revenue(cnt * price) {}
	//Sales_item1() : isbn(10, '9'), units_sold(0), revenue(0.0) {}
	// 将前两个构造函数组合起来
	explicit Sales_item1(const std::string &book = "") :isbn(book), units_sold(0), revenue(0.0) {}
private:
	std::string isbn;
	unsigned units_sold;
	double revenue;
};

inline double Sales_item1::avg_price() const
{
	if (units_sold)
		return revenue / units_sold;
	else
		return 0;
}
//inline istream& operator>>(istream &in, Sales_item &s)
//{
//	double price;
//	in >> s.isbn >> s.units_sold >> price;
//	if (in)
//		s.revenue = s.units_sold * price;
//	else
//		s = Sales_item();
//	return in;
//}
//Sales_item1::Sales_item1(const Sales_item1 &orig) :
//	isbn(orig.isbn), // uses string copy constructor
//	units_sold(orig.units_sold), // copies orig.units_sold
//	revenue(orig.revenue) // copy orig.revenue
//{ } // empty body