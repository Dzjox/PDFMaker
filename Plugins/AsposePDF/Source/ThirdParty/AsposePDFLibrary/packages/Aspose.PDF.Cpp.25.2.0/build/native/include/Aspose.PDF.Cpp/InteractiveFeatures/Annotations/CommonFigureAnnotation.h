#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/InteractiveFeatures/Annotations/MarkupAnnotation.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class CircleAnnotation;
class SquareAnnotation;
} // namespace Annotations
class Color;
class Document;
namespace Engine
{
namespace Data
{
class IPdfObject;
} // namespace Data
} // namespace Engine
class Page;
class Rectangle;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Xml
{
class XmlReader;
class XmlWriter;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Abstract class representing common figure annotation.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS CommonFigureAnnotation : public Aspose::Pdf::Annotations::MarkupAnnotation
{
    typedef CommonFigureAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::MarkupAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::CircleAnnotation;
    friend class Aspose::Pdf::Annotations::SquareAnnotation;
    
public:

    /// <summary>
    /// Interior color with which to fill the annotation's rectangle or ellipse.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Color> get_InteriorColor();
    /// <summary>
    /// Interior color with which to fill the annotation's rectangle or ellipse.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_InteriorColor(System::SharedPtr<Aspose::Pdf::Color> value);
    /// <summary>
    /// The rectangle describing the numerical differences between two rectangles:
    /// the Rect entry of the annotation and the actual boundaries of the underlying square or circle.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Rectangle> get_Frame();
    /// <summary>
    /// The rectangle describing the numerical differences between two rectangles:
    /// the Rect entry of the annotation and the actual boundaries of the underlying square or circle.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Frame(System::SharedPtr<Rectangle> value);
    
    /// <summary>
    /// Constructor for using in Generator.
    /// </summary>
    /// <param name="document">Document where annotation will be placed.</param>
    ASPOSE_PDF_SHARED_API CommonFigureAnnotation(System::SharedPtr<Document> document);
    
protected:

    CommonFigureAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    /// <summary>
    /// Constructor.
    /// </summary>
    /// <param name="page">The page with which the annotation will be associated.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    ASPOSE_PDF_SHARED_API CommonFigureAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
    /// <summary>
    /// When overridden in a derived class, exports annotation attributes into XFDF.
    /// </summary>
    /// <param name="writer">Writer of destination file.</param>
    ASPOSE_PDF_SHARED_API void WriteXfdfAttributes(System::SharedPtr<System::Xml::XmlWriter> writer) override;
    /// <summary>
    /// When overridden in a derived class, import annotation attributes from XFDF.
    /// </summary>
    /// <param name="reader">Reader of XFDF file.</param>
    ASPOSE_PDF_SHARED_API void ReadXfdfAttributes(System::SharedPtr<System::Xml::XmlReader> reader) override;
    ASPOSE_PDF_SHARED_API void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader) override;
    
    virtual ASPOSE_PDF_SHARED_API ~CommonFigureAnnotation();
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


