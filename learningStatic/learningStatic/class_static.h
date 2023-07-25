#include<iostream>

class HasStaticMembers {

private:
	
	static int data;
	int a;
public:

	HasStaticMembers(int a) {
		this->a = a;
	}

	void multiply() {
		data++;
		data = data * a;
	}

	void show() {
		std::cout << a << "," << data << std::endl;
	}
};
