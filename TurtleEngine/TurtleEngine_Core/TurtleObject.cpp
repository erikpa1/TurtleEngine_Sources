#include "pch.h"
#include "TurtleObject.h"


namespace turtle
{
	void TurtleObject::IncrementCount()
	{
		_referenceCount++;
	}

	void TurtleObject::DecrementCount()
	{
		_referenceCount--;
	}
}