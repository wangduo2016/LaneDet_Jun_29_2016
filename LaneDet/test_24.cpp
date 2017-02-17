#include <iostream>
#include <vector>
#include <string>
#include "Sales_item.h"
using namespace std;

///////////////////////////////2016-9-1 09:49:05
////// 7.8.1. 重载与作用域
/////* Program for illustration purposes only:
////* It is bad style for a function to define a local variable
////* with the same name as a global name it wants to use
////*/
////string init(); // the name init has global scope
////void fcn()
////{
////	int init = 0; // init is local and hides global init
////	//string s = init(); // error: global init is hidden
////}
//
////void print(const string &);
////void print(double); // overloads the print function
////void fooBar(int ival)
////{
////	void print(int); // new scope: hides previous instances of print
////	print("Value: "); // error: print(const string &) is hidden
////	print(ival); // ok: print(int) is visible
////	print(3.14); // ok: calls print(int); print(double) is hidden
////}
//
////void print(const string &);
////void print(double); // overloads print function
////void print(int); // another overloaded instance
////void fooBar2(int ival)
////{
////	print("Value: "); // ok: calls print(const string &)
////	print(ival); // ok: print(int)
////	print(3.14); // ok: calls print (double)
////}
////
////// 7.8.3. 重载确定的三个步骤
////void f();
////void f(int);
////void f(int, int);
////void f(double, double = 3.14);
//
//int main()
//{
//	// 7.8.3. 重载确定的三个步骤
//	//f(5.6); // calls void f(double, double)
//	//f(42, 2.56);	// 二义性
//
//	// 2.7. 枚举
//	// shape is 1, sphere is 2, cylinder is 3, polygon is 4
//	enum Forms { shape = 1, sphere, cylinder, polygon };
//	// point2d is 2, point2w is 3, point3d is 3, point3w is 4
//	enum Points {
//		point2d = 2, point2w,
//		point3d = 3, point3w
//	};
//	Points pt3d = point3d; // ok: point3d is a Points enumerator
//	Points pt2w;
//	//Points pt2w = 3; // error: pt2w initialized with int
//	//pt2w = polygon; // error: polygon is not a Points enumerator
//	pt2w = pt3d; // ok: both are objects of Points enum type
//	cout << pt3d << endl;
//
//	return 0;
//}