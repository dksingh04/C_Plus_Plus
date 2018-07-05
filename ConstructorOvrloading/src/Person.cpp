/*
 * Person.cpp
 *
 *  Created on: Jan 13, 2018
 *      Author: Rajveer
 */

#include <iostream>
#include <sstream>
#include "Person.h"
using namespace std;

Person::Person(){
	name="undefined";
	age=0;
	cout<<"Inside default Constructor" << endl;
}

string Person:: toString(){
	stringstream ss;
	ss << "Name: " << name << " Age: " << age;
	return ss.str();
}

Person::~Person(){
	cout <<"Person Destroyed" <<endl;
}





