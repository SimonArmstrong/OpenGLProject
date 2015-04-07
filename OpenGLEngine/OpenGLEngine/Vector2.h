#pragma once

namespace Vector {

	class Vector2{
	public:
		float x, y;
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
	};
};