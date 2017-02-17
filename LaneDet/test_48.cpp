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
/////////////////////////////////2016-10-21 16:40:07
//int main()
//{
//	//// 在类类型上使用 istream_iterator
//	//istream_iterator<Sales_item> item_iter(cin), eof;
//	//Sales_item sum; // initially empty Sales_item
//	//sum = *item_iter++; // read first transaction into sum and get next record
//	//while (item_iter != eof) {
//	//	if (item_iter->same_isbn(sum))
//	//		sum = sum + *item_iter;
//	//	else {
//	//		cout << sum << endl;
//	//		sum = *item_iter;
//	//	}
//	//	++item_iter; // read next transaction
//	//}
//	//cout << sum << endl; // remember to print last set of records
//
//	//// 与算法一起使用流迭代器
//	//istream_iterator<int> cin_it(cin); // reads ints from cin
//	//istream_iterator<int> end_of_stream; // end iterator value
//	//// initialize vec from the standard input:
//	//vector<int> vec(cin_it, end_of_stream);
//	//sort(vec.begin(), vec.end());
//
//	//// writes ints to cout using " " as the delimiter
//	//ostream_iterator<int> output(cout, " ");
//
//	//// write only the unique elements in vec to the standard output
//	//unique_copy(vec.begin(), vec.end(), output);
//
//	//// Exercise 11.16:
//	//// This is my method.
//	////ifstream ifs("ex86");
//	////string s;
//	////vector<string> svec;
//	////while (ifs >> s)
//	////	svec.push_back(s);
//	////ostream_iterator<string> out_iter(cout, " ");
//	////copy(svec.begin(), svec.end(), out_iter);
//
//	//// This is standard answer.
//	//ifstream ifs("ex86");
//	//if (!ifs)
//	//	return EXIT_FAILURE;
//	//istream_iterator<string> i_it(ifs), eof;
//	//ostream_iterator<string> o_it(cout, " ");
//	//copy(i_it, eof, o_it);
//	//ifs.close();
//
//	// Exercise 11.18:
//	istream_iterator<int> i_iter(cin), eof;
//	ofstream outfile1("ex1118_out1"), outfile2("ex1118_out2");
//	ostream_iterator<int> o_iter1(outfile1, " "), o_iter2(outfile2, "\n");
//	while (i_iter != eof)
//	{
//		if (*i_iter % 2 != 0)	// 若是奇数
//		{
//			*o_iter1++ = *i_iter++;
//		}
//		else
//		{
//			*o_iter2++ = *i_iter++;
//		}
//	}
//	outfile1.close();
//	outfile2.close();
//
//	return 0;
//}