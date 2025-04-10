#pragma once
#include "Rigidbody.h"
#include <vector>



class PhysicsWorld {
public:
	std::vector<RigiddBody*> bodies;
	Vec2 gravity;


	PhysicsWorld(Vec2 gravity_ = Vec2(0, 9.8f)) : gravity(gravity_) {}

	void addBody(RigiddBody* body) {
	
		bodies.push_back(body);
	}


	void step(float dt) {
	
		for (auto body : bodies) {
			body->applyForce(gravity * body->mass);
			body->update(dt);
		}
	
	
	}


};