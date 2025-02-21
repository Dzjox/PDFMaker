#pragma once

#ifdef ASPOSEHELPER_EXPORTS
#define ASPOSEHELPER_API __declspec(dllexport)
#else
#define ASPOSEHELPER_API __declspec(dllimport)
#endif

namespace AsposeHelper
{
	ASPOSEHELPER_API void CreatePDF();
	ASPOSEHELPER_API void CreatePPTX();
}