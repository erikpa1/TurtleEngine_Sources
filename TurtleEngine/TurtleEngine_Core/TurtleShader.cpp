#include "pch.h"

#include "OpenGlRenderer.h"
#include "TurtleShader.h"

#include "SFML/OpenGL.hpp"
#include "SFML/Graphics.hpp"

#include "Paths.h"

using namespace sf;

namespace turtle
{
	using namespace filesystem;

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
				const auto vertexPath = PathsManager::GetShadersPath() + vertex;
				const auto fragmentPath = PathsManager::GetShadersPath() + fragment;
				Bool vertexStatus = _shader->loadFromFile(vertexPath, sf::Shader::Vertex);
				Bool fragmentStatus = _shader->loadFromFile(fragmentPath, sf::Shader::Fragment);

				_loaded = vertexStatus && fragmentStatus;
			}

		}
		Bool TurtleShader::IsLoaded()
		{
			return _loaded;
		}
	}
}