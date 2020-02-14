#pragma once
#include "Mesh.h"

namespace turtle
{
	namespace renderer
	{
		class DefaultMesh : public Mesh
		{

		protected:

			DefaultMesh() = default;
			~DefaultMesh() = default;


		public:

			static DefaultMesh * New();
			void Construct();
			void Destruct();


		};

	}

}

