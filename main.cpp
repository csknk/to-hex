#include <iostream>
#include "utilities.h"

int main()
{
	int num;
	std::string str;
	std::cout << "Enter integer: ";
	std::cin >> num;
	std::cout << "Enter a string: ";
	std::cin >> str;
	utilities::printToHex(str);
	utilities::printToHexCStyle(str);
	std::cout << "result 1: " << utilities::intToHexString1(num) << '\n';
	std::cout << "result 2: " << utilities::intToHexString2(num) << '\n';

	std::string s;
	std::vector<unsigned char> charVec{0xde, 0xad, 0xbe, 0xef};
	for (size_t i = 0; i < charVec.size(); i++) {
		utilities::charToHexString(charVec[i], s);
	}
	std::cout << "Bytes vector to a string: " << s << '\n';
	return 0;
}
