#include "pch.h"

#include "OpenGlRenderer.h"
#include "TurtleShader.h"

#include "SFML/OpenGL.hpp"
#include "SFML/Graphics.hpp"


using namespace sf;

namespace turtle
{
	namespace renderer
	{
		TurtleShader * TurtleShader::New(const String & vertex, const String & fragment)
		{
			return new TurtleShader(vertex, fragment);
		}

		TurtleShader::TurtleShader(const String & vertex, const String & fragment)
		{

			_shader = new Shader();

			if (sf::Shader::isAvailable())
			{
				Bool vertexStatus = _shader->loadFromFile("D:/TurtleEngine/TurtleEngine_Shaders/" + vertex, sf::Shader::Vertex);
				Bool fragmentStatus = _shader->loadFromFile("D:/TurtleEngine/TurtleEngine_Shaders/" + fragment, sf::Shader::Fragment);

				_loaded = vertexStatus && fragmentStatus;
			}

		}
		Bool TurtleShader::IsLoaded()
		{
			return _loaded;
		}
	}
}