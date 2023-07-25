#include<iostream>

using namespace std;


struct linkedList {
	int data;
	struct linkedList *next;
} *node,*prevnode,*tempnode,*rootnode,*currnode;

int get_data(string action) {

	cout << "Enter a numeric data that you wish to " << action << " in the linked list " << endl;

	int data;

	cin >> data;

	return data;
}

void add_data_to_link_list() {
	string action = "store";

	cout << "Add data to linked list" << endl;

	int data = get_data(action);

	cout << "Creating a new node " << endl;

	node = new linkedList;

	node->data = data;
	node->next = NULL;

	cout << "Adding data in the linked list" << endl;

	if ( rootnode == NULL ) {
		
		rootnode = node; //make rootnode->next point to rest of the stack 
		prevnode = rootnode;
	}
	else {
		
		prevnode->next = node;
		prevnode = node;
	}

	cout << "Node created successfully!" << endl;
	cout << "Freeing memory..!" << endl;
}

void delete_data_from_link_list() {
	string action = "delete";
	cout << "Delete data from linked list" << endl;

	int data = get_data(action);

	currnode = new linkedList;
	currnode = rootnode;
	currnode = rootnode;

	while (currnode != NULL) {
	
		if (currnode->data == data) {
			
			tempnode = new linkedList;

			if (currnode == rootnode) {
				
				tempnode = rootnode;
				rootnode = rootnode->next;
				tempnode->next = NULL;
				currnode = rootnode;
			}

			else {
				
				tempnode = currnode;
				prevnode->next = currnode->next;
				tempnode->next = NULL;
				currnode = prevnode;
				currnode = currnode->next;

			}

			delete tempnode;

			
			
			cout << "Data deleted successfully!! " << endl;

		}

		else {

			prevnode = currnode;
			currnode = currnode->next;

		}
		

	}
	
	cout << "Freeing up memory...!" << endl;

	delete currnode;
}

void insert_data_at_location() {
	int num;
	cout << "Insert data at a specific location in the linked list " << num << endl;
	
}

void display_data_in_link_list(){
	cout << "Display data in the linked list" << endl;

	currnode = new linkedList;
	currnode = NULL;

	cout << "Reading data from the linked list..." << endl;

	currnode = rootnode;

	if (currnode == NULL) {
	
		cout << "The list is empty, please enter some data before displaying " << endl;

	}

	else {
		do {

			if (currnode->next == NULL) {

				cout << currnode->data << endl;
			}
			else {

				cout << currnode->data << "->";

			}
			currnode = currnode->next;

		} while (currnode != NULL);
	}
	cout << "Freeing up memory..." << endl;

	delete currnode;

}

bool get_consent() {
	cout << "Do you wish to continue?" << endl;
	cout << "Press y to continue, press n to exit the program" << endl;

	char proceed_choice;
	cin >> proceed_choice;

	
	bool consent;

	if (proceed_choice == 'y' || proceed_choice == 'Y') {
		consent = true;
	}
	else if (proceed_choice == 'n' || proceed_choice == 'N') {
		consent = false;
	}
	
	return consent;
	
}

void show_menu() {
	cout << "1. Press E to enter data" << endl;
	cout << "2. Press X to delete data" << endl;
	cout << "3. Press I to insert data at a specific location" << endl;
	cout << "4. Press D to display data" << endl;
}

char get_choice() {

	cout << "Enter your choice " << endl;

	char choice;

	cin >> choice;

	return choice;

}

int main() {

	cout << "Welcome to link list program \n";

	prevnode = new linkedList;
	prevnode = NULL;

	rootnode = new linkedList;
	rootnode = NULL;

	while (get_consent()) {

		show_menu();

		switch (get_choice()) {
		case 'e':
		case 'E':
			add_data_to_link_list();
			break;
		case 'x':
		case 'X':
			delete_data_from_link_list();
			break;
		case 'i':
		case 'I':
			insert_data_at_location(8);
			break;
		case 'd':
		case 'D':
			display_data_in_link_list();
			break;

		}
	}

	cout << "Freeing memory..." << endl;
	delete prevnode;
	delete rootnode;
	cout << "Memory freed! Bye!" << endl;
	return (0);
}