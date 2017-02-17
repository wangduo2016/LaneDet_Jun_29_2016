#pragma once
#include <string>
using namespace std;

// Exercises Section 12.1.1
class Person
{
public:
	// operations
	string getName() const { return name; }
	string getAddress() const { return address; }
	// constructors
	Person() :name(""), address("") {}
	Person(const string &nm, const string &ad) :name(nm), address(ad) {}
private:
	string name;
	string address;
};