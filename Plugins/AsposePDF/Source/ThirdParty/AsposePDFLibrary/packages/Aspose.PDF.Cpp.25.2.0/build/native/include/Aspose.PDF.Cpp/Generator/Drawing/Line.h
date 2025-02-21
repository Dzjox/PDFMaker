#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

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
/// Represents line.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Line final : public Aspose::Pdf::Drawing::Shape
{
    typedef Line ThisType;
    typedef Aspose::Pdf::Drawing::Shape BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::PageGenerator;
    
public:

    /// <summary>
    /// Gets a <see cref="PositionArray"></see> object that indicates the position array.The array is 
    /// composed by coordinates of each control point of the line. 
    /// directly.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<float> get_PositionArray() const;
    /// <summary>
    /// Sets a <see cref="PositionArray"></see> object that indicates the position array.The array is 
    /// composed by coordinates of each control point of the line. 
    /// directly.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PositionArray(System::ArrayPtr<float> value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Line"></see> class.
    /// </summary>
    /// <param name="positionArray">The line position array.</param>
    ASPOSE_PDF_SHARED_API Line(System::ArrayPtr<float> positionArray);
    
    ASPOSE_PDF_SHARED_API bool CheckBounds(double containerWidth, double containerHeight) override;
    
protected:

    Line();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Line, CODEPORTING_ARGS());
    ASPOSE_PDF_SHARED_API void GetPathOperators(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators) override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<Pdf::Rectangle> GetRect() override;
    ASPOSE_PDF_SHARED_API void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer) override;
    ASPOSE_PDF_SHARED_API void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader) override;
    
private:

    System::ArrayPtr<float> positionArray;
    
};

} // namespace Drawing
} // namespace Pdf
} // namespace Aspose


