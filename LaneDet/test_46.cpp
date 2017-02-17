//#include <iostream>
//#include <vector>
//#include <list>
////#include <deque>
//#include <string>
////#include <fstream>
//#include <sstream>
//#include <algorithm>
//#include <numeric>
//#include <iterator>
////#include <stack> // stack adaptor
////#include <queue> // both queue and priority_queue adaptors
////#include <map>
////#include <set>
////#include "Sales_item.h"
////#include "Sales_item1.h"
////#include "Person.h"
////#include "Screen.h"
////#include "TextQuery.h"
//using namespace std;
//
///////////////////////////////////2016-10-14 08:35:50
//int main()
//{
//	// 11.2.2. 写容器元素的算法
//	// 写入输入序列的元素
//	vector<int> vec; // empty vector
//	fill(vec.begin(), vec.end(), 0); // reset each element to 0
//	// set subsequence of the range to 10
//	fill(vec.begin(), vec.begin() + vec.size() / 2, 10);
//
//	// 不检查写入操作的算法
//	// disaster: attempts to write to 10 (nonexistent) elements in vec
//	//fill_n(vec.begin(), 10, 0);
//
//	// 引入 back_inserter
//	// ok: back_inserter creates an insert iterator that adds elements to vec
//	fill_n(back_inserter(vec), 10, 0); // appends 10 elements to vec
//
//	// 写入到目标迭代器的算法
//	vector<int> ivec; // empty vector
//	list<int> ilst;
//	// copy elements from ilst into ivec
//	copy(ilst.begin(), ilst.end(), back_inserter(ivec));
//
//	// better way to copy elements from ilst
//	vector<int> ivec1(ilst.begin(), ilst.end());
//
//	// 算法的 _copy 版本
//	// replace any element with value of 0 by 42
//	replace(ilst.begin(), ilst.end(), 0, 42);
//
//	// create empty vector to hold the replacement
//	vector<int> ivec2;
//	// use back_inserter to grow destination as needed
//	replace_copy(ilst.begin(), ilst.end(),
//		back_inserter(ivec2), 0, 42);
//
//	//////////////////////////////////2016-10-15 15:13:09
//	// 11.2.3. 对容器元素重新排序的算法
//	// the quick red fox jumps over the slow red turtle
//	// 1 word 6 characters or longer
//
//	// 去除重复
//	vector<string> words;
//	string story("the quick red fox jumps over the slow red turtle and the dolphin is smiling");
//	istringstream iss(story);
//	string tem_word;
//	while (iss >> tem_word)
//		words.push_back(tem_word);
//	cout << "words size:" << words.size() << endl;
//	// sort 算法
//	// sort words alphabetically so we can find the duplicates
//	sort(words.begin(), words.end());
//	/* eliminate duplicate words:
//	* unique reorders words so that each word appears once in the
//	* front portion of words and returns an iterator one past the
//	unique range;
//	* erase uses a vector operation to remove the nonunique elements
//	*/
//	// unique 的使用
//	vector<string>::iterator end_unique = unique(words.begin(), words.end());
//	// 使用容器操作删除元素
//	words.erase(end_unique, words.end());
//	cout << "words size:" << words.size() << endl;
//
//	// 定义需要的实用函数
//	bool isShorter(const string &, const string &);
//	bool GT6(const string &);
//
//	// 排序算法
//	// sort words by size, but maintain alphabetic order for words of the same size
//	stable_sort(words.begin(), words.end(), isShorter);
//
//	// 统计长度不小于 6 的单词
//	vector<string>::size_type wc = count_if(words.begin(), words.end(), GT6);
//
//	// 将全部程序段放在一起
//	string make_plural(size_t, const string &, const string &);
//	cout << wc << " " << make_plural(wc, "word", "s")
//		<< " 6 characters or longer" << endl;
//
//	// Exercise 11.9:
//	vector<string>::iterator bg = words.begin(), ed = words.end();
//	while (bg != ed)
//	{
//		cout << *bg++ << endl;
//	}
//
//	// Exercise 11.10:
//	vector<string>::iterator bg1 = words.begin(), ed1 = words.end();
//	vector<string>::size_type count = 0;
//	while (bg1 != ed1)
//	{
//		if ((bg1 = find_if(bg1, ed1, GT6)) != ed1)
//			++count;
//		++bg1;
//	}
//	cout << count << " " << make_plural(count, "word", "s")
//		<< " 6 characters or longer" << endl;
//
//	return 0;
//}
//
//// 定义需要的实用函数
//// comparison function to be used to sort by word length
//bool isShorter(const string &s1, const string &s2)
//{
//	return s1.size() < s2.size();
//}
//
//// determine whether a length of a given word is 6 or more
//bool GT6(const string &s)
//{
//	return s.size() >= 6;
//}
//
//// return plural version of word if ctr isn't 1
//string make_plural(size_t ctr, const string &word, const string &ending)
//{
//	return (ctr == 1) ? word : word + ending;
//}