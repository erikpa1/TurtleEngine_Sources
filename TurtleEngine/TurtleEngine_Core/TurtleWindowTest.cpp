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
		}

		void TurtleWindowTest::Construct()
		{
			_window = StrShare<TurtleWindow>();
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


