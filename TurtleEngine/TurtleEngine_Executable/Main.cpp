#include <exception>
#include <iostream>

#include "TurtleWindowTest.h"

using namespace turtle;
using namespace turtle::gui;


int main()
{
	try
	{
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
