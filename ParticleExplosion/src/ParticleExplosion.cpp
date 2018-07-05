//============================================================================
// Name        : ParticleExplosion.cpp
// Author      : Deepak Singh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<SDL.h>
#include "Screen.h"
#include <math.h>
#include "Swarm.h"

using namespace std;
using namespace ds;
int main(int argc, char* argv[]) {
	Screen screen;
	if (!screen.init()) {
		cout << "Screen Initialization failed" << endl;
	}

	Swarm swarm;
	const Particle * const pParticles = swarm.getParticles();
	while (true) {
		int elapsed = SDL_GetTicks();
		unsigned char green = (1 + sin(elapsed * 0.0001)) * 128;
		unsigned char red = (1 + sin(elapsed * 0.0002)) * 128;
		unsigned char blue = (1 + sin(elapsed * 0.0003)) * 128;

		swarm.update(elapsed);
		for (int i = 0; i < Swarm::NPARTICLES; i++) {
			Particle particle = pParticles[i];

			int x = (particle.m_x + 1) * Screen::WIDTH/2;
			int y = particle.m_y * Screen::WIDTH/2 + Screen::HEIGHT/2;

			screen.setPixel(x, y, red, green, blue);
		}
		screen.boxBlur();
		screen.update();

		//Check for messages/events
		if (!screen.processEvents()) {
			break;
		}

	}
	screen.close();
	return 0;

}
