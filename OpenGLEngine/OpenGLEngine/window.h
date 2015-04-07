#pragma once
#include <iostream>
#include <GLFW\glfw3.h>

namespace Engine {

	class Window {
	public: 
		int width, height;
		const char* title;
		GLFWwindow* window;

		Window(int width, int height, const char* title);
		Window();

		bool init();
		void update();

		void create()
		{
			this->init();
			this->update();
		}
	};

};