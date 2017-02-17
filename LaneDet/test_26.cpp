#include <iostream>
#include <vector>
#include <string>
#include "Sales_item.h"
#include "Sales_item1.h"
#include "Person.h"
#include "Screen.h"
using namespace std;

/////////////////////////////2016-9-2 10:48:46
////Exercises Section 12.1.4
//class X
//{
//	Y *py;
//};
//class Y
//{
//	X xa;
//};

//int main()
//{
//	Sales_item si;
//	Person p;
//
//	///////////////////////////2016-9-2 17:24:53
//	Screen sc;
//	Screen myscreen;
//	char ch = myscreen.get();// calls Screen::get()
//	ch = myscreen.get(0, 0); // calls Screen::get(index, index)
//
//	Sales_item1 si11;
//	si11.avg_price();
//
//	//// 为什么类的定义以分号结束
//	//class Sales_item { /* ... */ };
//	//class Sales_item { /* ... */ } accum, trans;
//
//	const int ival = 1024;
//	const int & const refVal = ival;	// anachronism used : qualifiers on reference are ignored(亲测)
//	const int * const pi = &ival;
//
//	return 0;
//}

///////////////////////////////////2016-9-3 12:09:33
// 参数传递：

// 每次调用函数时，都会重新创建该函数所有的形参，此时所传递的实参将会初始化对应的形参。形参的初始化与变量的初始化一样。

// 如果形参具有非引用类型，则复制实参的值。普通的非引用类型的参数通过复制对应的实参实现初始化。当用实参副本初始化形参时，函数并没有访问调用所传递的实参本身，因此不会修改实参的值。

// 如果形参为引用类型（第 2.5 节），则它只是实参的别名。与所有引用一样，引用形参直接关联到其所绑定的对象，而并非这些对象的副本。


// 函数返回：

// 函数的返回值用于初始化在调用函数处创建的临时对象。用函数返回值初始化临时对象与用实参初始化形参的方法是一样的。

// 返回非引用
// 在调用函数的地方会将函数返回值复制给临时对象。

// 返回引用
// 当函数返回引用类型时，没有复制返回值。相反，返回的是对象本身。

