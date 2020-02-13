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
			const auto window = new Window();
			window->Construct();

		}

		void WindowTest::DllTest()
		{
			std::cout << "Hello";

		}
	}
}


