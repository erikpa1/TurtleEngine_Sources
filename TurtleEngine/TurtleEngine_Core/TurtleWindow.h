#pragma once
#include "Turtle.h"

namespace sf
{
	class RenderWindow;
}

namespace turtle
{
	namespace renderer
	{
		class Renderer;
	}


	namespace gui
	{
		class TurtleExport TurtleWindow
		{

		public:

			static TurtleWindow * New();

			void Construct();
			void Destruct();

		protected:

			TurtleWindow() = default;

		private:

			sf::RenderWindow * _window;
			renderer::Renderer * _renderer;



		};
	}
}

