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
//////////////////////////////////2016-10-22 17:08:22
//int main()
//{
//	//// 11.3.3. 反向迭代器
//	//vector<int> vec;
//	//for (vector<int>::size_type i = 0; i != 10; ++i)
//	//	vec.push_back(i); // elements are 0,1,2,...9
//
//	//// reverse iterator of vector from back to front
//	//vector<int>::reverse_iterator r_iter;
//	//for (r_iter = vec.rbegin(); // binds r_iter to last element
//	//r_iter != vec.rend(); // rend refers 1 before 1st element
//	//	++r_iter) // decrements iterator one element
//	//	cout << *r_iter << endl; // prints 9,8,7,...0
//
//	//// sorts vec in "normal" order
//	//sort(vec.begin(), vec.end());
//	//// sorts in reverse: puts smallest element at the end of vec
//	//sort(vec.rbegin(), vec.rend());
//
//	// 反向迭代器与其他迭代器之间的关系
//	// find first element in a comma-separated list
//	string line("FIRST,MIDDLE,LAST");
//	string::iterator comma = find(line.begin(), line.end(), ',');
//	cout << string(line.begin(), comma) << endl;
//
//	// find last element in a comma-separated list
//	string::reverse_iterator rcomma = find(line.rbegin(), line.rend(), ',');
//	// wrong: will generate the word in reverse order
//	cout << string(line.rbegin(), rcomma) << endl;
//	// ok: get a forward iterator and read to end of line
//	cout << string(rcomma.base(), line.end()) << endl;
//
//	// Exercise 11.22:
//	vector<string> svec(10, "hello");
//	cout << svec[9];
//	list<string> slst(svec.rbegin() + 3, svec.rbegin() + 8);
//
//	//////////////////////////////////2016-11-7 14:38:58
//	// Exercise 11.26:
//	//const vector<int> ivec1(10,10);
//	//const vector<int> ivec2(10, 10);
//	//sort(ivec1.begin(), ivec2.end());
//
//	return 0;
//}