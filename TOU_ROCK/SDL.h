#pragma once
#include "SDL2-2.0.4/include/SDL.h"

#ifdef _MSC_VER
 
#if _MSC_VER < 1200
	#error
#else

	#ifdef _WIN32
		#pragma comment(lib,"SDL2-2.0.4/lib/x86/SDL2.lib")
		#pragma comment(lib,"SDL2-2.0.4/lib/x86/SDL2main.lib")
	#else
		#pragma comment(lib,"SDL2-2.0.4/lib/x64/SDL2.lib")
		#pragma comment(lib,"SDL2-2.0.4/lib/x64/SDL2main.lib")
	#endif

#endif

#endif