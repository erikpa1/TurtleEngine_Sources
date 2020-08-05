#include "pch.h"
#include "Turtle.h"


#include <pybind11/embed.h>
#include <pybind11/operators.h>
#include <pybind11/stl.h>

#include "PythonInterpreter.h"

namespace py = pybind11;

PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>, true);



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
			LogInf("Importing module Core.run");
			py::module::import("Core.run");

		}

	}
}



