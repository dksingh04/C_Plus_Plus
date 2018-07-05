//============================================================================
// Name        : ReadFromFile.cpp
// Author      : Deepak Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<fstream>
using namespace std;

int main() {
	string inFileName = "text.text";
	ifstream inFile;
	inFile.open(inFileName);

	if (inFile.is_open()) {
		string line;
		while (!inFile.eof()) {
			getline(inFile, line);
			cout << line << endl;
		}

		inFile.close();
	}else{
		cout<<"Unable to open File: " << inFileName<<endl;
	}
	return 0;
}
