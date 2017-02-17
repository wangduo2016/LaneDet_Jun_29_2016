#include <iostream>
#include <vector>
#include <string>
#include "Sales_item.h"
using namespace std;

///////////////////////////////////////2016-8-27 09:17:14
//int main()
//{
//	//int i; // named, uninitialized int variable
//	//int *pi = new int; // pi points to dynamically allocated,
//	//				   // unnamed, uninitialized int
//
//	//// 动态创建对象的初始化
//	//int i1(1024); // value of i is 1024
//	//int *pi1 = new int(1024); // object to which pi points is 1024
//	//string s(10, '9'); // value of s is "9999999999"
//	//string *ps = new string(10, '9'); // *ps is "9999999999"
//	//cout << *pi1 << " " << *ps << endl;
//
//	//// 动态创建对象的默认初始化
//	//string *ps1 = new string; // initialized to empty string
//	//int *pi2 = new int; // pi points to an uninitialized int
//
//	//string *ps2 = new string(); // initialized to empty string
//	//int *pi3 = new int(); // pi points to an int value-initialized to 0
//	////cls *pc = new cls(); // pc points to a value-initialized object of type cls
//
//	////int x(); // does not value initialize x
//
//	int i;
//	int *pi = &i;
//	string str = "dwarves";
//	double *pd = new double(33);
//	//delete str; // error: str is not a dynamic object
//	//delete pi; // error: pi refers to a local
//	//delete pd; // ok
//
//	vector<string> *pvec1 = new vector<string>(10);
//	//vector<string> **pvec2 = new vector<string>[10];
//
//	int ival = 0;
//	ival = 3.541 + 3; // typically compiles with a warning
//
//	//////////////////////////////////////////////////2016-8-27 11:43:24
//	double dval;
//	int ival;
//	ival *= dval; // ival = ival * dval
//	ival *= static_cast<int>(dval); // converts dval to int
//
//	return 0;
//}