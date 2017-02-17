#pragma once
#include "U_Ptr.h"

/* smart pointer class: takes ownership of the dynamically allocated
* object to which it is bound
* User code must dynamically allocate an object to initialize a
HasPtr
* and must not delete that object; the HasPtr class will delete it
*/
class HasPtr_1 {
public:
	// HasPtr owns the pointer; p must have been dynamically allocated
	HasPtr_1(int *p, int i) : ptr(new U_Ptr(p)), val(i) { }
	// copy members and increment the use count
	HasPtr_1(const HasPtr_1 &orig) : ptr(orig.ptr), val(orig.val) { ++ptr->use; }
	HasPtr_1& operator=(const HasPtr_1&);
	// if use count goes to zero, delete the U_Ptr object
	~HasPtr_1() { if (--ptr->use == 0) delete ptr; }
	// copy control and constructors as before
	// accessors must change to fetch value from U_Ptr object
	int *get_ptr() const { return ptr->ip; }
	int get_int() const { return val; }
	// change the appropriate data member
	void set_ptr(int *p) { ptr->ip = p; }
	void set_int(int i) { val = i; }
	// return or change the value pointed to, so ok for const objects
	// Note: *ptr->ip is equivalent to *(ptr->ip)
	int get_ptr_val() const { return *ptr->ip; }
	void set_ptr_val(int i) { *ptr->ip = i; }
private:
	U_Ptr *ptr; // points to use-counted U_Ptr class
	int val;
};

HasPtr_1& HasPtr_1::operator=(const HasPtr_1 &rhs)
{
	++rhs.ptr->use; // increment use count on rhs first
	if (--ptr->use == 0)
		delete ptr; // if use count goes to 0 on this object, delete it
	ptr = rhs.ptr; // copy the U_Ptr object
	val = rhs.val; // copy the int member
	return *this;
}