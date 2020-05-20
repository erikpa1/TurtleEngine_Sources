#pragma once
#include "pch.h"

#include "TurtleWindow.h"
#include "OpenGlRenderer.h"

#include "SFML/Graphics.hpp"
#include "SFML/OpenGL.hpp"


#include "DefaultMesh.h"
#include "Shape.h"

using namespace sf;
using namespace std;
using namespace turtle;
using namespace turtle::renderer;


namespace turtle
{
	namespace gui
	{

		TurtleWindow * TurtleWindow::New()
		{
			return new TurtleWindow;
		}

		void TurtleWindow::Construct()
		{
			sf::ContextSettings settings;
			settings.depthBits = 24;
			settings.stencilBits = 8;
			settings.antialiasingLevel = 4;
			settings.majorVersion = 3;
			settings.minorVersion = 0;

			_window = new sf::RenderWindow(sf::VideoMode(800, 600), "Turtle Engine", sf::Style::Default, settings);
			_window->setActive(true);
			_window->setVerticalSyncEnabled(true);

			_renderer = OpenGlRenderer::New();
			_renderer->Construct();

			_running = true;





		}
		void TurtleWindow::Destruct()
		{
			_running = false;
			_renderer->Destruct();
			
			delete _window;

			
		}

		void TurtleWindow::DrawTestMesh()
		{
			DefaultMesh * mesh = DefaultMesh::New();
			mesh->Construct();

			renderer::Shape * shape = renderer::Shape::New();
			shape->Construct();

			while (_running)
			{

				sf::Event event;
				while (_window->pollEvent(event))
				{
					if (event.type == sf::Event::Closed)
					{
						_running = false;
					}
					else if (event.type == sf::Event::Resized)
					{
						_renderer->ViewportResized(event.size.width, event.size.height);
					}
				}


				//_renderer->DrawMesh(mesh);
				_renderer->DrawShape(shape);

				//_window->pushGLStates();	
				//_window->popGLStates();
				//_window->pushGLStates();
				//_window->popGLStates();
				//_renderer->Clear();


				_window->display();
			}
		}
	}
}