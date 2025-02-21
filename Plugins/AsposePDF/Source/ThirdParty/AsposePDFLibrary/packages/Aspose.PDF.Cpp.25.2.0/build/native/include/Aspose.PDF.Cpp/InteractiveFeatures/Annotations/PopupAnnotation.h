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
class MarkupAnnotation;
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
class AnnotationTests;
class PopupAnnotationTests;
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
/// Represents the pop-up annotation that displays text in a pop-up window for entry and editing.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PopupAnnotation final : public Aspose::Pdf::Annotations::Annotation
{
    typedef PopupAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::Annotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Annotations::MarkupAnnotation;
    friend class Aspose::Pdf::Tests::Annotations::PopupAnnotationTests;
    friend class Aspose::Pdf::Tests::Annotations::AnnotationTests;
    
public:

    /// <summary>
    /// Gets a flag specifying whether the pop-up annotation should initially be displayed open.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_Open();
    /// <summary>
    /// Sets a flag specifying whether the pop-up annotation should initially be displayed open.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Open(bool value);
    /// <summary>
    /// Gets the parent annotation with which this pop-up annotation shall be associated.
    /// If this entry is present, the parent annotation's Contents, M, C, and T entries shall override those of the pop-up annotation itself.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Annotation> get_Parent();
    /// <summary>
    /// Sets the parent annotation with which this pop-up annotation shall be associated.
    /// If this entry is present, the parent annotation's Contents, M, C, and T entries shall override those of the pop-up annotation itself.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Parent(System::SharedPtr<Annotation> value);
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
    /// Constructor. for using in Generator.
    /// </summary>
    /// <param name="document">Document where new popup annotation will be created.</param>
    ASPOSE_PDF_SHARED_API PopupAnnotation(System::SharedPtr<Document> document);
    /// <summary>
    /// Creates new Popup annotation on the specified page.
    /// </summary>
    /// <param name="page">The document's page where annotation should be created.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    ASPOSE_PDF_SHARED_API PopupAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
protected:

    ASPOSE_PDF_SHARED_API void WriteXfdf(System::SharedPtr<System::Xml::XmlWriter> writer) override;
    ASPOSE_PDF_SHARED_API void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader) override;
    
    /// <summary>
    /// Ititializes Popup annotation with engine annotation object.
    /// </summary>
    /// <param name="engineAnnot">Engine object that represents the annotation.</param>
    /// <param name="document">Document.</param>
    PopupAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PopupAnnotation, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document));
    
    virtual ASPOSE_PDF_SHARED_API ~PopupAnnotation();
    
private:

    System::SharedPtr<Annotation> _parent;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


