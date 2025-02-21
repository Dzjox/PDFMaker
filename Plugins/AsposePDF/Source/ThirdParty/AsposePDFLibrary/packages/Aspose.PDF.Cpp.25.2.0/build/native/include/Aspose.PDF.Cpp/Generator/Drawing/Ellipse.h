#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/Generator/Drawing/Shape.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Operator;
class PageGenerator;
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
/// Represents ellipse.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Ellipse final : public Aspose::Pdf::Drawing::Shape
{
    typedef Ellipse ThisType;
    typedef Aspose::Pdf::Drawing::Shape BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::PageGenerator;
    
public:

    /// <summary>
    /// Gets a float value that indicates the left position of the ellipse.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Left() const;
    /// <summary>
    /// Sets a float value that indicates the left position of the ellipse.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Left(double value);
    /// <summary>
    /// Gets a float value that indicates the bottom position of the ellipse.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Bottom() const;
    /// <summary>
    /// Sets a float value that indicates the bottom position of the ellipse.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Bottom(double value);
    /// <summary>
    /// Gets a float value that indicates the width of the ellipse.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Width() const;
    /// <summary>
    /// Sets a float value that indicates the width of the ellipse.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Width(double value);
    /// <summary>
    /// Gets a float value that indicates the height of the ellipse.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Height() const;
    /// <summary>
    /// Sets a float value that indicates the height of the ellipse.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Height(double value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Ellipse"></see> class.
    /// </summary>
    /// <param name="left">The left position of the ellipse.</param>
    /// <param name="bottom">The bottom position of the ellipse.</param>
    /// <param name="width">The width of the ellipse.</param>
    /// <param name="height">The height of the ellipse.</param>
    ASPOSE_PDF_SHARED_API Ellipse(double left, double bottom, double width, double height);
    
    ASPOSE_PDF_SHARED_API bool CheckBounds(double containerWidth, double containerHeight) override;
    
protected:

    Ellipse();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Ellipse, CODEPORTING_ARGS());
    ASPOSE_PDF_SHARED_API void GetPathOperators(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators) override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<Pdf::Rectangle> GetRect() override;
    ASPOSE_PDF_SHARED_API void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer) override;
    ASPOSE_PDF_SHARED_API void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader) override;
    
private:

    double left;
    double bottom;
    double width;
    double height;
    
};

} // namespace Drawing
} // namespace Pdf
} // namespace Aspose


