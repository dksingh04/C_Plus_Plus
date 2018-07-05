//============================================================================
// Name        : WriteToFile.cpp
// Author      : Deepak Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ofstream of;
	string filename = "text.text";

	of.open(filename);
	if(of.is_open()){
		of << "Hello Writing First Time" << endl;
		of <<1234<<endl;
		of.close();

	}else{
		cout <<"Unable to open file"<<endl;
	}

	return 0;
}
