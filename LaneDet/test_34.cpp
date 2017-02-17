#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <string>
#include <fstream>
//#include <algorithm>
#include <stack> // stack adaptor
#include <queue> // both queue and priority_queue adaptors
#include "Sales_item.h"
#include "Sales_item1.h"
#include "Person.h"
#include "Screen.h"
using namespace std;

////////////////////////////////2016-9-13 09:20:01
//int main()
//{
//	// 9.6. 再谈 string 类型
//	string s("hiya");
//	string::iterator iter = s.begin();
//	while (iter != s.end())
//		cout << *iter++ << endl; // postfix increment: print old value
//
//	// Exercise 9.34:
//	iter = s.begin();
//	while (iter != s.end())
//		cout << (char)(*iter++ - 32) << endl; // postfix increment: print old value
//
//	// Exercise 9.36:
//	char carr[] = { 'h','e','l','l','o' };
//	size_t arr_size = sizeof(carr) / sizeof(*carr);
//	vector<char> cvec(carr, carr + arr_size);
//	vector<char>::iterator beg = cvec.begin(), ed = cvec.end();
//	while (beg != ed)
//	{
//		cout << *beg++ << endl;
//	}
//	string s1(cvec.begin(), cvec.end());
//	cout << "string:" << s1 << endl;
//
//	//9.7. 容器适配器
//	deque<int> deq;
//	stack<int> stk(deq); // copies elements from deq into stk
//
//	// 覆盖基础容器类型
//	vector<string> svec;
//	// empty stack implemented on top of vector
//	stack< string, vector<string> > str_stk;
//	// str_stk2 is implemented on top of vector and holds a copy of svec
//	stack<string, vector<string> > str_stk2(svec);
//
//	// 9.7.1. 栈适配器
//	// number of elements we'll put in our stack
//	const stack<int>::size_type stk_size = 10;
//	stack<int> intStack; // empty stack
//						 // fill up the stack
//	int ix = 0;
//	while (intStack.size() != stk_size)
//		// use postfix increment; want to push old value onto intStack
//		intStack.push(ix++); // intStack holds 0...9 inclusive
//	int error_cnt = 0;
//	// look at each value and pop it off the stack
//	while (intStack.empty() == false) {
//		int value = intStack.top();
//		// read the top element of the stack
//		if (value != --ix) {
//			cerr << "oops! expected " << ix
//				<< " received " << value << endl;
//			++error_cnt;
//		}
//		intStack.pop(); // pop the top element, and repeat
//	}
//	cout << "Our program ran with "
//		<< error_cnt << " errors!" << endl;
//
//	// Exercise 9.42:
//	stack<string> sstk;
//	string word;
//	//while (cin >> word)
//	//{
//	//	sstk.push(word);
//	//}
//	cout << sstk.size() << endl;
//
//	// 10.1. 引言：pair 类型
//	// pair 的创建和初始化
//	pair<string, string> anon; // holds two strings
//	pair<string, int> word_count; // holds a string and an int
//	pair<string, vector<int> > line; // holds string and vector<int>
//
//	pair<string, string> author("James", "Joyce");
//
//	typedef pair<string, string> Author;
//	Author proust("Marcel", "Proust");
//	Author joyce("James", "Joyce");
//
//	string firstBook;
//	// access and test the data members of the pair
//	if (author.first == "James" && author.second == "Joyce")
//		firstBook = "Stephen Hero";
//	cout << firstBook << endl;
//
//	return 0;
//}