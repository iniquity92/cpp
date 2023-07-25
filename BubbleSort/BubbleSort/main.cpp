#include<iostream>
#include<random>
#include<ctime>

std::default_random_engine randomNumber;

void initializenumbers(long int* num, int size) {
	
	for (int i = 0; i < size; i++) {
		num[i] = randomNumber();
 	}
	
}

void bubbleSort(long int* num, int size) {
	
	long int temp;

	for (int i = 0; i < size; i++) {

		for (int j = 0; j < size; j++) {

			std::cout << "pass " << j + 1 << " \n";

			if (!(j == (size - 1))) {

				if (num[j] > num[j + 1]) {

					std::cout << "Swapping \n";

					temp = num[j];
					num[j] = num[j + 1];
					num[j + 1] = temp;

					std::cout << "Swapping complete \n";
				}
			}
			std::cout << "exiting pass " << j + 1 << " \n";
		}
	}

}

void displayArray(long int* num, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << num[i] << std::endl;
	}
}

int main() {

	const int size = 1000;

	long int numbers[size] = {};

	initializenumbers(numbers,size);

	displayArray(numbers, size);

	std::cout << "beginning sorting \n";

	time_t t_entry = clock();

	bubbleSort(numbers, size);

	time_t t_exit = clock();


	std::cout << "Time taken for the operation " << difftime(t_exit,t_entry) << std::endl;

	std::cout << "sorting finished \n";
	std::cout << "printing result \n";

	displayArray(numbers, size);

	return(0);
}
