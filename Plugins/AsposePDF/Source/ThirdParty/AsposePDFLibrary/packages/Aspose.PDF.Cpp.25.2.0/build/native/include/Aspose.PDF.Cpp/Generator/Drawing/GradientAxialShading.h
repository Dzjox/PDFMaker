#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/Generator/Drawing/PatternColorSpace.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Color;
class Point;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Drawing {

/// <summary>
/// Represents gradient axial shading class.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS GradientAxialShading : public Aspose::Pdf::Drawing::PatternColorSpace
{
    typedef GradientAxialShading ThisType;
    typedef Aspose::Pdf::Drawing::PatternColorSpace BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets start point.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Point>& get_Start() const;
    /// <summary>
    /// Sets start point.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Start(System::SharedPtr<Point> value);
    /// <summary>
    /// Gets end point.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Point>& get_End() const;
    /// <summary>
    /// Sets end point.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_End(System::SharedPtr<Point> value);
    /// <summary>
    /// Gets start color.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Color>& get_StartColor() const;
    /// <summary>
    /// Sets start color.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_StartColor(System::SharedPtr<Color> value);
    /// <summary>
    /// Gets end color.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Color>& get_EndColor() const;
    /// <summary>
    /// Sets end color.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_EndColor(System::SharedPtr<Color> value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="GradientAxialShading"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API GradientAxialShading();
    /// <summary>
    /// Initializes a new instance of the <see cref="GradientAxialShading"></see> class.
    /// </summary>
    /// <param name="startColor">The start point.</param>
    /// <param name="endColor">The end point.</param>
    ASPOSE_PDF_SHARED_API GradientAxialShading(System::SharedPtr<Color> startColor, System::SharedPtr<Color> endColor);
    
protected:

    bool get_ExtendBeyondStart() const;
    void set_ExtendBeyondStart(bool value);
    bool get_ExtendBeyondEnd() const;
    void set_ExtendBeyondEnd(bool value);
    
private:

    System::SharedPtr<Point> pr_Start;
    System::SharedPtr<Point> pr_End;
    System::SharedPtr<Color> pr_StartColor;
    System::SharedPtr<Color> pr_EndColor;
    bool extendBeyondStart;
    bool extendBeyondEnd;
    
};

} // namespace Drawing
} // namespace Pdf
} // namespace Aspose


