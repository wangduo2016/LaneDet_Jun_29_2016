#include <iostream>
#include <vector>
#include <string>
#include <fstream>
//#include "Sales_item.h"
//#include "Sales_item1.h"
//#include "Person.h"
//#include "Screen.h"
using namespace std;

///////////////////////////////2016-9-5 17:44:41
//int main()
//{
//	///////////////////////////////////////////2016-9-7 17:14:06
//	//// IO 对象不可复制或赋值
//	//ofstream out1, out2;
//	////out1 = out2; // error: cannot assign stream objects
//	//// print function: parameter is copied
//	////ofstream print(ofstream);
//	//ofstream &print(ofstream&); // ok: takes a reference, no copy
//	//////out2 = print(out2); // error: cannot copy stream objects
//	////while (print(out2)) { /* ... */ } // ok: pass reference to out2
//
//	//// Exercises Section 8.1
//	//ofstream os;
//	//os << "Goodbye!" << endl;
//
//	//// 8.2. 条件状态
//	//int ival;
//	//cin >> ival;
//
//	//// 流状态的查询和控制
//	//int ival;
//	//// read cin and test only for EOF; loop is executed even if there are other IO failures
//	//while (cin >> ival, !cin.eof())
//	//{
//	//	if (cin.bad()) // input stream is corrupted; bail out
//	//		throw runtime_error("IO stream corrupted");
//	//	if (cin.fail())
//	//	{ // bad input
//	//		cerr << "bad data, try again"; // warn the user
//	//		cin.clear(istream::failbit); // reset the stream
//	//		continue; // get next input
//	//	}
//	//	// ok to process ival
//	//}
//
//	//// 多种状态的处理
//	//// sets both the badbit and the failbit
//	//cin.setstate(ifstream::badbit | ifstream::failbit);
//
//	return 0;
//}