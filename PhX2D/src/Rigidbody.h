#pragma once
#include "Vector2.h"


class RigiddBody {
public:
	Vec2 position;
	Vec2 velocity;
	Vec2 acceleration;
	float mass;


	RigiddBody(float mass_, Vec2 pos = Vec2())
		: mass(mass_), position(pos), velocity(0, 0), acceleration(0, 0) {}



	void applyForce(const Vec2& force) {
		acceleration = acceleration + (force * (1.0f / mass));
	}


	void update(float dt) {
		velocity = velocity + acceleration * dt;
		position = position + velocity * dt;

		acceleration = Vec2(0, 0);
	
	}



};