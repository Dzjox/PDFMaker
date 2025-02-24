#pragma once

#ifndef ASPOSE_SLIDES_API_SHARED_LIBRARY
#define ASPOSE_SLIDES_API_SHARED_LIBRARY true
#endif

#if defined(_MSC_VER)

    #define ASPOSE_SLIDES_API_LOCAL_API
    #define ASPOSE_SLIDES_API_SHARED_CLASS

    #if !ASPOSE_SLIDES_API_SHARED_LIBRARY
        #define ASPOSE_SLIDES_API_SHARED_API
        #define ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL() RTTI_INFO_DECL()
    #elif defined(ASPOSE_SLIDES_API_SHARED_EXPORTS)
        #define ASPOSE_SLIDES_API_SHARED_API __declspec(dllexport)
        #define ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL() RTTI_INFO_DECL_EX(ASPOSE_SLIDES_API_SHARED_API)
    #else
        #define ASPOSE_SLIDES_API_SHARED_API __declspec(dllimport)
        #define ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL() RTTI_INFO_DECL_EX(ASPOSE_SLIDES_API_SHARED_API)
    #endif

#elif defined (__APPLE__) || defined(__GNUC__)

    #define ASPOSE_SLIDES_API_SHARED_API __attribute__((visibility("default")))
    #define ASPOSE_SLIDES_API_LOCAL_API __attribute__((visibility("hidden")))
    #define ASPOSE_SLIDES_API_SHARED_CLASS __attribute__((visibility("default")))
    #define ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL() RTTI_INFO_DECL_EX(ASPOSE_SLIDES_API_SHARED_API)
    
#else
        
    #define ASPOSE_SLIDES_API_LOCAL_API
    #define ASPOSE_SLIDES_API_SHARED_CLASS
    #define ASPOSE_SLIDES_API_SHARED_API
    #define ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL() RTTI_INFO_DECL()
        
#endif

