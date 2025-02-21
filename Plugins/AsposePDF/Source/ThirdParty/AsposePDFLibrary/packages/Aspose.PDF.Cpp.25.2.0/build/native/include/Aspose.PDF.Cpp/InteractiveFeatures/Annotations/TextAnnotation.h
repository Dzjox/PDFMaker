#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/InteractiveFeatures/Annotations/MarkupAnnotation.h"
#include "Aspose.PDF.Cpp/InteractiveFeatures/Annotations/Annotation.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class AnnotationSelector;
enum class AnnotationState;
enum class AnnotationStateModel;
enum class AnnotationType;
enum class TextIcon;
} // namespace Annotations
class Document;
namespace Engine
{
namespace Data
{
class IPdfObject;
} // namespace Data
} // namespace Engine
class Matrix;
class Operator;
class Page;
class Rectangle;
namespace Tests
{
namespace Annotations
{
class TextAnnotationTests;
} // namespace Annotations
namespace Facades
{
class DocumentTest;
} // namespace Facades
class MergePagesTests;
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
class RegressionTests_v22_07;
} // namespace Tests
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
class XmlWriter;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Represents a text annotation that is a 'sticky note' attached to a point in the PDF document.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TextAnnotation final : public Aspose::Pdf::Annotations::MarkupAnnotation
{
    typedef TextAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::MarkupAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Annotations::MarkupAnnotation;
    friend class Aspose::Pdf::Tests::Annotations::TextAnnotationTests;
    friend class Aspose::Pdf::Tests::OriginalKit::Old::TestWei::Wei_PdfContentEditor;
    friend class Aspose::Pdf::Tests::Facades::DocumentTest;
    friend class Aspose::Pdf::Tests::MergePagesTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v22_07;
    
public:

    /// <summary>
    /// Gets a flag specifying whether the annotation should initially be displayed open.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_Open();
    /// <summary>
    /// Sets a flag specifying whether the annotation should initially be displayed open.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Open(bool value);
    /// <summary>
    /// Gets an icon to be used in displaying the annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API TextIcon get_Icon();
    /// <summary>
    /// Sets an icon to be used in displaying the annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Icon(TextIcon value);
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
    /// Constructor for annotation when used in Generator.
    /// </summary>
    /// <param name="document">Document where text annotation will be created.</param>
    ASPOSE_PDF_SHARED_API TextAnnotation(System::SharedPtr<Document> document);
    /// <summary>
    /// Creates new Text annotation on the specified page.
    /// </summary>
    /// <param name="page">The document's page where annotation should be created.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    ASPOSE_PDF_SHARED_API TextAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
    /// <summary>
    /// Overrides the definition in the base class with an empty body.
    /// </summary>
    /// <param name="transform">Matrix specifying the transformation.</param>
    ASPOSE_PDF_SHARED_API void ChangeAfterResize(System::SharedPtr<Matrix> transform) override;
    
protected:

    /// <summary>
    /// Gets the state to which the original annotation should be set.
    /// </summary>
    AnnotationState get_State();
    /// <summary>
    /// Sets the state to which the original annotation should be set.
    /// </summary>
    void set_State(AnnotationState value);
    AnnotationStateModel get_StateModel();
    void set_StateModel(AnnotationStateModel value);
    
    ASPOSE_PDF_SHARED_API void WriteXfdf(System::SharedPtr<System::Xml::XmlWriter> writer) override;
    ASPOSE_PDF_SHARED_API void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader) override;
    
    /// <summary>
    /// Ititializes Text annotation with engine annotation object.
    /// </summary>
    /// <param name="engineAnnot">Engine object that represents the annotation.</param>
    /// <param name="document">The Aspose.Pdf.Document object.</param>
    TextAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TextAnnotation, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document));
    ASPOSE_PDF_SHARED_API bool AppearanceSupported() override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Annotation::AppearanceParameters> parameters, System::SharedPtr<Annotation> annotation) override;
    
    virtual ASPOSE_PDF_SHARED_API ~TextAnnotation();
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawKey();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawCross();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawCheck();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawCircle();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawComment();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawHelp();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawInsert();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawNewParagraph();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawNote();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawParagraph();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawStar();
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


