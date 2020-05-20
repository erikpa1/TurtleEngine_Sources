#include "pch.h"
#include <pybind11/pybind11.h>

#include "PythonRegistration.h"

#include "TurtleWindow.h"

namespace py = pybind11;

namespace turtle
{
	namespace python
	{
		Register_Class<TurtleWindow>(m, "TurtleWindow");
		
	}
}
