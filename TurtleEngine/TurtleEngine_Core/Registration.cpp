#include "pch.h"
#include "PythonRegistration.h"

namespace turtle
{
	namespace python
	{
		void Register_Turtle_Gui(py::module & m);
		void Register_Turtle_Math(py::module & m);


		void RegisterModules(py::module & m)
		{
			auto math_module = m.def_submodule("Math");
			Register_Turtle_Math(math_module);

			auto gui_module = m.def_submodule("Gui");
			Register_Turtle_Gui(gui_module);


		}
	}
}