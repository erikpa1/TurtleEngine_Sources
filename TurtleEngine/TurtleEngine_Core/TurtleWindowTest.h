#pragma once
#include "TurtleObject.h"

namespace turtle
{
	namespace gui
	{
		class TurtleWindow;

		class TurtleExport TurtleWindowTest
		{

		public:

			TurtleWindowTest() = default;
			~TurtleWindowTest();

			void Construct();
			void RunTestDraw();

		private:

			TurtleWindow * _window;


		};

	}
}


