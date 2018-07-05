//============================================================================
// Name        : NamespacesExample.cpp
// Author      : Deepak Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cat.h"
#include "Animal.h"
using namespace std;
using namespace cats;
using namespace jwp;

int main() {
	cats::Cat cat;
	cat.speak();

	jwp::Cat cat1;
	cat1.speak();

	return 0;
}
