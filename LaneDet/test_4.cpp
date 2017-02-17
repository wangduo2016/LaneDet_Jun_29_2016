//#include <iostream>
//#include <string>
//#include <vector>
////#include "Sales_item.h"
//using namespace std;

//using std::cin;
//using std::string;
//using std::cout;
//using std::endl;

//int main()
//{
	///////////////////////////2016-7-27 17:38:25
	//vector<int> v1;
	//vector<int> v2(v1);
	//vector<int> v3(6, 'H');
	//vector<int> v4(6);

	//vector<int> ivec4(10, -1); // 10 elements, each initialized	to - 1
	//vector<string> svec(10, "hi!"); // 10 strings, each initialized to	"hi!"

	//vector< vector<int> > ivec;
	//vector< vector<int> > svec1 = ivec;
	//vector<string> svec2(10, "null");

	// read words from the standard input and store them as elements in	a vector
	//string word;
	//vector<string> text; // empty vector
	//while (cin >> word) {
	//	text.push_back(word); // append word to text
	//}

//	vector<int> ivec1;
//	for (int i = 0; i != 10; ++i)
//		ivec1.push_back(i);
//	//for (vector<int>::size_type ix = 0; ix != ivec1.size(); ++ix)
//	//	ivec1[ix] = 0;
//	for (vector<int>::size_type ix = 0; ix != ivec1.size(); ++ix)
//		cout << ivec1[ix] << endl;
//
//	return 0;
//}


//int main()
//{
	///////////////////////////2016-7-27 16:44:43
	//string s4 = "hello" + ", "; // error: no string operand, + 操作符的左右操作数必须至少有一个是 string 类型的
	//string s6 = "hello" + ", " + s2; // error: can't add string literals

	//string str("some string");
	//for (string::size_type ix = 0; ix != str.size(); ++ix)
	//	str[ix] = '*';
	//for (string::size_type ix = 0; ix != str.size(); ++ix)
	//	cout << str[ix] << endl;

	//string s("Hello World!!!");
	//string::size_type punct_cnt = 0;
	//// count number of punctuation characters in s
	//for (string::size_type index = 0; index != s.size(); ++index)
	//	if (ispunct(s[index]))
	//		++punct_cnt;
	//cout << punct_cnt << " punctuation characters in " << s << endl;

	//// convert s to lowercase
	//for (string::size_type index = 0; index != s.size(); ++index)
	//	s[index] = tolower(s[index]);
	//cout << s << endl;

	////////////////////////////////2016-7-27 11:32:06
	//string s = "hello";
	//string s2 = "world";
	//cout << s.empty() << endl << s.size() << endl;
	//cout << s[4] << endl << s + s2 << endl;
	////s = s2;
	//cout << (s == s2) << endl;

	//string st("The expense of spirit\n");
	//cout << "The size of " << st << "is " << st.size()
	//	<< " characters, including the newline" << endl;

	//string::size_type stSize = st.size();
	//int iStSize = st.size();
	//cout << stSize << endl << iStSize << endl;

	//string s1("hello, ");
	//string s2("world\n");
	//string s3 = s1 + s2; // s3 is hello, world\n
	//s1 += s2; // equivalent to s1 = s1 + s2
	//string s_a = s1 + s2 + s3;
	//cout << s3 << s1 << s_a << endl;
//}


////////////////////////////////2016-7-27 10:47:31
//string s6;
//int main()
//{
	//string s1 = "hello ";
	//string s2(s1);
	//string s3("value ");
	//string s4(6, 'c');
	//cout << s1 << s2 << s3 << s4 << endl;

	//string s5;
	//cout << s5 << s6 << endl;

	//string s, s7; // empty string
	//cin >> s >> s7; // read whitespace-separated string into s
	//cout << s << s7 << endl; // write s to the output

	// 每次读入一个单词
	//string word;
	//// read until end-of-file, writing each word to a new line
	//while (cin >> word)
	//	cout << word << endl;

	// 每次读入一行文本
	//string line;
	//// read line at time until end-of-file
	//while (getline(cin, line))
	//	cout << line << endl;

//	return 0;
//}