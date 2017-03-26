#pragma once
#include "Screen.h"
#include "ScrPtr.h"

/*
* smart pointer: Users pass to a pointer to a dynamically allocated
Screen, which
* is automatically destroyed when the last
ScreenPtr goes away
*/
class ScreenPtr {
public:
	// no default constructor: ScreenPtrs must be bound to an object
	ScreenPtr(Screen *p) : ptr(new ScrPtr(p)) { }
	// copy members and increment the use count
	ScreenPtr(const ScreenPtr &orig) :
		ptr(orig.ptr) {
		++ptr->use;
	}
	ScreenPtr& operator=(const ScreenPtr&);
	// if use count goes to zero, delete the ScrPtr object
	~ScreenPtr() { if (--ptr->use == 0) delete ptr; }
	// constructor and copy control members as before
	Screen &operator*() { return *ptr->sp; }
	Screen *operator->() { return ptr->sp; }
	const Screen &operator*() const { return *ptr->sp; }
	const Screen *operator->() const { return ptr->sp; }
private:
	ScrPtr *ptr; // points to use-counted ScrPtr class
};

ScreenPtr & ScreenPtr::operator=(const ScreenPtr &rhs)
{
	++rhs.ptr->use;
	if (--ptr->use == 0)
		delete ptr;
	ptr = rhs.ptr;

	return *this;
}