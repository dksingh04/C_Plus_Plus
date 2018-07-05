//============================================================================
// Name        : ParseTextFile.cpp
// Author      : Deepak Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	string fileName = "stats.text";
	ifstream inFile;
	inFile.open(fileName);
	if(!inFile.is_open()){
		return 1;
	}

	while(!inFile.eof()){
		string line;
		getline(inFile, line, ':');
		int population;
		inFile >> population;
		//inFile.get();
		inFile >> ws;
		if(!inFile){
			break;
		}
		cout <<"'"<< line <<"'" << " -- '" << population <<"'"<<endl;
	}
	return 0;
}
