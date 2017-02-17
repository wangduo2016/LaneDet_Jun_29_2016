//#include <iostream>
//#include <vector>
//#include <list>
////#include <deque>
//#include <string>
////#include <fstream>
//#include <algorithm>
//#include <numeric>
////#include <stack> // stack adaptor
////#include <queue> // both queue and priority_queue adaptors
////#include <map>
////#include <set>
////#include "Sales_item.h"
////#include "Sales_item1.h"
////#include "Person.h"
////#include "Screen.h"
////#include "TextQuery.h"
//using namespace std;
//
////////////////////////////////////2016-10-13 09:14:04
//int main()
//{
//	// 11.1. 概述
//	// value we'll look for
//	vector<int> vec;
//	int search_value = 42;
//	// call find to see if that value is present
//	vector<int>::const_iterator result = find(vec.begin(), vec.end(), search_value);
//	// report the result
//	cout << "The value " << search_value
//		<< (result == vec.end()
//			? " is not present" : " is present")
//		<< endl;
//
//	list<int> lst;
//	// call find to look through elements in a list
//	list<int>::const_iterator result1 = find(lst.begin(), lst.end(), search_value);
//	cout << "The value " << search_value
//		<< (result1 == lst.end()
//			? " is not present" : " is present")
//		<< endl;
//
//	int ia[6] = { 27, 210, 12, 47, 109, 83 };
//	int search_value1 = 83;
//	int *result2 = find(ia, ia + 6, search_value1);
//	cout << "The value " << search_value1
//		<< (result2 == ia + 6
//			? " is not present" : " is present")
//		<< endl;
//
//	// only search elements ia[1] and ia[2]
//	int *result3 = find(ia + 1, ia + 3, search_value1);
//
//	// Exercise 11.1:
//	vector<int> ivec;
//	typedef vector<int>::size_type st;
//	for (st ii = 1; ii != 10; ++ii)
//	{
//		ivec.push_back(ii * 10);
//		ivec.push_back(ii * 10);
//		ivec.push_back(ii * 10);
//	}
//	int search_item = 20;
//	st times = count(ivec.begin(), ivec.end(), search_item);
//	cout << search_item << " occurs " << times << " times." << endl;
//
//	// Exercise 11.2:
//	list<string> slst;
//	typedef list<string>::size_type st1;
//	for (st1 jj = 1; jj != 10; ++jj)
//	{
//		slst.push_back("hello");
//		slst.push_back("world");
//		slst.push_back("girls");
//	}
//	string search_item1 = "world";
//	st1 times1 = count(slst.begin(), slst.end(), search_item1);
//	cout << search_item1 << " occurs " << times1 << " times." << endl;
//
//	// 11.2.1. 只读算法
//	// sum the elements in vec starting the summation with the value 42
//	int sum = accumulate(vec.begin(), vec.end(), 42);
//
//	// concatenate elements from v and store in sum
//	vector<string> v;
//	string sum1 = accumulate(v.begin(), v.end(), string(""));
//
//	// find_first_of 的使用
//	// program for illustration purposes only:
//	// there are much faster ways to solve this problem
//	list<string> roster1, roster2;
//	size_t cnt = 0;
//	list<string>::iterator it = roster1.begin();
//	// look in roster1 for any name also in roster2
//	while ((it = find_first_of(it, roster1.end(),
//		roster2.begin(), roster2.end()))
//		!= roster1.end()) {
//		++cnt;
//		// we got a match, increment it to look in the rest of roster1
//		++it;
//	}
//	cout << "Found " << cnt
//		<< " names on both rosters" << endl;
//
//	// Exercise 11.3:
//	vector<int> ivec1;
//	for (int ii = 1; ii != 10; ++ii)
//		ivec1.push_back(ii);
//	cout << accumulate(ivec1.begin(), ivec1.end(), 0) << endl;
//
//	// Exercise 11.4:
//	vector<double> v1;
//	cout << accumulate(v1.begin(), v1.end(), .0) << endl;	// 第三个参数变成double即可
//
//	return 0;
//}