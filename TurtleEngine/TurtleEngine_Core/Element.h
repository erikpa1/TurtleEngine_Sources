#pragma once
#include "TurtleObject.h"
#include <vector>

namespace turtle
{
	namespace gui
	{

		class Element : public TurtleObject
		{


		public:

			//Position
			void SetPosX(Int posX);
			void SetPosY(Int posY);

			Int GetPosX();
			Int GetPosY();

			//Size
			void SetSizeX(Int posX);
			void SetSizeY(Int posY);

			Double GetSizeX();
			Double GetSizeY();

			//Visibility
			void SetVisibility(Bool status);
			void Show();
			void Hide();

			Bool IsVisible();

			
		private:

			Int _posX = 0;
			Int _posY = 0;

			Double _sizeX = 0;
			Double _sizeY = 0;
			
			Bool _isVisible = true;

			String name;
			String id;



		private:

			std::vector<Element> _child;


						
		};
	}
}
