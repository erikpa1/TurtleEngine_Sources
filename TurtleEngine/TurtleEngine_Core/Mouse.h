#pragma once
#include "Turtle.h"

namespace turtle
{
	namespace gui
	{
		class Mouse
		{


		public:					   			 		

			Int GetMouseX();
			Int GetMouseY();

			Bool IsLeftClickPressed();
			Bool IsRightClickPressed();

			Bool IsMiddleMousePressed();
							   



		};
	}
}



