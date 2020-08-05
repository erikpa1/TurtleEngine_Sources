#pragma once
#include "Turtle.h"

namespace turtle
{
	namespace gui
	{
		class TurtleWindow;

		class TurtleExport TurtleWindowTest
		{

		public:

			TurtleWindowTest();
			~TurtleWindowTest();

			void Construct();
			void RunTestDraw();
			void RunButtonTestDraw();

		private:

			StrShell<TurtleWindow> _window;


		};

	}
}


