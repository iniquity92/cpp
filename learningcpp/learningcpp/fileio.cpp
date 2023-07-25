#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {

	char string[80]="Abhishek learns to code";

	std::cout << string << "\n";

	fstream f;

	f.open("newfile.txt", ios::in | ios::out | ios::trunc); //important to oppen file with either ios_base:app or ios_base:trunc

	int len = strlen(string);

	if (!f.fail()) {

		f.seekp(0);
		for (int i = 0; i < len; i++) {
			f.put(string[i]);
		}

		f.seekg(0);

		char ch;
		while(f) {
			f.get(ch);
			cout << ch;
		}

		cout << endl;

	}

	else {
		cout << "Opening of file failed - " << f.bad() << endl;
	}

	f.close();
	return (0);
}