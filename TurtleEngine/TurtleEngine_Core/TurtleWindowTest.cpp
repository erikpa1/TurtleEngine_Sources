#include "pch.h"
#include "TurtleWindowTest.h"
#include "TurtleWindow.h"

#include <iostream>

namespace turtle
{
	namespace gui
	{
		TurtleWindowTest::TurtleWindowTest()
		{

		}

		TurtleWindowTest::~TurtleWindowTest()
		{
			delete _window;
		}

		void TurtleWindowTest::Construct()
		{
			_window = TurtleWindow::New();
			_window->Construct();

		}

		void TurtleWindowTest::RunTestDraw()
		{
			//std::cout << "Before test";
			_window->DrawTestMesh();
		}

		void TurtleWindowTest::RunButtonTestDraw()
		{
		}

	}
}


