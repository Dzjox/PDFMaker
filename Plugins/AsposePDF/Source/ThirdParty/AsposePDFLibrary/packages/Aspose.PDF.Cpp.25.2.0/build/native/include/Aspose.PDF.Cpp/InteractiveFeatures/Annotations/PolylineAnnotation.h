#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/InteractiveFeatures/Annotations/PolyAnnotation.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class Annotation;
class AnnotationSelector;
enum class AnnotationType;
} // namespace Annotations
class Document;
namespace Engine
{
namespace Data
{
class IPdfObject;
} // namespace Data
} // namespace Engine
class Page;
class Point;
class Rectangle;
namespace Tests
{
namespace Annotations
{
class PolyLineAnnotationTests;
} // namespace Annotations
} // namespace Tests
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Xml
{
class XmlWriter;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Represents polyline annotation that is similar to polygon, except that the first and last vertex are not implicitly connected.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PolylineAnnotation final : public Aspose::Pdf::Annotations::PolyAnnotation
{
    typedef PolylineAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::PolyAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Tests::Annotations::PolyLineAnnotationTests;
    
public:

    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Annotations::AnnotationType get_AnnotationType() override;
    
    /// <summary>
    /// Accepts visitor object to process the annotation.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(System::SharedPtr<AnnotationSelector> visitor) override;
    
    /// <summary>
    /// Creates new Polyline annotation on the specified page.
    /// </summary>
    /// <param name="page">The document's page where annotation should be created.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    /// <param name="vertices">An array of polygon vertices points.</param>
    ASPOSE_PDF_SHARED_API PolylineAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, System::ArrayPtr<System::SharedPtr<Point>> vertices);
    
protected:

    ASPOSE_PDF_SHARED_API void WriteXfdf(System::SharedPtr<System::Xml::XmlWriter> writer) override;
    
    /// <summary>
    /// Ititializes Polyline annotation with engine annotation object.
    /// </summary>
    /// <param name="engineAnnot">Engine object that represents the annotation.</param>
    /// <param name="document">The Aspose.Pdf.Document object.</param>
    PolylineAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PolylineAnnotation, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document));
    
    virtual ASPOSE_PDF_SHARED_API ~PolylineAnnotation();
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


