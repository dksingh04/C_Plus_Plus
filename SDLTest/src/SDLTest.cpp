//============================================================================
// Name        : SDLTest.cpp
// Author      : Deepak Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <SDL.h>
#include <string.h>
using namespace std;

int main(int argc, char* argv[]) {
	const int SCREEN_WIDTH = 800;
	const int SCREEN_HEIGHT = 600;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		cout << "SDL Init Failed " << endl;
		return 1;
	}
	SDL_Window *window = 0;
	window = SDL_CreateWindow("Particle Fire Explosion", SDL_WINDOWPOS_CENTERED,
	SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

	if (window == NULL) {
		SDL_Quit();
		return 2;
	}
	SDL_Renderer *renderer = SDL_CreateRenderer(window, -1,
			SDL_RENDERER_PRESENTVSYNC);
	if (renderer == NULL) {
		cout << "Unable to create renderer" << endl;
		SDL_DestroyWindow(window);
		SDL_Quit();
		return 3;
	}
	SDL_Texture *texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ABGR8888,
			SDL_TEXTUREACCESS_STATIC, SCREEN_WIDTH, SCREEN_HEIGHT);
	if (texture==NULL){
		cout << "Unable to create texture" << endl;
		SDL_DestroyRenderer(renderer);
		SDL_DestroyWindow(window);
		SDL_Quit();
		return 4;
	}
	Uint32 *buffer = new Uint32[SCREEN_WIDTH*SCREEN_HEIGHT];
	//mem
	memset(buffer, 0xFF, SCREEN_WIDTH*SCREEN_HEIGHT*sizeof(Uint32));
	SDL_UpdateTexture(texture, NULL, buffer, SCREEN_WIDTH*sizeof(Uint32));
	SDL_RenderClear(renderer);
	SDL_RenderCopy(renderer,texture, NULL, NULL);
	SDL_RenderPresent(renderer);
	bool quit = false;
	SDL_Event event;
	while (!quit) {
		//Update particles
		//Draw Particles
		//Check for messages/events
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT) {
				quit = true;
			}
		}
	}
	// Delay so that we can see the window appear
	//SDL_Delay(3000);

	// Cleanup and Quit
	delete [] buffer;
	SDL_DestroyTexture(texture);
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
	return 0;
}
