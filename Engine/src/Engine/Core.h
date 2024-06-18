#pragma once

#ifdef PLATFORM_WINDOW
	#ifdef BUILD_DLL
		#define ENGINE_API __declspec(dllimport)
	#else
		#define ENGINE_API __declspec(dllexport)
	#endif
#else
	#error This Engine Only Support Windows!
#endif

