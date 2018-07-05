/*
 * Cat.h
 *
 *  Created on: Jan 11, 2018
 *      Author: Rajveer
 */

#ifndef CAT_H_
#define CAT_H_

using namespace std;

class Cat {
private:
	bool happy = true;
	string name;
public:
	void speak();
	void jump();
	void makeHappy();
	void makeSad();
	void setName(string name);
	string getName();
	Cat();
	~Cat();
};

#endif /* CAT_H_ */
