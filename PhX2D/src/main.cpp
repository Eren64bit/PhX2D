#include <iostream>
#include "PhysicsWorld.h"

int main() {
	PhysicsWorld world(Vec2(0, 9.8f));
	RigiddBody ball(1.0f, Vec2(0, 0));
	world.addBody(&ball);


	for (int i = 0; i < 10; i++) {
		world.step(0.1f); // dt == 0.1s
		std::cout << "Time " << i * 0.1f << "s- Position: (" << ball.position.x << ", " << ball.position.y << ")\n";
	}

	return 0;
}