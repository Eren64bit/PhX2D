#pragma once
#include "Vector2.h"

class worldSettings {
public:
	Vec2 gravity = Vec2(0, 9.8f);
	bool isGroundFrictionActive = false;
	bool isAirFrictionActive = false;
};