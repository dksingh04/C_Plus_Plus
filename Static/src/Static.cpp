//============================================================================
// Name        : Static.cpp
// Author      : Deepak Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Test{
public:
	static int const MAX_VAL = 99;
private:
	static int count;

public:
	Test(){
		count++;
	}
	static void showInfo(){
		cout << count << endl;
	}
};

int Test::count=0;
int main() {
	Test::showInfo();
	//cout << "Count: " << Test::showInfo() <<endl;
	cout <<"MAX: " << Test::MAX_VAL<<endl;
	Test test1;
	Test::showInfo();
	Test test2;
	Test::showInfo();
	return 0;
}
