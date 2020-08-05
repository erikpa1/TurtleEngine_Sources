#pragma once

#define TurtleExport __declspec(dllexport)

#include <iostream>

#include "MathDataTypes.h"

#include "StrongShell.h"
#include "WeakShell.h"


namespace turtle
{

	typedef double Double;
	typedef float Float;
	typedef int Int;
	typedef unsigned int Uint;

	typedef std::string String;

	typedef bool Bool;

	typedef Vec2<Double> Double2;
	typedef Vec3<Double> Double3;
	typedef Vec4<Double> Double4;

	typedef Vec2<Int> Int2;
	typedef Vec3<Int> Int3;
	typedef Vec4<Int> Int4;

}

