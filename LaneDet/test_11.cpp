#include <iostream>
#include <vector>
#include <string>
#include "Sales_item.h"
using namespace std;

/////////////////////////////////////////////////2016-8-26 a.m.
//int main()
//{
//	int i = 0, j;
//	j = ++i; // j = 1, i = 1: prefix yields incremented value
//	j = i++; // j = 1, i = 2: postfix yields unincremented value
//
//	vector<int> ivec; // empty vector
//	int cnt = 10;
//	// add elements 10...1 to ivec
//	while (cnt > 0)
//		ivec.push_back(cnt--); // int postfix decrement
//
//	vector<int>::iterator iter = ivec.begin();
//	// prints 10 9 8 ... 1
//	while (iter != ivec.end())
//		cout << *iter++ << endl; // iterator postfix increment
//
//	///////////////////////////////////////////////2016-8-26 16:07:52
//	// ¼ýÍ·²Ù×÷·û
//	Sales_item item1, item2;
//	item1.same_isbn(item2);		// run the same_isbn member of item1
//	
//	Sales_item *sp = &item1;
//	(*sp).same_isbn(item2);		// run same_isbn on object to which sp points
//	sp->same_isbn(item2);		// equivalent to (*sp).same_isbn(item2)
//
//	vector<string> svec;
//
//	return 0;
//}