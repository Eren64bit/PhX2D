#pragma once
#include "Rigidbody.h"
#include <vector>
#include "worldSettings.h"


class PhysicsWorld : public worldSettings {
public:
	std::vector<RigiddBody*> bodies;


	PhysicsWorld(Vec2 gravity_ = Vec2(0, 9.8f)){
		this->gravity = gravity_;
	}

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