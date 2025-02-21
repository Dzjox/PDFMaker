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
/// Represents arc.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Path final : public Aspose::Pdf::Drawing::Shape
{
    typedef Path ThisType;
    typedef Aspose::Pdf::Drawing::Shape BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets shapes collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Shape>>> get_Shapes() const;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Path"></see> class.
    /// </summary>
    /// <param name="shapes">The shape array contains path segments set.</param>
    ASPOSE_PDF_SHARED_API Path(System::ArrayPtr<System::SharedPtr<Shape>> shapes);
    /// <summary>
    /// Initializes a new instance of the <see cref="Path"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API Path();
    
    ASPOSE_PDF_SHARED_API bool CheckBounds(double containerWidth, double containerHeight) override;
    
protected:

    ASPOSE_PDF_SHARED_API void GetPathOperators(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators) override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<Pdf::Rectangle> GetRect() override;
    ASPOSE_PDF_SHARED_API void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer) override;
    ASPOSE_PDF_SHARED_API void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader) override;
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Shape>>> shapes;
    
};

} // namespace Drawing
} // namespace Pdf
} // namespace Aspose


