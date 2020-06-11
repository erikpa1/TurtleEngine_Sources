#include "pch.h"
#include <pybind11/pybind11.h>

#include "PythonRegistration.h"

#include "TurtleWindow.h"

namespace py = pybind11;

namespace turtle
{
	namespace python
	{
		//Register_Class<TurtleWindow>(m, "TurtleWindow");
		int add(int i, int j)
		{
			return i + j;
		}

		PYBIND11_MODULE(example, m)
		{
			m.doc() = "pybind11 example plugin"; // optional module docstring

			m.def("add", &add, "A function which adds two numbers");
		}
	}
}
