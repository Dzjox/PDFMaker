#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

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
enum class HighlightingMode;
class IAppointment;
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
namespace Tests
{
namespace OriginalKit
{
namespace Old
{
namespace TestWei
{
class Wei_PdfContentEditor;
} // namespace TestWei
} // namespace Old
} // namespace OriginalKit
} // namespace Tests
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Represents either a hypertext link to a destination elsewhere in the document or an action to be performed.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS LinkAnnotation final : public Aspose::Pdf::Annotations::Annotation
{
    typedef LinkAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::Annotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Tests::OriginalKit::Old::TestWei::Wei_PdfContentEditor;
    
public:

    /// <summary>
    /// An action to be performed when the link annotation is activated.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PdfAction> get_Action();
    /// <summary>
    /// An action to be performed when the link annotation is activated.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Action(System::SharedPtr<PdfAction> value);
    /// <summary>
    /// A destination to be displayed when the annotation is activated.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<IAppointment> get_Destination();
    /// <summary>
    /// A destination to be displayed when the annotation is activated.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Destination(System::SharedPtr<IAppointment> value);
    /// <summary>
    /// The visual effect to be used when the mouse button is pressed or held down inside its active area.
    /// </summary>
    ASPOSE_PDF_SHARED_API HighlightingMode get_Highlighting();
    /// <summary>
    /// The visual effect to be used when the mouse button is pressed or held down inside its active area.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Highlighting(HighlightingMode value);
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
    /// Creates new Link annotation on the specified page.
    /// </summary>
    /// <param name="page">The document's page where annotation should be created.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    ASPOSE_PDF_SHARED_API LinkAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
protected:

    /// <summary>
    /// Ititializes Link annotation with engine annotation object.
    /// </summary>
    /// <param name="engineAnnot">Engine object that represents the annotation.</param>
    /// <param name="document">Document.</param>
    LinkAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(LinkAnnotation, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document));
    ASPOSE_PDF_SHARED_API bool AppearanceSupported() override;
    
    virtual ASPOSE_PDF_SHARED_API ~LinkAnnotation();
    
private:

    System::SharedPtr<PdfAction> _action;
    System::SharedPtr<IAppointment> _destination;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


