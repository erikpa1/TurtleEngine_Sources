#include "pch.h"
#include "WindowTest.h"
#include "TurtleWindow.h"

#include <iostream>

namespace turtle
{
	namespace gui
	{
		void WindowTest::Construct()
		{
			const auto window = TurtleWindow::New();
			window->Construct();

		}

		void WindowTest::DllTest()
		{
			std::cout << "Hello";

		}
	}
}


