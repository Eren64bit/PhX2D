#pragma once
#include <cmath>


struct Vec2
{
	float x, y;

		Vec2() : x(0), y(0) {}
		Vec2(float x_, float y_) : x(x_), y(y_) {}


		Vec2 operator+(const Vec2& other) const {
			return Vec2(x + other.x, y + other.y);
		}

		Vec2 operator-(const Vec2& other) const {
			return Vec2(x - other.x, y - other.y);
		}

		Vec2 operator*(float scalar) const {
			return Vec2(x * scalar, y * scalar);
		}

		float lenght() const {
			return std::sqrt(x * x + y * y);
		}

		Vec2 normalized() const {
			float len = lenght();
			if (len == 0) return Vec2(0, 0);
			return Vec2(x / len, y / len);
		}

		float dot(const Vec2& other) const {
			return x * other.x + y * other.y;
		}

};
