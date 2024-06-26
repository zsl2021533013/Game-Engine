#pragma once

#ifdef PLATFORM_WINDOW
	#ifdef BUILD_DLL
		#define ENGINE_API __declspec(dllexport)
	#else
		#define ENGINE_API __declspec(dllimport)
	#endif
#else
	#error This Engine Only Support Windows!
#endif

#define BIT(x) (1 << x)