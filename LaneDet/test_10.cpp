#include <iostream>
#include <string>
#include <bitset>
//using std::bitset;
//using std::string;
using namespace std;

//int main()
//{
//	////////////////////////////////////////2016-8-25 10:23:29
//	//bitset<32> bitvec; // 32 bits, all zero
//
//	// 用unsigned 值初始化 bitset 对象
//	// bitvec1 is smaller than the initializer
//	bitset<16> bitvec1(0xffff); // bits 0 ... 15 are set to 1
//	cout << bitvec1 << endl;
//	// bitvec2 same size as initializer
//	bitset<32> bitvec2(0xffff); // bits 0 ... 15 are set to 1; 16 ... 31 are 0
//	cout << "bitvec2: " << bitvec2 << endl;
//	// on a 32-bit machine, bits 0 to 31 initialized from 0xffff
//	bitset<128> bitvec3(0xffff); // bits 32 through 127 initialized to zero
//	cout << bitvec3 << endl;
//
//	// 用string 对象初始化 bitset 对象
//	string strval("1100");
//	bitset<32> bitvec4(strval);
//	cout << bitvec4 << endl;
//
//	string str("1111111000000011001101");
//	bitset<32> bitvec5(str, 5, 4); // 4 bits starting at str[5], 1100
//	bitset<32> bitvec6(str, str.size() - 4); // use last 4 characters
//	cout << bitvec5.size() << endl;
//
//	// 测试整个 bitset 对象
//	bitset<32> bitvec; // 32 bits, all zero
//	bool is_set = bitvec.any(); // false, all bits are zero
//	bool is_not_set = bitvec.none(); // true, all bits are zero
//
//	size_t bits_set = bitvec.count(); // returns number of bits that are on
//	size_t sz = bitvec.size(); // returns 32
//
//	// assign 1 to even numbered bits
//	for (int index = 0; index != 32; index += 2)
//		bitvec[index] = 1;
//	cout << bitvec << endl;
//
//	// equivalent loop using set operation
//	for (int index = 0; index != 32; index += 2)
//		bitvec.set(index);
//
//	bitvec.reset(); // set all the bits to 0.
//	bitvec.set(); // set all the bits to 1
//
//	bitvec.flip(0); // reverses value of first bit
//	bitvec[0].flip(); // also reverses the first bit
//	bitvec.flip(); // reverses value of all bits
//
//	unsigned long ulong = bitvec3.to_ulong();
//	cout << "ulong = " << ulong << endl;
//
//	bitset<64> bitvec_1(32);
//	cout << "bitvec_1: " << bitvec_1 << endl;
//	bitset<32> bv(1010101);
//	cout << "bv: " << bv << endl;
//	string bstr; cin >> bstr;
//	bitset<8>bv1(bstr);
//	cout << "bv1: " << bv1 << endl;
//
//	return 0;
//}