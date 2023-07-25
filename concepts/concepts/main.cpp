#include"Templates.h"
#include"NumberGenerator.h"

int main() {

	int x[3] = { 1,2,3 };
	int y[3] = { 4,5,6 };

	vector<int> v1(3);
	vector<int> v2(3);

	v1.set(x);
	v2.set(y);

	int R = v1 * v2;

	std::cout << "R = " << R << std::endl;

	float a[] = { 1.1,2.2,3.3 };
	float b[] = { 4.4,5.5,6.6 };
	
	vector<float> v3(3);
	vector<float> v4(3);

	v3.set(a);
	v4.set(b);

	std::cout << "v3.v4 = " << v3 * v4 << std::endl;
	
	NumberGenerator ng;

	for (int i = 0; i < 1000; i++) {
		std::cout << ng.generate() << std::endl;
	}

	return(0);
}
