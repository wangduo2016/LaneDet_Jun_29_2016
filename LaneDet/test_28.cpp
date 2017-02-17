#include <iostream>
#include <vector>
#include <string>
#include "Sales_item.h"
#include "Sales_item1.h"
#include "Person.h"
#include "Screen.h"
using namespace std;

/////////////////////////////////2016-9-5 08:30:56
//void f(const vector<int>&);	// Exercise 12.30:
//
//int main()
//{
//	// 12.4.4. 隐式类类型转换
//	string null_book = "9-999-99999-9";
//	// ok: builds a Sales_item with 0 units_sold and revenue from
//	// and isbn equal to null_book
//	Sales_item1 item;
//	//item.same_isbn(null_book);
//	item.same_isbn(Sales_item1(null_book));
//
//	// ok: uses the Sales_item istream constructor to build an object
//	// to pass to same_isbn
//	//item.same_isbn(cin);
//
//	// Exercise 12.29:
//	string null_isbn = "9-999-99999-9";
//	Sales_item1 null1(null_isbn);
//	Sales_item1 null("9-999-99999-9");
//
//	// Exercise 12.30:
//	vector<int> v2;
//	f(v2); // should be ok
//	//f(42); // should be an error
//
//	// 12.4.5. 类成员的显式初始化
//	struct Data {
//		int ival;
//		char *ptr;
//	};
//	// val1.ival = 0; val1.ptr = 0
//	Data val1 = { 0, 0 };
//	// val2.ival = 1024;
//	// val2.ptr = "Anna Livia Plurabelle"
//	Data val2 = { 1024, "Anna Livia Plurabelle" };
//
//	// 使用类的 static 成员
//	Account ac1;
//	Account *ac2 = &ac1;
//	// equivalent ways to call the static member rate function
//	double rate;
//	rate = ac1.rate(); // through an Account object or reference
//	rate = ac2->rate(); // through a pointer to an Account object
//	rate = Account::rate(); // directly from the class using the scope operator
//
//	return 0;
//}