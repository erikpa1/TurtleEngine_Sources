#pragma once
#include "pch.h"
#include <pybind11/pybind11.h>

namespace py = pybind11;

namespace turtle
{
	namespace python
	{
		template<class MY_CLASS>
		py::class_<MY_CLASS> Register_Class(py::module & m, const String & className)
		{
			py::class_<MY_CLASS> myClass(m, className.c_str());
			return myClass;
		}

		template<class CLASS_TYPE>
		py::class_<CLASS_TYPE, StrShell<CLASS_TYPE>> Register_StrShell_Class(py::module & m, const String & className)
		{
			py::class_<CLASS_TYPE, StrShell<CLASS_TYPE>> c(m, className.c_str());
			return c;
		}
	}
}

