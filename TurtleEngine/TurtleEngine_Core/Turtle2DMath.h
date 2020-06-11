#pragma once
#include "TurtleObject.h"

namespace turtle
{
	namespace math
	{
		class Math
		{
		public:
			template<typename TYPE>
			static Bool IsInRectangle(TYPE posX, TYPE posY, TYPE sizeX, TYPE sizeY, TYPE selectorX, TYPE selectorY)
			{
				return ((poxX >= selectorX && posX + sizeX <= selectorX) && (poxY <= selectorY && posY + sizeY >= selectorY))
			}

			template<typename TYPE>
			static Bool IsInCircle(TYPE posX, TYPE posY, TYPE radius, TYPE selectorX, TYPE selectorY)
			{
				return false;
			}
			
		};

	}
}



