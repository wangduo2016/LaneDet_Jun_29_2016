#include <iostream>
#include <string>
#include <vector>
//#include <bitset>
//#include <cstddef>
//#include "Sales_item.h"
using namespace std;

////////////////////////////////////////2016-7-28 18:06:03
//int main()
//{
//	vector<int> *pvec;	// pvec can point to a vector<int>
//	int *ip1, *ip2;		// ip1 and ip2 can point to an int
//	string *pstring;	// ip1 and ip2 can point to an int
//	double *dp;			// dp can point to a double
//	double dp3, *dp2; // dp2 is a ponter, dp3 is an object: both type double
//
//	int ival = 1024;
//	int *pi = 0; // pi initialized to address no object
//	int *pi2 = &ival; // pi2 initialized to address of ival
//	int *pi3; // ok, but dangerous, pi3 is uninitialized
//	pi = pi2; // pi and pi2 address the same object, e.g. ival
//	pi2 = 0; // pi2 now addresses no object
//
//	return 0;
//}

////////////////////////////////////////2016-7-28 16:31:16
//int get_size() { return 10; }
//int main()
//{
//	// both buf_size and max_files are const
//	const unsigned buf_size = 512, max_files = 20;
//	int staff_size = 27; // nonconst
//	const unsigned sz = get_size(); // const value not known until run time
//	char input_buffer[buf_size]; // ok: const variable
//	string fileTable[max_files + 1]; // ok: constant expression
//	//double salaries[staff_size]; // error: non const variable
//	//int test_scores[get_size()]; // error: non const expression
//	//int vals[sz]; // error: size not known until run time
//
//	const unsigned array_size = 3;
//	int ia[array_size] = { 0, 1, 2 };
//	int ia2[] = { 0, 1, 2 }; // an array of dimension 3,显式初始化的数组不需要指定数组的维数值
//
//	const unsigned array_size1 = 5;
//	// Equivalent to ia = {0, 1, 2, 0, 0}
//	// ia[3] and ia[4] default initialized to 0
//	int ia3[array_size1] = { 0, 1, 2 };
//	// Equivalent to str_arr = {"hi", "bye", "", "", ""}
//	// str_arr[2] through str_arr[4] default initialized to the empty string
//	string str_arr[array_size1] = { "hi", "bye" };
//
//	char ca1[] = { 'C', '+', '+' }; // no null
//	char ca2[] = { 'C', '+', '+', '\0' }; // explicit null
//	char ca3[] = "C++"; // null terminator added automatically
//	//const char ch3[6] = "Daniel"; // error: Daniel is 7 elements
//
//	int ia22[] = { 0, 1, 2 }; // ok: array of ints
//	//int ia2[](ia); // error: cannot initialize one array with another
//	const unsigned array_size3 = 3;
//	int ia30[array_size]; // ok: but elements are uninitialized!
//	//ia3 = ia; // error: cannot assign one array to another
//
//	int ia11[7] = { 0, 1, 1, 2, 3, 5, 8 };
//	vector<int> ivec = { 0, 1, 1, 2, 3, 5, 8 };
//	//int ia2[] = ia;	// error
//	//int ia3[] = ivec;	// error
//
//	const size_t array_size2 = 10;
//	int ia33[array_size2]; // 10 ints, elements are uninitialized
//	// loop through array, assigning value of its index to each element
//	for (size_t ix = 0; ix != array_size2; ++ix)
//		ia33[ix] = ix;
//
//	const size_t sarray_size = 7;
//	int iia1[] = { 0, 1, 2, 3, 4, 5, 6 };
//	int iia2[sarray_size]; // local array, elements uninitialized
//	// copy elements from ia1 into ia2
//	for (size_t ix = 0; ix != sarray_size; ++ix)
//		iia2[ix] = iia1[ix];
//
//	return 0;
//}

////////////////////////////////////////2016-7-28 11:24:37
//int main()
//{
//	//int n = 32;	// n must be a const
//	const int n = 32;
//	bitset<32> bitvec; // 32 bits, all zero
//	bitset<n> b;	// n must be a const
//
//	return 0;
//}

////////////////////////////////////////2016-7-28 10:12:14
//int main()
//{
//	vector<int> ivec(10);
//	vector<int>::iterator iter = ivec.begin();	//由 begin 返回的迭代器指向第一个元素
//
//	// reset all the elements in ivec to 0
//	for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix)
//		ivec[ix] = 0;
//
//	// equivalent loop using iterators to reset all the elements in ivec to 0
//	for (vector<int>::iterator iter = ivec.begin(); iter != ivec.end(); ++iter)
//		*iter = 0; // set element to which iter refers to 0
//
//	while (iter != ivec.end())
//	{
//		cout << *iter << endl;
//		iter++;
//	}
//
//	vector<string> text(10);
//	// use const_iterator because we won't change the elements
//	for (vector<string>::const_iterator iter = text.begin(); iter != text.end(); ++iter)
//		cout << *iter << endl; // print each element in text
//
//	vector<int> vi(10);
//	vector<int>::iterator mid = vi.begin() + vi.size() / 2;
//
//	return 0;
//}