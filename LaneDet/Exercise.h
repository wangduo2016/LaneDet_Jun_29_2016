#pragma once
#include <string>
using namespace std;

// Exercise 12.18:
typedef string Type;
Type initVal();
class Exercise {
public:
	typedef double Type;
	::Type setVal(::Type);
	Type initVal();
private:
	int val;
};
::Type Exercise::setVal(::Type parm) {
	return parm + ::initVal();
}