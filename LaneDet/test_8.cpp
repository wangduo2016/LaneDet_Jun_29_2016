#include <iostream>
#include <string>
#include <vector>
//#include <cstring>
//#include <bitset>
//#include <cstddef>
//#include "Sales_item.h"
using namespace std;

////////////////////////////////////////////////2016-7-30 15:44:35
//int main()
//{
//	const char *noerr = "success";	// ...
//	const char *err189 = "Error: a function declaration must "
//		"specify a function return type!";
//	cout << err189 << endl;
//	const char *errorTxt;
//	int errorFound = 0;
//	if (errorFound)
//		errorTxt = err189;
//	else
//		errorTxt = noerr;
//	// remember the 1 for the terminating null
//	int dimension = strlen(errorTxt) + 1;
//	char *errMsg = new char[dimension];
//	// copy the text for the error into errMsg
//	strncpy_s(errMsg, dimension, errorTxt, dimension);
//	cout << errMsg << endl;
//
//	////////////////////////////////////////2016-7-30 17:25:26
//	string st3("Hello World"); // st3 holds Hello World
//	//char *str = st3; // compile-time type error
//	const char *str = st3.c_str(); // almost ok, but not quite
//	const char *str_cpy = str;		// 复制 c_str 函数返回的数组
//
//	/////////////////////////////////////////2016-7-31 17:18:03
//	const size_t arr_size = 6;
//	int int_arr[arr_size] = { 0, 1, 2, 3, 4, 5 };
//	// ivec has 6 elements: each a copy of the corresponding element in int_arr
//	vector<int> ivec(int_arr, int_arr + arr_size);
//	cout << ivec[1] << endl;
//
//	// copies 3 elements: int_arr[1], int_arr[2], int_arr[3]
//	vector<int> ivec2(int_arr + 1, int_arr + 4);
//	cout << ivec2[1] << endl;
//
//	// 多维数组
//	// array of size 3, each element is an array of ints of size 4
//	int ia1[3][4];
//	int iaa[3][4][5][6];
//	int ia2[3][4] = { /* 3 elements, each element is an array of size 4 */
//		{ 0, 1, 2, 3 } , /* initializers for row indexed by 0 */
//		{ 4, 5, 6, 7 } , /* initializers for row indexed by 1 */
//		{ 8, 9, 10, 11 } /* initializers for row indexed by 2 */
//	};
//	// equivalent initialization without the optional nested braces for each row
//	int ia3[3][4] = { 0,1,2,3,4,5,6,7,8,9,10,11 };
//	// explicitly initialize only element 0 in each row
//	int ia4[3][4] = { { 0 } ,{ 4 } ,{ 8 } };
//	// explicitly initialize row 0
//	int ia5[3][4] = { 0, 3, 6, 9 };
//
//	const size_t rowSize = 3;
//	const size_t colSize = 4;
//	int ia[rowSize][colSize]; // 12 uninitialized elements
//	// for each row
//	for (size_t i = 0; i != rowSize; ++i)
//		// for each column within the row
//		for (size_t j = 0; j != colSize; ++j)
//			// initialize to its positional index
//			ia[i][j] = i * colSize + j;
//
//	int ia6[3][4]; // array of size 3, each element is an array of ints of size 4
//	int(*ip)[4] = ia6; // ip points to an array of 4 ints
//	ip = &ia6[2]; // ia[2] is an array of 4 ints
//
//	int *ip1[4]; // array of pointers to int,指针数组
//	int(*ip2)[4]; // pointer to an array of 4 ints,数组指针
//
//	return 0;
//}

////////////////////////////////////////////////2016-7-30
//int get_size() { return 10; }
//int main()
//{
//	int a1[] = { 1,2,0 };
//	int *pia = new int[10];		// array of 10 uninitialized ints
//	string *psa = new string[10];	// array of 10 empty strings
//	int *pia2 = new int[10]();		// 初始化为元素类型的默认值
//	cout << pia << " " << pia[0] << endl;
//	cout << pia2 << " " << pia2[0] << endl;
//
//	size_t n = get_size(); // get_size returns number of elements needed
//	int* p = new int[n];
//	for (int* q = p; q != p + n; ++q)
//		/* process the array */;
//
//	//char arr[0]; // error: cannot define zero-length array
//	char *cp = new char[0]; // ok: but cp can't be dereferenced
//
//	delete[] pia;
//
//	//// C-style character string implementation
//	//const char *pc = "a very long literal string";
//	//const size_t len = strlen(pc + 1); // space to allocate
//	//	// performance test on string allocation and copy
//	//for (size_t ix = 0; ix != 1000000; ++ix) {
//	//	char *pc2 = new char[len + 1]; // allocate the space
//	//	//strcpy(pc2, pc); // do the copy
//	//	if (strcmp(pc2, pc)) // use the new string
//	//		; // do nothing
//	//	delete[] pc2; // free the memory
//	//}
//	//// string implementation
//	//string str("a very long literal string");
//	//// performance test on string allocation and copy
//	//for (int ix = 0; ix != 1000000; ++ix) {
//	//	string str2 = str; // do the copy, automatically allocated
//	//	if (str != str2) // use the new string
//	//		; // do nothing
//	//}
//	//// str2 is automatically freed
//
//	return 0;
//}