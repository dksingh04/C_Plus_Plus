//============================================================================
// Name        : PointersAndArrays.cpp
// Author      : Deepak Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string texts[] = { "one", "two", "three" };
	string *pTexts = texts;
	cout << sizeof(texts) / sizeof(string) << endl;
	for (unsigned int i = 0; i < sizeof(texts) / sizeof(string); ++i) {
		cout << pTexts[i] << " " << flush;
	}

	cout << "********************************" << endl;

	for (unsigned int i = 0; i < sizeof(texts) / sizeof(string); ++i) {
		cout << *pTexts << " " << flush;
		// increment the pointers by one.
		pTexts++;
	}

	string *pElement = texts; // this can be done either &texts[0];
	string *pEnd = &texts[2];
	cout << "********************************" << endl;

	cout << *pElement << endl;
	cout << *pEnd << endl;

	while(true){
		cout << *pElement << " " <<flush;

		if(pElement == pEnd){
			break;
		}
		pElement++;
	}
	return 0;
}
