//#include <iostream>
//#include <vector>
//#include <list>
////#include <deque>
//#include <string>
//#include <fstream>
//#include <sstream>
//#include <algorithm>
//#include <numeric>
//#include <iterator>
////#include <stack> // stack adaptor
////#include <queue> // both queue and priority_queue adaptors
////#include <map>
////#include <set>
//#include "Sales_item.h"
////#include "Sales_item1.h"
////#include "Person.h"
////#include "Screen.h"
////#include "TextQuery.h"
//using namespace std;
//
////////////////////////////////2016-11-10 15:43:09
//int main()
//{
//	// 13.1. 复制构造函数
//	// 对象的定义形式
//	string null_book = "9-999-99999-9"; // copy-initialization
//	string dots(10, '.'); // direct-initialization
//	string empty_copy = string(); // copy-initialization
//	string empty_direct; // direct-initialization
//
//	ifstream file1("filename"); // ok: direct initialization
//								//ifstream file2 = "filename"; // error: copy constructor is private
//								// This initialization is okay only if
//								// the Sales_item(const string&) constructor is not explicit
//	Sales_item item = string("9-999-99999-9");
//
//	// 形参与返回值
//	// copy constructor used to copy the return value;
//	// parameters are references, so they aren't copied
//	//string make_plural(size_t, const string&, const string&);
//
//	// 初始化容器元素
//	// default string constructor and five string copy constructors invoked
//	vector<string> svec(5);
//
//	// 构造函数与数组元素
//	Sales_item primer_eds[] = { string("0-201-16487-6"),
//		string("0-201-54848-8"),
//		string("0-201-82470-1"),
//		Sales_item()
//	};
//
//	return 0;
//}