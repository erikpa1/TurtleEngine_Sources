#pragma once

namespace turtle
{
	namespace renderer
	{
		class Mesh
		{

		public:

			virtual Float * GetVertices();
			virtual Float * GetVertexColors();

		protected:

			Float * _vertices;
			Float * _colors;

		};

	}
}

