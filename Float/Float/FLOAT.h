#include<iostream>


class FLOAT {

private:

	float num;

public:

	//FLOAT() {}

	FLOAT() :num(0.0) {};

	FLOAT(float num) :num(num) {}

	void seeNumber() {
		std::cout << num << std::endl;
	}

	FLOAT operator + (FLOAT f) {
		
		FLOAT sum(0.0);
		sum.num = num + f.num;
		return sum;
	}

	FLOAT operator - (FLOAT f) {
		
		FLOAT diff(0.0);
		diff.num = num - f.num;
		return diff;
	}

	friend std::ostream& operator << (std::ostream& out, FLOAT& fl);

	friend std::istream& operator >> (std::istream& in, FLOAT& fl);

};

std::ostream& operator << (std::ostream& out, FLOAT& fl) {
	out << fl.num << "\n";
	return out;
}

std::istream& operator >> (std::istream& in, FLOAT& fl) {
	in >> fl.num;
	return in;
}