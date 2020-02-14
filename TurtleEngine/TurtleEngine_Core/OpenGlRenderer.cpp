#include "pch.h"
#include "OpenGlRenderer.h"
#include "Color.h"

#include "Mesh.h"
#include "DefaultMesh.h"

#include "SFML/OpenGL.hpp"
#include "SFML/System.hpp"

using namespace sf;
using namespace turtle;
using namespace turtle::math;
using namespace turtle::renderer;


namespace turtle
{
	namespace renderer
	{
		OpenGlRenderer * OpenGlRenderer::New()
		{
			return new OpenGlRenderer;
		}
		void OpenGlRenderer::Construct()
		{
			glEnable(GL_TEXTURE_2D);
		}

		void OpenGlRenderer::Destruct()
		{
		}

		void OpenGlRenderer::ClearColor(const math::Color & color)
		{

			
		}

		void OpenGlRenderer::Clear()
		{
			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		}

		void OpenGlRenderer::ViewportResized(Double width, Double height)
		{
			glViewport(0, 0, width, height);
		}

		void OpenGlRenderer::DrawMesh(renderer::Mesh * mesh)
		{
			if (mesh != nullptr)
			{
				Float * vertices = mesh->GetVertices();
				Float * colors = mesh->GetVertexColors();

				if (vertices == nullptr || colors == nullptr)
				{
					return;
				}

				glMatrixMode(GL_PROJECTION);
				glLoadIdentity();

				GLfloat ratio = static_cast<float>(800) / 600;
				glFrustum(-ratio, ratio, -1.f, 1.f, 1.f, 500.f);

				glEnableClientState(GL_VERTEX_ARRAY);
				glEnableClientState(GL_COLOR_ARRAY);

				glVertexPointer(3, GL_FLOAT, 7 * sizeof(Float), vertices);
				glColorPointer(4, GL_FLOAT, 7 * sizeof(Float), colors);


				glDisableClientState(GL_NORMAL_ARRAY);
				glDisableClientState(GL_TEXTURE_COORD_ARRAY);

				glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);		
		
				glMatrixMode(GL_MODELVIEW);
				glLoadIdentity();

				glDrawArrays(GL_TRIANGLES, 0, 36);
				
			}
		}

	}

}

