#include <iostream>
#include <vector>
#include <string>
#include <fstream>
//#include "Sales_item.h"
//#include "Sales_item1.h"
//#include "Person.h"
//#include "Screen.h"
using namespace std;

/////////////////////////////2016-9-9 17:24:44
//int main()
//{
//	// 8.3. 输出缓冲区的管理
//	// 输出缓冲区的刷新
//	cout << "hi!" << flush; // flushes the buffer; adds no data
//	cout << "hi!" << ends; // inserts a null, then flushes the buffer
//	cout << "hi!" << endl; // inserts a newline, then flushes the buffer
//
//	//////////////////////////////2016-9-10 10:29:52
//	// 将输入和输出绑在一起
//	cin.tie(&cout); // illustration only: the library ties cin and cout for us
//	ostream *old_tie = cin.tie();
//	cin.tie(0); // break tie to cout, cout no longer flushed when cin is read
//	cin.tie(&cerr); // ties cin and cerr, not necessarily a good idea!
//					// ...
//	cin.tie(0); // break tie between cin and cerr
//	cin.tie(old_tie); // restablish normal tie between cin and cout
//
//	// 8.4.1. 文件流对象的使用
//	string ifile = "input";
//	string ofile;
//	// construct an ifstream and bind it to the file named ifile
//	ifstream infile(ifile.c_str());
//	// ofstream output file object to write file named ofile
//	ofstream outfile(ofile.c_str());
//
//	ifstream infile1; // unbound input file stream
//	ofstream outfile1; // unbound output file stream
//	infile1.open("in"); // open file named "in" in the current directory
//	outfile1.open("out"); // open file named "out" in the current directory
//
//	// 检查文件打开是否成功
//	// check that the open succeeded
//	if (!infile) {
//		cerr << "error: unable to open input file: "
//			<< ifile << endl;
//		return -1;
//	}
//
//	// 将文件流与新文件重新捆绑
//	ifstream infile2("in"); // opens file named "in" for reading
//	infile2.close(); // closes "in"
//	infile2.open("next"); // opens file named "next" for reading
//
//	// 清除文件流的状态
//	ifstream input;
//	vector<string> files;
//	void process(string);
//	string s;
//	vector<string>::const_iterator it = files.begin();
//	// for each file in the vector
//	while (it != files.end()) {
//		input.open(it->c_str()); // open the file
//								 // if the file is ok, read and "process" the input
//		if (!input)
//			break; // error: bail out!
//		while (input >> s) // do the work on this file
//			process(s);
//		input.close(); // close file when we're done with it
//		input.clear(); // reset state to ok
//		++it; // increment iterator to get next file
//	}
//
//	return 0;
//}