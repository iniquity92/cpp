#include<iostream>
#include<cstdint>

int main() {

	long int leftArrow = 0x2193;

	std::cout << (char32_t)leftArrow << std::endl;

	//char32_t arrow = U'\0x2903';

	char c = 97;

	std::cout << c << std::endl;

	std::string arrow = "\u2392";

	std::cout << arrow << std::endl;

	//char32_t onearrow = u'\0x2392';

	std::cout << sizeof(char) << std::endl;
	std::cout << sizeof(char32_t) << std::endl;
	std::cout << sizeof(int) << std::endl;
	std::cout << sizeof(double) << std::endl;

	unsigned int myarrow = 0x2190;

	std::cout << myarrow << std::endl;

	std::cout << u8"you should take a 2190 turn \n";

	Writ

	

	return(0);
}