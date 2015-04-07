#include "window.h"
#include "Transform.h"
#include "Vector2.h"
#include "GameObject.h"

#define LOG(x) std::cout<<x<<std::endl;

float x = 0.f;
float y = 0.f;
float z = 0.f;

int main()
{
	using namespace Engine;
	using namespace Vector;

	Window window(1080, 720, "Envision");

	window.create();
	
	while (!glfwWindowShouldClose(window.window))
	{
		glfwSwapBuffers(window.window);
		glfwPollEvents();
	}

	return 0;
}