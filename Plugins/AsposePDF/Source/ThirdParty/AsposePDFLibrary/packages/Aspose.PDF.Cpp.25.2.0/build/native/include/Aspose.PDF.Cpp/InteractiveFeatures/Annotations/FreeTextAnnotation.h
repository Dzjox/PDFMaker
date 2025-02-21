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
class DefaultAppearance;
enum class FreeTextIntent;
enum class Justification;
enum class LineEnding;
class TextStyle;
} // namespace Annotations
class Document;
namespace Engine
{
namespace CommonData
{
namespace Text
{
namespace Fonts
{
class IPdfFont;
} // namespace Fonts
} // namespace Text
} // namespace CommonData
namespace Data
{
class IPdfArray;
class IPdfObject;
class IPdfString;
class ITrailerable;
} // namespace Data
} // namespace Engine
class Operator;
class Page;
class Point;
class Rectangle;
enum class Rotation;
namespace Tests
{
namespace Annotations
{
class FreeTextAnnotationTests;
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
namespace Drawing
{
class Color;
} // namespace Drawing
namespace Xml
{
class XmlReader;
class XmlWriter;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Annotations {

//TODO: 1. RichText value should have priority over simple text (i.e. if RichText is set create appearance should use Rich Text). Should be checked how RichText works with rotations. 
// 2. fontSize should be used instead of TExtStyle.FontSize, this is more precisely
/// <summary>
/// Represents a free text annotation that displays text directly on the page. Unlike an ordinary text annotation, a free text annotation has no open or closed state; instead of being displayed in a pop-up window, the text is always visible.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS FreeTextAnnotation final : public Aspose::Pdf::Annotations::MarkupAnnotation
{
    typedef FreeTextAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::MarkupAnnotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Tests::Annotations::FreeTextAnnotationTests;
    
private:

    class Word : public System::Object
    {
        typedef Word ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::String get_Text() const;
        bool get_IsWholeWord() const;
        
        Word(System::String text, bool isWholeWord);
        
    private:
    
        System::String _text;
        bool _isWholeWord;
        
    };
    
    
public:

    /// <summary>
    /// Gets line ending style for line ending point.
    /// OThis property is obsolete, please use EndingStyle. 
    /// </summary>
    ASPOSE_PDF_SHARED_API LineEnding get_StartingStyle();
    /// <summary>
    /// Sets line ending style for line ending point.
    /// OThis property is obsolete, please use EndingStyle. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_StartingStyle(LineEnding value);
    /// <summary>
    /// Gets line ending style for line ending point.
    /// </summary>
    ASPOSE_PDF_SHARED_API LineEnding get_EndingStyle();
    /// <summary>
    /// Sets line ending style for line ending point.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_EndingStyle(LineEnding value);
    /// <summary>
    /// Gets or set a code specifying the form of quadding (justification) to be used in displaying the annotation's text.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Annotations::Justification get_Justification();
    /// <summary>
    /// Gets or set a code specifying the form of quadding (justification) to be used in displaying the annotation's text.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Justification(Aspose::Pdf::Annotations::Justification value);
    /// <summary>
    /// Gets the default appearance string to be used in formatting the text.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_DefaultAppearance();
    /// <summary>
    /// Sets the default appearance string to be used in formatting the text.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DefaultAppearance(System::String value);
    /// <summary>
    /// Object which represents default appearance of FreeText annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Annotations::DefaultAppearance> get_DefaultAppearanceObject();
    /// <summary>
    /// Gets the intent of the free text annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API FreeTextIntent get_Intent();
    /// <summary>
    /// Sets the intent of the free text annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Intent(FreeTextIntent value);
    /// <summary>
    /// Gets a default style string.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_DefaultStyle();
    /// <summary>
    /// Sets a default style string.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DefaultStyle(System::String value);
    /// <summary>
    /// Gets style of the text in appearance. when text style is changed, text appearance is updated.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Annotations::TextStyle> get_TextStyle();
    /// <summary>
    /// Sets style of the text in appearance. when text style is changed, text appearance is updated.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TextStyle(System::SharedPtr<Aspose::Pdf::Annotations::TextStyle> value);
    /// <summary>
    /// Angle of annotation rotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API Rotation get_Rotate();
    /// <summary>
    /// Angle of annotation rotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Rotate(Rotation value);
    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Annotations::AnnotationType get_AnnotationType() override;
    /// <summary>
    /// Array of point specifying callout line.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::SharedPtr<Point>> get_Callout();
    /// <summary>
    /// Array of point specifying callout line.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Callout(System::ArrayPtr<System::SharedPtr<Point>> value);
    /// <summary>
    /// Rectangle describing the numerical differences between two rectangles: the Rect entry of the annotation
    ///  and a rectangle contained within that rectangle. The inner rectangle is where the annotation's text should be displayed.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Rectangle> get_TextRectangle();
    /// <summary>
    /// Rectangle describing the numerical differences between two rectangles: the Rect entry of the annotation
    ///  and a rectangle contained within that rectangle. The inner rectangle is where the annotation's text should be displayed.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TextRectangle(System::SharedPtr<Rectangle> value);
    
    /// <summary>
    /// Constructor to use with Generator.
    /// </summary>
    /// <param name="document">Document where annotation will be created.</param>
    /// <param name="appearance">Default Appearance</param>
    ASPOSE_PDF_SHARED_API FreeTextAnnotation(System::SharedPtr<Document> document, System::SharedPtr<Aspose::Pdf::Annotations::DefaultAppearance> appearance);
    
    /// <summary>
    /// Accepts visitor object to process the annotation.
    /// </summary>
    /// <param name="visitor">Visitor object.</param>
    ASPOSE_PDF_SHARED_API void Accept(System::SharedPtr<AnnotationSelector> visitor) override;
    
    /// <summary>
    /// Creates new FreeText annotation on the specified page.
    /// </summary>
    /// <param name="page">The document's page where annotation should be created.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    /// <param name="appearance">The default appearance to be used in formatting the text.</param>
    ASPOSE_PDF_SHARED_API FreeTextAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, System::SharedPtr<Aspose::Pdf::Annotations::DefaultAppearance> appearance);
    
protected:

    /// <summary>
    /// Returns internal rectnagle of annotation, i.e. rectangle recalculated according to RD entry of annotation
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Rectangle> get_InnerRect() override;
    
    ASPOSE_PDF_SHARED_API void WriteXfdf(System::SharedPtr<System::Xml::XmlWriter> writer) override;
    /// <summary>
    /// When overridden in a derived class, exports annotation attributes into XFDF.
    /// </summary>
    /// <param name="writer">Writer of destination file.</param>
    ASPOSE_PDF_SHARED_API void WriteXfdfAttributes(System::SharedPtr<System::Xml::XmlWriter> writer) override;
    ASPOSE_PDF_SHARED_API void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader) override;
    /// <summary>
    /// When overridden in a derived class, import annotation attributes from XFDF.
    /// </summary>
    /// <param name="reader">Reader of XFDF file.</param>
    ASPOSE_PDF_SHARED_API void ReadXfdfAttributes(System::SharedPtr<System::Xml::XmlReader> reader) override;
    
    /// <summary>
    /// Ititializes FreeText annotation with engine annotation object.
    /// </summary>
    /// <param name="engineAnnot">Engine object that presents the annotation.</param>
    /// <param name="document">The Aspose.Pdf.Document object.</param>
    FreeTextAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FreeTextAnnotation, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> engineAnnot, System::SharedPtr<Document> document));
    /// <summary>
    /// This method must be overriden to return true in classes where apperance generation is supported. 
    /// </summary>
    /// <returns></returns>
    ASPOSE_PDF_SHARED_API bool AppearanceSupported() override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateAppearanceProgram(System::SharedPtr<Annotation::AppearanceParameters> parameters, System::SharedPtr<Annotation> annotation) override;
    ASPOSE_PDF_SHARED_API void GeneratorUpdateRectangle(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect) override;
    /// <summary>
    /// Create frame.
    /// </summary>
    /// <param name="parametes">Appearance parameters.</param>
    /// <param name="annotation">The annotation.</param>
    /// <returns></returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> CreateFrame(System::SharedPtr<Annotation::AppearanceParameters> parametes, System::SharedPtr<Annotation> annotation) override;
    
    virtual ASPOSE_PDF_SHARED_API ~FreeTextAnnotation();
    
private:

    System::SharedPtr<Aspose::Pdf::Annotations::DefaultAppearance> _defaultAppearance;
    System::SharedPtr<Aspose::Pdf::Annotations::TextStyle> _style;
    Rotation _rotate;
    
    /// <summary>
    /// Returns true if annotation has callout line parameters array. 
    /// </summary>
    bool get_HasCallout();
    
    System::String ArrayToString(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> array);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> ParseNumberArray(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer, System::String array);
    /// <summary>
    /// Sets text of the annotation and changes appearance .
    /// </summary>
    /// <param name="contents"></param>
    /// Obsolete - to be removed. 
    void SetText(System::String contents);
    /// <summary>
    /// Draws callout line according to CL parameters.
    /// </summary>
    /// <returns></returns>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawCalloutLine();
    bool IsValidXml(System::String s);
    System::Drawing::Color GetDefaultStrokeColor();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawRichText();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawSimpleText(System::String value, System::SharedPtr<XForm> appearance);
    /// <summary>
    /// If encodedText null (but selectedFont not null) try RegisterString by Otl version.
    /// If encodedText still null, returns an empty string.
    /// </summary>
    /// <param name="selectedFont">Font selected before.</param>
    /// <param name="value">String to be decoded.</param>
    /// <param name="encodedText">String encoded before.</param>
    /// <returns>Decoded string (empty if failed).</returns>        
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString> IfNullTryOtlFontOrSetEmpty(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> selectedFont, System::String value, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString> encodedText);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


