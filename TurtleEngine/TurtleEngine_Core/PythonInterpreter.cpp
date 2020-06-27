#include "pch.h"

#include "PythonInterpreter.h"

#include <pybind11/pybind11.h>

namespace py = pybind11;

namespace turtle
{
	namespace python
	{



		void PythonInterpreter::Construct()
		{
			//Py_SetProgramName();
			//Py_SetPath(L"python/Lib");
		}

		void PythonInterpreter::Destruct()
		{
			Py_Finalize();
		}

		void PythonInterpreter::Run()
		{
			try
			{
				//auto command = "import example \n print(add(10 + 20))\n";
				//Py_SetPath(L"python/");

				Py_Initialize();
				Py_SetPath(L"D:/TurtleEngine/TurtleEngine_Libraries/python/python.exe");
				Py_SetProgramName(L"Turtle engine");  /* optional but recommended */


				auto sys = py::module::import("sys");
				sys.attr("path").attr("insert")(0, "D:\TurtleEngine\TurtleEngine_Scripts");


				//String order = "import sys \n  print(sys.path)";
				//PyRun_SimpleString(order.c_str());
			}
			catch (const std::exception e)
			{
				LogError(e.what());
	
			}
			catch (...)
			{
				LogError("Some shit happened");
			}


		}

	}
}



