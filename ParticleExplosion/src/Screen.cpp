/*
 * Screen.cpp
 *
 *  Created on: Jan 25, 2018
 *      Author: Rajveer
 */

#include "Screen.h"
#include <string.h>
using namespace std;
namespace ds {

Screen::Screen() :
		m_window(NULL), m_rendrer(NULL), m_texture(NULL), m_buffer1(NULL), m_buffer2(
		NULL) {
}

bool Screen::init() {

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		return false;
	}
	m_window = SDL_CreateWindow("Particle Fire Explosion",
	SDL_WINDOWPOS_UNDEFINED,
	SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_SHOWN);

	if (m_window == NULL) {
		SDL_Quit();
		return false;
	}
	m_rendrer = SDL_CreateRenderer(m_window, -1, SDL_RENDERER_PRESENTVSYNC);
	if (m_rendrer == NULL) {
		cout << "Unable to create renderer" << endl;
		SDL_DestroyWindow(m_window);
		SDL_Quit();
		return false;
	}
	m_texture = SDL_CreateTexture(m_rendrer, SDL_PIXELFORMAT_ABGR8888,
			SDL_TEXTUREACCESS_STATIC, WIDTH, HEIGHT);
	if (m_texture == NULL) {
		cout << "Unable to create texture" << endl;
		SDL_DestroyRenderer(m_rendrer);
		SDL_DestroyWindow(m_window);
		SDL_Quit();
		return 4;
	}
	m_buffer1 = new Uint32[WIDTH * HEIGHT];
	m_buffer2 = new Uint32[WIDTH * HEIGHT];

	//mem
	memset(m_buffer1, 0, WIDTH * HEIGHT * sizeof(Uint32));
	memset(m_buffer2, 0, WIDTH * HEIGHT * sizeof(Uint32));

	return true;
}

bool Screen::processEvents() {
	SDL_Event event;
	while (SDL_PollEvent(&event)) {
		if (event.type == SDL_QUIT) {
			return false;
		}
	}
	return true;
}
void Screen::boxBlur() {
	Uint32 *temp = m_buffer1;
	m_buffer1 = m_buffer2;
	m_buffer2 = temp;

	for (int y = 0; y < HEIGHT; y++) {
		for (int x = 0; x < WIDTH; x++) {
			/**
			 * 0 0 0
			 * 0 1 0
			 * 0 0 0
			 */
			int redTotal = 0;
			int greenTotal = 0;
			int blueTotal = 0;

			for (int row = -1; row <= 1; row++) {
				for (int col = -1; col <= 1; col++) {
					int currX = x + col;
					int currY = y + row;

					if (currX >= 0 && currX < WIDTH && currY >= 0
							&& currY < HEIGHT) {
						Uint32 color = m_buffer1[currY * WIDTH + currX];
						Uint8 red = color >> 24;
						Uint8 green = color >> 16;
						Uint8 blue = color >> 8;

						redTotal += red;
						greenTotal += green;
						blueTotal += blue;

					}
				}
			}
			Uint8 red = redTotal / 9;
			Uint8 green = greenTotal / 9;
			Uint8 blue = blueTotal / 9;
			setPixel(x, y, red, green, blue);
		}
	}
}
void Screen::setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue) {
	if (x < 0 || x >= WIDTH || y < 0 || y >= HEIGHT) {
		return;
	}

	Uint32 color = 0;
	color += red;
	color <<= 8;
	color += green;
	color <<= 8;
	color += blue;
	color <<= 8;
	//color += 0xFF;

	//cout<<hex<<color<<endl;

	m_buffer1[(y * WIDTH) + x] = color;

}

void Screen::update() {
	SDL_UpdateTexture(m_texture, NULL, m_buffer1, WIDTH * sizeof(Uint32));
	SDL_RenderClear(m_rendrer);
	SDL_RenderCopy(m_rendrer, m_texture, NULL, NULL);
	SDL_RenderPresent(m_rendrer);
}
void Screen::close() {
	delete[] m_buffer1;
	delete[] m_buffer2;
	SDL_DestroyTexture(m_texture);
	SDL_DestroyRenderer(m_rendrer);
	SDL_DestroyWindow(m_window);
	SDL_Quit();
}

void Screen::clear() {
	memset(m_buffer1, 0, WIDTH * HEIGHT * sizeof(Uint32));
}

Screen::~Screen() {
}

} /* namespace ds */
