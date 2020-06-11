#include "pch.h"
#include "Shape.h"
#include "SFML/OpenGL.hpp"

namespace turtle
{
	namespace renderer
	{
		Shape * Shape::New()
		{
			return new Shape();
		}
		void Shape::Construct()
		{
		}
		void Shape::Destruct()
		{
		}
		void Shape::Render()
		{
			glBegin(GL_TRIANGLES);
			glVertex2f(-0.5f, -0.5f);
			glVertex2f(-0.5f, 0.5f);
			glVertex2f(0.5f, 0.5f);
			glEnd();
		}
		void Shape::BindArray()
		{

		}
	}
}
