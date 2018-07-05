/*
 * Screen.h
 *
 *  Created on: Jan 25, 2018
 *      Author: Rajveer
 */

#ifndef SCREEN_H_
#define SCREEN_H_
#include <SDL.h>
#include<iostream>

using namespace std;

namespace ds {

class Screen {
public:
	const static int HEIGHT=600;
	const static int WIDTH=800;
private:
	SDL_Window *m_window;
	SDL_Renderer *m_rendrer;
	SDL_Texture *m_texture;
	Uint32 *m_buffer1;
	Uint32 *m_buffer2;

public:
	Screen();
	bool init();
	bool processEvents();
	void update();
	void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
	void close();
	void boxBlur();
	void clear();
	virtual ~Screen();
};

} /* namespace ds */

#endif /* SCREEN_H_ */
