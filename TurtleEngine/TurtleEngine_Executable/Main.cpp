#include <exception>
#include <iostream>

#include "TurtleWindowTest.h"
#include "PythonInterpreter.h"
#include "Element.h"

#include <pybind11/pybind11.h>
#include <pybind11/embed.h>

using namespace turtle;
using namespace turtle::gui;
using namespace turtle::python;



int main()
{
	try
	{
		PythonInterpreter::Construct();
		PythonInterpreter::Run();

// 		TurtleWindowTest * windowTest = new TurtleWindowTest();
// 		windowTest->Construct();
// 		windowTest->RunTestDraw();

	}
	catch (const std::exception & e)
	{
		std::cerr << e.what();
	}


	return 0;
}

PYBIND11_EMBEDDED_MODULE(TurtleEngine, m)
{
	turtle::python::PythonInterpreter::Register(m);
}