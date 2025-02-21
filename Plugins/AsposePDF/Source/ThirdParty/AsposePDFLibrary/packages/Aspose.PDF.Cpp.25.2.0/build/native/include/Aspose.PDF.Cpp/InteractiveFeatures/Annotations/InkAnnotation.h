#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

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
enum class AnnotationType;
enum class CapStyle;
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
class Point;
class Rectangle;
namespace Tests
{
namespace Annotations
{
class InkAnnotationTests;
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
template <typename> class IList;
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
/// Represents a freehand "scribble" composed of one or more disjoint paths.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS InkAnnotation final : public Aspose::Pdf::Annotations::MarkupAnnotation
{
    typedef InkAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::MarkupAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Tests::Annotations::InkAnnotationTests;
    
public:

    /// <summary>
    /// Style of ink annotation line endings.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Annotations::CapStyle get_CapStyle();
    /// <summary>
    /// Style of ink annotation line endings.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CapStyle(Aspose::Pdf::Annotations::CapStyle value);
    /// <summary>
    /// Gets list of gestures that are independent lines which are represented by Point[] arrays.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IList<System::ArrayPtr<System::SharedPtr<Point>>>> get_InkList();
    /// <summary>
    /// Sets list of gestures that are independent lines which are represented by Point[] arrays.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_InkList(System::SharedPtr<System::Collections::Generic::IList<System::ArrayPtr<System::SharedPtr<Point>>>> value);
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
    /// Constructor for Ink annotation for Generator.
    /// </summary>
    /// <param name="document">Document where ink annotation will be created.</param>
    /// <param name="inkList">An array of Point[] arrays, each representing a stroked path.</param>
    ASPOSE_PDF_SHARED_API InkAnnotation(System::SharedPtr<Document> document, System::SharedPtr<System::Collections::Generic::IList<System::ArrayPtr<System::SharedPtr<Point>>>> inkList);
    /// <summary>
    /// Creates new Ink annotation on the specified page.
    /// </summary>
    /// <param name="page">The document's page where annotation should be created.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    /// <param name="inkList">An array of Point[] arrays, each representing a stroked path.</param>
    ASPOSE_PDF_SHARED_API InkAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, System::SharedPtr<System::Collections::Generic::IList<System::ArrayPtr<System::SharedPtr<Point>>>> inkList);
    
    /// <summary>
    /// Updates the points in InkList, according to the matrix transform.
    /// </summary>
    /// <param name="transform">Matrix specifying the transformation.</param>
    ASPOSE_PDF_SHARED_API void ChangeAfterResize(System::SharedPtr<Matrix> transform) override;
    
protected:

    ASPOSE_PDF_SHARED_API void WriteXfdf(System::SharedPtr<System::Xml::XmlWriter> writer) override;
    ASPOSE_PDF_SHARED_API void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader) override;
    
    /// <summary>
    /// Ititializes Ink annotation with engine annotation object.
    /// </summary>
    /// <param name="engineAnnot">Engine object that presents the annotation.</param>
    /// <param name="document">The Aspose.Pdf.Document object.</param>
    InkAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(InkAnnotation, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document));
    ASPOSE_PDF_SHARED_API void GeneratorUpdateRectangle(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect) override;
    ASPOSE_PDF_SHARED_API bool AppearanceSupported() override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Annotation::AppearanceParameters> parameters, System::SharedPtr<Annotation> annotation) override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<XForm> PrepareAppearance(System::String key, System::SharedPtr<Annotation> annotation) override;
    
    virtual ASPOSE_PDF_SHARED_API ~InkAnnotation();
    
private:

    static const System::String CapStyleEntry;
    Aspose::Pdf::Annotations::CapStyle _capStyle;
    
    System::SharedPtr<Rectangle> CalculateRect();
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


