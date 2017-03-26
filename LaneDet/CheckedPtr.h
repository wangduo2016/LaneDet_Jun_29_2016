#pragma once
#include <stdexcept>
using namespace std;

/*
* smart pointer: Checks access to elements throws an out_of_range
* exception if attempt to access a nonexistent
element
* users allocate and free the array
*/
class CheckedPtr {
public:
	// no default constructor; CheckedPtrs must be bound to an object
	CheckedPtr(int *b, int *e) : beg(b), end(e), curr(b) { }
	// dereference and increment operations
	CheckedPtr& operator++(); // prefix operators
	CheckedPtr& operator--();
	// increment and decrement
	CheckedPtr operator++(int); // postfix operators
	CheckedPtr operator--(int);
private:
	int* beg; // pointer to beginning of the array
	int* end; // one past the end of the array
	int* curr; // current position within the array
};

// prefix: return reference to incremented/decremented object
CheckedPtr & CheckedPtr::operator++()
{
	if (curr == end)
		throw out_of_range("increment past the end of CheckedPtr");
	++curr; // advance current state
	return *this;
}
CheckedPtr & CheckedPtr::operator--()
{
	if (curr == beg)
		throw out_of_range("decrement past the beginning of CheckedPtr");
	--curr; // move current state back one element
	return *this;
}
CheckedPtr CheckedPtr::operator++(int)
{
	// no check needed here, the call to prefix increment will do the check
	CheckedPtr ret(*this); // save current value
	++*this; // advance one element, checking the increment
	return ret; // return saved state
}
CheckedPtr CheckedPtr::operator--(int)
{
	// no check needed here, the call to prefix decrement will do the check
	CheckedPtr ret(*this); // save current value
	--*this; // move backward one element and check
	return ret; // return saved state
}