//#include <iostream>
//#include <vector>
////#include <list>
////#include <deque>
//#include <string>
//#include <fstream>
////#include <algorithm>
////#include <stack> // stack adaptor
////#include <queue> // both queue and priority_queue adaptors
//#include <map>
//#include <set>
//#include "Sales_item.h"
////#include "Sales_item1.h"
////#include "Person.h"
////#include "Screen.h"
//using namespace std;
//
//////////////////////////////////2016-10-10 10:40:16 上接test_36
//int main()
//{
//	// 10.5. multimap 和 multiset 类型
//	// 10.5.1. 元素的添加和删除
//	// adds first element with key Barth
//	multimap<string, string> authors;
//	authors.insert(make_pair(
//		string("Barth, John"),
//		string("Sot-Weed Factor")));
//	// ok: adds second element with key Barth
//	authors.insert(make_pair(
//		string("Barth, John"),
//		string("Lost in the Funhouse")));
//	// ok: adds third element with key Barth
//	authors.insert(make_pair(
//		string("Alain de Botton"),
//		string("Lost in the Funhouse")));
//	// ok: adds third element with key Barth
//	authors.insert(make_pair(
//		string("Alain de Botton"),
//		string("Sot-Weed Factor")));
//
//	string search_item("Kazuo Ishiguro");
//	// erase all elements with this key; returns number of elements removed
//	multimap<string, string>::size_type cnt = authors.erase(search_item);
//
//	// 10.5.2. 在 multimap 和 multiset 中查找元素
//	// 使用 find 和 count 操作
//	// author we'll look for
//	string search_item1("Alain de Botton");
//	// how many entries are there for this author
//	typedef multimap<string, string>::size_type sz_type;
//	sz_type entries = authors.count(search_item1);
//	// get iterator to the first entry for this author
//	multimap<string, string>::iterator iter = authors.find(search_item1);
//	// loop through the number of entries there are for this author
//	for (sz_type cnt = 0; cnt != entries; ++cnt, ++iter)
//		cout << iter->second << endl; // print each title
//
//	// 与众不同的面向迭代器的解决方案
//	// definitions of authors and search_item as above
//	// beg and end denote range of elements for this author
//	typedef multimap<string, string>::iterator authors_it;
//	authors_it beg = authors.lower_bound(search_item1),
//		end = authors.upper_bound(search_item1);
//	// loop through the number of entries there are for this author
//	while (beg != end) {
//		cout << beg->second << endl; // print each title
//		++beg;
//	}
//
//	// equal_range 函数
//	// definitions of authors and search_item as above
//	// pos holds iterators that denote range of elements for this key
//	pair<authors_it, authors_it> pos = authors.equal_range(search_item1);
//	// loop through the number of entries there are for this author
//	while (pos.first != pos.second) {
//		cout << pos.first->second << endl; // print each title
//		++pos.first;
//	}
//
//	// Exercise 10.26:
//	multimap<string, string> authors_books;
//	authors_books.insert(make_pair("wangduo", "gaosuni"));
//	authors_books.insert(make_pair("wangduo", "shijiehen"));
//	authors_books.insert(make_pair("wangduo", "meihao"));
//	authors_books.insert(make_pair("Jim", "hello world"));
//	authors_books.insert(make_pair("Jim", "beautiful"));
//	authors_books.insert(make_pair("Jim", "colorful meaningful"));
//	authors_books.insert(make_pair("Tom", "who are you"));
//	authors_books.insert(make_pair("Arm", "I can do"));
//
//	//string search_author = "Jim";
//	//cout << "总共：" << authors_books.size() << endl;
//	//if (authors_books.find(search_author) != authors_books.end())
//	//{
//	//	cout << "删除了：" << authors_books.erase(search_author) << endl;
//	//}
//	//cout << "还有：" << authors_books.size() << endl;
//
//	//// Exercise 10.27:
//	//string search_author1 = "wangduo";
//	typedef multimap<string, string>::iterator mtmap_it;
//	//pair<mtmap_it, mtmap_it> range = authors_books.equal_range(search_author1);
//	//authors_books.erase(range.first, range.second);
//	//cout << "第二次删除后，还有：" << authors_books.size() << endl;
//
//	// Exercise 10.28:
//	mtmap_it bg = authors_books.begin(), ed = authors_books.end();
//	string current_author_name = bg->first;
//	cout << "Author Names Beginning with '" << current_author_name[0] << "':" << endl;
//	cout << bg->first << "->";
//	while (bg != ed)
//	{
//		if (bg->first != current_author_name)
//		{
//			cout << endl;
//			current_author_name = bg->first;
//			cout << "Author Names Beginning with '" << current_author_name[0] << "':" << endl;
//			cout << bg->first << "->";
//		}
//		cout << "," << bg->second;
//
//		++bg;
//	}
//	cout << endl;
//
//	return 0;
//}