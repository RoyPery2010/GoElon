#pragma once
#ifdef GOELON_PLATFORM_WINDOWS
	#ifdef GOELON_BUILD_DLL
		#define GOELON_API __declspec(dllexport)
	#else
		#define GOELON_API __declspec(dllimport)
	#endif
#else
	#error GoElon only supports Windows!
#endif