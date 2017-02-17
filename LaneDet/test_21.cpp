#include <iostream>
#include <vector>
#include <string>
#include "Sales_item.h"
using namespace std;

///////////////////////////////////2016-8-30 08:58:42
//// 返回非引用类型
//// return plural version of word if ctr isn't 1
//string make_plural(size_t ctr, const string &word, const string &ending)
//{
//	return (ctr == 1) ? word : word + ending;
//}
//
//// 返回引用
//// find longer of two strings
//const string &shorterString(const string &s1, const string &s2)
//{
//	return s1.size() < s2.size() ? s1 : s2;
//}
//
//// 千万不要返回局部对象的引用
//// Disaster: Function returns a reference to a local object
//const string &manip(const string& s)
//{
//	string ret = s;
//	// transform ret in some way
//	return ret; // Wrong: Returning reference to a local object!
//}
//
//// 引用返回左值
//char &get_val(string &str, string::size_type ix)
//{
//	return str[ix];
//}
//
//// Exercises Section 7.3.2
//string processText()
//{
//	string text;
//	while (cin >> text) { /* ... */ }
//	// ....
//	return text;
//}
//
//int main()
//{
//	// 返回非引用类型
//	string word = "rose";
//	cout << make_plural(word.size(), word, "s") << endl;
//
//	// 返回引用
//	cout << shorterString("hello world", "world") << endl;
//
//	// 引用返回左值
//	string s("a value");
//	cout << s << endl; // prints a value
//	get_val(s, 0) = 'A'; // changes s[0] to A
//	cout << s << endl; // prints A value
//
//	// Exercises Section 7.3.2
//	//cout << processText() << endl;
//
//	int arri[3] = { 0,1,2 };
//	int ii = arri[1];
//	cout << ii << " " << arri[1] << endl;
//
//	return 0;
//}