#pragma once
#include "Vector2.h"

namespace Engine {

	class Transform {
	public:
		Vector::Vector2 position;
		Vector::Vector2 rotation;
		Vector::Vector2 scale;

		Transform(Vector::Vector2 position,
				  Vector::Vector2 rotation,
				  Vector::Vector2 scale)
		{
			this->position = position;
			this->rotation = rotation;
			this->scale = scale;
		}

		Transform()
		{
			this->position = Vector::Vector2();
			this->rotation = Vector::Vector2();
			this->scale = Vector::Vector2();
		}
	};
};