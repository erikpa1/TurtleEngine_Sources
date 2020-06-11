#pragma once
#include "TurtleObject.h"

namespace turtle
{
	namespace python
	{
		class TurtleExport PythonInterpreter : public TurtleObject
		{

		public:
			void Construct();
			void Destruct();

			void Run();

		};

	}
}

