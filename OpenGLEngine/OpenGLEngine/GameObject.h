#pragma once
#include "Transform.h"

namespace Engine{
	class GameObject{
	public:
		Transform transform;
		const char* name;
		const char* tag;

		GameObject(){ this->name = "null"; this->tag = "untagged"; this->transform =* new Transform(); };
		GameObject(Transform transform, const char* name, const char* tag)
		{
			this->transform = transform;
			this->name = name;
			this->tag = tag;
		}
	};
};