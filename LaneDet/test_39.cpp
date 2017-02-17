//#include <iostream>
//#include <vector>
//#include <list>
//#include <deque>
//#include <string>
//#include <sstream>
//#include <fstream>
////#include <algorithm>
////#include <stack> // stack adaptor
////#include <queue> // both queue and priority_queue adaptors
////#include <map>
////#include <cassert>
////#include "Sales_item.h"
////#include "Sales_item1.h"
////#include "Person.h"
////#include "Screen.h"
//using namespace std;

///////////////////////////////2016-9-29 10:00:22
//int main()
//{
//	// IO 对象不可复制或赋值
//	//ofstream out1, out2;
//	//out1 = out2; // error: cannot assign stream objects
//				 // print function: parameter is copied
//	//ofstream print(ofstream);
//	//out2 = print(out2); // error: cannot copy stream objects
//
//	//ofstream &print(ofstream&); // ok: takes a reference,no copy
//	//while (print(out2)) { /* ... */ } // ok: pass reference to out2
//
//	// Exercise 8.1:
//	//ofstream os;
//	//os << "Goodbye!" << endl;
//
//	//ostringstream os1;
//	//os1 << "Goodbye!" << endl;
//
//	// 8.2. 条件状态
//	//int ival;
//	//cin >> ival;
//
//	//if (cin)
//	//	// ok to use cin, it is in a valid state
//	//	cout << "ok" << endl;
//	//else
//	//	cout << "error" << endl;
//
//	//string word;
//	//while (cin >> word)
//		// ok: read operation successful ...
//
//	// 流状态的查询和控制
//	//int ival;
//	//// read cin and test only for EOF; loop is executed even if there are other IO failures
//	//while (cin >> ival, !cin.eof())
//	//{
//	//	if (cin.bad()) // input stream is corrupted; bail out
//	//		throw runtime_error("IO stream corrupted");
//	//	if (cin.fail())
//	//	{ // bad input
//	//		cerr << "bad data, try again"; // warn the user
//	//		cin.clear(istream::goodbit); // reset the stream
//	//		cin.ignore();
//	//		continue; // get next input
//	//	}
//	//	// ok to process ival
//	//	cout << ival << endl;
//	//}
//
//	// 条件状态的访问
//	// remember current state of cin
//	istream::iostate old_state = cin.rdstate();
//	cout << cin.rdstate() << endl;		// 输出0，表示可用
//	cin.clear();
//	//process_input(); // use cin
//	cin.clear(old_state); // now reset cin to old state
//
//	//cout << (istream::badbit | istream::eofbit | istream::failbit) << endl;
//	//cout << (4 | 2 | 1) << endl;
//
//	// 多种状态的处理
//	// sets both the badbit and the failbit
//	ifstream is;
//	is.setstate(ifstream::badbit | ifstream::failbit);		// 实参写法1
//	is.badbit | is.failbit;		// 实参写法2
//
//	// Exercise 8.3:
//	istream &io_test(istream&);
//	istream &rec_cin = io_test(cin);
//	// 测试返回的流是否能用
//	string mark;
//	rec_cin >> mark;
//	cout << mark << endl;
//
//	return 0;
//}
//
//////////////////////////////////////2016-10-8 09:53:21
//// Exercise 8.3:
//istream &io_test(istream &iss)
//{
//	string in_stream;
//	while (iss >> in_stream, !iss.eof())
//	{
//		cout << in_stream << endl;
//	}
//	iss.clear();
//	cout << "OK! function to end!" << endl;
//
//	return iss;
//}