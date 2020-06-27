#pragma once
#include "TurtleObject.h"

namespace turtle
{
	namespace python
	{
		class TurtleExport PythonInterpreter : public TurtleObject
		{

		public:
			static void Construct();
			static void Destruct();

			static void Run();

		};

	}
}

