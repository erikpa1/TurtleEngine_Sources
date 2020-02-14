#include "pch.h"
#include "Mesh.h"

namespace turtle
{
	namespace renderer
	{
		Float * Mesh::GetVertices()
		{
			return _vertices;
		}
		Float * Mesh::GetVertexColors()
		{
			return _colors;
		}
	}
}


