#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "Aspose.PDF.Cpp/InteractiveFeatures/Annotations/TextMarkupAnnotation.h"
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
class Point;
class Rectangle;
namespace Tests
{
namespace Annotations
{
class StrikeOutAnnotationTests;
} // namespace Annotations
namespace OriginalKit
{
namespace Old
{
namespace TestAdds
{
class TestAdditional;
} // namespace TestAdds
} // namespace Old
} // namespace OriginalKit
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
class XmlWriter;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Represents a strikeout annotation that appears as a strikeout in the text of the document.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS StrikeOutAnnotation final : public Aspose::Pdf::Annotations::TextMarkupAnnotation
{
    typedef StrikeOutAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::TextMarkupAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Tests::Annotations::StrikeOutAnnotationTests;
    friend class Aspose::Pdf::Tests::OriginalKit::Old::TestAdds::TestAdditional;
    
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
    /// Creates new StrikeOut annotation on the specified page.
    /// </summary>
    /// <param name="page">The document's page where annotation should be created.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    ASPOSE_PDF_SHARED_API StrikeOutAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
protected:

    ASPOSE_PDF_SHARED_API void WriteXfdf(System::SharedPtr<System::Xml::XmlWriter> writer) override;
    
    /// <summary>
    /// Ititializes StrikeOut annotation with engine annotation object.
    /// </summary>
    /// <param name="engineAnnot">Engine object that presents the annotation.</param>
    /// <param name="document">The Aspose.Pdf.Document object.</param>
    StrikeOutAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(StrikeOutAnnotation, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document));
    ASPOSE_PDF_SHARED_API bool AppearanceSupported() override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Annotation::AppearanceParameters> parameters, System::SharedPtr<Annotation> annotation) override;
    
    virtual ASPOSE_PDF_SHARED_API ~StrikeOutAnnotation();
    
private:

    double distance(System::SharedPtr<Point> p1, System::SharedPtr<Point> p2);
    int32_t FindNearest(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Point>>> points, System::SharedPtr<Point> p);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Point>>> Sort(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Point>>> points);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


