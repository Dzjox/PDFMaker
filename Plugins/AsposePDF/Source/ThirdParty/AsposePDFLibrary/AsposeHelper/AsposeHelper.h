#pragma once

#include <vector>

#ifdef ASPOSEHELPER_EXPORTS
#define ASPOSEHELPER_API __declspec(dllexport)
#else
#define ASPOSEHELPER_API __declspec(dllimport)
#endif

namespace AsposeHelper
{
	ASPOSEHELPER_API void CreatePDF(std::vector<std::string> Lines, std::string ImagePath);
	ASPOSEHELPER_API void CreatePPTX(std::vector<std::string> Lines, std::string ImagePath);
}