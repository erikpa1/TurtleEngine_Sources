#pragma once
#include "pch.h"
#include "Window.h"
#include "OpenGlRenderer.h"

#include "GLFW/glfw3.h"
#include "glm/vec4.hpp"
#include "glm/mat4x4.hpp"


#include "Color.h"

using namespace turtle;
using namespace turtle::renderer;
using namespace turtle::math;


namespace turtle
{
	namespace gui
	{
		Window * Window::New()
		{
			return new Window;
		}
		void Window::Construct()
		{
			glfwInit();

			glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);

			_window = glfwCreateWindow(800, 600, "Vulkan window", nullptr, nullptr);

			_renderer = OpenGlRenderer::New();

			glm::mat4 matrix;
			glm::vec4 vec;
			auto test = matrix * vec;

			while (!glfwWindowShouldClose(_window)) {

				Color red(1, 0, 0, 0);
				//_renderer->ClearColor(red);
				//_renderer->Clear();

				
				glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
				glClear(GL_COLOR_BUFFER_BIT);
			
				glfwSwapBuffers(_window);
				glfwPollEvents();
			}

			glfwDestroyWindow(_window);

			glfwTerminate();



		}
		void Window::Destruct()
		{
		}
	}
}