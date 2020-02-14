#pragma once
#include "Renderer.h"

namespace turtle
{
	namespace math
	{
		class Color;
	}

	namespace renderer
	{
		class OpenGlRenderer : public Renderer
		{
		public:

			static OpenGlRenderer * New();
			void Construct() override;
			void Destruct() override;

		public:
			
			void ClearColor(const math::Color & color) override;
			void Clear() override;

		};

	}
}

