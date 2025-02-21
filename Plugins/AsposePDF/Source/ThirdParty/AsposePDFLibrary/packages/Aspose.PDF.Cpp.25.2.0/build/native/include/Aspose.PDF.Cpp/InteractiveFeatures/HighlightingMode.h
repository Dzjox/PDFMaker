#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Enumerates the annotation's highlighting mode, the visual effect to be used when the mouse button is pressed or held down inside its active area.
/// </summary>
enum class HighlightingMode
{
    /// <summary>
    /// No highlighting.
    /// </summary>
    None,
    /// <summary>
    /// Invert the contents of the annotation rectangle.
    /// </summary>
    Invert,
    /// <summary>
    /// Invert the annotation's border.
    /// </summary>
    Outline,
    /// <summary>
    /// Display the annotation's down appearance, if any. If no down appearance is defined, offset the contents of the annotation rectangle to appear as if it were being pushed below the surface of the page.
    /// </summary>
    Push,
    /// <summary>
    /// Same as Push (which is preferred).
    /// </summary>
    Toggle
};


// C# preprocessor directive: #if __cplusplus


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class ASPOSE_PDF_SHARED_CLASS HighlightingModeConverter : public System::Object
{
    typedef HighlightingModeConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    static ASPOSE_PDF_SHARED_API System::String ToString(HighlightingMode value);
    static ASPOSE_PDF_SHARED_API HighlightingMode ToEnum(System::String value);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::Annotations::HighlightingMode>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Annotations::HighlightingMode, const char_t*>, 5>& values();
};



