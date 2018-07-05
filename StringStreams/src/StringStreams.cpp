//============================================================================
// Name        : StringStreams.cpp
// Author      : Deepak Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>
using namespace std;

int main() {
	string name ="Deepak";
	int age = 38;
	stringstream ss;
	ss << "Name: ";
	ss << name;
	ss << " Age: ";
	ss << age;
	//string info = "Name: "+name+" Age: "+age;
	cout << ss.str() <<endl;
	return 0;
}
