#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/Facades/Facade.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class Annotation;
class PdfAction;
} // namespace Annotations
namespace Collections
{
template <typename, typename> class AsposeHashDictionary;
} // namespace Collections
class Document;
namespace Engine
{
namespace Data
{
class IPdfDictionary;
class IPdfObject;
} // namespace Data
} // namespace Engine
namespace Facades
{
class LineInfo;
class PdfContentEditor;
class ReplaceTextStrategy;
class StampInfo;
enum class StampType;
} // namespace Facades
class Matrix;
class Operator;
class OperatorCollection;
class Page;
class Rectangle;
class Resources;
namespace Text
{
class TextEditOptions;
class TextReplaceOptions;
class TextSearchOptions;
class TextState;
} // namespace Text
class XForm;
class XImage;
} // namespace Pdf
} // namespace Aspose
namespace System
{
class BoxedValueBase;
namespace Collections
{
namespace Generic
{
template <typename> class IList;
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
class Color;
class Rectangle;
} // namespace Drawing
class EventArgs;
namespace IO
{
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Represents a class to edit PDF file's content.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PdfContentEditor final : public Aspose::Pdf::Facades::SaveableFacade
{
    typedef PdfContentEditor ThisType;
    typedef Aspose::Pdf::Facades::SaveableFacade BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
private:

    /// <summary>
    /// Internal class for representing stamps. 
    /// </summary>
    class StampData : public System::Object
    {
        typedef StampData ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::String get_Name() const;
        System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle();
        /// <summary>
        /// Gets visibility of stamp.
        /// </summary>
        bool get_Visible() const;
        System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_EngineObj();
        Aspose::Pdf::Facades::StampType get_StampType();
        System::SharedPtr<XImage> get_Image();
        System::SharedPtr<XForm> get_Form();
        int32_t get_StampId();
        
        StampData(System::SharedPtr<PdfContentEditor> owner, System::SharedPtr<XImage> image, System::SharedPtr<System::Object> ownerObject, System::String name, System::SharedPtr<Aspose::Pdf::Rectangle> rect, System::SharedPtr<Matrix> matrix, bool visible);
        StampData(System::SharedPtr<PdfContentEditor> owner, System::SharedPtr<XForm> form, System::SharedPtr<System::Object> ownerObject, System::String name, System::SharedPtr<Aspose::Pdf::Rectangle> rect, System::SharedPtr<Matrix> matrix, bool visible);
        
        /// <summary>
        /// Moves the stamp into new location
        /// </summary>
        /// <param name="X">Horizontal coordinate.</param>
        /// <param name="Y">Vertical coordinate.</param>
        /// <returns></returns>
        bool Move(double X, double Y);
        /// <summary>
        /// Deletes the stamp.
        /// </summary>
        /// <returns></returns>
        bool Delete();
        /// <summary>
        /// Hides the stamp.
        /// </summary>
        /// <returns></returns>
        bool Hide();
        /// <summary>
        /// Shows previously hidden stamp the stamp.
        /// </summary>
        /// <returns></returns>
        bool Show();
        
    private:
    
        System::SharedPtr<Page> _ownerPage;
        System::SharedPtr<XForm> _ownerForm;
        System::String _name;
        System::SharedPtr<Matrix> _matrix;
        System::WeakPtr<PdfContentEditor> _owner;
        System::SharedPtr<Aspose::Pdf::Rectangle> _rect;
        bool _visible;
        System::SharedPtr<System::Object> instance;
        
        System::SharedPtr<Aspose::Pdf::Rectangle> GetRectangleFromMatrix(System::SharedPtr<Matrix> matrix);
        System::SharedPtr<OperatorCollection> GetContents();
        System::SharedPtr<Resources> GetResources();
        System::SharedPtr<Aspose::Pdf::Rectangle> GetRectangle();
        bool Delete(bool removeResource);
        
    };
    
    
public:

    /// <summary>
    /// Gets text search options.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> get_TextSearchOptions() const;
    /// <summary>
    /// Sets text search options.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TextSearchOptions(System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> value);
    /// <summary>
    /// Gets text edit options. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> get_TextEditOptions() const;
    /// <summary>
    /// Sets text edit options. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TextEditOptions(System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> value);
    /// <summary>
    /// Gets text replace options. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Text::TextReplaceOptions> get_TextReplaceOptions() const;
    /// <summary>
    /// Sets text replace options. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TextReplaceOptions(System::SharedPtr<Aspose::Pdf::Text::TextReplaceOptions> value);
    /// <summary>
    /// A set of parameters for replace text operation
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Facades::ReplaceTextStrategy> get_ReplaceTextStrategy() const;
    /// <summary>
    /// A set of parameters for replace text operation
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ReplaceTextStrategy(System::SharedPtr<Aspose::Pdf::Facades::ReplaceTextStrategy> value);
    
    /// <summary>
    /// A document event type. Opens a document.
    /// </summary>
    static const ASPOSE_PDF_SHARED_API System::String DocumentOpen;
    /// <summary>
    /// A document event type. Closes a document.
    /// </summary>
    static const ASPOSE_PDF_SHARED_API System::String DocumentClose;
    /// <summary>
    /// A document event type. Excute a action before saving.
    /// </summary>
    static const ASPOSE_PDF_SHARED_API System::String DocumentWillSave;
    /// <summary>
    /// A document event type. Excute a action after saving.
    /// </summary>
    static const ASPOSE_PDF_SHARED_API System::String DocumentSaved;
    /// <summary>
    /// A document event type. Excute a action before printing.
    /// </summary>
    static const ASPOSE_PDF_SHARED_API System::String DocumentWillPrint;
    /// <summary>
    /// A document event type. Excute a action after printing.
    /// </summary>
    static const ASPOSE_PDF_SHARED_API System::String DocumentPrinted;
    
    /// <summary> 
    /// Binds a PDF file for editing.
    /// </summary>
    /// <param name="inputFile">A PDF file to be edited.</param>
    ASPOSE_PDF_SHARED_API void BindPdf(System::String inputFile) override;
    /// <summary> 
    /// Binds a PDF stream for editing.
    /// </summary>
    /// <param name="inputStream">A PDF stream to be edited.</param>
    ASPOSE_PDF_SHARED_API void BindPdf(System::SharedPtr<System::IO::Stream> inputStream) override;
    /// <summary>
    /// Extracts the collection of Link instances contained in PDF document.
    /// </summary>
    /// <example>
    /// </example>
    /// <returns>The collection of Link objects</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Pdf::Annotations::Annotation>>> ExtractLink();
    /// <summary>
    /// Creates a web link in PDF document.
    /// </summary>
    /// <param name="rect">The rectangle for active click.</param>
    /// <param name="url">The web link destination.</param>
    /// <param name="originalPage">The number of original page on which rectangle bound with web link will be created.</param>
    /// <param name="clr">The colour of rectangle for active click.</param>
    /// <param name="actionName">The array of actions (members of PredefinedAction enum) corresponding to executing menu items in Acrobat viewer.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void CreateWebLink(System::Drawing::Rectangle rect, System::String url, int32_t originalPage, System::Drawing::Color clr, System::ArrayPtr<System::SharedPtr<System::BoxedValueBase>> actionName);
    /// <summary>
    /// Creates a web link in PDF document.
    /// </summary>
    /// <param name="rect">The rectangle for active click.</param>
    /// <param name="url">The web link destination.</param>
    /// <param name="originalPage">The number of original page where rectangle bound with web link will be created.</param>
    /// <param name="clr">The colour of rectangle for active click.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void CreateWebLink(System::Drawing::Rectangle rect, System::String url, int32_t originalPage, System::Drawing::Color clr);
    /// <summary>
    /// Creates a web link in PDF document.
    /// </summary>
    /// <param name="rect">The rectangle for active click.</param>
    /// <param name="url">The web link destination.</param>
    /// <param name="originalPage">The number of original page where rectangle bound with web link will be created.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void CreateWebLink(System::Drawing::Rectangle rect, System::String url, int32_t originalPage);
    /// <summary>
    /// Creates a local link in PDF document.
    /// </summary>
    /// <param name="rect">The rectangle for active click.</param>
    /// <param name="desPage">The destination page.</param>
    /// <param name="originalPage">The number of original page where rectangle bound with local link will be created.</param>
    /// <param name="clr">The colour of rectangle for active click.</param>
    /// <param name="actionName">The array of actions (members of PredefinedAction enum) corresponding to executing menu items in Acrobat viewer.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void CreateLocalLink(System::Drawing::Rectangle rect, int32_t desPage, int32_t originalPage, System::Drawing::Color clr, System::ArrayPtr<System::SharedPtr<System::BoxedValueBase>> actionName);
    /// <summary>
    /// Creates a local link in PDF document.
    /// </summary>
    /// <param name="rect">The rectangle for active click.</param>
    /// <param name="desPage">The destination page.</param>
    /// <param name="originalPage">The number of original page where rectangle bound with local link will be created.</param>
    /// <param name="clr">The colour of rectangle for active click.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void CreateLocalLink(System::Drawing::Rectangle rect, int32_t desPage, int32_t originalPage, System::Drawing::Color clr);
    /// <summary>
    /// Creates a link to another PDF document page.
    /// </summary>
    /// <param name="rect">The rectangle for active click.</param>
    /// <param name="remotePdf">The PDF document which page will be opened.</param>
    /// <param name="originalPage">The number of original page where rectangle bound with link will be created.</param>
    /// <param name="destinationPage">The destination page.</param>
    /// <param name="clr">The colour of rectangle for active click.</param>
    /// <param name="actionName">The array of actions (members of PredefinedAction enum) corresponding to executing menu items in Acrobat viewer.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void CreatePdfDocumentLink(System::Drawing::Rectangle rect, System::String remotePdf, int32_t originalPage, int32_t destinationPage, System::Drawing::Color clr, System::ArrayPtr<System::SharedPtr<System::BoxedValueBase>> actionName);
    /// <summary>
    /// Creates a link to another PDF document page.
    /// </summary>
    /// <param name="rect">The rectangle for active click.</param>
    /// <param name="remotePdf">The PDF document which page will be opened.</param>
    /// <param name="originalPage">The number of original page where rectangle bound with link will be created.</param>
    /// <param name="destinationPage">The destination page.</param>
    /// <param name="clr">The colour of rectangle for active click.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void CreatePdfDocumentLink(System::Drawing::Rectangle rect, System::String remotePdf, int32_t originalPage, int32_t destinationPage, System::Drawing::Color clr);
    /// <summary>
    /// Creates a link to another PDF document page.
    /// </summary>
    /// <param name="rect">The rectangle for active click.</param>
    /// <param name="remotePdf">The PDF document which page will be opened.</param>
    /// <param name="originalPage">The number of original page where rectangle bound with link will be created.</param>
    /// <param name="destinationPage">The destination page.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void CreatePdfDocumentLink(System::Drawing::Rectangle rect, System::String remotePdf, int32_t originalPage, int32_t destinationPage);
    /// <summary>
    /// Creates a link to custom actions in PDF document.
    /// </summary>
    /// <param name="rect">The rectangle for active click.</param>
    /// <param name="originalPage">The number of original page where rectangle bound with link will be created.</param>
    /// <param name="color">The colour of rectangle for active click.</param>
    /// <param name="actionName">The array of actions (members of PredefinedAction enum) corresponding to executing menu items in Acrobat viewer.</param>/// 
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void CreateCustomActionLink(System::Drawing::Rectangle rect, int32_t originalPage, System::Drawing::Color color, System::ArrayPtr<System::SharedPtr<System::BoxedValueBase>> actionName);
    /// <summary>
    /// Creates a link to launch an application in PDF document.
    /// </summary>
    /// <param name="rect">The rectangle for active click.</param>
    /// <param name="application">The path of application to be launched.</param>
    /// <param name="page">The number of original page where rectangle bound with link will be created.</param>
    /// <param name="clr">The colour of rectangle for active click.</param>
    /// <param name="actionName">The array of actions (members of PredefinedAction enum) corresponding to executing menu items in Acrobat viewer.</param>/// 
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void CreateApplicationLink(System::Drawing::Rectangle rect, System::String application, int32_t page, System::Drawing::Color clr, System::ArrayPtr<System::SharedPtr<System::BoxedValueBase>> actionName);
    /// <summary>
    /// Creates a link to launch an application in PDF document.
    /// </summary>
    /// <param name="rect">The rectangle for active click.</param>
    /// <param name="application">The path of application to be launched.</param>
    /// <param name="page">The number of original page where rectangle bound with link will be created.</param>
    /// <param name="clr">The colour of rectangle for active click.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void CreateApplicationLink(System::Drawing::Rectangle rect, System::String application, int32_t page, System::Drawing::Color clr);
    /// <summary>
    /// Creates a link to launch an application in PDF document.
    /// </summary>
    /// <param name="rect">The rectangle for active click.</param>
    /// <param name="application">The path of application to be launched.</param>
    /// <param name="page">The number of original page where rectangle bound with link will be created.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void CreateApplicationLink(System::Drawing::Rectangle rect, System::String application, int32_t page);
    /// <summary>
    /// Creates a link to JavaScript in PDF document.
    /// </summary>
    /// <param name="code">The JavaScript code.</param>
    /// <param name="rect">The rectangle for active click.</param>
    /// <param name="originalPage">The number of original page where rectangle bound with link will be created.</param>
    /// <param name="color">The colour of rectangle for active click.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void CreateJavaScriptLink(System::String code, System::Drawing::Rectangle rect, int32_t originalPage, System::Drawing::Color color);
    /// <summary>
    /// Creates text annotation in PDF document
    /// </summary>
    /// <param name="rect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="title">The title of the annotation.</param>
    /// <param name="contents">The contents of the annotation.</param>
    /// <param name="open">A flag specifying whether the annotation should initially be displayed open.</param>
    /// <param name="icon">The name of an icon will be used in displaying the annotation. 
    /// This value can be: "Comment", "Key", "Note", "Help", "NewParagraph", "Paragraph", "Insert"</param>
    /// <param name="page">The number of original page where the text annotation will be created.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void CreateText(System::Drawing::Rectangle rect, System::String title, System::String contents, bool open, System::String icon, int32_t page);
    /// <summary>
    /// Creates free text annotation in PDF document
    /// </summary>
    /// <param name="rect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="contents">The contents of the annotation.</param>
    /// <param name="page">The number of original page where the text annotation will be created.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void CreateFreeText(System::Drawing::Rectangle rect, System::String contents, int32_t page);
    /// <summary>
    /// Creates markup annotation it PDF document.
    /// </summary>
    /// <param name="rect">The rectangle defining the location of the annotation on the page.</param>
    /// <param name="contents">The contents of the annotation.</param>
    /// <param name="type">The type of markup annotation. Can be 0 (Highlight), 1 (Underline), 2 (StrikeOut), 3 (Squiggly).</param>
    /// <param name="page">The number of original page where the annotation will be created.</param>
    /// <param name="clr">The color of markup.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void CreateMarkup(System::Drawing::Rectangle rect, System::String contents, int32_t type, int32_t page, System::Drawing::Color clr);
    /// <summary>
    /// Creates popup annotation in PDF document.
    /// </summary>
    /// <param name="rect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="contents">The contents of the annotation.</param>
    /// <param name="open">A flag specifying whether the pop-up annotation should initially be displayed open.</param>
    /// <param name="page">The number of original page where the annotation will be created.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void CreatePopup(System::Drawing::Rectangle rect, System::String contents, bool open, int32_t page);
    /// <summary>
    /// Creates file attachment annotation.
    /// </summary>
    /// <param name="rect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="contents">The contents of the annotation.</param>
    /// <param name="filePath">The path of the file will be attached.</param>
    /// <param name="page">The number of original page where the annotation will be created.</param>
    /// <param name="name">The name of an icon will be used in displaying the annotation.
    /// This value can be: "Graph", "PushPin", "Paperclip", "Tag".</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void CreateFileAttachment(System::Drawing::Rectangle rect, System::String contents, System::String filePath, int32_t page, System::String name);
    /// <summary>
    /// Creates file attachment annotation.
    /// </summary>
    /// <param name="rect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="contents">The contents of the annotation.</param>
    /// <param name="filePath">The path of the file will be attached.</param>
    /// <param name="page">The number of original page where the annotation will be created.</param>
    /// <param name="name">The name of an icon will be used in displaying the annotation.
    /// This value can be: "Graph", "PushPin", "Paperclip", "Tag".</param>
    /// <param name="opacity">Icon's opacity from 0 to 1: 0 - completely transparant, 1 - completely opaque.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void CreateFileAttachment(System::Drawing::Rectangle rect, System::String contents, System::String filePath, int32_t page, System::String name, double opacity);
    /// <summary>
    /// Creates file attachment annotation.
    /// </summary>
    /// <param name="rect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="contents">The contents of the annotation.</param>
    /// <param name="attachmentStream">The attachment file stream.</param>
    /// <param name="attachmentName">The attachment name.</param>
    /// <param name="page">The number of original page where the annotation will be created.</param>
    /// <param name="name">The name of an icon will be used in displaying the annotation.
    /// This value can be: "Graph", "PushPin", "Paperclip", "Tag".</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void CreateFileAttachment(System::Drawing::Rectangle rect, System::String contents, System::SharedPtr<System::IO::Stream> attachmentStream, System::String attachmentName, int32_t page, System::String name);
    /// <summary>
    /// Creates file attachment annotation.
    /// </summary>
    /// <param name="rect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="contents">The contents of the annotation.</param>
    /// <param name="attachmentStream">The attachment file stream.</param>
    /// <param name="attachmentName">The attachment name.</param>
    /// <param name="page">The number of original page where the annotation will be created.</param>
    /// <param name="name">The name of an icon will be used in displaying the annotation.
    /// This value can be: "Graph", "PushPin", "Paperclip", "Tag".</param>
    /// <param name="opacity">Icon's opacity from 0 to 1: 0 - completely transparant, 1 - completely opaque.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void CreateFileAttachment(System::Drawing::Rectangle rect, System::String contents, System::SharedPtr<System::IO::Stream> attachmentStream, System::String attachmentName, int32_t page, System::String name, double opacity);
    /// <summary>
    /// Adds document attachment with no annotation.
    /// </summary>
    /// <param name="fileAttachmentPath">The path of the file will be attached.</param>
    /// <param name="description">The description information.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void AddDocumentAttachment(System::String fileAttachmentPath, System::String description);
    /// <summary>
    /// Adds document attachment with no annotation.
    /// </summary>
    /// <param name="fileAttachmentStream">The stream of the file will be attached.</param>
    /// <param name="fileAttachmentName">The attachment name.</param>        
    /// <param name="description">The description information.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void AddDocumentAttachment(System::SharedPtr<System::IO::Stream> fileAttachmentStream, System::String fileAttachmentName, System::String description);
    /// <summary>
    /// Deletes all attachments in PDF document.
    /// </summary>
    /// <example>
    /// </example> 
    ASPOSE_PDF_SHARED_API void DeleteAttachments();
    /// <summary>
    /// Creates line annotation.
    /// </summary>
    /// <param name="rect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="contents">The contents of the annotation.</param>
    /// <param name="x1">The starting horizontal coordinate of the line.</param>
    /// <param name="y1">The starting vertical coordinate of the line.</param>
    /// <param name="x2">The ending horizontal coordinate of the line.</param>
    /// <param name="y2">The ending vertical coordinate of the line.</param>
    /// <param name="page">The number of original page where the annotation will be created.</param>
    /// <param name="border">The border width in points. If this value is 0 no border is drawn. Default value is 1.</param>
    /// <param name="clr">The color of line.</param>
    /// <param name="borderStyle">The border style specifying the width and dash pattern to be used in drawing the line.
    /// This value can be: "S" (Solid), "D" (Dashed), "B" (Beveled), "I" (Inset), "U" (Underline).</param>
    /// <param name="dashArray">A dash array defining a pattern of dashes and gaps to be used in drawing a dashed border.
    /// If it is used, borderSyle must be accordingly set to "D".</param>
    /// <param name="LEArray">An array of two values respectively specifying the beginning and ending style of the drawing line.
    /// The values can be: "Square", "Circle", "Diamond", "OpenArrow", "ClosedArrow", "None", "Butt", "ROpenArrow", "RClosedArrow", "Slash".</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void CreateLine(System::Drawing::Rectangle rect, System::String contents, float x1, float y1, float x2, float y2, int32_t page, int32_t border, System::Drawing::Color clr, System::String borderStyle, System::ArrayPtr<int32_t> dashArray, System::ArrayPtr<System::String> LEArray);
    /// <summary>
    /// Creates square-circle annotation.
    /// </summary>
    /// <param name="rect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="contents">The contents of the annotation.</param>
    /// <param name="clr">The colour of square or circle.</param>
    /// <param name="square">True (square), false (sircle).</param>
    /// <param name="page">The number of original page where the annotation will be created.</param>
    /// <param name="borderWidth">The border width of square or circle.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void CreateSquareCircle(System::Drawing::Rectangle rect, System::String contents, System::Drawing::Color clr, bool square, int32_t page, int32_t borderWidth);
    /// <summary>
    /// Creates curve annotation.
    /// </summary>
    /// <param name="lineInfo">The instance of LineInfo class.</param>
    /// <param name="page">The number of original page where the annotation will be created.</param>
    /// <param name="annotRect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="annotContents">The contents of the annotation.</param>
    /// <example>
    /// </example> 
    ASPOSE_PDF_SHARED_API void DrawCurve(System::SharedPtr<LineInfo> lineInfo, int32_t page, System::Drawing::Rectangle annotRect, System::String annotContents);
    /// <summary>
    /// Creates polygon annotation.
    /// </summary>
    /// <param name="lineInfo">The instance of LineInfo class.</param>
    /// <param name="page">The number of original page where the annotation will be created.</param>
    /// <param name="annotRect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="annotContents">The contents of the annotation.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void CreatePolygon(System::SharedPtr<LineInfo> lineInfo, int32_t page, System::Drawing::Rectangle annotRect, System::String annotContents);
    /// <summary>
    /// Creates polyline annotation.
    /// </summary>
    /// <param name="lineInfo">The instance of LineInfo class.</param>
    /// <param name="page">The number of original page where the annotation will be created.</param>
    /// <param name="annotRect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="annotContents">The contents of the annotation.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void CreatePolyLine(System::SharedPtr<LineInfo> lineInfo, int32_t page, System::Drawing::Rectangle annotRect, System::String annotContents);
    /// <summary>
    /// Creates caret annotation.
    /// </summary>
    /// <param name="page">The number of original page where the annotation will be created.</param>
    /// <param name="annotRect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="caretRect">The actual boundaries of the underlying caret.</param>
    /// <param name="symbol">A symbol will be associated with the caret. Value can be: "P" (Paragraph), "None".</param>
    /// <param name="annotContents">The contents of the annotation.</param>
    /// <param name="color">The color of the annotation.</param>
    /// <example>
    /// </example>  
    ASPOSE_PDF_SHARED_API void CreateCaret(int32_t page, System::Drawing::Rectangle annotRect, System::Drawing::Rectangle caretRect, System::String symbol, System::String annotContents, System::Drawing::Color color);
    /// <summary>
    /// Creates a rubber stamp annotation.
    /// </summary>
    /// <param name="page">The number of original page where the annotation will be created.</param>
    /// <param name="annotRect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="icon">An icon is to be used in displaying the annotation. Default value: 'Draft'.</param>
    /// <param name="annotContents">The contents of the annotation.</param>
    /// <param name="color">The color of the annotation.</param>
    /// <example>
    /// </example> 
    ASPOSE_PDF_SHARED_API void CreateRubberStamp(int32_t page, System::Drawing::Rectangle annotRect, System::String icon, System::String annotContents, System::Drawing::Color color);
    /// <summary>
    /// Creates a rubber stamp annotation.
    /// </summary>
    /// <param name="page">The number of original page where the annotation will be created.</param>
    /// <param name="annotRect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="annotContents">The contents of the annotation.</param>
    /// <param name="color">The colour of the annotation.</param>
    /// <param name="appearanceFile">The path of appearance file.</param>
    /// <example>
    /// </example> 
    ASPOSE_PDF_SHARED_API void CreateRubberStamp(int32_t page, System::Drawing::Rectangle annotRect, System::String annotContents, System::Drawing::Color color, System::String appearanceFile);
    /// <summary>
    /// Creates a rubber stamp annotation.
    /// </summary>
    /// <param name="page">The number of original page where the annotation will be created.</param>
    /// <param name="annotRect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="annotContents">The contents of the annotation.</param>
    /// <param name="color">The colour of the annotation.</param>
    /// <param name="appearanceStream">The stream of appearance file.</param>
    /// <example>
    /// </example> 
    ASPOSE_PDF_SHARED_API void CreateRubberStamp(int32_t page, System::Drawing::Rectangle annotRect, System::String annotContents, System::Drawing::Color color, System::SharedPtr<System::IO::Stream> appearanceStream);
    /// <summary>
    /// Creates a bookmark with the specified action.
    /// </summary>
    /// <param name="title">The title of the bookmark.</param>
    /// <param name="color">The colour of the bookmark's title.</param>
    /// <param name="boldFlag">The flag of bold attribution.</param>
    /// <param name="italicFlag">The flag of italic attribution.</param>
    /// <param name="file">Another file or application required when the action type is "GoToR" or "Launch".</param>
    /// <param name="actionType">The action type. The value can be: "GoToR", "Launch", "GoTo", "URI".</param>
    /// <param name="destination">The local destination or remote destination or URL.</param>
    /// <example>
    /// </example> 
    ASPOSE_PDF_SHARED_API void CreateBookmarksAction(System::String title, System::Drawing::Color color, bool boldFlag, bool italicFlag, System::String file, System::String actionType, System::String destination);
    /// <summary>
    /// Adds additional action for document event.
    /// </summary>
    /// <param name="eventType">The document event types.</param>
    /// <param name="code">The code of JavaScript.</param>
    /// <example>
    /// </example> 
    ASPOSE_PDF_SHARED_API void AddDocumentAdditionalAction(System::String eventType, System::String code);
    /// <summary>
    /// Removes open action from the document. This operation is useful when concatenating multiple documents that use explicit 'GoTo' action on startup.
    /// </summary>
    /// <example>
    /// </example> 
    ASPOSE_PDF_SHARED_API void RemoveDocumentOpenAction();
    /// <summary>
    /// Changes the view preference.
    /// </summary>
    /// <param name="viewerAttribution">The view attribution defined in the ViewerPreference class.</param>
    /// <example>
    /// </example> 
    ASPOSE_PDF_SHARED_API void ChangeViewerPreference(int32_t viewerAttribution);
    /// <summary>
    /// Returns the view preference.
    /// </summary>
    /// <returns>Returns set of ViewerPrefernece flags </returns>
    /// <example>
    /// </example> 
    ASPOSE_PDF_SHARED_API int32_t GetViewerPreference();
    /// <summary>
    /// Replaces the specified image on the specified page of PDF document with another image.
    /// </summary>
    /// <param name="pageNumber">The number of page on which the image is replaced.</param>
    /// <param name="index">The index of the image object must be replaced.</param>
    /// <param name="imageFile">The image file will be used for replacing.</param>
    /// <example>
    /// </example> 
    ASPOSE_PDF_SHARED_API void ReplaceImage(int32_t pageNumber, int32_t index, System::String imageFile);
    /// <summary>
    /// Deletes the specified images on the specified page.
    /// </summary>
    /// <param name="pageNumber">The number of page on which images must be deleted.</param>
    /// <param name="index">An array repsents images' indexes.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void DeleteImage(int32_t pageNumber, System::ArrayPtr<int32_t> index);
    /// <summary>
    /// Deletes all images from PDF document.
    /// </summary>
    /// <example>
    /// </example> 
    ASPOSE_PDF_SHARED_API void DeleteImage();
    /// <summary>
    /// Replaces text in the PDF file on the specified page. <see cref="TextState"></see> object (font family, color) can be specified to replaced text.
    /// </summary>
    /// <example>
    /// </example>
    /// <param name="srcString">The string to be replaced.</param>
    /// <param name="thePage">Page number (0 means "all pages").</param>
    /// <param name="destString">The replaced string.</param>
    /// <param name="textState">Text state (Text Color, Font etc).</param>
    /// <returns>Returns true if replacement was made.</returns>
    ASPOSE_PDF_SHARED_API bool ReplaceText(System::String srcString, int32_t thePage, System::String destString, System::SharedPtr<Aspose::Pdf::Text::TextState> textState);
    /// <summary>
    /// Replaces text in the PDF file.
    /// </summary>
    /// <example>
    /// </example>
    /// <param name="srcString">The string to be replaced.</param>
    /// <param name="destString">Replacing string.</param>
    /// <returns>Returns true if replacement was made.</returns>
    ASPOSE_PDF_SHARED_API bool ReplaceText(System::String srcString, System::String destString);
    /// <summary>
    /// Replaces text in the PDF file on the specified page.
    /// </summary>
    /// <example>
    /// </example>
    /// <param name="srcString">The sting to be replaced.</param>
    /// <param name="thePage">Page number (0 for all pages)</param>
    /// <param name="destString">Replacing string.</param>
    /// <returns>Returns true if replacement was made.</returns>
    ASPOSE_PDF_SHARED_API bool ReplaceText(System::String srcString, int32_t thePage, System::String destString);
    /// <summary>
    /// Replaces text in the PDF file using specified <see cref="TextState"></see> object.
    /// </summary>
    /// <example>
    /// </example>
    /// <param name="srcString">String to be replaced</param>
    /// <param name="destString">Replacing string</param>
    /// <param name="textState">Text state (Text Color, Font etc)</param>
    /// <returns>Returns true if replacement was made.</returns>
    ASPOSE_PDF_SHARED_API bool ReplaceText(System::String srcString, System::String destString, System::SharedPtr<Aspose::Pdf::Text::TextState> textState);
    /// <summary>
    /// Creates Movie Annotations.
    /// </summary>
    /// <param name="rect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="filePath">The path of movie file to be played.</param>
    /// <param name="page">The page in which the Line annotation is created.</param>
    ASPOSE_PDF_SHARED_API void CreateMovie(System::Drawing::Rectangle rect, System::String filePath, int32_t page);
    /// <summary>
    /// Creates Sound Annotations.
    /// </summary>
    /// <param name="rect">The annotation rectangle defining the location of the annotation on the page.</param>
    /// <param name="filePath">The file path of sound file.</param>
    /// <param name="name">The name of an icon to be used in displaying the annotation,include:Speaker and Mic.</param>
    /// <param name="page">The page in which the Sound annotation is created.</param>
    /// <param name="rate">The sampling rate, in samples per second.</param>
    ASPOSE_PDF_SHARED_API void CreateSound(System::Drawing::Rectangle rect, System::String filePath, System::String name, int32_t page, System::String rate);
    /// <summary>
    /// Deletes multiple stamps on the specified page by stamp indexes.
    /// </summary>
    /// <param name="pageNumber">Page number where stamp will be deleted.</param>
    /// <param name="index">Stamp indexes.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void DeleteStamp(int32_t pageNumber, System::ArrayPtr<int32_t> index);
    /// <summary>
    /// Deletes stamps with specified IDs from all pages of the document.
    /// </summary>
    /// <param name="stampIds">Array of stamp IDs.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void DeleteStampByIds(System::ArrayPtr<int32_t> stampIds);
    /// <summary>
    /// Deletes stamps on the specified page by multiple stamp IDs.
    /// </summary>
    /// <param name="pageNumber">Page number where stamps will be deleted.</param>
    /// <param name="stampIds">Array of stamp IDs.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void DeleteStampByIds(int32_t pageNumber, System::ArrayPtr<int32_t> stampIds);
    /// <summary>
    /// Deletes stamp on the specified page by stamp ID.
    /// </summary>
    /// <param name="pageNumber">Page number where stamp will be deleted.</param>
    /// <param name="stampId">Identifier of stanp which should be deleted.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void DeleteStampById(int32_t pageNumber, int32_t stampId);
    /// <summary>
    /// Hides the stamp. After hiding, stamp visibility may be restored with ShowStampById method.
    /// </summary>
    /// <param name="pageNumber">Number of the page.</param>
    /// <param name="stampId">Identifier of stamp which should be hidden.</param>
    ASPOSE_PDF_SHARED_API void HideStampById(int32_t pageNumber, int32_t stampId);
    /// <summary>
    /// Shows stamp which was hidden by HiddenStampById.
    /// </summary>
    /// <param name="pageNumber">Number of the page.</param>
    /// <param name="stampId">Identifier of stamp which should be shown.</param>
    ASPOSE_PDF_SHARED_API void ShowStampById(int32_t pageNumber, int32_t stampId);
    /// <summary>
    /// Changes position of the stamp on page. 
    /// </summary>
    /// <param name="pageNumber">Numer of page.</param>
    /// <param name="stampId">Identifier of stamp which should be moved.</param>
    /// <param name="x">New stamp horizontal pozition on the page.</param>
    /// <param name="y">New stamp vertical position on the page.</param>
    ASPOSE_PDF_SHARED_API void MoveStampById(int32_t pageNumber, int32_t stampId, double x, double y);
    /// <summary>
    /// Changes position of the stamp on page.
    /// </summary>
    /// <param name="pageNumber">Number of page.</param>
    /// <param name="stampIndex">Index of stamp on the page.</param>
    /// <param name="x">New stamp horizontal position.</param>
    /// <param name="y">New stamp vertical position.</param>
    ASPOSE_PDF_SHARED_API void MoveStamp(int32_t pageNumber, int32_t stampIndex, double x, double y);
    /// <summary>
    /// Delete stamp by ID from all pages of the document.
    /// </summary>
    /// <param name="stampId">Identifier of stamp which should be deleted.</param>
    /// <example>
    /// </example>        
    ASPOSE_PDF_SHARED_API void DeleteStampById(int32_t stampId);
    
    /// <summary> 
    /// The constructor of the PdfContentEditor object.
    /// </summary>
    ASPOSE_PDF_SHARED_API PdfContentEditor();
    /// <summary>
    /// Initializes new <see cref="PdfContentEditor"></see> object on base of the <paramref name="document"></paramref>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    ASPOSE_PDF_SHARED_API PdfContentEditor(System::SharedPtr<Aspose::Pdf::Document> document);
    
    /// <summary>
    /// Creates a local link in PDF document.
    /// </summary>
    /// <param name="rect">The rectangle for active click.</param>
    /// <param name="desPage">The destination page.</param>
    /// <param name="originalPage">The number of original page where rectangle bound with local link will be created.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void CreateLocalLink(System::Drawing::Rectangle rect, int32_t desPage, int32_t originalPage);
    /// <summary>
    /// Replaces text in the PDF file and sets font size.
    /// </summary>
    /// <example>
    /// </example>
    /// <param name="srcString">String to be replaced.</param>
    /// <param name="destString">Replacing string.</param>
    /// <param name="fontSize">Font size.</param>
    /// <returns>Returns true if replacement was made.</returns>
    ASPOSE_PDF_SHARED_API bool ReplaceText(System::String srcString, System::String destString, int32_t fontSize);
    /// <summary>
    /// Returns array of stamps on the page.
    /// </summary>
    /// <param name="pageNumber">Page number where stamps will be searched.</param>
    /// <returns>Array of stamps.</returns>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::SharedPtr<StampInfo>> GetStamps(int32_t pageNumber);
    /// <summary>
    /// Closes opened document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Close() override;
    
protected:

    virtual ASPOSE_PDF_SHARED_API ~PdfContentEditor();
    
private:

    System::SharedPtr<Aspose::Pdf::Text::TextSearchOptions> _textSearchOptions;
    System::SharedPtr<Aspose::Pdf::Text::TextEditOptions> _textEditOptions;
    System::SharedPtr<Aspose::Pdf::Text::TextReplaceOptions> _textReplaceOptions;
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<int32_t, System::ArrayPtr<System::SharedPtr<PdfContentEditor::StampData>>>> _stamps;
    System::SharedPtr<Aspose::Pdf::Facades::ReplaceTextStrategy> _replaceTextStrategy;
    static System::String HiddenStampTag;
    
    void SetNextActions(System::SharedPtr<Aspose::Pdf::Annotations::PdfAction> action, System::ArrayPtr<System::SharedPtr<System::BoxedValueBase>> actionName, bool isNamed);
    void SetNextActions(System::SharedPtr<Aspose::Pdf::Annotations::PdfAction> action, System::ArrayPtr<System::SharedPtr<System::BoxedValueBase>> actionName);
    void ReplaceTextStrategy_OnPropertiesChanged(System::SharedPtr<System::Object> sender, System::SharedPtr<System::EventArgs> e);
    void SyncOptionsWithReplaceTextStrategy();
    /// <summary>
    /// Check that XForm is used in  sequence of operators specific to Aspose stamps.
    /// This is required to distinguish from other pictures, forms etc. 
    /// (See Stamp.drawStampOnPage: q - gs - cm - Do - Q operators must be).
    /// </summary>
    /// <param name="contents"></param>
    /// <param name="op"></param>
    /// <returns></returns>
    bool CheckStampSignature(System::SharedPtr<OperatorCollection> contents, System::SharedPtr<Operator> op);
    bool CheckStampSignature(System::SharedPtr<OperatorCollection> contents, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> operators);
    void GetStamps(System::SharedPtr<OperatorCollection> Contents, System::SharedPtr<Resources> resources, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PdfContentEditor::StampData>>> list, System::SharedPtr<System::Object> ownerObject);
    void GetStamps(System::SharedPtr<Matrix> matrix, System::SharedPtr<OperatorCollection> Contents, System::SharedPtr<Resources> resources, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PdfContentEditor::StampData>>> list, System::SharedPtr<System::Object> ownerObject);
    void _GetStamps(System::SharedPtr<OperatorCollection> Contents, System::SharedPtr<Resources> resources, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PdfContentEditor::StampData>>> list, System::SharedPtr<System::Object> ownerObject);
    System::ArrayPtr<System::SharedPtr<PdfContentEditor::StampData>> GetStampsOnPage(int32_t pageIndex);
    bool DeleteStampLogic(int32_t pageIndex, System::ArrayPtr<int32_t> stampIndex);
    void ClearStampCache();
    bool IsResourceInUse(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> resource);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


