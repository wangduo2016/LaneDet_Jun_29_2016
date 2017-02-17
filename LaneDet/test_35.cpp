#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <string>
#include <fstream>
//#include <algorithm>
#include <stack> // stack adaptor
#include <queue> // both queue and priority_queue adaptors
#include <map>
#include "Sales_item.h"
//#include "Sales_item1.h"
//#include "Person.h"
//#include "Screen.h"
using namespace std;

//////////////////////////////2016-9-14 08:38:54
//int main()
//{
//	// 生成新的 pair 对象
//	//pair<string, string> next_auth;
//	//string first, last;
//	//while (cin >> first >> last) {
//	//	// generate a pair from first and last
//	//	next_auth = make_pair(first, last);
//	//	// process next_auth...
//	//	cout << next_auth.first << " " << next_auth.second << endl;
//	//}
//
//	//// use pair constructor to make first and last into a pair
//	//next_auth = pair<string, string>(first, last);
//
//	pair<string, string> next_auth;
//	// read directly into the members of next_auth
//	//while (cin >> next_auth.first >> next_auth.second) {
//	//	// process next_auth...
//	//	cout << next_auth.first << " " << next_auth.second << endl;
//	//}
//
//	// Exercise 10.1:
//	//pair<string, int> data_pair;
//	//vector< pair<string, int> > pvec;
//	//while (cin >> data_pair.first >> data_pair.second)
//	//	pvec.push_back(data_pair);
//	//cout << pvec.size() << endl;
//	//vector< pair<string, int> >::iterator beg = pvec.begin(), ed = pvec.end();
//	//while (beg != ed)
//	//{
//	//	cout << (*beg++).first << " " << (*beg).second << endl; // cout语句以栈的方式执行，从右至左
//	//}
//
//	// 10.3.1. map 对象的定义
//	// count number of times each word occurs in the input
//	map<string, int> word_count; // empty map from string to int
//
//	// 键类型的约束
//	typedef string ISBN;
//	map<ISBN, Sales_item> bookstore;
//
//	// Exercise 10.5:
//	map<string, list<int> > dict;
//
//	// Exercise 10.6:
//	map<vector<int>::iterator, int> vi_map;
//	map<list<int>::iterator, int> li_map;
//
//	// map 迭代器进行解引用将产生 pair 类型的对象
//	word_count["Anna"] = 1;
//	// get an iterator to an element in word_count
//	map<string, int>::iterator map_it = word_count.begin();
//	// *map_it is a reference to a pair<const string, int> object
//	cout << map_it->first; // prints the key for this element
//	cout << " " << map_it->second; // prints the value of the element
//	//map_it->first = "new key"; // error: key is const
//	++map_it->second; // ok: we can change value through an iterator
//
//	// map 容器额外定义的类型别名（typedef）
//	map<string, int>::key_type s = "hello";
//	map<string, int>::mapped_type i = 1;
//	map<string, int>::value_type pa;
//	/*pa.first = "first";*/ pa.second = 3;
//	vector<int>::value_type ii = 2;
//
//	// Exercise 10.7:
//	map<int, vector<int> >::value_type pa1;
//	map<int, vector<int> >::mapped_type mt;
//	map<int, vector<int> >::key_type kt = 2;
//	pa1.second.push_back(1);
//	mt.push_back(2);
//
//	// 10.3.4. 使用下标访问 map 对象
//	//map <string, int> word_count; // empty map
//	// insert default initialzed element with key Anna; then assign 1 to its value
//	//word_count["Anna"] = 1;
//
//	// 下标操作符返回值的使用
//	cout << word_count["Anna"]; // fetch element indexed by Anna; prints 1
//	++word_count["Anna"]; // fetch the element and add one to it
//	cout << word_count["Anna"] << endl; // fetch the element and print it; prints 2
//
//	//// 下标行为的编程意义
//	//// count number of times each word occurs in the input
//	//map<string, int> word_count1; // empty map from string to int
//	//string word;
//	//while (cin >> word)
//	//	++word_count1[word];
//
//	//// Exercise 10.9:
//	//// 测试只输入：nihao和hello
//	//cout << "nihao:" << word_count1["nihao"] << endl;
//	//cout << "hello:" << word_count1["hello"] << endl;
//
//	// Exercise 10.10:
//	map<int, int> m;
//	m[0] = 1;
//	vector<int> v;
//	//v[0] = 1;	// error: v is empty, vector don't auto create new element.
//
//	///////////////////////////////////2016-9-18 20:18:43
//	// if Anna not already in word_count, inserts new element with value 1
//	word_count.insert(map<string, int>::value_type("Anna", 1));
//
//	map<string, int>::value_type("Anna", 1);
//
//	// 可用两种方法简化：使用 make_pair:
//	word_count.insert(make_pair("Anna", 1));
//	// 或使用 typedef:
//	typedef map<string, int>::value_type valType;
//	word_count.insert(valType("Anna", 1));
//
//	//// 检测 insert 的返回值
//	//// count number of times each word occurs in the input
//	//map<string, int> word_count1; // empty map from string to int
//	//string word1;
//	//while (cin >> word1) {
//	//	// inserts element with key equal to word and value 1;
//	//	// if word already in word_count, insert does nothing
//	//	pair<map<string, int>::iterator, bool> ret =
//	//		word_count1.insert(make_pair(word1, 1));
//	//	if (!ret.second) // word already in word_count
//	//		++ret.first->second; // increment counter
//	//}
//
//	// Exercise 10.12:
//	// count number of times each word occurs in the input
//	map<string, int> word_count2;
//	string word2;
//	while (cin >> word2)
//	{
//		pair<map<string, int>::iterator, bool> ret1 = word_count2.insert(make_pair(word2, 1));
//		if (!ret1.second)
//			++ret1.first->second;
//	}
//	// 测试只输入：nihao和hello
//	cout << "nihao:" << word_count2["nihao"] << endl;
//	cout << "hello:" << word_count2["hello"] << endl;
//
//	//Exercise 10.13:
//	map<string, vector<int> > map1;
//	string ss;
//	vector<int> ivec;
//	pair<map<string, vector<int> >::iterator, bool> ret2 = map1.insert(make_pair(ss, ivec));
//
//	return 0;
//}