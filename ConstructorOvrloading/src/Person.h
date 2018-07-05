/*
 * Person.h
 *
 *  Created on: Jan 13, 2018
 *      Author: Rajveer
 */

#ifndef PERSON_H_
#define PERSON_H_

#include<iostream>
using namespace std;

class Person{
private:
	int age;
	string name;

public:
	Person();
	Person(string name):name(name), age(0){
		cout << "Inside Name Constructor" << endl;
		cout << "Memory location: " <<this<<endl;
	};
	Person(string name, int age): name(name), age(age){
		cout << "Inside Name and Age Constructor" << endl;
	};
	string toString();

	~Person();
};



#endif /* PERSON_H_ */
