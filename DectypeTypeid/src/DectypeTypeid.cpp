//============================================================================
// Name        : DectypeTypeid.cpp
// Author      : Deepak Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <typeinfo>
using namespace std;

template<class T, class S>
auto test(T v1, S v2)->decltype(v1 + v2){
	return v1+v2;
}

int get(){
	return 888;
}

auto test2()->decltype(get()){
	return get();
}
int main() {

	string value;
	cout<<typeid(value).name()<<endl;
	decltype(value) name = "Deepak";
	cout << name << endl;
// Use of auto
	auto intValue = 10;
	cout << intValue << endl;

	auto text="Hello";

	cout << text << endl;

	//cout << test("Hello", "World!") << endl;
	cout << test(5, 6) << endl;
	cout <<test2()<<endl;

	return 0;
}
