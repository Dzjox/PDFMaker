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
enum class HorizontalAlignment;
class Operator;
class Page;
class Point;
class Rectangle;
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
/// Represents Redact annotation.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS RedactionAnnotation final : public Aspose::Pdf::Annotations::MarkupAnnotation
{
    typedef RedactionAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::MarkupAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::Annotation;
    
public:

    /// <summary>
    /// An array of 8xN numbers specifying the coordinates of content region that is intended to be removed. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::SharedPtr<Point>> get_QuadPoint();
    /// <summary>
    /// An array of 8xN numbers specifying the coordinates of content region that is intended to be removed. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_QuadPoint(System::ArrayPtr<System::SharedPtr<Point>> value);
    /// <summary>
    /// Gets the default appearance string to be used in formatting the text.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_DefaultAppearance();
    /// <summary>
    /// Sets the default appearance string to be used in formatting the text.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DefaultAppearance(System::String value);
    /// <summary>
    /// Gets color to fill annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Color> get_FillColor();
    /// <summary>
    /// Sets color to fill annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FillColor(System::SharedPtr<Aspose::Pdf::Color> value);
    /// <summary>
    /// Gets color of border which is drawn when redaction is not active.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Color> get_BorderColor();
    /// <summary>
    /// Sets color of border which is drawn when redaction is not active.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BorderColor(System::SharedPtr<Aspose::Pdf::Color> value);
    /// <summary>
    /// Gets text to print on redact annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_OverlayText();
    /// <summary>
    /// Sets text to print on redact annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OverlayText(System::String value);
    /// <summary>
    /// Gets font size for OverlayText.
    /// </summary>
    ASPOSE_PDF_SHARED_API float get_FontSize() const;
    /// <summary>
    /// Sets font size for OverlayText.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FontSize(float value);
    /// <summary>
    /// If true overlay text will be repated on the annotation. 
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_Repeat();
    /// <summary>
    /// If true overlay text will be repated on the annotation. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Repeat(bool value);
    /// <summary>
    /// Gets. Alignment of Overlay Text.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::HorizontalAlignment get_TextAlignment();
    /// <summary>
    /// Sets. Alignment of Overlay Text.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TextAlignment(Aspose::Pdf::HorizontalAlignment value);
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
    /// Constructor for RedactionAnnotation. For using in Generator. 
    /// </summary>
    /// <param name="document">Document where new annotation will be created.</param>
    ASPOSE_PDF_SHARED_API RedactionAnnotation(System::SharedPtr<Document> document);
    /// <summary>
    /// Constructor for RedactAnnotation.
    /// </summary>
    /// <param name="page">Page where annotation will be placed.</param>
    /// <param name="rect">Annotation position on the page.</param>
    ASPOSE_PDF_SHARED_API RedactionAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
    /// <summary>
    /// Flattens annotation i.e. removes annotation and adds its
    /// </summary>
    ASPOSE_PDF_SHARED_API void Flatten() override;
    /// <summary>
    /// Flattens annotation and redacts page contents (i.e. removes text and image under redacted annotation)
    /// </summary>
    ASPOSE_PDF_SHARED_API void Redact();
    
protected:

    RedactionAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(RedactionAnnotation, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document));
    ASPOSE_PDF_SHARED_API void ReadXfdfAttributes(System::SharedPtr<System::Xml::XmlReader> reader) override;
    ASPOSE_PDF_SHARED_API void WriteXfdfAttributes(System::SharedPtr<System::Xml::XmlWriter> writer) override;
    ASPOSE_PDF_SHARED_API void WriteXfdf(System::SharedPtr<System::Xml::XmlWriter> writer) override;
    ASPOSE_PDF_SHARED_API void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader) override;
    ASPOSE_PDF_SHARED_API bool AppearanceSupported() override;
    ASPOSE_PDF_SHARED_API void UpdateAppearance(System::SharedPtr<Annotation> annotation) override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Annotation::AppearanceParameters> parameters, System::SharedPtr<Annotation> annotation) override;
    
    virtual ASPOSE_PDF_SHARED_API ~RedactionAnnotation();
    
private:

    float _fontSize;
    
    System::SharedPtr<Rectangle> GetRectForDrawOverlayText();
    System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Operator>>> DrawRedaction(System::SharedPtr<Annotation::AppearanceParameters> parameters);
    System::ArrayPtr<System::SharedPtr<Point>> GetPoints();
    System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Rectangle>>> GetRectangles();
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


