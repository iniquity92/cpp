#include"POLAR.h"

int main() {

	polar vec1(3.0, 30.0);
	std::cout << vec1;

	polar vec2(4.0, 15.0);
	std::cout << vec2;

	polar result(0.0, 0.0);
	std::cout << result;

	result.setFromPolarObject( vec1 + vec2 );
	std::cout << result;
	

	return (0);
}