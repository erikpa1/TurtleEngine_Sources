#include <exception>
#include <iostream>

#include "TurtleWindowTest.h"

#include "PythonInterpreter.h"

using namespace turtle;
using namespace turtle::gui;
using namespace turtle::python;

int main()
{
	try
	{
		//PythonInterpreter interpeter;
		//interpeter.Construct();
		//interpeter.Run();

		TurtleWindowTest * windowTest = new TurtleWindowTest();
		windowTest->Construct();
		windowTest->RunTestDraw();
			   
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what();

	
	}


	return 0;
}
