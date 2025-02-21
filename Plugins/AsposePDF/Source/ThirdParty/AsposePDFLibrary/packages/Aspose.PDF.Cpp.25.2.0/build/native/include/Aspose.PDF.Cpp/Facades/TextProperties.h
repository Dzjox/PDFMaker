#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <drawing/color.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Represents text properties such as: text size, color, style etc.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TextProperties final : public System::Object
{
    typedef TextProperties ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets text color.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::Drawing::Color get_Color() const;
    /// <summary>
    /// Sets text color.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Color(System::Drawing::Color value);
    /// <summary>
    /// Gets a value that indicates whether the <see cref="Color"></see> property is specified.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsColorSpecified() const;
    /// <summary>
    /// Gets text size.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_TextSize() const;
    /// <summary>
    /// Sets text size.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TextSize(double value);
    /// <summary>
    /// Gets a value that indicates whether the <see cref="TextSize"></see> property is specified.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsTextSizeSpecified() const;
    
    /// <summary>
    /// Creates <see cref="TextProperties"></see> object for the specified text size
    /// </summary>
    /// <param name="textSize">Text size value.</param>
    ASPOSE_PDF_SHARED_API TextProperties(double textSize);
    
private:

    System::Drawing::Color color;
    double textSize;
    bool isColorSpecified;
    bool isTextSizeSpecified;
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


