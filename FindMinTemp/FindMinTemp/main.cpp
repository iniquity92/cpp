//#include"MYVECTOR.h"
#include"TEMPLATEVECTOR.h"

int main() {

	int list[] = { 3,7,2,8,9,-1,5,10,6 };
	VECTOR<int> v1(list, 9);

	v1.showVector();

	v1.findMin();

	std::cout << "Displaying the minimum in the array \n";

	std::cout << v1;

	int list2[] = {2,1,31,-1,2,5,43,6,7,90};
	//int list2[] = { 0 };
	VECTOR <int> v2(list2, 10);

	std::cin >> v2; 

	v2.showVector();
	v2.findMin();

	std::cout << "Displaying the minimum in the vector v2 \n";
	std::cout << v2;

	//int* arr;

	double list3[] = { 3.3,-1.2,-1.02,-1.222,-3.0,5.8,9.9,0.3,2.1,6.8 };
	VECTOR<double> v3(list3,10);

	v3.showVector();

	v3.findMin();

	std::cout << "Dispalying the minimum in the vector v2 \n";
	std::cout << v3;
	

	return(0);
}