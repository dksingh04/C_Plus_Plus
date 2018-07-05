//============================================================================
// Name        : Classes.cpp
// Author      : Deepak Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cat.h"
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	Cat c;
	c.makeSad();
	c.jump();
	c.speak();
	c.setName("Deepak Singh");
	cout << "Name: " << c.getName() <<endl;
	return 0;
}
