#include <iostream>
#include <vector>
#include <string>
#include "Sales_item.h"
using namespace std;

///////////////////////////////////////2016-8-26 16:57:27
//int main()
//{
//	Sales_item item, *p;
//	// three ways to obtain size required to hold an object of type Sales_item
//	sizeof(Sales_item); // size required to hold an object of type Sales_item
//	sizeof item; // size of item's type, e.g., sizeof(Sales_item)
//	sizeof *p; // size of type to which p points, e.g., sizeof(Sales_item)
//
//	cout << sizeof(Sales_item) << endl;
//	cout << sizeof item << endl;
//	cout << sizeof *p << endl;
//
//	cout << sizeof(bool) << "," << sizeof(char) << "," << sizeof(wchar_t) << "," << sizeof(short) << "," << sizeof(int) << "," << sizeof(long) << "," << sizeof(float) << "," << sizeof(double) << "," << sizeof(long double) << endl;
//
//	int x[10]; int *p1 = x;
//	cout << sizeof(x) / sizeof(*x) << endl;
//	cout << sizeof(p1) / sizeof(*p1) << endl;
//
//	return 0;
//}