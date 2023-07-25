#include "Stack_header.h"

Stack* Stack::top;

int main() {


	Stack obj1(2);

	obj1.push();

	Stack obj2(3);
	obj2.push();

	Stack obj3(4);
	obj3.push();

	obj3.view();
	obj1.view();
	obj2.view();

	obj1.pop();
	obj1.view();
	obj2.view();
	obj3.view();

	return (0);
}