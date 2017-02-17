//#include <iostream>
//#include <string>
//#include <vector>
////#include <cstring>
////#include <bitset>
////#include <cstddef>
////#include "Sales_item.h"
//using namespace std;
//
///////////////////////////////////////2016-7-29 17:06:32
//int main()
//{
//	int ia1[] = { 10,1,2,3 };
//	cout << *ia1 << endl;
//
//	// C 风格字符串的使用
//	char ca1[] = { 'C', '+', '+' }; // no null, not C-style string
//	char ca2[] = { 'C', '+', '+', '\0' }; // explicit null
//	char ca3[] = "C++"; // null terminator added automatically
//	cout << ca1 << endl;
//	cout << *ca2 << " " << ca3 << endl;
//
//	const char *cp = "some value";
//	cout << cp << endl;
//	while (*cp) {
//		// do something to *cp
//		cout << cp << endl;
//		++cp;
//	}
//
//	const char *cp1 = "A string example";
//	const char *cp2 = "A different string";
//	int i = strcmp(cp1, cp2); // i is positive
//	cout << i << endl;
//	i = strcmp(cp2, cp1); // i is negative
//	cout << i << endl;
//	i = strcmp(cp1, cp1); // i is zero
//	cout << i << endl;
//
//	char ca[] = { 'C', '+', '+' }; // not null-terminated
//	cout << strlen(ca) << endl; // disaster: ca isn't null - terminated
//
//	// Dangerous: What happens if we miscalculate the size of largeStr ?
//	char largeStr[16 + 18 + 2]; // will hold cp1 a space and cp2
//	strcpy_s(largeStr, cp1); // copies cp1 into largeStr
//	strcat_s(largeStr, " "); // adds a space at end of largeStr
//	strcat_s(largeStr, cp2); // concatenates cp2 to largeStr
//	// prints A string example A different string
//	cout << largeStr << endl;
//
//	//char largeStr[16 + 18 + 2]; // to hold cp1 a space and cp2
//	strncpy_s(largeStr, cp1, 17); // size to copy includes the null
//	strncat_s(largeStr, " ", 2); // pedantic, but a good habit
//	strncat_s(largeStr, cp2, 19); // adds at most 18 characters, plus a null
//	cout << largeStr << endl;
//
//	string largeStr1 = cp1; // initialize large Str as a copy of cp1
//	largeStr1 += " "; // add space at end of largeStr
//	largeStr1 += cp2; // concatenate cp2 onto end of largeStr
//	cout << largeStr1 << endl;
//
//	//const char ca33[] = { 'h', 'e', 'l', 'l','o' };		//少一个 '\0'
//	//const char *cp33 = ca33;
//	//while (*cp33) {
//	//	cout << *cp33 << endl;
//	//	++cp33;
//	//}
//
//	const char *cp100 = "hello";
//	int cnt = 0;
//	//while (cp100) { ++cnt; ++cp100; }		// 无意义循环
//	while (*cp100) { ++cnt; ++cp100; }
//	cout << cnt << endl;
//
//	return 0;
//}