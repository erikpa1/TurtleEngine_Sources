#pragma once

namespace sf
{
	class RenderWindow;
	class Shape;
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
		class Element;

		class TurtleExport TurtleWindow
		{

		public:

			static StrShell<TurtleWindow> New();
			TurtleWindow();

			void Destruct();

		protected:

			void Construct();


		private:

			sf::RenderWindow * _window;
			renderer::Renderer * _renderer;
			renderer::TurtleShader * _shader;

			StrShell<Element> _root;

		public:

			const StrShell<Element> & GetRoot();

			void DrawTestMesh();
			void StartDrawingCycle();
			sf::RenderWindow * GetDrawer();


			void SetSize(Float sizeX, Float sizeY);
			Float2 GetSize();



		private:

			Bool _running;



		};
	}
}

