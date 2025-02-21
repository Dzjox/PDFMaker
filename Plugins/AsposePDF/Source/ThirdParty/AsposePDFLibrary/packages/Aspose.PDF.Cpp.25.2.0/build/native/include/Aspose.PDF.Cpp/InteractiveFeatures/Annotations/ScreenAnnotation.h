#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/InteractiveFeatures/Annotations/Annotation.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class AnnotationSelector;
enum class AnnotationType;
class PdfAction;
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
} // namespace Pdf
} // namespace Aspose
namespace System
{
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// A screen annotation that specifies a region of a page upon which media clips may be played.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ScreenAnnotation final : public Aspose::Pdf::Annotations::Annotation, public Aspose::Pdf::Annotations::Annotation::ITitledAnnotation
{
    typedef ScreenAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::Annotation BaseType;
    typedef Aspose::Pdf::Annotations::Annotation::ITitledAnnotation BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::Annotation;
    
public:

    /// <summary>
    /// Gets the title of the screen annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Title() override;
    /// <summary>
    /// Sets the title of the screen annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Title(System::String value) override;
    /// <summary>
    /// Gets an action to be performed when the annotation is activated.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PdfAction> get_Action();
    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Annotations::AnnotationType get_AnnotationType() override;
    
    /// <summary>
    /// Creates new Screen annotation on the specified page.
    /// </summary>
    /// <param name="page">The document's page where annotation should be created.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    /// <param name="mediaFile">The path to multimedia file.</param>
    ASPOSE_PDF_SHARED_API ScreenAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, System::String mediaFile);
    
    /// <summary>
    /// Accepts visitor object to process the annotation.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(System::SharedPtr<AnnotationSelector> visitor) override;
    
protected:

    ScreenAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ScreenAnnotation, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document));
    
    virtual ASPOSE_PDF_SHARED_API ~ScreenAnnotation();
    
private:

    /// <summary>
    /// Sets an action to be performed when the annotation is activated.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Action(System::SharedPtr<PdfAction> value);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


