#include "pch.h"
#include "OpenGlRenderer.h"
#include "Color.h"

#include "GLFW/glfw3.h"


using namespace turtle;
using namespace turtle::math;


namespace turtle
{
	namespace renderer
	{
		OpenGlRenderer * OpenGlRenderer::New()
		{
			return new OpenGlRenderer;
		}
		void OpenGlRenderer::Construct()
		{
		}

		void OpenGlRenderer::Destruct()
		{
		}

		void OpenGlRenderer::ClearColor(const math::Color & color)
		{

			glClearColor(color._r, color._g, color._b, color._a);
		}

		void OpenGlRenderer::Clear()
		{
			glClear(GL_COLOR_BUFFER_BIT);
		}

	}

}

