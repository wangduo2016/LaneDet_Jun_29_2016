//#include <iostream>
//#include <vector>
//#include <bitset>
////#include <list>
////#include <deque>
//#include <string>
////#include <fstream>
////#include <sstream>
////#include <algorithm>
////#include <numeric>
////#include <iterator>
////#include <stack> // stack adaptor
////#include <queue> // both queue and priority_queue adaptors
////#include <map>
////#include <set>
//#include "Sales_item.h"
////#include "Sales_item1.h"
////#include "Person.h"
////#include "Screen.h"
////#include "TextQuery.h"
////#include "NoName.h"
//using namespace std;
//
////////////////////////////////2016-11-22 20:50:41
//int main()
//{
//	// 5.1. 算术操作符
//	// max value if shorts are 8 bits
//	short short_value = 32767;
//	short ival = 1;
//	// this calculation overflows
//	short_value += ival;
//	cout << "short_value: " << short_value << endl;
//
//	int ival1 = 21 / 6; // integral result obtained by truncating the remainder
//	int ival2 = 21 / 7; // no remainder, result is an integral value
//
//	int ival3 = 42;
//	double dval = 3.14;
//	ival3 % 12; // ok: returns 6
//	//ival % dval; // error: floating point operand
//
//	21 % 6; // ok: result is 3
//	21 % 7; // ok: result is 0
//	-21 % -8; // ok: result is -5
//	cout << 21 % -5 << endl; // machine-dependent: result is 1 or -4
//	21 / 6; // ok: result is 3
//	21 / 7; // ok: result is 3
//	-21 / -8; // ok: result is 2
//	cout << 21 / -5 << endl; // machine-dependent: result -4 or -5
//
//	// Exercise 5.1:
//	cout << 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 << endl;
//	//cout << (12 / (3 * 4)) + (5 * 15) + (24 % (4 / 2)) << endl;	// error
//	cout << (((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2)) << endl;	// corrcet
//
//	// 5.2. 关系操作符和逻辑操作符
//	// 逻辑与、逻辑或操作符
//	string s("Expressions in C++ are composed...");
//	string::iterator it = s.begin();
//	// convert first word in s to uppercase
//	while (it != s.end() && !isspace(*it)) {
//		*it = toupper(*it); // toupper covered in section 3.2.4 (p. 88)
//		++it;
//	}
//
//	// 逻辑非操作符
//	// assign value of first element in vec to x if there is one
//	vector<int> vec;
//	int x = 0;
//	if (!vec.empty())
//		x = *vec.begin();
//
//	// 5.4. 赋值操作符
//	int i, j, ival4;
//	const int ci = i; // ok: initialization not assignment
//	//1024 = ival; // error: literals are rvalues
//	//i + j = ival; // error: arithmetic expressions are rvalues
//	//ci = ival; // error: can't write to ci
//
//	int ia[10];
//	ia[0] = 0; // ok: subscript is an lvalue
//	*ia = 0; // ok: dereference also is an lvalue
//
//	int ival5 = 0; // result: type int value 0
//	ival5 = 3.14159; // result: type int value 3
//
//	// 5.4.1. 赋值操作的右结合性
//	int ival, jval;
//	ival = jval = 0; // ok: each assigned 0
//
//	int ival6; int *pval;
//	//ival6 = pval = 0; // error: cannot assign the value of a pointer to an int
//	string s1, s2;
//	s1 = s2 = "OK"; // ok: "OK" converted to string
//
//	// 5.4.2. 赋值操作具有低优先级
//	int get_value();
//	int i = get_value(); // get_value returns an int
//	while (i != 42) {
//		// do something ...
//		i = get_value();
//	}
//
//	int i2;
//	while ((i2 = get_value()) != 42) {
//		// do something ...
//	}
//
//	// 5.7. 条件操作符
//	int i = 10, j = 20, k = 30;
//	// if i > j then maxVal = i else maxVal = j
//	int maxVal = i > j ? i : j;
//
//	// 避免条件操作符的深度嵌套
//	int max = i > j
//		? i > k ? i : k
//		: j > k ? j : k;
//
//	int max = i;
//	if (j > max)
//		max = j;
//	if (k > max)
//		max = k;
//
//	// 在输出表达式中使用条件操作符
//	cout << (i < j ? i : j); // ok: prints larger of i and j
//	cout << (i < j) ? i : j; // prints 1 or 0!
//	//cout << i < j ? i : j; // error: compares cout to int
//
//	cout << (i < j); // prints 1 or 0
//	cout ? i : j; // test cout and then evaluate i or j
//				  // depending on whether cout evaluates to true or false
//
//	// 5.10. 复合表达式的求值
//	// 5.10.1. 优先级
//	6 + 3 * 4 / 2 + 2;
//
//	int temp = 3 * 4; // 12
//	int temp2 = temp / 2; // 6
//	int temp3 = temp2 + 6; // 12
//	int result = temp3 + 2; // 14
//
//	// 圆括号凌驾于优先级之上
//	// parentheses on this expression match default precedence / associativity
//	cout << ((6 + ((3 * 4) / 2)) + 2) << endl; // prints 14
//	// parentheses result in alternative groupings
//	cout << (6 + 3) * (4 / 2 + 2) << endl; // prints 36
//	cout << ((6 + 3) * 4) / 2 + 2 << endl; // prints 20
//	cout << 6 + 3 * 4 / (2 + 2) << endl; // prints 9
//
//	// 5.10.2. 结合性
//
//	// 5.3. 位操作符
//	unsigned char bits = 0227;
//	bits = ~bits;
//
//	unsigned char bits1 = 1;
//	bits1 << 1; // left shift
//	bits1 << 2; // left shift
//	bits1 >> 3; // right shift
//
//	unsigned char b1 = 0145;
//	unsigned char b2 = 0257;
//	unsigned char result = b1 & b2;
//
//	result = b1 ^ b2;
//
//	result = b1 | b2;
//
//	// 5.3.1. bitset 对象或整型值的使用
//	bitset<30> bitset_quiz1; // bitset solution
//	unsigned long int_quiz1 = 0; // simulated collection of bits
//
//	bitset_quiz1.set(27); // indicate student number 27 passed
//	int_quiz1 |= 1UL << 27; // indicate student number 27 passed
//
//	// following assignment is equivalent to int_quiz1 |= 1UL << 27;
//	int_quiz1 = int_quiz1 | 1UL << 27;
//
//	bitset_quiz1.reset(27); // student number 27 failed
//	int_quiz1 &= ~(1UL << 27); // student number 27 failed
//
//	bool status;
//	status = bitset_quiz1[27]; // how did student number 27 do?
//	status = int_quiz1 & (1UL << 27); // how did student number 27 do?
//
//	// 5.3.2. 将移位操作符用于IO
//	// IO 操作符为左结合
//	cout << "hi" << " there" << endl;
//	((cout << "hi") << " there") << endl;
//	cout << 42 + 10; // ok, + has higher precedence, so the sum is printed
//	cout << (10 < 42); // ok: parentheses force intended grouping; prints 1
//	//cout << 10 < 42; // error: attempt to compare cout to 42!
//
//	return 0;
//}