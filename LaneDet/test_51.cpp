//#include <iostream>
//#include <vector>
////#include <list>
////#include <deque>
//#include <string>
////#include <fstream>
////#include <sstream>
////#include <algorithm>
////#include <numeric>
////#include <iterator>
////#include <stack> // stack adaptor
////#include <queue> // both queue and priority_queue adaptors
////#include <map>
////#include <set>
//#include "Sales_item.h"
////#include "Sales_item1.h"
////#include "Person.h"
////#include "Screen.h"
////#include "TextQuery.h"
////#include "NoName.h"
//#include "HasPtr.h"
//using namespace std;
//
//int main()
//{
//	/////////////////////////////2016-11-18 11:18:57
//	// 13.3. 析构函数
//	// 何时调用析构函数
//	// p points to default constructed object
//	Sales_item *p = new Sales_item;
//	{
//		// new scope
//		Sales_item item(*p); // copy constructor copies *p into item
//		delete p; // destructor called on object pointed to by p
//	} // exit local scope; destructor called on item
//
//	{
//		Sales_item *p = new Sales_item[10]; // dynamically allocated
//		vector<Sales_item> vec(p, p + 10); // local object
//										   // ...
//		delete[] p; // array is freed; destructor run on each element
//	} // vec goes out of scope; destructor run on each element
//
//	///////////////////////////////2016-11-20 21:27:00
//	// 13.5. 管理指针成员
//	// 一个带指针成员的简单类
//	// 默认复制／赋值与指针成员
//	int obj = 0;
//	HasPtr ptr1(&obj, 42); // int* member points to obj, val is 42
//	HasPtr ptr2(ptr1); // int* member points to obj, val is 42
//
//	// 指针共享同一对象
//	ptr1.set_int(0); // changes val member only in ptr1
//	ptr2.get_int(); // returns 42
//	ptr1.get_int(); // returns 0
//
//	ptr1.set_ptr_val(42); // sets object to which both ptr1 and ptr2 point
//	ptr2.get_ptr_val(); // returns 42
//
//	// 可能出现悬垂指针
//	int *ip = new int(42); // dynamically allocated int initialized to 42
//	HasPtr ptr(ip, 10); // Has Ptr points to same object as ip does
//	delete ip; // object pointed to by ip is freed
//	ptr.set_ptr_val(0); // disaster: The object to which Has Ptr points was freed!
//
//	// Exercise 13.20:
//	int i = 42;
//	HasPtr p1(&i, 42);
//	HasPtr p2 = p1;
//	cout << p2.get_ptr_val() << endl;
//	p1.set_ptr_val(0);
//	cout << p2.get_ptr_val() << endl;
//
//	return 0;
//}