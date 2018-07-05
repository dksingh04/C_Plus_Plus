/*
 * Complex.cpp
 *
 *  Created on: Feb 17, 2018
 *      Author: Rajveer
 */

#include "Complex.h"

ostream &operator<<(ostream &out, const Complex &c){
	out<<"("<< c.getReal()<<","<<c.getImaginary()<<")";

	return out;
}

Complex operator+(const Complex &c1, const Complex &c2){
	return Complex(c1.getReal()+c2.getReal(), c1.getImaginary()+c2.getImaginary());
}

Complex operator+(const Complex &c1, double d){
	return Complex(c1.getReal()+d, c1.getImaginary());
}

Complex operator+(double d, const Complex &c1){
	return Complex(c1.getReal()+d, c1.getImaginary());
}
Complex::Complex():real(0), imaginary(0) {

}

Complex::Complex(double real, double imaginary): real(real), imaginary(imaginary){

}
Complex::Complex(const Complex &other){
	cout <<"Copy Constructor" << endl;
	real = other.real;
	imaginary = other.imaginary;

}

const Complex &Complex::operator =(const Complex &other){
	cout << "Assignment Operator" <<endl;
	real = other.real;
	imaginary = other.imaginary;

	return *this;
}
Complex::~Complex() {
	// TODO Auto-generated destructor stub
}

