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
	catch (std::exception e)
	{
		std::cout << e.what();
	}


	return 0;
}
