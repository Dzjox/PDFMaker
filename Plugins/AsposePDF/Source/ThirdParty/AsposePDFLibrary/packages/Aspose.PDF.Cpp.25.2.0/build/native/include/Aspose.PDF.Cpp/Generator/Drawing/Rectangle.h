#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/Generator/Drawing/Shape.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class GraphInfo;
class Operator;
class PageGenerator;
class Point;
class Rectangle;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace Xml
{
class XmlReader;
class XmlTextWriter;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Drawing {

/// <summary>
/// Represents rectangle.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Rectangle final : public Aspose::Pdf::Drawing::Shape
{
    typedef Rectangle ThisType;
    typedef Aspose::Pdf::Drawing::Shape BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::PageGenerator;
    
public:

    /// <summary>
    /// Gets a float value that indicates the radius of rectangle corners.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_RoundedCornerRadius() const;
    /// <summary>
    /// Sets a float value that indicates the radius of rectangle corners.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RoundedCornerRadius(double value);
    /// <summary>
    /// Gets a float value that indicates the left position of the rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Left() const;
    /// <summary>
    /// Sets a float value that indicates the left position of the rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Left(double value);
    /// <summary>
    /// Gets a float value that indicates the bottom position of the rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Bottom() const;
    /// <summary>
    /// Sets a float value that indicates the bottom position of the rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Bottom(double value);
    /// <summary>
    /// Gets a float value that indicates the width of the rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Width() const;
    /// <summary>
    /// Sets a float value that indicates the width of the rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Width(double value);
    /// <summary>
    /// Gets a float value that indicates the height of the rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Height() const;
    /// <summary>
    /// Sets a float value that indicates the height of the rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Height(double value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Rectangle"></see> class.
    /// </summary>
    /// <param name="left">The left position of the rectangle.</param>
    /// <param name="bottom">The bottom position of the rectangle.</param>
    /// <param name="width">The width of the rectangle.</param>
    /// <param name="height">The height of the rectangle.</param>
    ASPOSE_PDF_SHARED_API Rectangle(float left, float bottom, float width, float height);
    
    ASPOSE_PDF_SHARED_API bool CheckBounds(double containerWidth, double containerHeight) override;
    
protected:

    Rectangle();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Rectangle, CODEPORTING_ARGS());
    ASPOSE_PDF_SHARED_API void GetPathOperators(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators) override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<Pdf::Rectangle> GetRect() override;
    ASPOSE_PDF_SHARED_API void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer) override;
    ASPOSE_PDF_SHARED_API void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader) override;
    ASPOSE_PDF_SHARED_API void ClipShading(System::SharedPtr<Point> start, System::SharedPtr<Point> end) override;
    
private:

    double bottom;
    double height;
    double left;
    double width;
    double roundedCornerRadius;
    
    /// <summary>
    /// Add operators for rectangle path.
    /// </summary>        
    /// <param name="info">The border info.</param>
    /// <param name="topLeft">The left top point.</param>
    /// <param name="rightBottom">The right bottom point.</param>
    /// <param name="operators">The operators list to be added into the page's content.</param>
    /// <param name="radius">The border radius.</param>
    static void AddRoundedRectanglePath(System::SharedPtr<Aspose::Pdf::GraphInfo> info, System::SharedPtr<Point> topLeft, System::SharedPtr<Point> rightBottom, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, double radius);
    
};

} // namespace Drawing
} // namespace Pdf
} // namespace Aspose


