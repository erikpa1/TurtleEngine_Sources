#include "pch.h"
#include "PythonRegistration.h"




namespace py = pybind11;

namespace turtle
{

	namespace python
	{
		void Register_Turtle_Math(py::module & m)
		{


			Register_Class<Double2>(m, "Double2")
				;

			Register_Class<Double3>(m, "Double3")
				;

			Register_Class<Double4>(m, "Double4")
				;

			Register_Class<Int2>(m, "Int2")
				;

			Register_Class<Int3>(m, "Int3")
				;

			Register_Class<Int4>(m, "Int4")
				;

		}


	}
}
