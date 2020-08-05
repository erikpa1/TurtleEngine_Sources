#pragma once

namespace turtle
{
	template<class TYPE>
	class Vec2
	{
	public:

		Vec2(TYPE x, TYPE y)
		{
			_x = x;
			_y = y;
		}

		TYPE _x;
		TYPE _y;

	};

	template<class TYPE>
	class Vec3
	{
	public:

		TYPE _x;
		TYPE _y;
		TYPE _z;
	};


	template<class TYPE>
	class Vec4
	{
	public:

		TYPE _x;
		TYPE _y;
		TYPE _z;
	};
}

