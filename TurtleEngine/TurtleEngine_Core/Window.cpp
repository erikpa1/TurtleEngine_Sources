#pragma once
#include "pch.h"
#include "Window.h"

#include "GLFW/glfw3.h"
#include "glm/vec4.hpp"
#include "glm/mat4x4.hpp"

#include "vulkan/vulkan.h"

#include <iostream>

namespace turtle
{
	namespace gui
	{
		void Window::Construct()
		{
			glfwInit();

			glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
			GLFWwindow * window = glfwCreateWindow(800, 600, "Vulkan window", nullptr, nullptr);

			glm::mat4 matrix;
			glm::vec4 vec;
			auto test = matrix * vec;

			while (!glfwWindowShouldClose(window)) {
				LogError("xi");
				glfwPollEvents();
			}

			glfwDestroyWindow(window);

			glfwTerminate();



		}
		void Window::Destruct()
		{
		}
	}
}