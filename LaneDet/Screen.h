#pragma once
#include <string>
using namespace std;

// 12.1.3. 关于类定义的更多内容
// 同一类型的多个数据成员
//class Screen {
//public:
//	// interface member functions
//private:
//	std::string contents;
//	std::string::size_type cursor;
//	std::string::size_type height, width;
//};

// 使用类型别名来简化类
//class Screen {
//public:
//	// interface member functions
//	typedef std::string::size_type index;
//private:
//	std::string contents;
//	index cursor;
//	index height, width;
//};

// 定义重载成员函数
//class Screen {
//public:
//	typedef std::string::size_type index;
//	// return character at the cursor or at a given position
//	char get() const { return contents[cursor]; }
//	char get(index ht, index wd) const;
//	// remaining members
//private:
//	std::string contents;
//	index cursor;
//	index height, width;
//};

// 定义 static 成员
class Account {
public:
	// interface functions here
	void applyint() { amount += amount * interestRate; }
	static double rate() { return interestRate; }
	static void rate(double); // sets a new rate
private:
	std::string owner;
	double amount;
	static const int period = 30; // interest posted every 30 days
	double daily_tbl[period]; // ok: period is constant expression
	static double interestRate;
	static double initRate() { return 0; }
};

////void f();
//// 友元声明与作用域
//class X
//{
//	friend class Y;
//	friend void f() { /* ok to define friend function in the class body */ }
//};
//class Z
//{
//	Y *ymem; // ok: declaration for class Y introduced by friend in X
//	//void g() { return ::f(); } // ok: declaration of f introduced by X
//	void g() { return f(); } // ok: declaration of f introduced by X
//};

// 友元关系：一个例子
//class Window_Mgr
//{
//	Window_Mgr& Window_Mgr::relocate(Screen::index r, Screen::index c, Screen& s)
//	{
//		//// ok to refer to height and width
//		//s.height += r;
//		//s.width += c;
//		//return *this;
//	}
//};

// 显式指定 inline 成员函数
class Screen {
public:
	typedef std::string::size_type index;
	// Window_Mgr members can access private parts of class Screen
	friend class Window_Mgr;
	//friend Window_Mgr& Window_Mgr::relocate(Screen::index, Screen::index, Screen&);
	// operations
	// implicitly inline when defined inside the class declaration
	char get() const { return contents[cursor]; }
	// explicitly declared as inline; will be defined outside the class declaration
	inline char get(index ht, index wd) const;
	// inline not specified in class declaration, but can be defined inline later
	index get_cursor() const;
	// 返回 *this
	// interface member functions
	Screen& move(index r, index c);
	Screen& set(char);
	//Screen& set(index, index, char);
	//constructors
	Screen() :contents("default"), cursor(0), height(0), width(0) {}
	Screen(string conts, index h, index w) :contents(conts), cursor(0), height(h), width(w) {}	// Exercise 12.9:
	Screen(index h, index w) :contents("DEFAULTDEFAULT"), cursor(0), height(h), width(w) {}
	// ...
public:
	// interface member functions
	// display overloaded on whether the object is const or not
	Screen& display(std::ostream &os)
	{
		do_display(os); return *this;
	}
	const Screen& display(std::ostream &os) const
	{
		do_display(os); return *this;
	}
private:
	// single function to do the work of displaying a Screen,
	// will be called by the display operations
	void do_display(std::ostream &os) const
	{
		++access_ctr; // keep count of calls to any member function
		os << contents;
	}
private:
	mutable size_t access_ctr; // may change in a const members
private:
	std::string contents;
	index cursor;
	index height, width;
};

// inline declared in the class declaration; no need to repeat on the definition
char Screen::get(index r, index c) const
{
	index row = r * width; // compute the row location
	return contents[row + c]; // offset by c to fetch specified character
}
// not declared as inline in the class declaration, but ok to make inline in definition
inline Screen::index Screen::get_cursor() const
{
	return cursor;
}