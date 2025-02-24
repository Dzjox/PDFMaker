#pragma once

#ifndef ASPOSE_SLIDES_SHARED_LIBRARY
#define ASPOSE_SLIDES_SHARED_LIBRARY true
#endif

#if ASPOSE_SLIDES_SHARED_LIBRARY && !defined(ASPOSE_SLIDES_UNIT_TEST)

    #if defined(_MSC_VER)

        #if true
            #if defined(ASPOSE_SLIDES_SHARED_EXPORTS)
                #define ASPOSE_SLIDES_SHARED_API __declspec(dllexport)
            #else
                #define ASPOSE_SLIDES_SHARED_API __declspec(dllimport)
            #endif
            #define ASPOSE_SLIDES_SHARED_CLASS
        #else
            #if defined(ASPOSE_SLIDES_SHARED_EXPORTS)
                #define ASPOSE_SLIDES_SHARED_CLASS __declspec(dllexport)
                #define ASPOSE_SLIDES_SHARED_API __declspec(dllexport)
            #else
                #define ASPOSE_SLIDES_SHARED_CLASS __declspec(dllimport)
                #define ASPOSE_SLIDES_SHARED_API __declspec(dllimport)
            #endif
        #endif

        #define ASPOSE_SLIDES_LOCAL_API
        #define ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL() RTTI_INFO_DECL_EX(ASPOSE_SLIDES_SHARED_API)

    #elif defined (__APPLE__)

        #define ASPOSE_SLIDES_SHARED_API __attribute__((visibility("default")))
        #define ASPOSE_SLIDES_LOCAL_API __attribute__((visibility("hidden")))
        #define ASPOSE_SLIDES_SHARED_CLASS __attribute__((visibility("default")))
        #define ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL() RTTI_INFO_DECL_EX(ASPOSE_SLIDES_SHARED_API)

    #elif defined(__GNUC__)

        #if defined(ASPOSE_SLIDES_SHARED_EXPORTS)
            #define ASPOSE_SLIDES_SHARED_API __attribute__((visibility("default")))
            #define ASPOSE_SLIDES_LOCAL_API __attribute__((visibility("hidden")))
            #define ASPOSE_SLIDES_SHARED_CLASS __attribute__((visibility("default")))
            #define ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL() RTTI_INFO_DECL_EX(ASPOSE_SLIDES_SHARED_API)
        #else
            #define ASPOSE_SLIDES_SHARED_API
            #define ASPOSE_SLIDES_SHARED_CLASS
            #define ASPOSE_SLIDES_LOCAL_API
            #define ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL() RTTI_INFO_DECL()
        #endif

    #else
        #define ASPOSE_SLIDES_LOCAL_API
        #define ASPOSE_SLIDES_SHARED_CLASS
        #define ASPOSE_SLIDES_SHARED_API
        #define ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL() RTTI_INFO_DECL()
    #endif

#else
    #define ASPOSE_SLIDES_LOCAL_API
    #define ASPOSE_SLIDES_SHARED_CLASS
    #define ASPOSE_SLIDES_SHARED_API
    #define ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL() RTTI_INFO_DECL()
#endif
