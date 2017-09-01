#pragma once
#include <stdexcept>

// 14.9.2. ×ª»»²Ù×÷·û
class SmallInt {
public:
	SmallInt(int i = 0) : val(i)
	{
		if (i < 0 || i > 255)
			throw std::out_of_range("Bad SmallInt initializer");
	}
	operator int() const { return val; }
private:
	std::size_t val;
};