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
		class Mesh;

		class OpenGlRenderer : public Renderer
		{

		protected:

			OpenGlRenderer() = default;
			~OpenGlRenderer() = default;

		public:

			static OpenGlRenderer * New();
			void Construct() override;
			void Destruct() override;

		public:
			
			void ClearColor(const math::Color & color) override;
			void Clear() override;

			void ViewportResized(Double width, Double height) override;

			void DrawMesh(renderer::Mesh * mesh) override;
			void DrawShape(renderer::Shape * shape) override;



		};

	}
}

