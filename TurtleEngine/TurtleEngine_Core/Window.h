#pragma once
#include "Turtle.h"


class GLFWwindow;

namespace turtle
{
	namespace renderer
	{
		class Renderer;
	}


	namespace gui
	{
		class TurtleExport Window
		{

		public:

			static Window * New();

			void Construct();
			void Destruct();

		protected:

			Window() = default;

		private:

			GLFWwindow * _window;
			renderer::Renderer * _renderer;



		};
	}
}

