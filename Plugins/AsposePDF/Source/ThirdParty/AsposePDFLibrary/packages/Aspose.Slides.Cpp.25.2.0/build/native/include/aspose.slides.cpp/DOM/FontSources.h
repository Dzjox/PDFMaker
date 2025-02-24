#pragma once
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <IFontSources.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Provides file and memory sources for external fonts.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS FontSources : public Aspose::Slides::IFontSources
{
    typedef FontSources ThisType;
    typedef Aspose::Slides::IFontSources BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Folders containing font files.
    /// All font files located in these folders are included in the collection. Folders that are recursively searched.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::String> get_FontFolders() override;
    /// <summary>
    /// Folders containing font files.
    /// All font files located in these folders are included in the collection. Folders that are recursively searched.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_FontFolders(System::ArrayPtr<System::String> value) override;
    /// <summary>
    /// A collection of fonts represented as byte arrays.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::ArrayPtr<uint8_t>> get_MemoryFonts() override;
    /// <summary>
    /// A collection of fonts represented as byte arrays.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_MemoryFonts(System::ArrayPtr<System::ArrayPtr<uint8_t>> value) override;
    
    /// <summary>
    /// Creates new default font options.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API FontSources();
    
private:

    System::ArrayPtr<System::String> m_fontFolders;
    System::ArrayPtr<System::ArrayPtr<uint8_t>> m_memoryFonts;
    
};

} // namespace Slides
} // namespace Aspose


