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

			TurtleWindowTest();
			~TurtleWindowTest();

			void Construct();
			void RunTestDraw();
			void RunButtonTestDraw();

		private:

			TurtleWindow * _window;


		};

	}
}


