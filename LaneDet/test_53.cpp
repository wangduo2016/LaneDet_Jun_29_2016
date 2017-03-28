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
#include "CheckedPtr.h"
#include "absInt.h"
#include "GT_cls.h"
#include <algorithm>
#include <functional>
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

	// 使用重载箭头
	Screen myScreen(4, 4);
	ScreenPtr p(&myScreen); // copies the underlying Screen
	p->display(cout);

	// 14.7. 自增操作符和自减操作符
	// 显式调用前缀式操作符
	int ia[] = { 1,2,3 }, size = 3;
	CheckedPtr parr(ia, ia + size); // iapoints to an array of ints
	parr.operator++(0); // call postfix operator++
	parr.operator++(); // call prefix operator++

	// 14.8. 调用操作符和函数对象
	int i = -42;
	absInt absObj; // object that defines function call operator
	unsigned int ui = absObj(i); // calls absInt::operator(int)

	// 14.8.1. 将函数对象用于标准库算法
	// 使用GT_cls 函数对象
	vector<string> words(10);
	cout << count_if(words.begin(), words.end(), GT_cls(6))
		<< " words 6 characters or longer" << endl;

	cout << count_if(words.begin(), words.end(), GT_cls(5))
		<< " words 5 characters or longer" << endl;

	for (size_t i = 0; i != 11; ++i)
		cout << count_if(words.begin(), words.end(), GT_cls(i))
		<< " words " << i
		<< " characters or longer" << endl;

	// 14.8.2. 标准库定义的函数对象
	// 表示操作数类型的模板类型
	plus<int> intAdd; // function object that can add two int values
	negate<int> intNegate; // function object that can negate an int value
	// uses intAdd::operator(int, int) to add 10 and 20
	int sum = intAdd(10, 20); // sum = 30
	// uses intNegate::operator(int) to generate -10 as second parameter
	// to intAdd::operator(int, int)
	sum = intAdd(10, intNegate(10)); // sum = 0

	// 在算法中使用标准库函数
	vector<string> svec(10);
	// passes temporary function object that applies > operator to two strings
	sort(svec.begin(), svec.end(), greater<string>());

	// 14.8.3. 函数对象的函数适配器
	vector<int> vec(10);
	count_if(vec.begin(), vec.end(), bind2nd(less_equal<int>(), 10));

	count_if(vec.begin(), vec.end(), not1(bind2nd(less_equal<int>(), 10)));

	// Exercise 14.37:
	// 1. 查找大于 1024 的所有值。
	count_if(vec.begin(), vec.end(), bind2nd(greater<int>(), 1024));
	// 2. 查找不等于 pooh 的所有字符串。
	count_if(svec.begin(), svec.end(), bind2nd(not_equal_to<string>(), "pooh"));
	// 3. 将所有值乘以 2。
	count_if(vec.begin(), vec.end(), bind2nd(multiplies<int>(), 2));

	// Exercise 14.39:
	count_if(svec.begin(), svec.end(), bind2nd(equal_to<int>(), 6));	// 不对

	return 0;
}