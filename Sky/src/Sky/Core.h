#pragma once

#ifdef SY_PLATFORM_WINDOWS
	#ifdef SY_BUILD_DLL
		#define SKY_API _declspec(dllexport)
	#else
		#define SKY_API _declspec(dllimport)
	#endif
#else
	#error Sky only supports windows!
#endif