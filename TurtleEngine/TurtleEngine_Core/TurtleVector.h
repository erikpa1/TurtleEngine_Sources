#pragma once
#include "TurtleObject.h"

#include <vector>


namespace turtle
{
	template<typename TYPE>
	class TurtleExport TurtleVector : public TurtleObject
	{

	private:

		std::vector<TYPE> _vector;

	public:

		void PushBack(const TYPE & object)
		{
			_vector.push_back(object);
			_vector.in
		}

		void PushFront(const TYPE & object)
		{

		}




	};
}



