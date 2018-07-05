//============================================================================
// Name        : Vector.cpp
// Author      : Deepak Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<string> strings;
	strings.push_back("one");
	strings.push_back("two");
	strings.push_back("three");
	//strings.
	//strings[3] = "dog"; // this is also posible;

	for (unsigned int i = 0; i < strings.size(); i++) {
		cout << strings[i] << endl;
	}

	for (vector<string>::iterator it = strings.begin(); it != strings.end();
			it++) {
		cout << *it << endl;
	}
	return 0;
}
