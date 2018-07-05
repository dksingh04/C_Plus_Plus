/*
 * Particle.h
 *
 *  Created on: Jan 26, 2018
 *      Author: Rajveer
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace ds {

struct Particle {
	double m_x;
	double m_y;
private:
	void init();
	double m_speed;
	double m_direction;
public:
	Particle();
	virtual ~Particle();
	void update(int interval);
};

} /* namespace ds */

#endif /* PARTICLE_H_ */
