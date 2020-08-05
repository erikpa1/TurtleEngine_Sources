#include "pch.h"
#include <pybind11/pybind11.h>

#include "PythonRegistration.h"

#include "TurtleWindow.h"
#include "Element.h"

namespace py = pybind11;

namespace turtle
{
	using namespace gui;

	namespace python
	{



		void Register_Turtle_Gui(py::module & m)
		{


			Register_StrShell_Class<TurtleWindow>(m, "TurtleWindow")
				.def_static("New", &TurtleWindow::New)
				.def("DrawTestMesh", &TurtleWindow::DrawTestMesh)
				.def("StartDrawingCycle", &TurtleWindow::StartDrawingCycle)
				.def("GetRoot", &TurtleWindow::GetRoot)
				;

			Register_StrShell_Class<Element>(m, "Element")
				.def_static("New", &Element::New)
				.def("SetSizeX", &Element::SetSizeX)
				.def("SetSizeY", &Element::SetSizeY)
				.def("SetSize", &Element::SetSize)
				.def("SetBackgroundColor", &Element::SetBackgroundColor)
				.def("AddElement", &Element::AddElement)

				;



		}


	}
}
