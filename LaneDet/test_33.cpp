#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <string>
#include <fstream>
//#include <algorithm>
#include "Sales_item.h"
#include "Sales_item1.h"
#include "Person.h"
#include "Screen.h"
using namespace std;

////////////////////////////////2016-9-12 09:35:40
//int main()
//{
//	// Exercise 9.26:
//	int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
//	vector<int> ivec;
//	list<int> ilst;
//	int count = sizeof(ia) / sizeof(*ia);
//	ivec.insert(ivec.begin(), ia, ia + count);
//	ilst.insert(ilst.begin(), ia, ia + count);
//	cout << ivec.size() << " " << ilst.size() << endl;	// 测试
//	vector<int>::iterator iter1 = ivec.begin();
//	list<int>::iterator iter2 = ilst.begin();
//	// 将vector 容器中的偶数值元素删除掉
//	while (iter1 != ivec.end())
//	{
//		*iter1 / 2 == 0 ? iter1 = ivec.erase(iter1) : ++iter1;
//	}
//	// 将 list 容器中的奇数值元素删除掉
//	while (iter2 != ilst.end())
//	{
//		*iter2 / 2 != 0 ? iter2 = ilst.erase(iter2) : ++iter2;
//	}
//	cout << ivec.size() << " " << ilst.size() << endl;	// 测试
//
//	// 使用 assign
//	list<string> slist1, slist2;
//	// 带一对迭代器参数的 assign 函数版本
//	// equivalent to slist1 = slist2
//	slist1.assign(slist2.begin(), slist2.end());
//
//	// assign 运算的第二个版本
//	// equivalent to: slist1.clear();
//	// followed by slist1.insert(slist1.begin(), 10, "Hiya!");
//	slist1.assign(10, "Hiya!"); // 10 elements; each one is Hiya!
//
//	// 使用swap 操作以节省删除元素的成本
//	vector<string> svec1(10); // vector with 10 elements
//	vector<string> svec2(24); // vector with 24 elements
//	svec1.swap(svec2);
//
//	// Exercise 9.28:
//	list<char*> cplst;
//	vector<string> svec;
//	svec.assign(cplst.begin(), cplst.end());
//
//	///////////////////////////////2016-9-12 16:22:20
//	// 9.4.1. capacity 和 reserve 成员
//	vector<int> ivec1;
//	// size should be zero; capacity is implementation defined
//	cout << "ivec: size: " << ivec1.size()
//		<< " capacity: " << ivec1.capacity() << endl;
//	// give ivec 24 elements
//	for (vector<int>::size_type ix = 0; ix != 24; ++ix)
//		ivec1.push_back(ix);
//	// size should be 24; capacity will be >= 24 and is implementation defined
//	cout << "ivec: size: " << ivec1.size()
//		<< " capacity: " << ivec1.capacity() << endl;
//
//	ivec1.reserve(50); // sets capacity to at least 50; might be more
//					  // size should be 24; capacity will be >= 50 and is implementation defined
//	cout << "ivec: size: " << ivec1.size()
//		<< " capacity: " << ivec1.capacity() << endl;
//
//	// add elements to use up the excess capacity
//	while (ivec1.size() != ivec1.capacity())
//		ivec1.push_back(0);
//	// size should be 50; capacity should be unchanged
//	cout << "ivec: size: " << ivec1.size()
//		<< " capacity: " << ivec1.capacity() << endl;
//
//	ivec1.push_back(42); // add one more element
//						// size should be 51; capacity will be >= 51 and is implementation defined
//	cout << "ivec: size: " << ivec1.size()
//		<< " capacity: " << ivec1.capacity() << endl;
//
//	// Exercise 9.30:
//	vector<int> ivec2;
//	cout << "ivec: size: " << ivec2.size()
//		<< " capacity: " << ivec2.capacity() << endl;
//	ivec2.push_back(0);
//	cout << "ivec: size: " << ivec2.size()
//		<< " capacity: " << ivec2.capacity() << endl;
//	ivec2.push_back(0);
//	cout << "ivec: size: " << ivec2.size()
//		<< " capacity: " << ivec2.capacity() << endl;
//	ivec2.push_back(0);
//	cout << "ivec: size: " << ivec2.size()
//		<< " capacity: " << ivec2.capacity() << endl;
//	ivec2.push_back(0);
//	cout << "ivec: size: " << ivec2.size()
//		<< " capacity: " << ivec2.capacity() << endl;
//	ivec2.push_back(0);
//	cout << "ivec: size: " << ivec2.size()
//		<< " capacity: " << ivec2.capacity() << endl;
//	ivec2.push_back(0);
//	cout << "ivec: size: " << ivec2.size()
//		<< " capacity: " << ivec2.capacity() << endl;
//	ivec2.push_back(0);
//	cout << "ivec: size: " << ivec2.size()
//		<< " capacity: " << ivec2.capacity() << endl;
//	ivec2.push_back(0);
//	cout << "ivec: size: " << ivec2.size()
//		<< " capacity: " << ivec2.capacity() << endl;
//	ivec2.push_back(0);
//	cout << "ivec: size: " << ivec2.size()
//		<< " capacity: " << ivec2.capacity() << endl;
//	ivec2.push_back(0);
//	cout << "ivec: size: " << ivec2.size()
//		<< " capacity: " << ivec2.capacity() << endl;
//	ivec2.push_back(0); ivec2.push_back(0); ivec2.push_back(0); ivec2.push_back(0);
//	cout << "ivec: size: " << ivec2.size()
//		<< " capacity: " << ivec2.capacity() << endl;
//
//	// Exercise 9.32:
//	vector<string> svec3;
//	svec3.reserve(1024);
//	//string text_word;
//	//while (cin >> text_word)
//	//	svec.push_back(text_word);
//	for (vector<int>::size_type ix = 0; ix != 1024; ++ix)
//		svec3.push_back("a");
//	cout << "svec: size: " << svec3.size()
//		<< " capacity: " << svec3.capacity() << endl;
//	svec3.resize(svec3.size() + svec3.size() / 2);
//	cout << "svec: size: " << svec3.size()
//		<< " capacity: " << svec3.capacity() << endl;
//
//	/////////////////////////////////////2016-9-12 17:43:11
//	// 9.6. 再谈 string 类型
//	// 表 9.12 第 3.2 节介绍的 string 操作
//	char sp[] = { 'n','i','h','\0' };
//	string s = "hello";
//	string s2 = sp;
//	string s3(sp);
//	string s4(s);
//	cout << s.size() << " " << s2.size() << endl;
//	cout << s3 << " " << s4 << endl;
//
//	return 0;
//}