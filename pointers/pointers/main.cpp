#include<iostream>

int main() {

	int* arr;

	arr = new int[3];

	for (int i = 0; i < 3; i++) {
		std::cin >> arr[i];
	}

	for (int i = 0; i < 3; i++) {
		std::cout << arr[i];
	}

	return(0);
}