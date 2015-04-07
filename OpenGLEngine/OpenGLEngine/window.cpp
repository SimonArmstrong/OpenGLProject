#include "window.h"

namespace Engine {


	Window::Window()
	{
		this->title = "Window";
		this->width = 640;
		this->height = 480;
	}

	Window::Window(int width, int height, const char* title)
	{
		this->title = title;
		this->width = width;
		this->height = height;
	}

	bool Window::init()
	{
		if (!glfwInit())
		{
			std::cout << "GLFW Failed to initialize" << std::endl;
			glfwTerminate();
			return false;
		}

		this->window = glfwCreateWindow(this->width, this->height, this->title, NULL, NULL);

		if (!window)
		{
			std::cout << "Window Failed To Create" << std::endl;
			glfwTerminate();
			return false;
		}

		glfwMakeContextCurrent(this->window);

		return true;
	}

	void Window::update()
	{

	}
}