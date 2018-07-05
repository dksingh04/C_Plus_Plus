//============================================================================
// Name        : ComplexNumber.cpp
// Author      : Deepak Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Complex.h"

int main() {
	Complex c1(2, 3);
	Complex c2(3, 4);

	Complex c3 = c1+c2;

	Complex c4 = c3;

	cout << c1<<endl;

	cout << c4 << endl;

	cout << c4+c1+c2<<endl;

	Complex c5(3, 1);

	Complex c6 = c5 + 4;

	cout << c6 << endl;

	cout << 5.4 + c2 << endl;
	return 0;
}
