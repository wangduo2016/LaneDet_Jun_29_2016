#include <iostream>
#include <vector>
//#include <bitset>
//#include <list>
//#include <deque>
#include <string>
//#include <fstream>
//#include <sstream>
//#include <algorithm>
//#include <numeric>
//#include <iterator>
//#include <stack> // stack adaptor
//#include <queue> // both queue and priority_queue adaptors
//#include <map>
//#include <set>
#include "Sales_item.h"
//#include "Sales_item1.h"
//#include "Person.h"
//#include "Screen.h"
//#include "TextQuery.h"
//#include "NoName.h"
#include "ScreenPtr.h"
using namespace std;

/////////////////////////////////2016-12-18 20:41:30
int main()
{
	// 第十四章 重载操作符与转换
	int v1, v2;
	cout << "The sum of " << v1 << " and " << v2
		<< " is " << v1 + v2 << endl;

	// 14.1. 重载操作符的定义

	// 重载的操作名

	// 重载操作符必须具有一个类类型操作数
	// error: cannot redefine built-in operator for ints
	//int operator+(int, int);

	// 优先级和结合性是固定的
	//x == y + z;

	// 不再具备短路求值特性

	// 类成员与非成员

	// 操作符重载和友元关系

	// 使用重载操作符
	Sales_item item1, item2;
	cout << item1 + item2 << endl;

	// equivalent direct call to nonmember operator function
	cout << operator+(item1, item2) << endl;

	item1 += item2; // expression based "call"
	item1.operator+=(item2); // equivalent call to member operator function

	// 14.1.1. 重载操作符的设计

	// 不要重载具有内置含义的操作符

	// 大多数操作符对类对象没有意义

	// 复合赋值操作符

	// 相等和关系操作符

	// 选择成员或非成员实现

	// 14.2. 输入和输出操作符

	//vector<int> iv{ 5, 4, 3, 2, 1 };
	//int a = 2, b = 1;

	// c++11
	//[b](int &x) {cout << (x + b) << endl; }
	//[=](int &y) {y *= (a + b); }
	//[=](int &z)->int {return z * (a + b); }

	// 14.6. 成员访问操作符
	// 构建更安全的指针
	//ScreenPtr p1; // error: ScreenPtr has no default constructor
	ScreenPtr ps(new Screen(4, 4)); // ok: ps points to a copy of myScreen

	return 0;
}