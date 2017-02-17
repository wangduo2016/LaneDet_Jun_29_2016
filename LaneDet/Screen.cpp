#include "Screen.h"

Screen& Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}
Screen& Screen::move(index r, index c)
{
	index row = r * width; // row location
	cursor = row + c;
	return *this;
}

void Account::rate(double newRate)
{
	interestRate = newRate;
}
// define and initialize static class member
double Account::interestRate = initRate();
// definition of static member with no initializer;
// the initial value is specified inside the class definition
const int Account::period;