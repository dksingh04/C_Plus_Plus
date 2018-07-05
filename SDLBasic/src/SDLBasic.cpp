#include <iostream>
#include <SDL2/SDL.h>
using namespace std;

int main( int argc, char* args[] ){
	cout << "Hello World!!"<<endl;
	if(SDL_Init(SDL_INIT_AUDIO)<0){
			cout <<"SDL Init Failed"<<endl;
		}

		cout <<"SDL Init Succeeded"<<endl;

		SDL_Quit();
	return 0;
};
