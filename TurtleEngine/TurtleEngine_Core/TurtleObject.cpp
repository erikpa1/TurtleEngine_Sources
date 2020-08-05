#include "pch.h"
#include "TurtleObject.h"


namespace turtle
{
	void TurtleObject::Construct()
	{

	}
	void TurtleObject::Destruct()
	{

	}
	void TurtleObject::IncrementCount()
	{
		_referenceCount++;
	}

	void TurtleObject::DecrementCount()
	{
		_referenceCount--;
	}
	Int TurtleObject::GetReferenceCount()
	{
		return _referenceCount;
	}
}