#include "pch.h"
#include "WindowTest.h"
#include "Window.h"

#include <iostream>

namespace turtle
{
	namespace gui
	{
		void WindowTest::Construct()
		{
			const auto window = Window::New();
			window->Construct();

		}

		void WindowTest::DllTest()
		{
			std::cout << "Hello";

		}
	}
}


