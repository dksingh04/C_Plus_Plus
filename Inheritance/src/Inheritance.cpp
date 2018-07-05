//============================================================================
// Name        : Inheritance.cpp
// Author      : Deepak Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal{
public:
	void speak(){
		cout <<"Base Class Animal class"<<endl;
	}
};

class Cat: public Animal{
public:
	void jump(){
		cout <<"Cat Jumping" << endl;
	}
};
int main() {

	Animal a;
	a.speak();
	Cat cat;
	cat.speak();
	cat.jump();
	return 0;
}
