#include<iostream>

template <class T>

class VECTOR {

private:

	T* arr;
	int size;

	T min;
public:

	VECTOR() : arr(0), size(0), min(0) {};

	VECTOR(T* list, int n) : arr(list), size(n), min(0) {}

	VECTOR(int n) :arr(0), size(n), min(0) {  };

	void findMin() {

		for (int i = 0; i < size; i++) {
			if (arr[i] < min) {
				min = arr[i];
			}
		}

	}

	void showVector() {

		for (int i = 0; i < size; i++) {
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;
	}

	friend std::ostream& operator << (std::ostream& out, VECTOR<T>& v);
	friend std::istream& operator >> (std::istream& in, VECTOR<T>& v);

};

template<class T>
std::ostream& operator << (std::ostream& out, VECTOR<T>& v) {

	out << "The min value in the vector is " << v.min << " \n";
	return out;
}

template<class T>
std::istream& operator >> (std::istream& in, VECTOR<T>& v) {

	v.arr = (T*)calloc(v.size, sizeof(T));

	for (int i = 0; i < v.size; i++) {
		in >> v.arr[i];
	}
	return in;
}