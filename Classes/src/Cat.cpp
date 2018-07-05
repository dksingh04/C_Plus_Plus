/*
 * Cat.cpp
 *
 *  Created on: Jan 11, 2018
 *      Author: Rajveer
 */

#include<iostream>

#include "Cat.h"

using namespace std;

Cat::Cat(){
	cout<<"Cat created" <<endl;
	happy = true;
}

Cat::~Cat(){
	cout<<"Cat destroyed" <<endl;
}
void Cat::speak(){
	if(happy){
		cout << "Meouu" << endl;
	}else{
		cout << "Not Happy" << endl;

	}
}

void Cat::jump(){
	cout <<"Jumping"<<endl;
}
void Cat::makeHappy(){
	happy = true;
}

void Cat::makeSad(){
	happy = false;
}

void Cat::setName(string name){
	this->name = name;
}

string Cat::getName(){
	return this->name;
}


