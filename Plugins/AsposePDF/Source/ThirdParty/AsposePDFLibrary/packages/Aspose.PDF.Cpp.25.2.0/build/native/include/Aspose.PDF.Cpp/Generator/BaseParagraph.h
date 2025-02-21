#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/icloneable.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class LinkAnnotation;
} // namespace Annotations
class Cell;
class Document;
namespace Drawing
{
class Graph;
} // namespace Drawing
class FloatingBox;
class FormattedFragment;
class HeaderFooter;
enum class HorizontalAlignment;
class Hyperlink;
class Image;
class MarginInfo;
class Note;
class Page;
class PageGenerator;
class Rectangle;
class Table;
namespace Tests
{
namespace Generator
{
class Xml2PdfTests;
} // namespace Generator
} // namespace Tests
namespace Text
{
class TextFragment;
} // namespace Text
enum class VerticalAlignment;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Xml
{
class XmlReader;
class XmlTextWriter;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents a abstract base object can be added to the page(doc.Paragraphs.Add()).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS BaseParagraph : public System::ICloneable
{
    typedef BaseParagraph ThisType;
    typedef System::ICloneable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::FormattedFragment;
    friend class Aspose::Pdf::Note;
    friend class Aspose::Pdf::Drawing::Graph;
    friend class Aspose::Pdf::FloatingBox;
    friend class Aspose::Pdf::HeaderFooter;
    friend class Aspose::Pdf::Text::TextFragment;
    friend class Aspose::Pdf::Image;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::Cell;
    friend class Aspose::Pdf::Table;
    friend class Aspose::Pdf::Tests::Generator::Xml2PdfTests;
    
public:

    /// <summary>
    /// Gets a vertical alignment of paragraph 
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API Aspose::Pdf::VerticalAlignment get_VerticalAlignment();
    /// <summary>
    /// Sets a vertical alignment of paragraph 
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_VerticalAlignment(Aspose::Pdf::VerticalAlignment value);
    /// <summary>
    /// Gets a horizontal alignment of paragraph 
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API Aspose::Pdf::HorizontalAlignment get_HorizontalAlignment();
    /// <summary>
    /// Sets a horizontal alignment of paragraph 
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_HorizontalAlignment(Aspose::Pdf::HorizontalAlignment value);
    /// <summary>
    /// Gets a outer margin for paragraph (for pdf generation)
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<MarginInfo> get_Margin();
    /// <summary>
    /// Sets a outer margin for paragraph (for pdf generation)
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Margin(System::SharedPtr<MarginInfo> value);
    /// <summary>
    /// Gets a bool value that indicates whether this paragraph will be at next column.
    /// Default is false.(for pdf generation)
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsFirstParagraphInColumn() const;
    /// <summary>
    /// Sets a bool value that indicates whether this paragraph will be at next column.
    /// Default is false.(for pdf generation)
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsFirstParagraphInColumn(bool value);
    /// <summary>
    /// Gets a bool value that indicates whether current paragraph remains in the same page along with next paragraph.
    /// Default is false.(for pdf generation)
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsKeptWithNext() const;
    /// <summary>
    /// Sets a bool value that indicates whether current paragraph remains in the same page along with next paragraph.
    /// Default is false.(for pdf generation)
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsKeptWithNext(bool value);
    /// <summary>
    /// Gets a bool value that force this paragraph generates at new page.
    /// Default is false.(for pdf generation)
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsInNewPage() const;
    /// <summary>
    /// Sets a bool value that force this paragraph generates at new page.
    /// Default is false.(for pdf generation)
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsInNewPage(bool value);
    /// <summary>
    /// Gets a paragraph is inline.
    /// Default is false.(for pdf generation)
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsInLineParagraph() const;
    /// <summary>
    /// Sets a paragraph is inline.
    /// Default is false.(for pdf generation)
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsInLineParagraph(bool value);
    /// <summary>
    /// Gets the fragment hyperlink(for pdf generator).
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Hyperlink> get_Hyperlink();
    /// <summary>
    /// Sets the fragment hyperlink(for pdf generator).
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_Hyperlink(System::SharedPtr<Aspose::Pdf::Hyperlink> value);
    /// <summary>
    /// Gets a int value that indicates the Z-order of the graph. A graph with larger ZIndex 
    /// will be placed over the graph with smaller ZIndex. ZIndex can be negative. Graph with negative 
    /// ZIndex will be placed behind the text in the page.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_ZIndex() const;
    /// <summary>
    /// Sets a int value that indicates the Z-order of the graph. A graph with larger ZIndex 
    /// will be placed over the graph with smaller ZIndex. ZIndex can be negative. Graph with negative 
    /// ZIndex will be placed behind the text in the page.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ZIndex(int32_t value);
    
    /// <summary>
    /// Clones this instance.
    /// Virtual method. Always return null.
    /// </summary>
    /// <returns>Null.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> Clone() override;
    
    ASPOSE_PDF_SHARED_API BaseParagraph();
    
protected:

    /// <summary>
    /// Gets a paragraph id.
    /// </summary>
    System::String get_Id() const;
    /// <summary>
    /// Sets a paragraph id.
    /// </summary>
    void set_Id(System::String value);
    /// <summary>
    /// Gets the fragment hyperlink(for pdf generator performance internal use).
    /// </summary>
    static bool get_IsZIndexSet();
    /// <summary>
    /// Sets the fragment hyperlink(for pdf generator performance internal use).
    /// </summary>
    static void set_IsZIndexSet(bool value);
    /// <summary>
    /// Gets the fragment hyperlink(for pdf generator internal use).
    /// </summary>
    const System::SharedPtr<Annotations::LinkAnnotation>& get_ReferencedFrom() const;
    /// <summary>
    /// Sets the fragment hyperlink(for pdf generator internal use).
    /// </summary>
    void set_ReferencedFrom(System::SharedPtr<Annotations::LinkAnnotation> value);
    
    void ChangePosition(double& curX, double& curY, double newX, double newY, bool isNextParagraphInline);
    void ProcessHyperlink(System::SharedPtr<Page> page, System::SharedPtr<Rectangle> rect);
    virtual ASPOSE_PDF_SHARED_API void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual ASPOSE_PDF_SHARED_API void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    
private:

    Aspose::Pdf::HorizontalAlignment horizontalAlignment;
    System::SharedPtr<MarginInfo> margin;
    System::SharedPtr<Aspose::Pdf::Hyperlink> hyperlink;
    Aspose::Pdf::VerticalAlignment verticalAlignment;
    int32_t zindex;
    System::String pr_Id;
    bool pr_IsFirstParagraphInColumn;
    bool pr_IsKeptWithNext;
    bool pr_IsInNewPage;
    bool pr_IsInLineParagraph;
    static bool pr_IsZIndexSet;
    System::SharedPtr<Annotations::LinkAnnotation> pr_ReferencedFrom;
    
};

} // namespace Pdf
} // namespace Aspose


