//============================================================================
// Name        : ReadingWritingBinaryFile.cpp
// Author      : Deepak Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

#pragma pack(push, 1)
struct Person {
	char name[60];
	int age;
	double weight;
};

#pragma pack(pop)

int main() {
	cout << sizeof(Person) << endl;
	string fileName = "test.bin";
	Person deepak = { "Deepak", 39, 75 };
	//Writing File
	ofstream outFile;
	outFile.open(fileName, ios::binary);
	if (outFile.is_open()) {
		outFile.write(reinterpret_cast<char *>(&deepak), sizeof(Person));
		outFile.close();
	} else {
		cout << "Unable to open file name: " << fileName << endl;
	}

	//Reading File
	Person deepakRead;

	ifstream inputFile;
	inputFile.open(fileName, ios::binary);
	if (inputFile.is_open()) {
		inputFile.read(reinterpret_cast<char *>(&deepakRead), sizeof(Person));
		inputFile.close();
	} else {
		cout << "Unable to open and Read file name: " << fileName << endl;
	}

	cout << deepakRead.name << ", " << deepakRead.age << ", " << deepakRead.weight<<endl;
	return 0;
}
