#pragma once
#include "TurtleObject.h"


namespace sf
{
	class RenderWindow;
}

namespace turtle
{
	namespace renderer
	{
		class Renderer;
		class TurtleShader;
	}


	namespace gui
	{
		class TurtleExport TurtleWindow : public TurtleObject
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
			renderer::TurtleShader * _shader;

		public:

			void DrawTestMesh();

		private:

			Bool _running;



		};
	}
}

