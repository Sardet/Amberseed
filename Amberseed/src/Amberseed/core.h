#pragma once

#ifdef AS_PLATFORM_WINDOWS
	#ifdef AS_BUILD_DLL
		#define AMBER_API __declspec(dllexport)
	#else
		#define AMBER_API __declspec(dllimport)
	#endif
#else
	#error Amberseed is only available on Windows!
#endif
