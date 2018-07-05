//============================================================================
// Name        : Variables.cpp
// Author      : Deepak Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {

	string strVal = "Hey this is String";
	cout << strVal <<endl;
	int numOfCats = 5;
	cout << "No. Of Cats : " << numOfCats << endl;

	cout << "Enter your Name: " << flush;
	string userName;
	//getline(cin, userName);
	//cin >> userName;

	cout <<INT64_MAX <<endl;

	cout << "You entered User Name : " <<userName<<endl;

	cout << "Size of Int: " << sizeof(int) << endl;
	cout << "Size of Int: " << sizeof(short int) << endl;

	//Floating variable types.
	float fVal = 17.4;
	cout <<fixed<< fVal << endl;
	if(fVal == 17.4){
		cout << "equals"<<endl;
	}else{
		cout << "Not eqals" <<endl;
	}
	bool bVal = false;
	cout << bVal << endl;

	char ch = 55;
	cout << ch << endl;

	wchar_t wCharVal = 'i';

	cout << wCharVal << endl;
	cout << sizeof(wchar_t) << endl;

	// Use of If-else

	string password = "pass";
	cout << "Please enter password: " <<endl;
	string input;
	cin >> input;

	if(input == password){
		cout <<"Matched"<<endl;
	}

	return 0;
}
