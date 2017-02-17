#include <iostream>
#include <vector>
#include <string>
#include "Sales_item.h"
using namespace std;

/////////////////////////////////////2016-8-27 17:39:29
//int main()
//{
//	// one
//	//Sales_item item1, item2;
//	//std::cin >> item1 >> item2;
//	//// first check that item1 and item2 represent the same book
//	//if (item1.same_isbn(item2)) {
//	//	std::cout << item1 + item2 << std::endl;
//	//	return 0; // indicate success
//	//}
//	//else {
//	//	std::cerr << "Data must refer to same ISBN"
//	//		<< std::endl;
//	//	return -1; // indicate failure
//	//}
//
//	// two
//	Sales_item item1, item2;
//	while (cin >> item1 >> item2) {
//		try {
//			// execute code that will add the two Sales_items
//			// if the addition fails, the code throws a runtime_error exception
//
//			// first check that data is for the same item
//			if (!item1.same_isbn(item2))
//				throw runtime_error("Data must refer to same ISBN");
//			// ok, if we're still here the ISBNs are the same
//			std::cout << item1 + item2 << std::endl;
//		}
//		catch (runtime_error err) {
//			// remind the user that ISBN must match and prompt for another pair
//			cout << err.what()
//				<< "\nTry Again? Enter y or n" << endl;
//			char c;
//			cin >> c;
//			if (cin && c == 'n')
//				break; // break out of the while loop
//		}
//	}
//
//	return 0;
//}