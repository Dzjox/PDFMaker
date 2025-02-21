#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Class representing color of the text.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS FontColor final : public System::Object
{
    typedef FontColor ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Green component of color.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Green() const;
    /// <summary>
    /// Green component of color.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Green(int32_t value);
    /// <summary>
    /// Red component of color.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Red() const;
    /// <summary>
    /// Red component of color.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Red(int32_t value);
    /// <summary>
    /// Blue component of color.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Blue() const;
    /// <summary>
    /// Blue component of color.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Blue(int32_t value);
    
    /// <summary>
    /// Initializes color with specified color components.
    /// </summary>
    /// <param name="r">Red component.</param>
    /// <param name="g">Green component.</param>
    /// <param name="b">Blue component.</param>
    ASPOSE_PDF_SHARED_API FontColor(int32_t r, int32_t g, int32_t b);
    /// <summary>
    /// Initializes color.
    /// </summary>
    ASPOSE_PDF_SHARED_API FontColor();
    
private:

    int32_t green;
    int32_t red;
    int32_t blue;
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


