#include <iostream>
#include <vector>
#include <string>
#include "Sales_item.h"
using namespace std;

//////////////////////////////////2016-8-27 15:59:36
char * string_copy(char *pvc);
//int main()
//{
//	//// 5.12.6. 命名的强制类型转换
//	//// const_cast
//	////const char *pc_str;
//	////char *pc = string_copy(const_cast<char*>(pc_str));
//
//	//// static_cast
//	//double d = 97.0;
//	//// cast specified to indicate that the conversion is intentional
//	//char ch = static_cast<char>(d);
//	//char ch1 = d;
//	//cout << ch << " " << ch1 << endl;
//
//	//void* p = &d; // ok: address of any data object can be stored in a void*
//	//	// ok: converts void* back to the original pointer type
//	//double *dp = static_cast<double*>(p);
//	//double *dp1 = (double *)p;
//	//cout << dp << " " << dp1 << endl;
//
//	//// reinterpret_cast
//	//int i = 10;
//	//int *ip = &i;
//	//char *pc = reinterpret_cast<char*>(ip);
//	//char *pc1 = (char*)ip;
//	//string str(pc);
//
//	// 5.12.7. 旧式强制类型转换
//	//int ival; double dval;
//	//ival += int(dval); // static_cast: converts double to int
//	//const char* pc_str;
//	//string_copy((char*)pc_str); // const_cast: casts away const
//	//int *ip;
//	//char *pc = (char*)ip; // reinterpret_cast: treats int* as char*
//
//	double dd = 3.14;
//	int ii = int(dd);
//	cout << dd << " " << ii << endl;
//
//	return 0;
//}