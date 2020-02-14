#pragma once


namespace turtle
{
	namespace math
	{
		class Color;
	}

	namespace renderer
	{
		class Renderer
		{

		public:
			virtual void Construct() = 0;
			virtual void Destruct() = 0;
			virtual void ClearColor(const math::Color & color) = 0;
			virtual void Clear() = 0;
		};
	}
}


