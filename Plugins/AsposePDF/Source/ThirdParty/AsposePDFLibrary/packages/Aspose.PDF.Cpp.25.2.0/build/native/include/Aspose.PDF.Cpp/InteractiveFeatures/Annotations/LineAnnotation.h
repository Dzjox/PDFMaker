#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

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
enum class CaptionPosition;
enum class LineEnding;
enum class LineIntent;
class Measure;
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
class Matrix;
class Operator;
class Page;
class Point;
class Rectangle;
namespace Tests
{
namespace Annotations
{
class LineAnnotationTests;
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
template <typename, typename> class Dictionary;
template <typename> class List;
} // namespace Generic
} // namespace Collections
class String;
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
/// Class representing line annotation.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS LineAnnotation final : public Aspose::Pdf::Annotations::MarkupAnnotation
{
    typedef LineAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::MarkupAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Tests::Annotations::LineAnnotationTests;
    
public:

    /// <summary>
    /// Gets starting point of line.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Point> get_Starting();
    /// <summary>
    /// Sets starting point of line.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Starting(System::SharedPtr<Point> value);
    /// <summary>
    /// Gets line ending style for line starting point.
    /// </summary>
    ASPOSE_PDF_SHARED_API LineEnding get_StartingStyle();
    /// <summary>
    /// Sets line ending style for line starting point.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_StartingStyle(LineEnding value);
    /// <summary>
    /// Gets line ending point.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Point> get_Ending();
    /// <summary>
    /// Sets line ending point.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Ending(System::SharedPtr<Point> value);
    /// <summary>
    /// Gets ending style for end point of line.
    /// </summary>
    ASPOSE_PDF_SHARED_API LineEnding get_EndingStyle();
    /// <summary>
    /// Sets ending style for end point of line.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_EndingStyle(LineEnding value);
    /// <summary>
    /// Gets interior color of the annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Color> get_InteriorColor();
    /// <summary>
    /// Sets interior color of the annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_InteriorColor(System::SharedPtr<Aspose::Pdf::Color> value);
    /// <summary>
    /// Gets leader line length.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_LeaderLine();
    /// <summary>
    /// Sets leader line length.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_LeaderLine(double value);
    /// <summary>
    /// Gets length of leader line extension.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_LeaderLineExtension();
    /// <summary>
    /// Sets length of leader line extension.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_LeaderLineExtension(double value);
    /// <summary>
    /// Gets boolean flag which determinies is contents must be shown as caption.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_ShowCaption();
    /// <summary>
    /// Sets boolean flag which determinies is contents must be shown as caption.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ShowCaption(bool value);
    /// <summary>
    /// Gets leader line offset.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_LeaderLineOffset();
    /// <summary>
    /// Sets leader line offset.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_LeaderLineOffset(double value);
    /// <summary>
    /// Gets caption text offset from its normal position.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Point> get_CaptionOffset();
    /// <summary>
    /// Sets caption text offset from its normal position.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CaptionOffset(System::SharedPtr<Point> value);
    /// <summary>
    /// Gets annotation caption position.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Annotations::CaptionPosition get_CaptionPosition();
    /// <summary>
    /// Sets annotation caption position.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CaptionPosition(Aspose::Pdf::Annotations::CaptionPosition value);
    /// <summary>
    /// Measure units specifed for this annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Annotations::Measure> get_Measure();
    /// <summary>
    /// Measure units specifed for this annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Measure(System::SharedPtr<Aspose::Pdf::Annotations::Measure> value);
    /// <summary>
    /// Gets the intent of the line annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API LineIntent get_Intent();
    /// <summary>
    /// Sets the intent of the line annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Intent(LineIntent value);
    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Annotations::AnnotationType get_AnnotationType() override;
    
    /// <summary>
    /// Accepts visitor to annotation processing.
    /// </summary>
    /// <param name="visitor">Visitor object</param>
    ASPOSE_PDF_SHARED_API void Accept(System::SharedPtr<AnnotationSelector> visitor) override;
    
    /// <summary>
    /// Constructor for using with Generator.
    /// </summary>
    /// <param name="document">Document where annotation will be created.</param>
    /// <param name="start">Starting point. </param>
    /// <param name="end">Ending point. </param>
    ASPOSE_PDF_SHARED_API LineAnnotation(System::SharedPtr<Document> document, System::SharedPtr<Point> start, System::SharedPtr<Point> end);
    /// <summary>
    /// Creates new Line annotation on the specified page.
    /// </summary>
    /// <param name="page">The document's page where annotation should be created.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    /// <param name="start">A point, specifying the starting coordinate of the line.</param>
    /// <param name="end">A point, specifying the ending coordinate of the line.</param>
    ASPOSE_PDF_SHARED_API LineAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, System::SharedPtr<Point> start, System::SharedPtr<Point> end);
    
    /// <summary>
    /// Updates the Starting and Ending points, according to the matrix transform.
    /// </summary>
    /// <param name="transform">Matrix specifying the transformation.</param>
    ASPOSE_PDF_SHARED_API void ChangeAfterResize(System::SharedPtr<Matrix> transform) override;
    
protected:

    ASPOSE_PDF_SHARED_API void WriteXfdf(System::SharedPtr<System::Xml::XmlWriter> writer) override;
    ASPOSE_PDF_SHARED_API void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader) override;
    ASPOSE_PDF_SHARED_API void ReadXfdfElements(System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> table) override;
    
    /// <summary>
    /// Ititializes Line annotation with engine annotation object.
    /// </summary>
    /// <param name="engineAnnot">Engine object that represents the annotation.</param>
    /// <param name="document">The Aspose.Pdf.Document object.</param>
    LineAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(LineAnnotation, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document));
    ASPOSE_PDF_SHARED_API bool AppearanceSupported() override;
    ASPOSE_PDF_SHARED_API void GeneratorUpdateRectangle(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect) override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<XForm> PrepareAppearance(System::String key, System::SharedPtr<Annotation> annotation) override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Annotation::AppearanceParameters> parameters, System::SharedPtr<Annotation> annotation) override;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawArrow(System::SharedPtr<Point> p1, System::SharedPtr<Point> p2, bool closed);
    
    virtual ASPOSE_PDF_SHARED_API ~LineAnnotation();
    
private:

    System::SharedPtr<Aspose::Pdf::Annotations::Measure> _measure;
    
    double GetArrowExtensionSize();
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


