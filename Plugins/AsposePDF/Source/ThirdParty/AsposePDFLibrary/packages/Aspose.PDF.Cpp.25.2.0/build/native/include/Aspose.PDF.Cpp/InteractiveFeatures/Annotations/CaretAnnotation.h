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
class Annotation;
class AnnotationSelector;
enum class AnnotationType;
enum class CaretSymbol;
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
class Rectangle;
namespace Tests
{
namespace Annotations
{
class CaretAnnotationTests;
} // namespace Annotations
} // namespace Tests
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
/// Class representing Caret annotation.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS CaretAnnotation final : public Aspose::Pdf::Annotations::MarkupAnnotation
{
    typedef CaretAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::MarkupAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Tests::Annotations::CaretAnnotationTests;
    
public:

    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Annotations::AnnotationType get_AnnotationType() override;
    /// <summary>
    /// Gets caret rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Rectangle> get_Frame();
    /// <summary>
    /// Sets caret rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Frame(System::SharedPtr<Rectangle> value);
    /// <summary>
    /// Gets symbol associated with caret.
    /// </summary>
    /// <see cref="CaretSymbol"></see>
    ASPOSE_PDF_SHARED_API CaretSymbol get_Symbol();
    /// <summary>
    /// Sets symbol associated with caret.
    /// </summary>
    /// <see cref="CaretSymbol"></see>
    ASPOSE_PDF_SHARED_API void set_Symbol(CaretSymbol value);
    
    /// <summary>
    /// Accepts visitor object to process the annotation.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(System::SharedPtr<AnnotationSelector> visitor) override;
    
    /// <summary>
    /// Constructor for usign in Generator.
    /// </summary>
    /// <param name="document">Document where annotation will be created.</param>
    ASPOSE_PDF_SHARED_API CaretAnnotation(System::SharedPtr<Document> document);
    /// <summary>
    /// Creates new Caret annotation on the specified page.
    /// </summary>
    /// <param name="page">Document's page where annotation should be created.</param>
    /// <param name="rect">Required rectangle that sets annotation's border.</param>
    ASPOSE_PDF_SHARED_API CaretAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
protected:

    ASPOSE_PDF_SHARED_API void WriteXfdf(System::SharedPtr<System::Xml::XmlWriter> writer) override;
    ASPOSE_PDF_SHARED_API void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader) override;
    
    /// <summary>
    /// Ititializes Caret annotation with engine annotation object.
    /// </summary>
    /// <param name="engineAnnot">Engine object that presents the annotation.</param>
    /// <param name="document">The Aspose.Pdf.Document object.</param>
    CaretAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CaretAnnotation, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document));
    
    virtual ASPOSE_PDF_SHARED_API ~CaretAnnotation();
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


