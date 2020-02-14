#pragma once

#include "pch.h"
#include "TurtleWindow.h"
#include "OpenGlRenderer.h"

#include "SFML/Graphics.hpp"
#include "SFML/OpenGL.hpp"

#include "DefaultMesh.h"

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

			bool running = true;

			DefaultMesh * mesh = DefaultMesh::New();
			mesh->Construct();

			while (running)
			{

				sf::Event event;
				while (_window->pollEvent(event))
				{
					if (event.type == sf::Event::Closed)
					{
						running = false;
					}
					else if (event.type == sf::Event::Resized)
					{
						_renderer->ViewportResized(event.size.width, event.size.height);
					}
				}				

				_window->pushGLStates();
				_renderer->DrawMesh(mesh);
				_window->popGLStates();
				_window->pushGLStates();
				_window->popGLStates();
				//_renderer->Clear();

				_window->display();
			}

		}
		void TurtleWindow::Destruct()
		{

		}
	}
}