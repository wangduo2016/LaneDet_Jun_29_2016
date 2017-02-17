#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include "Sales_item.h"
using namespace std;

////////////////////////////////////2016-8-29 20:54:45
//// 7.3.1. 没有返回值的函数
//void test()
//{
//	//return 0;	// error
//	return;
//}
//
//// ok: swap acts on references to its arguments
//void swap(int &v1, int &v2)
//{
//	// if values already the same, no need to swap, just return
//	if (v1 == v2)
//		return;
//	// ok, have work to do
//	int tmp = v2;
//	v2 = v1;
//	v1 = tmp;
//	// no explicit return necessary
//}
//
//void do_swap(int &v1, int &v2)
//{
//	int tmp = v2;
//	v2 = v1;
//	v1 = tmp;
//	// ok: void function doesn't need an explicit return
//}
//void swap(int &v1, int &v2)
//{
//	if (v1 == v2)
//		//return false; // error: void function cannot return a value
//		return;
//	return do_swap(v1, v2); // ok: returns call to a void function
//}
//
//// 7.3.2.具有返回值的函数
//// Determine whether two strings are equal.
//// If they differ in size, determine whether the smaller
//// one holds the same characters as the larger one
//bool str_subrange(const string &str1, const string &str2)
//{
//	// same sizes: return normal equality test
//	if (str1.size() == str2.size())
//		return str1 == str2; // ok, == returns bool
//							 // find size of smaller string
//	string::size_type size = (str1.size() < str2.size())
//		? str1.size() : str2.size();
//	string::size_type i = 0;
//	// look at each element up to size of smaller string
//	while (i != size) {
//		if (str1[i] != str2[i])
//			return; // error: no return value
//	}
//	// error: control might flow off the end of the function without a return
//	// the compiler is unlikely to detect this error
//}
//
//int main()
//{
//
//	return EXIT_FAILURE;
//	return EXIT_SUCCESS;
//
//	//return 0;
//}