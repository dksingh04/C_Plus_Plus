//============================================================================
// Name        : TemplateClass.cpp
// Author      : Deepak Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template<class T>
class Test{
private:
	T obj;
public:
	Test(T obj){
		this->obj = obj;
	}

	void print(){
		cout << obj <<endl;
	}
};
int main() {
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	Test<string> test("Hello");

	test.print();
	return 0;
}
