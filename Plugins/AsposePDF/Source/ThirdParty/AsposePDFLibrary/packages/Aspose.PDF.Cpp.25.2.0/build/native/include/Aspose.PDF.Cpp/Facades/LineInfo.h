#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <drawing/color.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Represents the information of line. 
/// </summary>
class ASPOSE_PDF_SHARED_CLASS LineInfo final : public System::Object
{
    typedef LineInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets an array of numbers representing the alternating horizontal and vertical,coordinates, respectively, of each vertex.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<float> get_VerticeCoordinate() const;
    /// <summary>
    /// Sets an array of numbers representing the alternating horizontal and vertical,coordinates, respectively, of each vertex.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_VerticeCoordinate(System::ArrayPtr<float> value);
    /// <summary>
    /// Gets the color of a line.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::Drawing::Color get_LineColor() const;
    /// <summary>
    /// Sets the color of a line.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_LineColor(System::Drawing::Color value);
    /// <summary>
    /// Gets the width of a line. 
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_LineWidth() const;
    /// <summary>
    /// Sets the width of a line. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_LineWidth(int32_t value);
    /// <summary>
    /// Gets the visibility of a line. 
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_Visibility() const;
    /// <summary>
    /// Sets the visibility of a line. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Visibility(bool value);
    /// <summary>
    /// Gets the dash pattern of a line.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<int32_t> get_LineDashPattern() const;
    /// <summary>
    /// Sets the dash pattern of a line.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_LineDashPattern(System::ArrayPtr<int32_t> value);
    /// <summary>
    /// Gets the border style of a line, 0 represents solid, 1 represents dashed, 2 represents beleved, 3 represents insert, 4 represents underline.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_BorderStyle() const;
    /// <summary>
    /// Sets the border style of a line, 0 represents solid, 1 represents dashed, 2 represents beleved, 3 represents insert, 4 represents underline.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BorderStyle(int32_t value);
    
    ASPOSE_PDF_SHARED_API LineInfo();
    
private:

    System::ArrayPtr<float> verticeCoordinate;
    System::Drawing::Color lineColor;
    int32_t lineWidth;
    bool visibility;
    System::ArrayPtr<int32_t> lineDashPattern;
    int32_t borderStyle;
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


