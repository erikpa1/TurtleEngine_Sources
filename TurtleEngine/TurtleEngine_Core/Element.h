#pragma once
#include "Turtle.h"

namespace sf
{
	class RectangleShape;
}

namespace turtle
{
	namespace gui
	{
		class TurtleWindow;

		class TurtleExport Element
		{

		public:

			static StrShell<Element> New();

			Element();
			~Element();


			void AddElement(const StrShell<Element> & element);

		private:

			std::vector<StrShell<Element>> _elements;

		protected:
			void Construct();

		public:

			//Position

			void SetPosX(Int posX);
			void SetPosY(Int posY);

			Int GetPosX();
			Int GetPosY();

			void SetBackgroundColor(Byte r, Byte g, Byte b, Byte a);
			void SetBackgroundOutlineColor(Byte r, Byte g, Byte b, Byte a);
			void SetBackgroundOutlineTickness(Float tickness);

			//Size
			void SetSizeX(Float sizeX);
			void SetSizeY(Float sizeY);
			void SetSize(Float sizeX, Float sizeY);

			Double GetSizeX();
			Double GetSizeY();

			//Visibility
			void SetVisibility(Bool status);
			void Show();
			void Hide();

			Bool IsVisible();

			virtual Bool CheckSelection(Int mouseX, Int mouseY);

		public:

			void SetWindowParent(TurtleWindow * window);
			virtual void Draw();
			virtual void DrawInternal();
			virtual void Update();
			virtual void UpdateInternal();
			
		private:

			TurtleWindow * _parentWindow;

			sf::RectangleShape * _background;

			Int _posX = 0;
			Int _posY = 0;

			Float _sizeX = 0;
			Float _sizeY = 0;
			
			Bool _isVisible = true;

			String name;
			String id;

		private:

						
		};
	}
}
