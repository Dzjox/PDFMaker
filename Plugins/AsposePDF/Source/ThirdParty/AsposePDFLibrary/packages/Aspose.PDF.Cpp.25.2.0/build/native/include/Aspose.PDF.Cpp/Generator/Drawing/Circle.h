#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/Generator/Drawing/Shape.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class RegistrationMarkAnnotation;
} // namespace Annotations
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
/// Represents circle.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Circle final : public Aspose::Pdf::Drawing::Shape
{
    typedef Circle ThisType;
    typedef Aspose::Pdf::Drawing::Shape BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Annotations::RegistrationMarkAnnotation;
    
public:

    /// <summary>
    /// Gets a float value that indicates the x-coordinate of the center of the circle.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_PosX() const;
    /// <summary>
    /// Sets a float value that indicates the x-coordinate of the center of the circle.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PosX(double value);
    /// <summary>
    /// Gets a float value that indicates the y-coordinate of the center of the circle.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_PosY() const;
    /// <summary>
    /// Sets a float value that indicates the y-coordinate of the center of the circle.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PosY(double value);
    /// <summary>
    /// Gets a float value that indicates the radius of the circle.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Radius() const;
    /// <summary>
    /// Sets a float value that indicates the radius of the circle.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Radius(double value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Circle"></see> class.
    /// </summary>
    /// <param name="posX">The x-coordinate of the center of the circle.</param>
    /// <param name="posY">The y-coordinate of the center of the circle.</param>
    /// <param name="radius">The radius of the circle.</param>
    ASPOSE_PDF_SHARED_API Circle(float posX, float posY, float radius);
    
    ASPOSE_PDF_SHARED_API bool CheckBounds(double containerWidth, double containerHeight) override;
    
protected:

    Circle();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Circle, CODEPORTING_ARGS());
    ASPOSE_PDF_SHARED_API void GetPathOperators(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators) override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<Pdf::Rectangle> GetRect() override;
    ASPOSE_PDF_SHARED_API void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer) override;
    ASPOSE_PDF_SHARED_API void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader) override;
    
private:

    double posX;
    double posY;
    double radius;
    
};

} // namespace Drawing
} // namespace Pdf
} // namespace Aspose


