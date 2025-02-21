#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace LogicalStructure
{
class AnnotElement;
class ArtElement;
class BibEntryElement;
class BlockQuoteElement;
class CaptionElement;
class CodeElement;
class DivElement;
class FigureElement;
class FormElement;
class FormulaElement;
class HeaderElement;
class IndexElement;
class LinkElement;
class ListElement;
class NonStructElement;
class NoteElement;
class ParagraphElement;
class PartElement;
class PrivateElement;
class QuoteElement;
class ReferenceElement;
class RubyElement;
class SectElement;
class SpanElement;
class StructTreeRootElement;
class StructureElement;
class StructureTextState;
class TableElement;
class TableTBodyElement;
class TableTDElement;
class TableTFootElement;
class TableTHeadElement;
class TableTHElement;
class TableTRElement;
class TOCElement;
class TOCIElement;
class WarichuElement;
} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose
namespace System
{
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Tagged {


// C# preprocessor directive: #if !DOCUMENTIZE

/// <summary>
/// The <b>Aspose.Pdf.Tagged</b> is a namespace for classes for support of Tagged PDF documents.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};


// C# preprocessor directive: #endif

/// <summary>
/// Represents interface for work with TaggedPdf content of document.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ITaggedContent : public virtual System::Object
{
    typedef ITaggedContent ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    ///     <para>Get <see cref="Aspose::Pdf::LogicalStructure::StructureTextState"></see> settings for whole document.</para>
    /// </summary>
    /// <value><see cref="Aspose::Pdf::LogicalStructure::StructureTextState"></see> settings for whole document.</value>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::StructureTextState> get_StructureTextState() = 0;
    /// <summary>
    ///     <para>Gets <see cref="Aspose::Pdf::LogicalStructure::StructTreeRootElement"></see> of PDF document.</para>
    /// </summary>
    /// <value><see cref="Aspose::Pdf::LogicalStructure::StructTreeRootElement"></see> of PDF document.</value>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::StructTreeRootElement> get_StructTreeRootElement() = 0;
    /// <summary>
    ///     <para>Gets root <see cref="Aspose::Pdf::LogicalStructure::StructureElement"></see> of logical structure of PDF document.</para>
    /// </summary>
    /// <value>Root <see cref="Aspose::Pdf::LogicalStructure::StructureElement"></see> of logical structure of PDF document.</value>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::StructureElement> get_RootElement() = 0;
    
    /// <summary>
    ///     <para>Sets natural language for pdf document.</para>
    ///     <para>A language identifier that shall specify the natural language for all text in the document except where overridden by language specifications for structure elements or marked content.</para>
    /// </summary>
    /// <param name="lang">A language identifier shall either be the empty text string, to indicate that the language is unknown, or a Language-Tag as defined in RFC 3066, Tags for the Identification of Languages.</param>
    virtual void SetLanguage(System::String lang) = 0;
    /// <summary>
    ///     <para>Sets title for PDF document.</para>
    /// </summary>
    /// <param name="title">The title of PDF document.</param>
    virtual void SetTitle(System::String title) = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::PartElement"></see>.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::PartElement> CreatePartElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::ArtElement"></see>.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::ArtElement> CreateArtElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::SectElement"></see>.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::SectElement> CreateSectElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::DivElement"></see>.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::DivElement> CreateDivElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::BlockQuoteElement"></see>.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::BlockQuoteElement> CreateBlockQuoteElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::CaptionElement"></see>.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::CaptionElement> CreateCaptionElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::TOCElement"></see>.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::TOCElement> CreateTOCElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::TOCIElement"></see>.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::TOCIElement> CreateTOCIElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::IndexElement"></see>.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::IndexElement> CreateIndexElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::NonStructElement"></see>.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::NonStructElement> CreateNonStructElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::PrivateElement"></see>.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::PrivateElement> CreatePrivateElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::ParagraphElement"></see>.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::ParagraphElement> CreateParagraphElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::HeaderElement"></see>.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::HeaderElement> CreateHeaderElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::HeaderElement"></see> with level.</para>
    /// </summary>
    /// <param name="level">The level of Header. Must be 1, 2, 3, 4, 5 or 6.</param>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::HeaderElement> CreateHeaderElement(int32_t level) = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::ListElement"></see>.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::ListElement> CreateListElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::TableElement"></see>.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::TableElement> CreateTableElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::TableTHeadElement"></see>.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::TableTHeadElement> CreateTableTHeadElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::TableTHeadElement"></see>.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::TableTBodyElement> CreateTableTBodyElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::TableTFootElement"></see>.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::TableTFootElement> CreateTableTFootElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::TableTRElement"></see>.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::TableTRElement> CreateTableTRElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::TableTHElement"></see>.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::TableTHElement> CreateTableTHElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::TableTDElement"></see>.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::TableTDElement> CreateTableTDElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::SpanElement"></see>.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::SpanElement> CreateSpanElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::QuoteElement"></see>.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::QuoteElement> CreateQuoteElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::NoteElement"></see>.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::NoteElement> CreateNoteElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::ReferenceElement"></see>.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::ReferenceElement> CreateReferenceElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::BibEntryElement"></see>.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::BibEntryElement> CreateBibEntryElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::CodeElement"></see>.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::CodeElement> CreateCodeElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::LinkElement"></see>.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::LinkElement> CreateLinkElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::AnnotElement"></see>.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::AnnotElement> CreateAnnotElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::RubyElement"></see>.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::RubyElement> CreateRubyElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::WarichuElement"></see>.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::WarichuElement> CreateWarichuElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::FigureElement"></see>.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::FigureElement> CreateFigureElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::FormulaElement"></see>.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::FormulaElement> CreateFormulaElement() = 0;
    /// <summary>
    ///     <para>Creates <see cref="Aspose::Pdf::LogicalStructure::FormElement"></see>.</para>
    /// </summary>
    /// <returns>Created structure element.</returns>
    virtual System::SharedPtr<Aspose::Pdf::LogicalStructure::FormElement> CreateFormElement() = 0;
    
};

} // namespace Tagged
} // namespace Pdf
} // namespace Aspose


