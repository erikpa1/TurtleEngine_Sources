#pragma once
#include "TurtleObject.h"

namespace turtle
{
	namespace gui
	{
		class Mouse : public TurtleObject
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



