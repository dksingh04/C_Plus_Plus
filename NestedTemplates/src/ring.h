/*
 * ring.h
 *
 *  Created on: May 19, 2018
 *      Author: Rajveer
 */

#ifndef RING_H_
#define RING_H_

#include <iostream>
using namespace std;

template<class T>
class ring {
public:
	class iterator;
};

template<class T>
class ring<T>::iterator{
	public:
		void print(){
			cout <<"Hello from Iterator!!"<<T()<<endl;
		}
	};



#endif /* RING_H_ */
