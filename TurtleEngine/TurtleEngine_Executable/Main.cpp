#include "WindowTest.h"
#include <exception>
#include <iostream>

using namespace turtle;
using namespace turtle::gui;


int main()
{
	try
	{
		WindowTest * windowTest = new WindowTest();
		windowTest->Construct();
	}
	catch (const std::exception & e)
	{
		std::cerr << e.what();
	}


	return 0;
}
