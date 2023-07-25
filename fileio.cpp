#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

int main(){

    char string[80] = "Abhishek learns to code";

    fstream f;
    f.open("Test", ios::in | ios::out);

    int len = strlen(string);

    for(int i=0;i<len;i++){
        f.put(string[i]);
    }

    f.seekg(0);
    char ch;
    do{
        f.put(ch);
        cout << ch;
    }while(f);

    cout << endl;

    return(0);
}
