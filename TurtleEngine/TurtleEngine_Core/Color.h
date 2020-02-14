#pragma once

namespace turtle
{
	namespace math
	{
		class Color
		{

		public:

			Color();
			Color(Double r, Double g, Double b, Double a);

		public:

			Double GetR();
			Double GetG();
			Double GetB();
			Double GetA();

		public:

			Double _r;
			Double _g;
			Double _b;
			Double _a;


		};
	}
}

