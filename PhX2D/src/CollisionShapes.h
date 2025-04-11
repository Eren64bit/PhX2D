#pragma once
#include <map>
#include <string>
#include "Vector2.h"

enum shapes {
	shape_1 = 0, //Box
	shape_2		 //Circle
};



std::map<shapes, std::string> shapeNames = {
	{shape_1, "Box"}, {shape_2, "Circle"}
};



class collisionShape {
public:
	Vec2 position;
};