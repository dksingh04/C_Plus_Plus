//============================================================================
// Name        : Pointers.cpp
// Author      : Deepak Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void manipulate(int *nPValue){
	*nPValue = 20;
	 cout << "2. nPValue Reference: " << nPValue << endl;
	 cout << "2. nPValue Value: " << *nPValue << endl;
}

int main() {
	int nValue = 10;
	int *pnValue;
	pnValue = &nValue;

	cout <<"1. pnValue Pointer Ref: " <<pnValue<<endl;
	cout <<"1. pnValue Value: " <<*pnValue<<endl;
	manipulate(&nValue);
	cout << "3. nValue: " << nValue << endl;
	//cout << "3. nValue: " << nValue << endl;
	return 0;
}
