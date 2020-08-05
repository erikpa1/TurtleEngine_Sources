#include "pch.h"

#include "PythonInterpreter.h"

#include <pybind11/embed.h>
#include <pybind11/operators.h>
#include <pybind11/stl.h>


namespace py = pybind11;

namespace turtle
{
	namespace python
	{

		void RegisterModules(py::module & m);

		void PythonInterpreter::Construct()
		{
			try
			{
				Py_SetPath(L"C:/Work/TurtleEngine/TurtleEngine_Libraries/python/Lib");
				Py_SetProgramName(L"Turtle engine");
				py::initialize_interpreter();


				auto sys = py::module::import("sys");
				sys.attr("path").attr("insert")(0, "C:/Work/TurtleEngine/TurtleEngine_Scripts");

			}
			catch (const std::exception e)
			{
				LogErr(e.what());

			}
			catch (...)
			{
				LogErr("Some shit happened");
			}
		}

		void PythonInterpreter::Destruct()
		{
			Py_Finalize();
		}


		void PythonInterpreter::Register(pybind11::module & parentModule)
		{
			RegisterModules(parentModule);
		}

		void PythonInterpreter::Run()
		{


			py::module::import("Core.run");

		}

	}
}



