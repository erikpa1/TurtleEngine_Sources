#pragma once
#include "Turtle.h"

namespace turtle
{
	namespace math
	{
		class Color;
	}
	

	namespace renderer
	{
		class Mesh;
		class Shape;

		class Renderer
		{

		public:
			virtual void Construct() = 0;
			virtual void Destruct() = 0;
			virtual void ClearColor(const math::Color & color) = 0;
			virtual void Clear() = 0;
			virtual void ViewportResized(Double width, Double height) = 0;
			virtual void DrawMesh(renderer::Mesh * mesh) = 0;
			virtual void DrawShape(renderer::Shape * shape) = 0;
		};
	}
}


