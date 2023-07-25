#include"FLOAT.h"

int main() {

	FLOAT a(5.5);

	FLOAT b(9.9);

	FLOAT result1(0.0);

	FLOAT result2(0.0);

	a.seeNumber();

	b.seeNumber();

	result1 = a + b;

	//result1.seeNumber();

	result2 = a - b;

	std::cout << result1; 
	//result2.seeNumber();

	std::cout << result2;

	std::cin >> result1;

	std::cout << result1;

	return (0);
}