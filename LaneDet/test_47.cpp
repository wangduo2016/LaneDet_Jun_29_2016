//#include <iostream>
//#include <vector>
//#include <list>
////#include <deque>
//#include <string>
//#include <fstream>
//#include <sstream>
//#include <algorithm>
//#include <numeric>
//#include <iterator>
////#include <stack> // stack adaptor
////#include <queue> // both queue and priority_queue adaptors
////#include <map>
////#include <set>
//#include "Sales_item.h"
////#include "Sales_item1.h"
////#include "Person.h"
////#include "Screen.h"
////#include "TextQuery.h"
//using namespace std;
//
/////////////////////////////////////2016-10-16 10:46:41
//int main()
//{
//	//// 11.3. 再谈迭代器
//	//// 11.3.1. 插入迭代器
//	//// front_inserter 需要使用 push_front
//	//// inserter 将产生在指定位置实现插入的迭代器
//	//vector<int> ivec;
//	//list<int> ilst4;
//	//// position an iterator into ilst
//	//list<int>::iterator it = find(ilst4.begin(), ilst4.end(), 42);
//	//// insert replaced copies of ivec at that point in ilst
//	//replace_copy(ivec.begin(), ivec.end(), inserter(ilst4, it), 100, 0);
//
//	//list<int> ilst, ilst2, ilst3; // empty lists
//	//// after this loop ilst contains: 3 2 1 0
//	//for (list<int>::size_type i = 0; i != 4; ++i)
//	//	ilst.push_front(i);
//	//// after copy ilst2 contains: 0 1 2 3
//	//copy(ilst.begin(), ilst.end(), front_inserter(ilst2));
//	//// after copy, ilst3 contains: 3 2 1 0
//	//copy(ilst.begin(), ilst.end(), inserter(ilst3, ilst3.begin()));
//
//	//// Exercise 11.15:
//	//int ia[] = { 1,2,3,4,5,6,100,8,100 };
//	//list<int> ilst5(ia, ia + 9);
//	//vector<int> ivec1;
//
//	//ilst5.sort();	// 在进行复制之前要先排序，切记
//	//// error. std::sort要求容器的迭代器是随机迭代器，而list和set这样的用的结点实现的容器不能生成随机迭代器，所以不能用std::sort(p517)
//	////sort(ilst5.begin(), ilst5.end());	
//	//unique_copy(ilst5.begin(), ilst5.end(), back_inserter(ivec1));
//
//	//cout << "vector:" << endl;
//	//for (vector<int>::iterator it = ivec1.begin(); it != ivec1.end(); ++it)
//	//	cout << *it << endl;
//
//	//// 11.3.2. iostream 迭代器
//	////// 流迭代器的定义
//	////istream_iterator<int> cin_it(cin); // reads ints1 from cin
//	////istream_iterator<int> end_of_stream; // end iterator value
//	////// writes Sales_items from the ofstream named outfile
//	////// each element is followed by a space
//	////ofstream outfile;
//	////ostream_iterator<Sales_item> output(outfile, " ");
//
//	//// istream_iterator 对象上的操作
//	////istream_iterator<int> in_iter(cin); // read ints from cin
//	////istream_iterator<int> eof; // istream "end" iterator
//	////// read until end of file, storing what was read in vec
//	////vector<int> vec;
//	////while (in_iter != eof)
//	////	// increment advances the stream to the next value
//	////	// dereference reads next value from the istream
//	////	vec.push_back(*in_iter++);
//
//	//// 更有趣的是可以这样重写程序：
//	//istream_iterator<int> in_iter(cin); // read ints from cin
//	//istream_iterator<int> eof; // istream "end" iterator
//	//vector<int> vec(in_iter, eof); // construct vec from an iterator range
//
//	//cout << "vector1:" << endl;
//	//for (vector<int>::iterator it1 = vec.begin(); it1 != vec.end(); ++it1)
//	//	cout << *it1 << endl;
//
//	// ostream_iterator 对象和 ostream_iterator 对象的使用
//	// write one string per line to the standard output
//	ostream_iterator<string> out_iter(cout, "\n");
//	// read strings from standard input and the end iterator
//	istream_iterator<string> in_iter(cin), eof;
//	// read until eof and write what was read to the standard output
//	while (in_iter != eof)
//		// write value of in_iter to standard output
//		// and then increment the iterator to get the next value from cin
//		*out_iter++ = *in_iter++;
//
//	return 0;
//}