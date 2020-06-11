#pragma once

namespace turtle
{
	namespace renderer	
	{
		class Shape
		{
		public:

			static Shape * New();
			void Construct();
			void Destruct();

		protected:

			Shape() = default;
			~Shape() = default;

		public:

			void Render();
			void BindArray();
		};

	}
}

