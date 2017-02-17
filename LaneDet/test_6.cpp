#include <iostream>
#include <string>
#include <vector>
//#include <bitset>
//#include <cstddef>
//#include "Sales_item.h"
using namespace std;

/////////////////////////////////2016-7-29 10:27:18
//void errorHandler() {};
//int main()
//{
//	//int ia[] = { 0,2,4,6,8 };
//	//int *ip = ia; // ip points to ia[0]
//	//ip = &ia[4]; // ip points to last element in ia
//
//	//ip = ia; // ok: ip points to ia[0]
//	//int *ip2 = ip + 4; // ok: ip2 points to ia[4], the last element in ia
//	//// error: ia has only 4 elements, ia + 10 is an invalid address
//	////int *ip3 = ia + 10;
//	//ptrdiff_t n = ip2 - ip; // ok: distance between the pointers
//	//cout << n << endl;
//
//	//int last = *(ia + 4); // ok: initializes last to 8, the value of ia[4]
//	//cout << last << endl;
//	//last = *ia + 4; // ok: last = 4, equivalent to ia[0]+4
//	//cout << last << endl;
//
//	//int i = ia[0]; // ia points to the first element in ia
//	//cout << i << endl;
//	//int *p = &ia[2]; // ok: p points to the element indexed by 2
//	//int j = p[1]; // ok: p[1] equivalent to *(p + 1),
//	//			  // p[1] is the same element as ia[3]
//	//int k = p[-2]; // ok: p[-2] is the same element as ia[0]
//	//cout << j << k << endl;
//
//	//const size_t arr_size = 5;
//	//int arr[arr_size] = { 1,2,3,4,5 };
//	//int *p = arr; // ok: p points to arr[0]
//	//int *p2 = p + arr_size; // ok: p2 points one past the end of arr
//	//						// use caution -- do not dereference!
//
//	//const size_t arr_sz = 5;
//	//int int_arr[arr_sz] = { 0,1,2,3,4 };
//	//// pbegin points to first element, pend points just after the last
//	////for (int *pbegin = int_arr, *pend = int_arr + arr_sz; pbegin != pend; ++pbegin)
//	////	*pbegin = 0;
//	//for (int *pbegin = int_arr, *pend = int_arr + arr_sz; pbegin != pend; ++pbegin)
//	//	cout << *pbegin << " ";		// print the current element
//
//	//int *p1 = int_arr, *p3 = p1;
//	//p1 += p3 - p1;
//	//cout << *p1 << endl;
//
//	//const double *cptr; // cptr may point to a double that is const
//	////*cptr = 42;			// error: *cptr might be const
//
//	//const double pi = 3.14;
//	////double *ptr = &pi; // error: ptr is a plain pointer
//	//const double *cptr = &pi; // ok: cptr is a pointer to const
//
//	//const int universe = 42;
//	//const void *cpv = &universe; // ok: cpv is const
//	////void *pv = &universe; // error: universe is const
//
//	//double dval = 3.14; // dval is a double; its value can be changed
//	//cptr = &dval; // ok: but can't change dval through cptr
//
//	////////////////////////////////////////////2016-7-29 17:03:37
//	const double *cptr;
//	double dval = 3.14159; // dval is not const
//	cptr = &dval;	// 允许把非 const 对象的地址赋给指向 const 对象的指针
//	//*cptr = 3.14159; // error: cptr is a pointer to const
//	double *ptr = &dval; // ok: ptr points at non-const double
//	*ptr = 2.72; // ok: ptr is plain pointer
//	cout << *cptr << endl; // ok: prints 2.72
//
//	int errNumb = 0;
//	int *const curErr = &errNumb; // curErr is a constant pointer
//	//curErr = curErr; // error: curErr is const,任何企图给 const 指针赋值的行为（即使给curErr 赋回同样的值）都会导致编译时的错误
//	if (*curErr)
//	{
//		errorHandler();
//		*curErr = 100; // ok: reset value of the object to which curErr is bound
//	}
//	cout << errNumb << endl;
//
//	const double pi = 3.14159;
//	// pi_ptr is const and points to a const object
//	const double *const pi_ptr = &pi;
//
//	int i = -1;
//	const int ic = i;
//	const int *pic = &ic;
//	//int *const cpi = &ic;	// a value of type "const int *" cannot be used to initialize an entity of type "int *const"
//	const int *const cpic = &ic;
//
//	i = ic;
//	pic = &ic;
//	pic = cpic;
//
//	return 0;
//}

/////////////////////////////////2016-7-29 09:35:32
//int main()
//{
//	//int i; int* dp = &i;
//	//const int j = 0, *p = j;
//	//string *ps = NULL;
//
//	//int ia[7] = { 10, 1, 1, 2, 3, 5, 8 };
//	//int *ip = ia;
//	//cout << *ip << endl;
//
//	//char cs[] = "hello world";
//	//char *cp = cs;
//	//cout << *cp << endl;
//
//	//string s("hello world");
//	//string *sp = &s; // sp holds the address of s
//	//cout << *sp << endl; // prints hello world
//
//	//*sp = "goodbye"; // contents of s now changed
//	//cout << *sp << endl;
//	//string s2 = "some value";
//	//sp = &s2; // sp now points to s2
//	//cout << *sp << endl;
//
//	//// 指针和引用的比较
//	//int ival = 1024, ival2 = 2048;
//	//int *pi = &ival, *pi2 = &ival2;
//	//pi = pi2; // pi now points to ival2
//	//cout << pi << " " << pi2 << endl;
//
//	//// 指针和引用的比较
//	//int &ri = ival, &ri2 = ival2;
//	//ri = ri2; // assigns ival2 to ival
//	//cout << ri << " " << ri2 << endl;
//
//	// 指向指针的指针
//	int ival2 = 1024;
//	int *pi2 = &ival2; // pi points to an int
//	int **ppi2 = &pi2; // ppi points to a pointer to int
//	cout << pi2 << " " << ppi2 << endl;
//	int *pi3 = *ppi2; // ppi points to a pointer
//	cout << pi2 << " " << ppi2 << " " << pi3 << endl;
//
//	cout << "\nThe value of ival2\n"
//		<< "direct value: " << ival2 << "\n"
//		<< "indirect value: " << *pi2 << "\n"
//		<< "doubly indirect value: " << **ppi2
//		<< endl;
//
//	int i = 42, j = 1024;
//	int *p1 = &i, *p2 = &j;
//	*p2 = *p1 * *p2;
//	*p1 *= *p1;
//	cout << *p1 << " " << *p2 << endl;
//
//	return 0;
//}