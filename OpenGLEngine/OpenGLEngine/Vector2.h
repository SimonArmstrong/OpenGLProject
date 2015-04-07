#pragma once
#include <cmath>

namespace Vector {

	class Vector2{
	public:
		float x, y;
		float length = sqrt(this->x*this->x + this->y*this->y);
		Vector2(float x, float y){ this->x = x; this->y = y; };
		Vector2(){ this->x = 0; this->y = 0; };

		Vector2* add(Vector2 vec)
		{
			return new Vector2(this->x + vec.x, this->y + vec.y);
		}
		Vector2* subtract(Vector2 vec)
		{
			return new Vector2(this->x - vec.x, this->y - vec.y);
		}
		Vector2* multiply(Vector2 vec)
		{
			return new Vector2(this->x * vec.x, this->y * vec.y);
		}
		Vector2* divide(Vector2 vec)
		{
			return new Vector2(this->x / vec.x, this->y / vec.y);
		}

		Vector2* normalize()
		{
			return new Vector2(this->x / length, this->y / length);
		}

		Vector2* multiplyScalar(float val)
		{
			return new Vector2(this->x * val, this->y * val);
		}
	};
};