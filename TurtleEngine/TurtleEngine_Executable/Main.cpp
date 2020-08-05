#include <exception>
#include <iostream>

#include "TurtleWindowTest.h"
#include "PythonInterpreter.h"
#include "Element.h"

#include "Log.h"

#include <pybind11/pybind11.h>
#include <pybind11/embed.h>

using namespace turtle;
using namespace turtle::gui;
using namespace turtle::python;



int main()
{
	try
	{

		StrShell<Element> element = Element::New();
		//LogError(element->GetPosX());
		LogErr("Some shit happened");
		


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