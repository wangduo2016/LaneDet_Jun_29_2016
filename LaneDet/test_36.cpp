//#include <iostream>
//#include <vector>
//#include <list>
//#include <deque>
//#include <string>
//#include <fstream>
////#include <algorithm>
//#include <stack> // stack adaptor
//#include <queue> // both queue and priority_queue adaptors
//#include <map>
//#include <set>
//#include "Sales_item.h"
////#include "Sales_item1.h"
////#include "Person.h"
////#include "Screen.h"
//using namespace std;
//
//////////////////////////////////////////2016-9-26 11:23:01
//int main()
//{
//	// 10.3.6. 查找并读取 map 中的元素
//	map<string, int> word_count;
//	//int occurs = word_count["foobar"];
//
//	// 使用 count 检查 map 对象中某键是否存在
//	int occurs = 0;
//	if (word_count.count("foobar"))
//		occurs = word_count["foobar"];
//	cout << occurs << endl;
//
//	// 读取元素而不插入该元素
//	//int occurs = 0;
//	map<string, int>::iterator it = word_count.find("foobar");
//	if (it != word_count.end())
//		occurs = it->second;
//	cout << occurs << endl;
//
//	// Exercise 10.16:
//	map<string, vector<int> > map_str_ivec;
//	map<string, vector<int> >::iterator iter = map_str_ivec.find("foobar");
//
//	// 10.3.7. 从 map 对象中删除元素
//	// erase of a key returns number of elements removed
//	string removal_word;
//	if (word_count.erase(removal_word))
//		cout << "ok: " << removal_word << " removed\n";
//	else cout << "oops: " << removal_word << " not found!\n";
//
//	// 10.3.8. map 对象的迭代遍历
//	// get iterator positioned on the first element
//	map<string, int>::const_iterator map_it = word_count.begin();
//	// for each element in the map
//	while (map_it != word_count.end()) {
//		// print the element key, value pairs
//		cout << map_it->first << " occurs "
//			<< map_it->second << " times" << endl;
//		++map_it; // increment iterator to denote the next element
//	}
//
//	//// Exercise 10.18:
//	//map<string, vector<string> > family;
//	//vector<string> children;
//	//children.push_back("小明");
//	//children.push_back("小红");
//	//children.push_back("小刚");
//	//family.insert(make_pair("王", children));
//	//family.insert(make_pair("张", children));
//	//family.insert(make_pair("李", children));
//	//family.insert(make_pair("刘", children));
//	//family.insert(make_pair("岳", children));
//	//family.insert(make_pair("陈", children));
//
//	//string fst_name;
//	//cin >> fst_name;
//	//map<string, vector<string> >::iterator iter1 = family.find(fst_name);
//	//if (iter1 != family.end())
//	//{
//	//	vector<string>::iterator beg = iter1->second.begin(), ed = iter1->second.end();
//	//	while (beg != ed)
//	//		cout << iter1->first << *beg++ << endl;
//	//}
//	//else
//	//	cout << "无此姓氏" << endl;
//
//	// 10.4.1. set 容器的定义和使用
//	// define a vector with 20 elements, holding two copies of each number from 0 to 9
//	vector<int> ivec;
//	for (vector<int>::size_type i = 0; i != 10; ++i) {
//		ivec.push_back(i);
//		ivec.push_back(i); // duplicate copies of each number
//	}
//	// iset holds unique elements from ivec
//	set<int> iset(ivec.begin(), ivec.end());
//	cout << ivec.size() << endl; // prints 20
//	cout << iset.size() << endl; // prints 10
//
//	// 在 set 中添加元素
//	set<string> set1; // empty set
//	set1.insert("the"); // set1 now has one element
//	set1.insert("and"); // set1 now has two elements
//
//	set<int> iset2; // empty set
//	iset2.insert(ivec.begin(), ivec.end()); // iset2 has 10 elements
//
//	// 从 set 中获取元素
//	iset.find(1); // returns iterator that refers to the element with key == 1
//	iset.find(11); // returns iterator == iset.end()
//	iset.count(1); // returns 1
//	iset.count(11); // returns 0
//
//	// set_it refers to the element with key == 1
//	set<int>::iterator set_it = iset.find(1);
//	//*set_it = 11; // error: keys in a set are read-only
//	cout << *set_it << endl; // ok: can read the key
//
//	// Exercise 10.24:
//	ifstream ifs("ex1024");
//	void singular_form(ifstream &);
//	singular_form(ifs);
//
//	return 0;
//}
//
////////////////////////////////////2016-10-10 09:16:37
//void restricted_wc(ifstream &remove_file, map<string, int> &word_count)
//{
//	set<string> excluded; // set to hold words we'll ignore
//	string remove_word;
//	while (remove_file >> remove_word)
//		excluded.insert(remove_word);
//	// read input and keep a count for words that aren't in the exclusion set
//	string word;
//	while (cin >> word)
//		// increment counter only if the word is not in excluded
//		if (!excluded.count(word))
//			++word_count[word];
//}
//
//// Exercise 10.24:
//void singular_form(ifstream &remove_file)
//{
//	set<string> excluded; // set to hold words we'll ignore
//	string remove_word;
//	while (remove_file >> remove_word)
//		excluded.insert(remove_word);
//	// read input and keep a count for words that aren't in the exclusion set
//	string word;
//	while (cin >> word)
//		// increment counter only if the word is not in excluded
//		if (!excluded.count(word))
//		{
//			//cout << word << "s" << endl;	// plural_form
//			string singular(word.begin(), word.begin() + word.size() - 1);	// singular_form
//			cout << singular << endl;
//		}
//		else
//			cout << word << endl;
//}