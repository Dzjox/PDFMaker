#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Tests
{
class GraphicAbsorberTests;
class RegressionTests_v23_06;
namespace Text
{
class ParagraphAbsorberTests;
} // namespace Text
} // namespace Tests
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Drawing
{
class PointF;
} // namespace Drawing
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represent point with fractional coordinates.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Point final : public System::Object
{
    typedef Point ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tests::Text::ParagraphAbsorberTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v23_06;
    friend class Aspose::Pdf::Tests::GraphicAbsorberTests;
    
public:

    /// <summary>
    /// X coordinate value.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_X() const;
    /// <summary>
    /// X coordinate value.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_X(double value);
    /// <summary>
    /// Y coordinate value.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Y() const;
    /// <summary>
    /// Y coordinate value.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Y(double value);
    /// <summary>
    /// Gets point with zero coordinates.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Point> get_Trivial();
    
    /// <summary>
    /// Initializes new instance of the <see cref="Point"></see>.
    /// </summary>
    /// <param name="x">
    /// x coordinate value.
    /// </param>
    /// <param name="y">
    /// y coordinate value.
    /// </param>
    ASPOSE_PDF_SHARED_API Point(double x, double y);
    
    /// <summary>
    /// Converts point into System.Drawing.PointF object.
    /// </summary>
    /// <returns>PointF structure.</returns>
    ASPOSE_PDF_SHARED_API System::Drawing::PointF ToPoint();
    /// <summary>
    /// Calculates distance between two points.
    /// </summary>
    /// <param name="point1">The first point.</param>
    /// <param name="point2">The second point.</param>
    /// <returns>Distance between two points.</returns>
    static ASPOSE_PDF_SHARED_API double Distance(System::SharedPtr<Point> point1, System::SharedPtr<Point> point2);
    /// <summary>
    /// Return string represention current point.
    /// </summary>
    /// <returns>String, representing current poit.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    bool NearEqual(System::SharedPtr<Point> another, double delta);
    
private:

    double x, y;
    
    System::String ToString_NonConst();
    
};

} // namespace Pdf
} // namespace Aspose


