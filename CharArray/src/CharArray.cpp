//============================================================================
// Name        : CharArray.cpp
// Author      : Deepak Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	char texts[] = "hello";

	cout << texts << endl;

	for (unsigned int i = 0; i < sizeof(texts); i++) {
		cout << i << texts[i] << endl;
	}
	int k = 0;
	while (true) {
		if (texts[k] == 0) {
			break;
		}

		cout << texts[k] << flush;

		k++;
	}
	int value = 20;
	//const int * const pValue = &value; // constant pointer pointing to constant integer.
	int *pValue = &value;
	cout << *pValue << endl; //

	int num = 12;

	pValue = &num; // Error with this int * const pValue = &value; here constant is pointer
	*pValue = 12; // Error with this const int *pValue = &value; here int is const.
	cout << *pValue << endl;

	return 0;
}
