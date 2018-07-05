//============================================================================
// Name        : OperatorOverloading.cpp
// Author      : Deepak Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Test {
private:
	int id;
	string name;

public:
	Test() :
			id(0), name("") {

	}

	Test(int id, string name) {
		this->id = id;
		this->name = name;
	}

	void print() {
		cout << id << ": " << name << endl;
	}

	const Test &operator=(const Test &other) {
		cout << "Assignment Running" << endl;
		id = other.id;
		name = other.name;

		return *this;
	}

	friend ostream &operator<<(ostream &out, const Test &other){
		out << other.id << ": " <<other.name;

		return out;
	}

	//Copy Constructor

	Test(const Test &other) {
		cout << "Copy Constructor Running" << endl;

		*this = other;
	}

};
int main() {

	Test test1(10, "Deepak");
	test1.print();

	Test test2(20, "Raj");

	test2 = test1;

	test2.print();

	Test test3;

	test3.operator=(test2);

	test3.print();

	cout << endl;

	Test test4 = test1;

	cout << test4<<endl;
	//test4.print();

	return 0;
}
