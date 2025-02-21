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
class IAppointment;
} // namespace Annotations
class Document;
namespace Facades
{
class Bookmark;
class Bookmarks;
} // namespace Facades
class OutlineItemCollection;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Color;
} // namespace Drawing
namespace IO
{
class Stream;
} // namespace IO
namespace Xml
{
class XmlTextReader;
class XmlTextWriter;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Represents a class to work with PDF file's bookmarks including create, modify, export, import and delete.    
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PdfBookmarkEditor final : public Aspose::Pdf::Facades::SaveableFacade
{
    typedef PdfBookmarkEditor ThisType;
    typedef Aspose::Pdf::Facades::SaveableFacade BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates bookmarks for all pages.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void CreateBookmarks();
    /// <summary>
    /// Creates bookmark for the specified page.
    /// </summary>
    /// <param name="bookmarkName">The specified bookmark name.</param>
    /// <param name="pageNumber">The specified desination page.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void CreateBookmarkOfPage(System::String bookmarkName, int32_t pageNumber);
    /// <summary>
    /// Creates the specified bookmark in the document. The method can be used for forming nested bookmarks hierarchy.
    /// </summary>
    /// <param name="bookmark">The bookmark will be added to the document.</param>
    /// <example>
    /// </example> 
    ASPOSE_PDF_SHARED_API void CreateBookmarks(System::SharedPtr<Bookmark> bookmark);
    /// <summary>
    /// Create bookmarks for all pages with specified color and style (bold, italic).
    /// </summary>
    /// <param name="color">The color of title.</param>
    /// <param name="boldFlag">The flag of bold attribution.</param>
    /// <param name="italicFlag">The flag of italic attribution.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void CreateBookmarks(System::Drawing::Color color, bool boldFlag, bool italicFlag);
    /// <summary>
    /// Creates bookmarks for the specified pages.
    /// </summary>
    /// <param name="bookmarkName">Bookmarks title array.</param>
    /// <param name="pageNumber">Bookmarks desination page array.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void CreateBookmarkOfPage(System::ArrayPtr<System::String> bookmarkName, System::ArrayPtr<int32_t> pageNumber);
    /// <summary>
    /// Deletes all bookmarks of the PDF document.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void DeleteBookmarks();
    /// <summary>
    /// Deletes the bookmark of the PDF document.
    /// </summary>
    /// <param name="title">The title of bookmark deleted.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void DeleteBookmarks(System::String title);
    /// <summary>
    /// Modifys bookmark title according to the specified bookmark title.
    /// </summary>
    /// <param name="sTitle">Source bookmark title.</param>
    /// <param name="dTitle">Modified bookmark title.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void ModifyBookmarks(System::String sTitle, System::String dTitle);
    /// <summary>
    /// Extracts bookmarks of all levels from the document.
    /// </summary>
    /// <returns>The bookmarks collection of all bookmarks that exist in the document.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Bookmarks> ExtractBookmarks();
    /// <summary>
    /// Extracts bookmarks of all levels from the document.
    /// </summary>
    /// <param name="upperLevel">If true, extracts only upper level bookmarks. Else, extracts all bookmarks recursively.</param>
    /// <returns>List of extracted bookmarks.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Bookmarks> ExtractBookmarks(bool upperLevel);
    /// <summary>
    /// Extracts the bookmarks with the specified title.
    /// </summary>
    /// <param name="title">Extracted item title.</param>
    /// <returns>Bookmark collection has items with the same title.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Bookmarks> ExtractBookmarks(System::String title);
    /// <summary>
    /// Extracts the children of a bookmark with a title like in specified bookamrk.
    /// </summary>
    /// <param name="bookmark">The specified bookamrk.</param>
    /// <returns>Bookmark collection with child bookmarks.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Bookmarks> ExtractBookmarks(System::SharedPtr<Bookmark> bookmark);
    /// @deprecated Use PdfBookmarkEditor.ExportBookmarksToHtml instead.
    /// <summary>
    /// Exports bookmarks to HTML file.
    /// </summary>
    /// <param name="pdfFile">The PDF file which bookmarks will be exported.</param>
    /// <param name="cssFile">The CSS file to display HTML file, can be null.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void ExtractBookmarksToHTML(System::String pdfFile, System::String cssFile);
    /// <summary>
    /// Exports bookmarks to XML file.
    /// </summary>
    /// <param name="xmlFile">The output XML file.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void ExportBookmarksToXML(System::String xmlFile);
    /// <summary>
    /// Exports bookmarks to XML stream.
    /// </summary>
    /// <param name="stream">Output stream where data will be stored.</param>
    ASPOSE_PDF_SHARED_API void ExportBookmarksToXML(System::SharedPtr<System::IO::Stream> stream);
    /// <summary>
    /// Imports bookmarks to the document from XML file.
    /// </summary>
    /// <param name="xmlFile">The XML file containing bookmarks list.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void ImportBookmarksWithXML(System::String xmlFile);
    /// <summary>
    /// Imports bookmarks to the document from XML file.
    /// </summary>
    /// <param name="stream">Stream with bookmarks data.</param>
    ASPOSE_PDF_SHARED_API void ImportBookmarksWithXML(System::SharedPtr<System::IO::Stream> stream);
    
    /// <summary>
    /// Initializes new <see cref="PdfBookmarkEditor"></see> object.
    /// </summary>
    ASPOSE_PDF_SHARED_API PdfBookmarkEditor();
    /// <summary>
    /// Initializes new <see cref="PdfBookmarkEditor"></see> object on base of the <paramref name="document"></paramref>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    ASPOSE_PDF_SHARED_API PdfBookmarkEditor(System::SharedPtr<Aspose::Pdf::Document> document);
    
    /// <summary>
    /// Exports bookmarks to HTML file.
    /// </summary>
    /// <param name="inPdfFile">Input PDF file which bookmarks will be exported.</param>
    /// <param name="outHtmlFile">Output HTML file</param>
    /// <example>
    /// </example>
    static ASPOSE_PDF_SHARED_API void ExportBookmarksToHtml(System::String inPdfFile, System::String outHtmlFile);
    
private:

    static void ModifyBookmarks(System::SharedPtr<OutlineItemCollection> outline, System::String srcTitle, System::String destTitle);
    static void WriteHtmlOutlineHierarchy(System::SharedPtr<System::Xml::XmlTextWriter> writer, System::SharedPtr<OutlineItemCollection> outline, System::String destPdf);
    static void WriteDestinationHtml(System::SharedPtr<System::Xml::XmlTextWriter> writer, System::SharedPtr<Aspose::Pdf::Annotations::IAppointment> dest, System::String destPdf);
    static void WriteXmlOutlineHierarchy(System::SharedPtr<System::Xml::XmlTextWriter> writer, System::SharedPtr<OutlineItemCollection> outline);
    static void WriteText(System::SharedPtr<System::Xml::XmlTextWriter> writer, System::String title);
    static void WriteDestinationXml(System::SharedPtr<System::Xml::XmlTextWriter> writer, System::SharedPtr<Aspose::Pdf::Annotations::IAppointment> dest);
    static void ReadXmlOutlineHierarcy(System::SharedPtr<System::Xml::XmlTextReader> reader, System::SharedPtr<Aspose::Pdf::Document> doc, System::SharedPtr<OutlineItemCollection> outline);
    static System::SharedPtr<Aspose::Pdf::Annotations::IAppointment> ReadDestination(System::SharedPtr<System::Xml::XmlTextReader> reader, System::SharedPtr<Aspose::Pdf::Document> doc);
    static void AddChildItems(System::SharedPtr<Bookmarks> bms1, System::SharedPtr<Bookmarks> bms2);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


