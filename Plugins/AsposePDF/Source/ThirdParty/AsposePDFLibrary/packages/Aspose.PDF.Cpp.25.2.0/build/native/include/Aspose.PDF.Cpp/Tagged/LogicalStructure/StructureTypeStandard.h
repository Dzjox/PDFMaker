#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/multicast_delegate.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Engine
{
namespace Data
{
class IPdfPrimitive;
} // namespace Data
} // namespace Engine
namespace LogicalStructure
{
class Element;
class StructureElement;
class StructureTypeCategory;
class StructureTypeStandard;
} // namespace LogicalStructure
namespace Tagged
{
class TaggedContent;
class TaggedContext;
} // namespace Tagged
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
} // namespace Generic
} // namespace Collections
} // namespace System

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

/// <summary>
///     Represents Standard Structure Types.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS StructureTypeStandard final : public System::Object
{
    typedef StructureTypeStandard ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::LogicalStructure::StructureElement;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    using CreateElementDelegate = System::MulticastDelegate<System::SharedPtr<Element>(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext>, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive>)>;
    
    
public:

    /// <summary>
    ///     (Document) A complete document. This is the root element of any structure tree containing multiple parts or multiple articles.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> Document;
    /// <summary>
    ///     (Part) A large-scale division of a document. This type of element is appropriate for grouping articles or sections.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> Part;
    /// <summary>
    ///     (Article) A relatively self-contained body of text constituting a single narrative or exposition. Articles should be disjoint; that is, they should not contain other articles as constituent elements.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> Art;
    /// <summary>
    ///     (Section) A container for grouping related content elements.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> Sect;
    /// <summary>
    ///     (Division) A generic block-level element or group of elements.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> Div;
    /// <summary>
    ///     (Block quotation) A portion of text consisting of one or more paragraphs attributed to someone other than the author of the surrounding text.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> BlockQuote;
    /// <summary>
    ///     (Caption) A brief portion of text describing a table or figure.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> Caption;
    /// <summary>
    ///     <para>(Table of contents) A list made up of table of contents item entries (structure type TOCI) and/or other nested table of contents entries (TOC).</para>
    ///     <para>A TOC entry that includes only TOCI entries represents a flat hierarchy. A TOC entry that includes other nested TOC entries (and possibly TOCI entries) represents a more complex hierarchy.Ideally, the hierarchy of a top level TOC entry reflects the structure of the main body of the document.</para>
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> TOC;
    /// <summary>
    ///     <para>(Table of contents item) An individual member of a table of contents. This entry's children may be any of the following structure types:</para>
    ///     <para></para>
    ///     <list type="table">
    ///         <item>
    ///             <term>Lbl</term>
    ///             <description>A label</description>
    ///         </item>
    ///         <item>
    ///             <term>Reference</term>
    ///             <description>A reference to the title and the page number</description>
    ///         </item>
    ///         <item>
    ///             <term>NonStruct</term>
    ///             <description>Non-structure elements for wrapping a leader artifact</description>
    ///         </item>
    ///         <item>
    ///             <term>P</term>
    ///             <description>Descriptive text</description>
    ///         </item>
    ///         <item>
    ///             <term>TOC</term>
    ///             <description>Table of content elements for hierarchical tables of content, as described for the TOC entry</description>
    ///         </item>
    ///     </list>
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> TOCI;
    /// <summary>
    ///     (Index) A sequence of entries containing identifying text accompanied by reference elements that point out occurrences of the specified text in the main body of a document.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> Index;
    /// <summary>
    ///     (Nonstructural element) A grouping element having no inherent structural significance; it serves solely for grouping purposes. This type of element differs from a division (structure type Div) in that it shall not be interpreted or exported to other document formats; however, its descendants shall be processed normally.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> NonStruct;
    /// <summary>
    ///     (Private element) A grouping element containing private content belonging to the application producing it. The structural significance of this type of element is unspecified and shall be determined entirely by the conforming writer. Neither the Private element nor any of its descendants shall be interpreted or exported to other document formats.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> Private;
    /// <summary>
    ///     (Paragraph) A low-level division of text.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> P;
    /// <summary>
    ///     (Heading) A label for a subdivision of a document's content. It should be the first child of the division that it heads.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> H;
    /// <summary>
    ///     Level 1 Heading, for use in conforming writers that cannot hierarchically nest their sections and thus cannot determine the level of a heading from its level of nesting.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> H1;
    /// <summary>
    ///     Level 2 Heading, for use in conforming writers that cannot hierarchically nest their sections and thus cannot determine the level of a heading from its level of nesting.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> H2;
    /// <summary>
    ///     Level 3 Heading, for use in conforming writers that cannot hierarchically nest their sections and thus cannot determine the level of a heading from its level of nesting.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> H3;
    /// <summary>
    ///     Level 4 Heading, for use in conforming writers that cannot hierarchically nest their sections and thus cannot determine the level of a heading from its level of nesting.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> H4;
    /// <summary>
    ///     Level 5 Heading, for use in conforming writers that cannot hierarchically nest their sections and thus cannot determine the level of a heading from its level of nesting.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> H5;
    /// <summary>
    ///     Level 6 Heading, for use in conforming writers that cannot hierarchically nest their sections and thus cannot determine the level of a heading from its level of nesting.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> H6;
    /// <summary>
    ///     (List) A sequence of items of like meaning and importance. Its immediate children should be an optional caption (structure type Caption) followed by one or more list items (structure type LI).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> L;
    /// <summary>
    ///     (List item) An individual member of a list. Its children may be one or more labels, list bodies, or both (structure types Lbl or LBody).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> LI;
    /// <summary>
    ///     (Label) A name or number that distinguishes a given item from others in the same list or other group of like items.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> Lbl;
    /// <summary>
    ///     (List body) The descriptive content of a list item. In a dictionary list, for example, it contains the definition of the term. It may either contain the content directly or have other BLSEs, perhaps including nested lists, as children.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> LBody;
    /// <summary>
    ///     (Table) A two-dimensional layout of rectangular data cells, possibly having a complex substructure. It contains either one or more table rows (structure type TR) as children; or an optional table head (structure type THead) followed by one or more table body elements (structure type TBody) and an optional table footer (structure type TFoot). In addition, a table may have a caption (structure type Caption) as its first or last child.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> Table;
    /// <summary>
    ///     (Table header row group; PDF 1.5) A group of rows that constitute the header of a table. If the table is split across multiple pages, these rows may be redrawn at the top of each table fragment (although there is only one THead element).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> THead;
    /// <summary>
    ///     (Table body row group; PDF 1.5) A group of rows that constitute the main body portion of a table. If the table is split across multiple pages, the body area may be broken apart on a row boundary. A table may have multiple TBody elements to allow for the drawing of a border or background for a set of rows.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> TBody;
    /// <summary>
    ///     (Table footer row group; PDF 1.5) A group of rows that constitute the footer of a table. If the table is split across multiple pages, these rows may be redrawn at the bottom of each table fragment (although there is only one TFoot element.)
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> TFoot;
    /// <summary>
    ///     (Table row) A row of headings or data in a table. It may contain table header cells and table data cells (structure types TH and TD).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> TR;
    /// <summary>
    ///     (Table header cell) A table cell containing header text describing one or more rows or columns of the table.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> TH;
    /// <summary>
    ///     (Table data cell) A table cell containing data that is part of the table's content.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> TD;
    /// <summary>
    ///     (Span) A generic inline portion of text having no particular inherent characteristics. It can be used, for example, to delimit a range of text with a given set of styling attributes.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> Span;
    /// <summary>
    ///     <para>(Quotation) An inline portion of text attributed to someone other than the author of the surrounding text.</para>
    ///     <para>The quoted text should be contained inline within a single paragraph. This differs from the block-level element BlockQuote, which consists of one or more complete paragraphs (or other elements presented as if they were complete paragraphs).</para>
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> Quote;
    /// <summary>
    ///     <para>(Note) An item of explanatory text, such as a footnote or an endnote, that is referred to from within the body of the document. It may have a label (structure type Lbl) as a child. The note may be included as a child of the structure element in the body text that refers to it, or it may be included elsewhere (such as in an endnotes section) and accessed by means of a reference (structure type Reference).</para>
    ///     <para>Tagged PDF does not prescribe the placement of footnotes in the page content order. They may be either inline or at the end of the page, at the discretion of theconforming writer.</para>
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> Note;
    /// <summary>
    ///     (Reference) A citation to content elsewhere in the document.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> Reference;
    /// <summary>
    ///     <para>(Bibliography entry) A reference identifying the external source of some cited content. It may contain a label (structure type Lbl) as a child.</para>
    ///     <para>Although a bibliography entry is likely to include component parts identifying the cited content's author, work, publisher, and so forth, no standard structure types are defined at this level of detail.</para>
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> BibEntry;
    /// <summary>
    ///     (Code) A fragment of computer program text.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> Code;
    /// <summary>
    ///     (Link) An association between a portion of the ILSE's content and a corresponding link annotation or annotations. Its children should be one or more content items or child ILSEs and one or more object references identifying the associated link annotations.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> Link;
    /// <summary>
    ///     (Annotation; PDF 1.5) An association between a portion of the ILSE's content and a corresponding PDF annotation. Annot shall be used for all PDF annotations except link annotations and widget annotations.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> Annot;
    /// <summary>
    ///     <para>(Ruby; PDF 1.5) A side-note (annotation) written in a smaller text size and placed adjacent to the base text to which it refers. A Ruby element may also contain the RB, RT, and RP elements.</para>
    ///     <para>(Ruby) The wrapper around the entire ruby assembly. It shall contain one RB element followed by either an RT element or a three-element group consisting of RP, RT, and RP. Ruby elements and their content elements shall not break across multiple lines.</para>
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> Ruby;
    /// <summary>
    ///     (Ruby base text) The full-size text to which the ruby annotation is applied. RB may contain text, other inline elements, or a mixture of both. It may have the RubyAlignattribute.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> RB;
    /// <summary>
    ///     (Ruby annotation text) The smaller-size text that shall be placed adjacent to the ruby base text. It may contain text, other inline elements, or a mixture of both. It may have the RubyAlign and RubyPosition attributes.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> RT;
    /// <summary>
    ///     (Ruby punctuation) Punctuation surrounding the ruby annotation text. It is used only when a ruby annotation cannot be properly formatted in a ruby style and instead is formatted as a normal comment, or when it is formatted as a warichu. It contains text (usually a single LEFT or RIGHT PARENTHESIS or similar bracketing character).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> RP;
    /// <summary>
    ///     <para>(Warichu; PDF 1.5) A comment or annotation in a smaller text size and formatted onto two smaller lines within the height of the containing text line and placed following (inline) the base text to which it refers. A Warichu element may also contain the WT and WP elements.</para>
    ///     <para>(Warichu) The wrapper around the entire warichu assembly. It may contain a three-element group consisting of WP, WT, and WP. Warichu elements (and their content elements) may wrap across multiple lines, according to the warichu breaking rules described in the Japanese Industrial Standard (JIS) X 4051-1995.</para>
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> Warichu;
    /// <summary>
    ///     (Warichu text) The smaller-size text of a warichu comment that is formatted into two lines and placed between surrounding WP elements.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> WT;
    /// <summary>
    ///     (Warichu punctuation) The punctuation that surrounds the WT text. It contains text (usually a single LEFT or RIGHT PARENTHESIS or similar bracketing character). According to JIS X 4051-1995, the parentheses surrounding a warichu may be converted to a SPACE (nominally 1/4 EM in width) at the discretion of the formatter.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> WP;
    /// <summary>
    ///     (Figure) An item of graphical content. Its placement may be specified with the Placement layout attribute.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> Figure;
    /// <summary>
    ///     <para>(Formula) A mathematical formula.</para>
    ///     <para>This structure type is useful only for identifying an entire content element as a formula. No standard structure types are defined for identifying individual components within the formula. From a formatting standpoint, the formula shall be treated similarly to a figure (structure type Figure).</para>
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> Formula;
    /// <summary>
    ///     (Form) A widget annotation representing an interactive form field.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> Form;
    
    /// <summary>
    ///     Gets tag name of <see cref="Aspose::Pdf::LogicalStructure::StructureElement"></see>.
    /// </summary>
    /// <value>Tag name of <see cref="Aspose::Pdf::LogicalStructure::StructureElement"></see>.</value>
    ASPOSE_PDF_SHARED_API System::String get_Tag() const;
    /// <summary>
    ///     Gets category of Standard Structure Type.
    /// </summary>
    /// <value>Category of Standard Structure Type.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeCategory> get_Category() const;
    
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> to_StructureTypeStandard(System::String tag);
    
    /// <summary>
    /// Returns a string that represents the current object.
    /// </summary>
    /// <returns>String that represents the current object.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    System::SharedPtr<Element> CreateElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    bool CanBeAppended(System::SharedPtr<StructureTypeStandard> structureType);
    
    virtual ASPOSE_PDF_SHARED_API ~StructureTypeStandard();
    
private:

    System::SharedPtr<StructureTypeCategory> _category;
    System::String _tag;
    StructureTypeStandard::CreateElementDelegate _createElement;
    static System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<StructureTypeStandard>>> _instance;
    
    StructureTypeStandard(System::SharedPtr<StructureTypeCategory> category, System::String tag, StructureTypeStandard::CreateElementDelegate createElementDelegate);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(StructureTypeStandard, CODEPORTING_ARGS(System::SharedPtr<StructureTypeCategory> category, System::String tag, StructureTypeStandard::CreateElementDelegate createElementDelegate));
    System::String ToString_NonConst();
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


