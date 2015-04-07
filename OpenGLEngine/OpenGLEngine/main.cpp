#include "window.h"
#include "Transform.h"
#include "Vector2.h"
#include "GameObject.h"

#define LOG(x) std::cout<<x<<std::endl;

int main()
{
	using namespace Engine;
	using namespace Vector;

	Window window(640, 480, "Window");
	Vector2 position(0, 0);
	Vector2 destination(10, 10);

	GameObject tile;

	tile.transform.position = *new Vector2(10, 190);

	LOG(tile.transform.position.length);

	window.create();

	return 0;
}