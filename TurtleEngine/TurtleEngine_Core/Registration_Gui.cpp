#include "pch.h"
#include <pybind11/pybind11.h>

#include "PythonRegistration.h"

#include "TurtleWindow.h"

namespace py = pybind11;

namespace turtle
{
	using namespace gui;

	namespace python
	{
		void Register_Turtle_Gui(py::module & m)
		{


			Register_Class<TurtleWindow>(m, "TurtleWindow")
				.def_static("New", &TurtleWindow::New)
				.def("Construct", &TurtleWindow::Construct)
				.def("DrawTestMesh", &TurtleWindow::DrawTestMesh)
				;


		}


	}
}
