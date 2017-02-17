#include <iostream>
#include <vector>
#include <string>
#include "Sales_item.h"
using namespace std;

///////////////////////////////2016-9-1 15:14:58
//// 7.9. 指向函数的指针
//// pf points to function returning bool that takes two const string references
//bool(*pf)(const string &, const string &);
//
//// 用 typedef 简化函数指针的定义
//typedef bool(*cmpFcn)(const string &, const string &);
//
//// 指向函数的指针的初始化和赋值
//// compares lengths of two strings
//bool lengthCompare(const string &, const string &);
//
//bool lengthCompare(const string &, const string &)
//{
//	return 0;
//}
//
//// 指向不同函数类型的指针之间不存在转换
//string::size_type sumLength(const string&, const string&);
//bool cstringCompare(char*, char*);
//
//int main()
//{
//	// 指向函数的指针的初始化和赋值
//	cmpFcn pf1 = 0; // ok: unbound pointer to function
//	cmpFcn pf2 = lengthCompare; // ok: pointer type matches function's type
//	pf1 = lengthCompare; // ok: pointer type matches function's type
//	pf2 = pf1; // ok: pointer types match
//
//	cmpFcn pf3 = lengthCompare;		// 直接引用函数名等效于在函数名上应用取地址操作符
//	cmpFcn pf4 = &lengthCompare;
//
//	// 指向不同函数类型的指针之间不存在转换
//	// pointer to function returning bool taking two const string&
//	cmpFcn pf;
//	//pf = sumLength; // error: return type differs
//	//pf = cstringCompare; // error: parameter types differ
//	pf = lengthCompare; // ok: function and pointer types match exactly
//
//	// 通过指针调用函数
//	cmpFcn pf6 = lengthCompare;
//	lengthCompare("hi", "bye"); // direct call
//	pf6("hi", "bye"); // equivalent call: pf1 implicitly dereferenced
//	(*pf6)("hi", "bye"); // equivalent call: pf1 explicitly dereferenced
//
//	// 函数指针形参
//	/* useBigger function's third parameter is a pointer to function
//	* that function returns a bool and takes two const string references
//	* two ways to specify that parameter:
//	*/
//	// third parameter is a function type and is automatically treated as a pointer to function
//	void useBigger(const string &, const string &,
//		bool(const string &, const string &));
//	// equivalent declaration: explicitly define the parameter as a pointer to function
//	void useBigger(const string &, const string &,
//		bool(*)(const string &, const string &));
//
//	// 返回指向函数的指针
//	// ff is a function taking an int and returning a function pointer
//	// the function pointed to returns an int and takes an int* and an int
//	int(*ff(int))(int*, int);
//	// PF is a pointer to a function returning an int, taking an int* and an int
//	typedef int(*PF)(int*, int);
//	PF ff(int); // ff returns a pointer to function
//
//	// func is a function type, not a pointer to function!
//	typedef int func(int*, int);
//	void f1(func); // ok: f1 has a parameter of function type
//	//func f2(int); // error: f2 has a return type of function type
//	func *f3(int); // ok: f3 returns a pointer to function type
//
//	// 指向重载函数的指针
//	extern void ff(vector<double>);
//	extern void ff(unsigned int);
//	// which function does pf1 refer to?
//	void(*pf1)(unsigned int) = &ff; // ff(unsigned)
//	// error: no match: invalid parameter list
//	//void(*pf2)(int) = &ff;
//	// error: no match: invalid return type
//	double(*pf3)(vector<double>);
//	//pf3 = &ff;
//
//	return 0;
//}