#include"class_static.h"

int HasStaticMembers::data; 

int main() {

	HasStaticMembers o1(3), o2(4), o3(5);

	o1.multiply();
	o1.show();

	o2.show();
	o3.multiply();
	o2.show();

	return (0);
}