#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/InteractiveFeatures/Annotations/Annotation.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
enum class AnnotationState;
enum class AnnotationStateModel;
class CaretAnnotation;
class CommonFigureAnnotation;
class FileAttachmentAnnotation;
class FreeTextAnnotation;
class HighlightAnnotation;
class InkAnnotation;
class LineAnnotation;
enum class LineEnding;
class PolyAnnotation;
class PopupAnnotation;
class RedactionAnnotation;
enum class ReplyType;
class SoundAnnotation;
class StampAnnotation;
class TextAnnotation;
class TextMarkupAnnotation;
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
class AnnotationStateTests;
} // namespace Annotations
class RegressionTests_v24_02;
} // namespace Tests
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
class DateTime;
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
/// Abstract class representing markup annotation.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS MarkupAnnotation : public Aspose::Pdf::Annotations::Annotation, public Aspose::Pdf::Annotations::Annotation::ITitledAnnotation
{
    typedef MarkupAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::Annotation BaseType;
    typedef Aspose::Pdf::Annotations::Annotation::ITitledAnnotation BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::RedactionAnnotation;
    friend class Aspose::Pdf::Annotations::CaretAnnotation;
    friend class Aspose::Pdf::Annotations::CommonFigureAnnotation;
    friend class Aspose::Pdf::Annotations::FileAttachmentAnnotation;
    friend class Aspose::Pdf::Annotations::FreeTextAnnotation;
    friend class Aspose::Pdf::Annotations::HighlightAnnotation;
    friend class Aspose::Pdf::Annotations::TextMarkupAnnotation;
    friend class Aspose::Pdf::Annotations::InkAnnotation;
    friend class Aspose::Pdf::Annotations::LineAnnotation;
    friend class Aspose::Pdf::Annotations::PolyAnnotation;
    friend class Aspose::Pdf::Annotations::SoundAnnotation;
    friend class Aspose::Pdf::Annotations::StampAnnotation;
    friend class Aspose::Pdf::Annotations::TextAnnotation;
    friend class Aspose::Pdf::Tests::Annotations::AnnotationStateTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_02;
    
public:

    /// <summary>
    /// Gets a text that shall be displayed in title bar of annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Title() override;
    /// <summary>
    /// Sets a text that shall be displayed in title bar of annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Title(System::String value) override;
    /// <summary>
    /// Gets a rich text string to be displayed in the pop-up window when the annotation is opened.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_RichText();
    /// <summary>
    /// Sets a rich text string to be displayed in the pop-up window when the annotation is opened.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RichText(System::String value);
    /// <summary>
    /// Gets date and time when annotation was created.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::DateTime get_CreationDate();
    /// <summary>
    /// Gets text representing desciption of the object.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Subject();
    /// <summary>
    /// Gets text representing desciption of the object.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Subject(System::String value);
    /// <summary>
    /// Pop-up annotation for entering or editing the text associated with this annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PopupAnnotation> get_Popup();
    /// <summary>
    /// Pop-up annotation for entering or editing the text associated with this annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Popup(System::SharedPtr<PopupAnnotation> value);
    /// <summary>
    /// Gets the constant opacity value to be used in painting the annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Opacity();
    /// <summary>
    /// Sets the constant opacity value to be used in painting the annotation.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Opacity(double value);
    /// <summary>
    /// A reference to the annotation that this annotation is "in reply to".
    /// Both annotations must be on the same page of the document.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Annotation> get_InReplyTo();
    /// <summary>
    /// A reference to the annotation that this annotation is "in reply to".
    /// Both annotations must be on the same page of the document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_InReplyTo(System::SharedPtr<Annotation> value);
    /// <summary>
    /// A string specifying the relationship (the "reply type") between this annotation
    /// and one specified by InReplyTo.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Annotations::ReplyType get_ReplyType();
    /// <summary>
    /// A string specifying the relationship (the "reply type") between this annotation
    /// and one specified by InReplyTo.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ReplyType(Aspose::Pdf::Annotations::ReplyType value);
    
    /// <summary>
    /// Constructor for markup annotation. 
    /// </summary>
    /// <param name="document">Document where annotation will be created.</param>
    ASPOSE_PDF_SHARED_API MarkupAnnotation(System::SharedPtr<Document> document);
    
    /// <summary>
    /// Clears state and state model for the annotation.
    /// For example, clears the review status for an annotation.
    /// Note, the state stored in other text annotation which has state and statemodel keys.
    /// </summary>
    ASPOSE_PDF_SHARED_API void ClearState();
    /// <summary>
    /// Sets the review state for an annotation. Marked and Unmarked states are ignored as they do not belong to the Review StateModel.
    /// Note, the state stored in other text annotation which has state and statemodel keys.
    /// </summary>
    /// <param name="state">Status for assignment.</param>
    /// <param name="userName">
    /// The username that appears in the comments header.
    /// The name can be the same as the name in the Title of the target annotation or different if the status is set by another user.</param>
    ASPOSE_PDF_SHARED_API void SetReviewState(AnnotationState state, System::String userName);
    /// <summary>
    /// Sets the review state for an annotation. Marked and Unmarked states are ignored as they do not belong to the Review StateModel.
    /// The state is set by the user who created the target annotation. The value is taken from the Title property of the target annotation.
    /// Note, the state stored in other text annotation which has state and statemodel keys.
    /// </summary>
    /// <param name="state">Status for assignment.</param>
    ASPOSE_PDF_SHARED_API void SetReviewState(AnnotationState state);
    /// <summary>
    /// Sets Marked and Unmarked state for the annotation.
    /// Note, the state stored in other text annotation which has state and statemodel keys.
    /// </summary>
    /// <param name="marked">True if sets Marked state, and false if sets Unmarked state.</param>
    ASPOSE_PDF_SHARED_API void SetMarkedState(bool marked);
    /// <summary>
    /// Gets the state of the annotation.
    /// Note, the state stored in other text annotation which has state and statemodel keys.
    /// </summary>
    /// <returns>Annotation state.</returns>
    ASPOSE_PDF_SHARED_API AnnotationState GetState();
    /// <summary>
    /// Gets the state model of the annotation.
    /// Note, the state stored in other text annotation which has state and statemodel keys.
    /// </summary>
    /// <returns>Annotation state model.</returns>
    ASPOSE_PDF_SHARED_API AnnotationStateModel GetStateModel();
    
protected:

    /// <summary>
    /// Gets the annotation IRT field value object.
    /// Returns null if there is no IRT field.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> get_Irt();
    
    MarkupAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    /// <summary>
    /// Constructor.
    /// </summary>
    /// <param name="page">The page with which the annotation will be associated.</param>
    /// <param name="rect">The annotation rectangle, defining the location of the annotation on the page.</param>
    ASPOSE_PDF_SHARED_API MarkupAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect);
    
    /// <summary>
    /// When overridden in a derived class, exports annotation attributes into XFDF.
    /// </summary>
    /// <param name="writer">Writer of destination file.</param>
    ASPOSE_PDF_SHARED_API void WriteXfdfAttributes(System::SharedPtr<System::Xml::XmlWriter> writer) override;
    /// <summary>
    /// When overridden in a derived class, exports annotation elements into XFDF.
    /// </summary>
    /// <param name="writer">Writer of destination file.</param>
    ASPOSE_PDF_SHARED_API void WriteXfdfElements(System::SharedPtr<System::Xml::XmlWriter> writer) override;
    /// <summary>
    /// When overridden in a derived class, import annotation attributes from XFDF.
    /// </summary>
    /// <param name="reader">Reader of XFDF file.</param>
    ASPOSE_PDF_SHARED_API void ReadXfdfAttributes(System::SharedPtr<System::Xml::XmlReader> reader) override;
    ASPOSE_PDF_SHARED_API void AfterImport() override;
    /// <summary>
    /// When overridden in a derived class, import annotation elements from XFDF.
    /// </summary>
    /// <param name="table">Hashtable with information parsed from the XFDF file.</param>
    ASPOSE_PDF_SHARED_API void ReadXfdfElements(System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> table) override;
    System::SharedPtr<TextAnnotation> FindStateAnnotation();
    /// <summary>
    /// Drawes triangle ("arrow") whcih consists of two strokes by angles "angle1" and "angle2" to p1, p2 vector. 
    /// </summary>
    /// <param name="p1">First point.</param>
    /// <param name="p2">Second point.</param>
    /// <param name="angle1">Angle of first stroke. </param>
    /// <param name="angle2">Angle of second stroke.</param>
    /// <param name="closed">Is triangle closed.</param>
    /// <returns></returns>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawLines(System::SharedPtr<Point> p1, System::SharedPtr<Point> p2, double angle1, double angle2, bool closed);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawSlash(System::SharedPtr<Point> p1, System::SharedPtr<Point> p2);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawButt(System::SharedPtr<Point> p1, System::SharedPtr<Point> p2);
    double GetEndingRadius();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawRArrow(System::SharedPtr<Point> p1, System::SharedPtr<Point> p2, bool closed);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawArrow(System::SharedPtr<Point> p1, System::SharedPtr<Point> p2, bool closed);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawSquare(System::SharedPtr<Point> p1);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawDiamond(System::SharedPtr<Point> p1);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawCircle(System::SharedPtr<Point> p1);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> DrawLineEnding(System::SharedPtr<Point> ending, System::SharedPtr<Point> starting, LineEnding endingStyle);
    
    virtual ASPOSE_PDF_SHARED_API ~MarkupAnnotation();
    
private:

    System::SharedPtr<PopupAnnotation> _popup;
    System::String _inReplyToName;
    
    void SetCreationDate();
    System::SharedPtr<TextAnnotation> CreateStateAnnotation();
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


