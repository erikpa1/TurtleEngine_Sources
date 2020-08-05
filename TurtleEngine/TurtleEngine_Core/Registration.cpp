#include "pch.h"
#include "PythonRegistration.h"

namespace turtle
{
	namespace python
	{
		void Register_Turtle_Gui(py::module & m);
		void Register_Turtle_Math(py::module & m);


		template<typename Data>
		void _LogErr(const Data & text)
		{
			LogErr(text);
		}

		template<typename Data>
		void _LogInf(const Data & text)
		{
			LogInf(text);
		}

		void Register_Logs(py::module & m)
		{
			m.def("LogErr", &_LogErr<String>);
			m.def("LogErr", &_LogErr<Double>);
			m.def("LogErr", &_LogErr<Int>);
			m.def("LogErr", &_LogErr<Float>);

			m.def("LogInf", &_LogInf<String>);
			m.def("LogInf", &_LogInf<Double>);
			m.def("LogInf", &_LogInf<Int>);
			m.def("LogInf", &_LogInf<Float>);



		}


		void RegisterModules(py::module & m)
		{
			LogInf("Starting to register modules");
			Register_Logs(m);

			auto math_module = m.def_submodule("Math");
			Register_Turtle_Math(math_module);

			auto gui_module = m.def_submodule("Gui");
			Register_Turtle_Gui(gui_module);


		}
	}
}