#pragma once
#define TurtleExport __declspec(dllexport)

//External libraries
#include <iostream>
#include <memory>
#include <vector>


//My libraries
#include "MathDataTypes.h"


//Logging
#define LogErr(_x_) std::cout << "[E] " << __FUNCTION__ << ": " << __LINE__ << ": " << _x_ <<std::endl
#define LogInf(_x_) std::cout << "[I] " << __FUNCTION__ << ": " << __LINE__ << ": " << _x_ <<std::endl


//Memory
template<class T>
using StrShell = std::shared_ptr<T>;
template<class T>
using WeakShell = std::weak_ptr<T>;

template<class T, typename... Args>
StrShell<T> StrShare(Args ... args)
{
	return std::make_shared<T>(args...);
}



typedef double Double;
typedef float Float;
typedef int Int;
typedef unsigned int Uint;
typedef unsigned char Byte;



typedef bool Bool;

namespace turtle
{
	typedef std::string String;

	typedef Vec2<Double> Double2;
	typedef Vec3<Double> Double3;
	typedef Vec4<Double> Double4;

	typedef Vec2<Int> Int2;
	typedef Vec3<Int> Int3;
	typedef Vec4<Int> Int4;


	typedef Vec2<Float> Float2;
	typedef Vec3<Float> Float3;
	typedef Vec4<Float> Float4;


}





