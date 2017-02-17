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
private:
	ScrPtr *ptr; // points to use-counted ScrPtr class
};