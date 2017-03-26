#pragma once

struct absInt {
	int operator() (int val) {
		return val < 0 ? -val : val;
	}
};

// Exercise 14.31:
class ifElseThen {
public:
	int operator()(int val1, int val2, int val3)
	{
		return val1 ? val2 : val3;
	}
};
// 或者定义为类模板
template<typename T>
class ifElseThenT {
public:
	T operator()(int val1, int val2, int val3)
	{
		return val1 ? val2 : val3;
	}
};