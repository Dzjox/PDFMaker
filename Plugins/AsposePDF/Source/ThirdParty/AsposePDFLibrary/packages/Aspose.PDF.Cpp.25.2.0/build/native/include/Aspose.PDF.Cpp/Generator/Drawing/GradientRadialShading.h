#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

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
/// Represents gradient radial shading type.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS GradientRadialShading : public Aspose::Pdf::Drawing::PatternColorSpace
{
    typedef GradientRadialShading ThisType;
    typedef Aspose::Pdf::Drawing::PatternColorSpace BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets starting circle center point.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Point> get_Start() const;
    /// <summary>
    /// Sets starting circle center point.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Start(System::SharedPtr<Point> value);
    /// <summary>
    /// Gets ending circle center point.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Point> get_End() const;
    /// <summary>
    /// Sets ending circle center point.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_End(System::SharedPtr<Point> value);
    /// <summary>
    /// Gets starting circle radius.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_StartingRadius() const;
    /// <summary>
    /// Sets starting circle radius.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_StartingRadius(double value);
    /// <summary>
    /// Gets ending circle radius.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_EndingRadius() const;
    /// <summary>
    /// Sets ending circle radius.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_EndingRadius(double value);
    /// <summary>
    /// Gets start color.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_StartColor() const;
    /// <summary>
    /// Sets start color.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_StartColor(System::SharedPtr<Color> value);
    /// <summary>
    /// Gets end color.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_EndColor() const;
    /// <summary>
    /// Sets end color.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_EndColor(System::SharedPtr<Color> value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="GradientRadialShading"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API GradientRadialShading();
    /// <summary>
    /// Initializes a new instance of the <see cref="GradientRadialShading"></see> class.
    /// </summary>
    /// <param name="startColor">The starting circle color.</param>
    /// <param name="endColor">The ending circle color.</param>
    ASPOSE_PDF_SHARED_API GradientRadialShading(System::SharedPtr<Color> startColor, System::SharedPtr<Color> endColor);
    
protected:

    bool get_ExtendBeyondStart() const;
    void set_ExtendBeyondStart(bool value);
    bool get_ExtendBeyondEnd() const;
    void set_ExtendBeyondEnd(bool value);
    
private:

    System::SharedPtr<Point> start;
    System::SharedPtr<Point> end;
    System::SharedPtr<Color> startColor;
    System::SharedPtr<Color> endColor;
    double pr_StartingRadius;
    double pr_EndingRadius;
    bool extendBeyondStart;
    bool extendBeyondEnd;
    
};

} // namespace Drawing
} // namespace Pdf
} // namespace Aspose


