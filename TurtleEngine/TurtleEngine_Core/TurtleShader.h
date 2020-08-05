#pragma once

namespace sf
{
	class Shader;
}

namespace turtle
{
	namespace renderer
	{
		class TurtleExport TurtleShader
		{
		public:

			static TurtleShader * New(const String & vertex, const String & fragment);

			TurtleShader(const String & vertex, const String & fragment);
			~TurtleShader() = default;

			inline sf::Shader * GetShader()
			{
				return _shader;
			}

			Bool IsLoaded();

		private:

			sf::Shader * _shader;
			Bool _loaded = false;




		};
	}
}