#include<iostream>

class Stack {

private:

	static Stack* top;

	int data;
	Stack* next;

	Stack* secondtotop;
	

public:
	//constructor : type 1 Initializes with nothing
	Stack() {
		this->data = 0;
		this->next = NULL;

		this->secondtotop = top;
	}

	//constructor : type 2 : Iitializes with clien supplied data
	Stack(int data) {
		this->data = data;
		this->next = NULL;
		this->secondtotop = top;
	}

	//destructor : type 1 
	~Stack() {
		
	}

	//membr functions 

	void pop() {
		
		std::cout << top->data << "popped" << std::endl;

		Stack* temp;

		temp = top;
		top = top->next;
	
	}

	void push() {

		if (!(top == NULL)) {
			Stack* temp;

			temp = top;
			top = this;
			top->next = secondtotop;

		}
		else {
			top = this;
			top->next = NULL;

		}

	}

	void view() {
		Stack* temp = new Stack;
		temp = top; 

		while (temp != NULL) {
		
			std::cout << temp->data << std::endl;

			temp = temp->next;
		
		}

		delete temp;
	}
};
