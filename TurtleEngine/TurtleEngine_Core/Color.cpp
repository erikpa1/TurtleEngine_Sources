#include "pch.h"
#include "Color.h"

namespace turtle
{
	namespace math
	{
		Color::Color()
		{
			_r = 0;
			_g = 0;
			_b = 0;
			_a = 0;
		}

		Color::Color(Double r, Double g, Double b, Double a)
		{
			_r = r;
			_g = g;
			_b = b;
			_a = a;
		}

		Double Color::GetR()
		{
			return _r;
		}

		Double Color::GetG()
		{
			return _g;
		}

		Double Color::GetB()
		{
			return _b;
		}

		Double Color::GetA()
		{
			return _a;
		}

	}
}

