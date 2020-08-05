#pragma once
#include "Turtle.h"

namespace turtle
{
	class PathsManager
	{
	public:

		static const String GetEnginePath()
		{
			return "C:/Work/TurtleEngine/";
		};		
		
		static const String GetShadersPath()
		{
			return GetEnginePath() + "TurtleEngine_Shaders/";
		};
	};




}