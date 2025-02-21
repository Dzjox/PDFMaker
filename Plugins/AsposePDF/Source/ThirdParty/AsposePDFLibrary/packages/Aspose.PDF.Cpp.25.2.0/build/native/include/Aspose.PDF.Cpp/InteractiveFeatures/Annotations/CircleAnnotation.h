#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.PDF.Cpp/InteractiveFeatures/Annotations/CommonFigureAnnotation.h"
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
} // namespace Annotations
class Document;
namespace Engine
{
namespace Data
{
class IPdfObject;
} // namespace Data
} // namespace Engine
class Operator;
class Page;
class Rectangle;
namespace Tests
{
namespace Annotations
{
class CircleAnnotationTests;
} // namespace Annotations
} // namespace Tests
class XForm;
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
class XmlWriter;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class representing Circle annotation.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS CircleAnnotation final : public Aspose::Pdf::Annotations::CommonFigureAnnotation
{
    typedef CircleAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::CommonFigureAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Tests::Annotations::CircleAnnotationTests;
    
public:

    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Annotations::AnnotationType get_AnnotationType() override;
    
    /// <summary>
    /// Constructor for Circle annotation. 
    /// </summary>
    /// <param name="document">Document where annotation will be created.</param>
    ASPOSE_PDF_SHARED_API CircleAnnotation(System::SharedPtr<Document> document);
    
    /// <summary>
    /// Accepts visitor object to process the annotation.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(System::SharedPtr<AnnotationSelector> visitor) override;
    
    /// <summary>
    /// Creates new Circle annotation on the specified page.
    /// </summary>
    /// <param name="page">Document's page where annotation should be created.</param>
    /// <param name="rect">Required rectangle that sets annotation's border.</param>
    ASPOSE_PDF_SHARED_API CircleAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
protected:

    ASPOSE_PDF_SHARED_API void WriteXfdf(System::SharedPtr<System::Xml::XmlWriter> writer) override;
    
    /// <summary>
    /// Ititializes Caret annotation with engine annotation object.
    /// </summary>
    /// <param name="engineAnnot">Engine object that presents the annotation.</param>
    /// <param name="document">The Aspose.Pdf.Document object.</param>
    CircleAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CircleAnnotation, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document));
    ASPOSE_PDF_SHARED_API bool AppearanceSupported() override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<XForm> PrepareAppearance(System::String key, System::SharedPtr<Annotation> annotation) override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Annotation::AppearanceParameters> parameters, System::SharedPtr<Annotation> annotation) override;
    
    virtual ASPOSE_PDF_SHARED_API ~CircleAnnotation();
    
private:

    System::ArrayPtr<double> get_BoundFrame();
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


