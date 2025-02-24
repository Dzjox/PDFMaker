#pragma once
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Provides file and memory sources for external fonts.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IFontSources : public virtual System::Object
{
    typedef IFontSources ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Folders containing font files.
    /// All font files located in these folders are included in the collection. Folders that are recursively searched.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::String> get_FontFolders() = 0;
    /// <summary>
    /// Folders containing font files.
    /// All font files located in these folders are included in the collection. Folders that are recursively searched.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_FontFolders(System::ArrayPtr<System::String> value) = 0;
    /// <summary>
    /// A collection of fonts represented as byte arrays.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::ArrayPtr<uint8_t>> get_MemoryFonts() = 0;
    /// <summary>
    /// A collection of fonts represented as byte arrays.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_MemoryFonts(System::ArrayPtr<System::ArrayPtr<uint8_t>> value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


