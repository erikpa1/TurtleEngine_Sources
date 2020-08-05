#pragma once
#include "pch.h"

#include "TurtleWindow.h"
#include "OpenGlRenderer.h"

#include "SFML/Graphics.hpp"
#include "SFML/OpenGL.hpp"

#include "DefaultMesh.h"
#include "Shape.h"
#include "TurtleShader.h"

#include "Element.h"


using namespace sf;
using namespace std;
using namespace turtle;
using namespace turtle::renderer;


namespace turtle
{
	namespace gui
	{

		StrShell<TurtleWindow> TurtleWindow::New()
		{
			return StrShare<TurtleWindow>();
		}

		TurtleWindow::TurtleWindow()
		{
			Construct();
		}

		void TurtleWindow::Construct()
		{
			LogInf("Constructing window with name: " << "MyWindow");

			_root = StrShare<Element>();
			_root->SetWindowParent(this);
			_root->SetSizeX(100);
			_root->SetSizeY(100);

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

			_shader = TurtleShader::New("Test.vert", "Test.frag");


			_running = true;





		}
		void TurtleWindow::Destruct()
		{
			_running = false;
			_renderer->Destruct();

			delete _window;


		}

		const StrShell<Element> & TurtleWindow::GetRoot()
		{
			return _root;
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


				_root->Draw();

				_window->display();


				//if (_shader->IsLoaded())
				//{
				//	sf::Shader::bind(_shader->GetShader());
				//}
				//_renderer->DrawMesh(mesh);
				//_renderer->DrawShape(shape);
				//_window->pushGLStates();	
				//_window->popGLStates();
				//_window->pushGLStates();
				//_window->popGLStates();

				//sf::CircleShape triangle(80, 3);		
				//sf::RenderStates states;
				//states.shader = _shader->GetShader();	
				//_window->draw(triangle, states);

				//_renderer->Clear();

			}
		}
		void TurtleWindow::StartDrawingCycle()
		{
			sf::Event event;
			while (_running)
			{

				while (_window->pollEvent(event))
				{
					if (event.type == sf::Event::Closed)
					{
						_running = false;
					}
					else if (event.type == sf::Event::Resized)
					{						
						_root->SetSizeX(_window->getSize().x);
						_root->SetSizeY(_window->getSize().y);
						//_renderer->ViewportResized(event.size.width, event.size.height);
					}
				}

				_root->Draw();
				_window->display();
			}
		}
		sf::RenderWindow * TurtleWindow::GetDrawer()
		{
			return _window;
		}
	}
}