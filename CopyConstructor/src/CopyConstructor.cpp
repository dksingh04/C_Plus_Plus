//============================================================================
// Name        : CopyConstructor.cpp
// Author      : Deepak Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal{
private:
	string name;
public:
	Animal(){cout <<"Animal Created.."<<endl;};
	Animal(const Animal& animal): name(animal.name){
		cout << "Animal created by copy Constructor.." <<endl;
		// You cannot call non const method in copy constructor.
	}
	~Animal(){
		cout <<"Object Destroyed!!"<<endl;
	}
	void setName(string name){
		this->name = name;
	}
	void speak(){
		cout <<this<<endl;
		cout <<"My Name is: "<<this->name<<endl;
	}
};
Animal * createAnimal(){
	Animal *ani = new Animal();
	ani->setName("Create Deepak");
	return ani;

}
int main() {

	Animal animal1;
	animal1.setName("Deepak");
	Animal animal2 = animal1;
	animal2.speak();
	animal2.setName("Anjali");

	animal1.speak();
	animal2.speak();

	// Creating object using new operator.
	Animal *newAnimal = new Animal();
	newAnimal->setName("New Deepak");
	newAnimal->speak();

	delete newAnimal; // destroy object

	Animal *fromCreate = createAnimal();
	fromCreate->speak();

	delete fromCreate;
	return 0;
}
