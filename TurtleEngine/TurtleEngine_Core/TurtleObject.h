#pragma once
#include "Turtle.h"

namespace turtle
{
	class TurtleExport TurtleObject
	{

	public:

		void IncrementCount();
		void DecrementCount();

	private:
		Int _referenceCount = 0;

	};
}



