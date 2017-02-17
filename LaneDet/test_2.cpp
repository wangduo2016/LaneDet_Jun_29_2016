#include <iostream>
#include <string>
//#include "Sales_item.h"
using namespace std;
//using std::cin;
//using std::string;
//using std::cout;
//using std::endl;

//////////////////////////////////////////2016-7-26 10:06:31
//int main()
//{
//	int ival = 1024;
//	int &refVal = ival;
//	//int &refVal2;	// references must be initialized
//	//int &refVal3 = 10;	//initializer must be an object
//	cout << refVal << endl;
//
//	refVal += 2;
//	cout << refVal << endl;
//
//	int ii = refVal;
//	cout << ii << endl;
//
//	//int jj = 10;
//	//int &refVal = jj;	// error.当引用初始化后，只要该引用存在，它就保持绑定到初始化时指向的对象。不可能将引用绑定到另一个对象。
//	//cout << refVal << endl;
//
//	const int ival2 = 1028;
//	const int &refVal2 = ival2;
//	//int &refVal3 = ival2;	// error: non const reference to a const object
//	cout << refVal2 << endl;
//
//	//int &ref = 3;	// initial value of reference to non - const must be an lvalue
//	int i = 42;
//	const int &r = 42;
//	const int &r2 = r + i;
//	cout << r << endl << r2 + 6 << endl;
//
//	double dval = 3.14;
//	const int &refDval = dval;	// const 引用是只读的
//	cout << refDval << endl;
//
//	int iival = 1.01;
//	int &rval2 = iival;
//	const int &rval3 = 1;
//	rval2 = rval3;
//	cout << rval2 << endl;
//	iival = rval3;
//	cout << iival << endl;
//
//	int k, &ri = k;
//	k = 5; ri = 10;
//	std::cout << k << " " << ri << std::endl;
//
//	enum open_modes { input, output, append };
//	cout << input << output << append << endl;
//	enum Forms { shape = 1, sphere, cylinder, polygon };
//	enum Points {
//		point2d = 2, point2w,
//		point3d = 3, point3w
//	};
//	Points pt3d = point3d;
//	Points pt2w = pt3d;
//	cout << pt3d << pt2w << endl;
//
//	return 0;
//}


//////////////////////////////////////////2016-7-25
//extern double test_b = 3.1415;	// error
//extern double test_b;
//int main()
//{
//	extern int counter;
//	cout << counter << endl;
//
//	extern const int test_a;
//	cout << test_a << endl;
//	cout << test_b << endl;
//
//	return 0;
//}