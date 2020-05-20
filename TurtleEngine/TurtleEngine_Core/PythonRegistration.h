#pragma once
#include "Turtle.h"

#include <pybind11/pybind11.h>

namespace py = pybind11;

namespace turtle
{
	namespace python
	{
		template<class MY_CLASS>
		void Register_Class(py::module & m, const String & className)
		{
			py::class_<MY_CLASS> myClass(m, className.c_str());
			return myClass;
		}
	}
}

