//============================================================================
// Name        : ConstructorOvrloading.cpp
// Author      : Deepak Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"
using namespace std;

int main() {
	Person person1;
	cout << person1.toString() <<endl;
	Person person2("Deepak");

	cout << person2.toString() << endl;

	Person person3("Anjali Singh", 36);

	cout << person3.toString() << endl;

	return 0;
}
