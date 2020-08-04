#pragma once
#include "TurtleObject.h"
#include <pybind11/pybind11.h>


namespace turtle
{
	namespace python
	{
		class TurtleExport PythonInterpreter : public TurtleObject
		{

		public:
			static void Construct();
			static void Destruct();

			static void Register(pybind11::module & parentModule);
			static void Run();

		};

	}
}

