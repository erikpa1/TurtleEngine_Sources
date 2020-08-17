#include "pch.h"
#include "Paths.h"

#include <windows.h>

namespace turtle
{
	namespace filesystem
	{
		const String PathsManager::GetEnginePath()
		{
			HMODULE hModule = GetModuleHandle(nullptr);
			char path[256];
			::GetModuleFileNameA(hModule, path, sizeof(path));
			String str_path = path;

			const auto sequence = "TurtleEngine";
			const auto findResult = str_path.find(sequence);

			String real_path = str_path.substr(0, findResult + strlen(sequence)) + "\\";

			return real_path;
		}

		const String PathsManager::GetShadersPath()
		{
			return GetEnginePath() + "TurtleEngine_Shaders/";
		}
	}
}


