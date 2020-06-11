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
			//Py_SetProgramName(nullptr);

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
				auto command = "10 + 2";
				Py_Initialize();
				PyRun_SimpleString(command);
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



