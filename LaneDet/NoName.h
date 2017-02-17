#pragma once
#include <iostream>
#include <string>
using namespace std;

struct NoName {
	// 构造函数
	NoName() : pstring(new std::string), i(0), d(0) { }
	// Exercise 13.4:复制构造函数：使用构造函数初始化列表形式
	//NoName(const NoName &org) :pstring(new string(*(org.pstring))), i(org.i), d(org.d) {}
	// 或者
	NoName(const NoName &);
	// Exercise 13.9: 赋值操作符
	NoName& operator=(const NoName &);
	//Exercise 13.12: 析构函数
	~NoName() { delete pstring; pstring = 0; }
private:
	std::string *pstring;
	int i;
	double d;
};
// 复制构造函数
NoName::NoName(const NoName &orge)
{
	pstring = new string();
	*pstring = *(orge.pstring);
	i = orge.i;
	d = orge.d;
}
//赋值操作符
NoName & NoName::operator=(const NoName &rhs)
{
	pstring = new string();
	*pstring = *(rhs.pstring);
	i = rhs.i;
	d = rhs.d;
	return *this;
}