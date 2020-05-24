#pragma once
#include "Turtle.h"

namespace turtle
{
	class TurtleExport TurtleObject
	{

	public:

		virtual void Construct();
		virtual void Destruct();

		void IncrementCount();
		void DecrementCount();

	private:

		Int _referenceCount = 0;

	};
}



