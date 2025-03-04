﻿#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum_helpers.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
enum class ConvertErrorAction;
enum class ConvertSoftMaskAction;
enum class ConvertTransparencyAction;
class Document;
namespace Engine
{
namespace IO
{
namespace ConvertStrategies
{
class PdfAConvertStrategyBase;
class PdfConvertStrategy;
class PdfUaConvertStrategy;
class TaggedPdfConvertStrategy;
class VersionConvertStrategy;
} // namespace ConvertStrategies
} // namespace IO
} // namespace Engine
class FontEmbeddingOptions;
class OutputIntent;
class PdfANonSpecificationFlags;
class PdfASymbolicFontEncodingStrategy;
enum class PdfFormat;
class ToUnicodeProcessingRules;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class List;
template <typename> class Queue;
} // namespace Generic
} // namespace Collections
namespace IO
{
class Stream;
} // namespace IO
namespace Xml
{
class XmlTextWriter;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// represents set of options for convert PDF document
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PdfFormatConversionOptions : public System::Object
{
    typedef PdfFormatConversionOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfUaConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::TaggedPdfConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::VersionConvertStrategy;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategyBase;
    
public:

    /// <summary>
    /// Describes strategies used to align document text segments.
    /// Now only strategy to restore segments to original bounds is supported.
    /// In future another strategies could be added.
    /// </summary>
    enum class SegmentAlignStrategy : uint8_t
    {
        /// <summary>
        /// None.
        /// </summary>
        None = 0,
        /// <summary>
        /// Restore segment bounds.
        /// </summary>
        RestoreSegmentBounds = 1
    };
    
    /// <summary>
    /// Some PDF documents have special unicode symbols, which are belonged to Private Use Area (PUA), 
    /// see description at https://en.wikipedia.org/wiki/Private_Use_Areas.
    /// This symbols cause an PDF/A compliant errors like "Text is mapped to Unicode Private Use Area but no ActualText entry is present".
    /// This enumeration declares a strategies which can be used to handle PUA symbols.
    /// </summary>
    enum class PuaProcessingStrategy
    {
        /// <summary>
        /// Disable PUA symbol processing. This strategy used by default for PDF/A documents with Level B conformance.
        /// </summary>
        None = 0,
        /// <summary>
        /// Inserts marked content block with ActualText entry which contains empty text.
        /// This strategy gives good results for documents without marked content blocks. Used by default for PDF/A documents with Level A conformance.
        /// </summary>
        SurroundPuaTextWithEmptyActualText,
        /// <summary>
        /// This strategy works slower than 'SurroundPuaTextWithEmptyActualText' but it can remove
        /// PUA compliant errors for documents which can't be handled properly by SurroundPuaTextWithEmptyActualText. PUA symbols
        /// are substituted on symbol 'space' or special unicode (some PUA symbols have unicode analogs). Substitution applied
        /// not to document's text but to font's internal data ToUnicode so it doesn't affects symbol's vision but it
        /// affects symbol's presentation in copy/paste operation system buffer.
        /// </summary>
        SubstitutePuaSymbols
    };
    
    /// <summary>
    /// Some documens have large size after converison into PDF/A format. To reduce file size for these
    /// documents it's necessary to define a strategy of fonts removing. 
    /// This enumeration declares a strategies which can be used to optimize fonts usage.
    /// Every strategy from this enumeration has sense only when flag <see cref="OptimizeFileSize"></see> is set.
    /// </summary>
    enum class RemoveFontsStrategy : uint8_t
    {
        /// <summary>
        /// This strategy removes all the fonts which have duplicates in document. If document 
        /// contains group of duplicated fonts only one font from this group is embedded in document. 
        /// All other fonts from this group are removed from document, every removed font
        /// substituted with the already embedded analog.
        /// </summary>
        RemoveDuplicatedFonts = 4,
        /// <summary>
        /// This strategy looks like <see cref="RemoveDuplicatedFonts"></see> but it removes not fully 
        /// duplicated fonts but fonts which are similar one to another and differs only by parameter "Widths".
        /// This parameter contains set of some widths for specified symbols of font. Every value of width 
        /// from this "Widths" set is not the real width of symbol(glyph), real width for this symbol already 
        /// defined in font's binary data. Value of width from "Widths" set means visual width for this 
        /// symbol - the width which PDF viewer software must set on displaying symbol instead of real width 
        /// defined in the font. More accurately specification tells:
        /// Acrobat 5.0 and later viewers use the glyph widths stored in the font dictionary to override the 
        /// widths of glyphs in the font program itself, which improves the consistency of the display and 
        /// printing of the document.
        /// This strategy is more effective than <see cref="RemoveDuplicatedFonts"></see> but using of this 
        /// strategy in some cases theoretically could damage visual presentation of converted document. 
        /// This defect is possible due to that declared widths of fonts could be different for the same 
        /// symbol and in this case width of this symbol will be changed to new one after font 
        /// substitution - when removed font will be replaced in document with already embedded one.
        /// And if symbol's visual width will be changed - it will be shown incorrectly and this 
        /// distinction could cause visual defects such as text overlapping or another problems. 
        /// But visual defect described is a very rare case and this strategy reduces size of
        /// document more effectively.
        /// </summary>
        RemoveSimilarFontsWithDifferentWidths = 1,
        /// <summary>
        /// This is most effective strategy to reduce document's size. It takes fully embedded font sets 
        /// and trim them down to only the subsets used. It's recommended to use this strategy in combination
        /// with <see cref="RemoveDuplicatedFonts"></see> or <see cref="RemoveSimilarFontsWithDifferentWidths"></see> to
        /// get multiple compression effect for file size. Using of all three strategies simultaneously 
        /// has no sense and strategy <see cref="RemoveSimilarFontsWithDifferentWidths"></see> will not 
        /// be used in this case.
        /// </summary>
        SubsetFonts = 2
    };
    
    
public:

    /// <summary>
    /// Gets/sets run of image streams in async mode.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsAsyncImageStreamsConversionMode() const;
    /// <summary>
    /// Gets/sets run of image streams in async mode.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsAsyncImageStreamsConversionMode(bool value);
    /// <summary>
    /// Is low memory conversion mode enabled
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsLowMemoryMode() const;
    /// <summary>
    /// Is low memory conversion mode enabled
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsLowMemoryMode(bool value);
    /// <summary>
    /// PDF format.
    /// </summary>
    ASPOSE_PDF_SHARED_API PdfFormat get_Format() const;
    /// <summary>
    /// PDF format.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Format(PdfFormat value);
    /// <summary>
    /// Path to file where comments will be stored.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_LogFileName() const;
    /// <summary>
    /// Path to file where comments will be stored.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_LogFileName(System::String value);
    /// <summary>
    /// Stream where comments will be stored.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> get_LogStream() const;
    /// <summary>
    /// Stream where comments will be stored.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_LogStream(System::SharedPtr<System::IO::Stream> value);
    /// <summary>
    /// Action for objects that can not be converted
    /// </summary>
    ASPOSE_PDF_SHARED_API ConvertErrorAction get_ErrorAction() const;
    /// <summary>
    /// Action for objects that can not be converted
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ErrorAction(ConvertErrorAction value);
    /// <summary>
    /// Action for image masked objects
    /// </summary>
    ASPOSE_PDF_SHARED_API ConvertTransparencyAction get_TransparencyAction() const;
    /// <summary>
    /// Action for image masked objects
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TransparencyAction(ConvertTransparencyAction value);
    /// <summary>
    /// Action for images with soft mask.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::ConvertSoftMaskAction get_ConvertSoftMaskAction() const;
    /// <summary>
    /// Action for images with soft mask.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ConvertSoftMaskAction(Aspose::Pdf::ConvertSoftMaskAction value);
    /// <summary>
    /// Gets PdfFormatConversionOptions object with default parameters
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PdfFormatConversionOptions> get_Default();
    /// <summary>
    /// Holds flags to control PDF/A conversion process for cases when source document
    /// doesn't correspond to PDF/A specification.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PdfANonSpecificationFlags> get_NonSpecificationCases() const;
    /// <summary>
    /// Strategy to copy encoding data for symbolic fonts if symbolic TrueType font
    /// has more than one encoding subtable.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PdfASymbolicFontEncodingStrategy> get_SymbolicFontEncodingStrategy() const;
    /// <summary>
    /// Strategy to copy encoding data for symbolic fonts if symbolic TrueType font
    /// has more than one encoding subtable.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SymbolicFontEncodingStrategy(System::SharedPtr<PdfASymbolicFontEncodingStrategy> value);
    /// <summary>
    /// This flag controls text alignment in converted document. By default document conversion 
    /// doesn't affect text alignment and leave text as is. But in some cases font substitution
    /// causes text overlapping or extra spaces in converted document. When  this flag is set
    /// special alignment operations will be performed. This flag should be set only for documents
    /// which have problems with overlapped text or extra text spaces cause using of this flag decrease
    /// performance and in some cases could corrupt text content. 
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_AlignText() const;
    /// <summary>
    /// This flag controls text alignment in converted document. By default document conversion 
    /// doesn't affect text alignment and leave text as is. But in some cases font substitution
    /// causes text overlapping or extra spaces in converted document. When  this flag is set
    /// special alignment operations will be performed. This flag should be set only for documents
    /// which have problems with overlapped text or extra text spaces cause using of this flag decrease
    /// performance and in some cases could corrupt text content. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AlignText(bool value);
    
    /// <summary>
    /// Strategy to align text. This parameter has sense only when flag <see cref="AlignText"></see>  is set to true.
    /// </summary>
    PdfFormatConversionOptions::SegmentAlignStrategy AlignStrategy;
    
    /// <summary>
    /// Strategy to process symbols from unicode Private Use Area (PUA).
    /// </summary>
    ASPOSE_PDF_SHARED_API PdfFormatConversionOptions::PuaProcessingStrategy get_PuaTextProcessingStrategy() const;
    /// <summary>
    /// Strategy to process symbols from unicode Private Use Area (PUA).
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PuaTextProcessingStrategy(PdfFormatConversionOptions::PuaProcessingStrategy value);
    /// <summary>
    /// Gets a flag which enables/disables special conversion mode to get PDF/A document with reduced file size.
    /// Now this flag impacts on optimization of fonts used in PDF document, possibly, in future, this flag 
    /// also will be used to switch on optimization for another data structures, such as graphic.  
    /// Set of this flag and mode could significantly reduce file size but at the same time it could
    /// significantly decrease performance of conversion.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_OptimizeFileSize() const;
    /// <summary>
    /// Sets a flag which enables/disables special conversion mode to get PDF/A document with reduced file size.
    /// Now this flag impacts on optimization of fonts used in PDF document, possibly, in future, this flag 
    /// also will be used to switch on optimization for another data structures, such as graphic.  
    /// Set of this flag and mode could significantly reduce file size but at the same time it could
    /// significantly decrease performance of conversion.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OptimizeFileSize(bool value);
    /// <summary>
    /// Strategy(ies) to exclude superfluous fonts and reduce document file size. 
    /// This parameter has sense only when flag <see cref="OptimizeFileSize"></see> is set to true.
    /// By default combination of strategies <see cref="SubsetFonts"></see> and
    /// <see cref="RemoveDuplicatedFonts"></see> is used.
    /// </summary>
    ASPOSE_PDF_SHARED_API PdfFormatConversionOptions::RemoveFontsStrategy get_ExcludeFontsStrategy() const;
    /// <summary>
    /// Strategy(ies) to exclude superfluous fonts and reduce document file size. 
    /// This parameter has sense only when flag <see cref="OptimizeFileSize"></see> is set to true.
    /// By default combination of strategies <see cref="SubsetFonts"></see> and
    /// <see cref="RemoveDuplicatedFonts"></see> is used.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ExcludeFontsStrategy(PdfFormatConversionOptions::RemoveFontsStrategy value);
    /// <summary>
    /// Options for cases when it's not possible to embed some fonts into PDF document.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::FontEmbeddingOptions> get_FontEmbeddingOptions() const;
    /// <summary>
    /// Rules to solve problems with unicode mapping. Can be null.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<ToUnicodeProcessingRules> get_UnicodeProcessingRules() const;
    /// <summary>
    /// Rules to solve problems with unicode mapping. Can be null.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_UnicodeProcessingRules(System::SharedPtr<ToUnicodeProcessingRules> value);
    /// <summary>
    /// Gets the filename of icc profile name. In case of null the default icc profile used.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_IccProfileFileName() const;
    /// <summary>
    /// Sets the filename of icc profile name. In case of null the default icc profile used.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IccProfileFileName(System::String value);
    /// <summary>
    /// Gets the <see cref="Aspose::Pdf::OutputIntent"></see> for the PDF format conversion.
    /// </summary>
    /// <remarks>
    /// The <see cref="OutputIntent"></see> specifies the intended output device or condition
    /// for which the PDF document is being prepared. It is used to ensure that the colors
    /// in the document are rendered correctly on the target device.
    /// </remarks>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Aspose::Pdf::OutputIntent>& get_OutputIntent() const;
    /// <summary>
    /// Sets the <see cref="Aspose::Pdf::OutputIntent"></see> for the PDF format conversion.
    /// </summary>
    /// <remarks>
    /// The <see cref="OutputIntent"></see> specifies the intended output device or condition
    /// for which the PDF document is being prepared. It is used to ensure that the colors
    /// in the document are rendered correctly on the target device.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_OutputIntent(System::SharedPtr<Aspose::Pdf::OutputIntent> value);
    /// <summary>
    /// This property is out-property. It holds all the fonts(font names) which were not found on computer 
    /// at last PDF/A conversion.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::String> get_NotAccessibleFonts();
    /// <summary>
    /// Gets whether to pass data from Info to Metadata when converted to PDF 2.0. True by default.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsTransferInfo() const;
    /// <summary>
    /// Sets whether to pass data from Info to Metadata when converted to PDF 2.0. True by default.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsTransferInfo(bool value);
    
    /// <summary>
    /// Constructor
    /// </summary>
    /// <param name="outputLogFileName">Path to file where comments will be stored.</param>
    /// <param name="format">The pdf format.</param>
    /// <param name="action">Action for objects that can not be converted</param>
    ASPOSE_PDF_SHARED_API PdfFormatConversionOptions(System::String outputLogFileName, PdfFormat format, ConvertErrorAction action);
    /// <summary>
    /// Constructor
    /// </summary>
    /// <param name="outputLogFileName">Path to file where comments will be stored.</param>
    /// <param name="format">The pdf format.</param>
    ASPOSE_PDF_SHARED_API PdfFormatConversionOptions(System::String outputLogFileName, PdfFormat format);
    /// <summary>
    /// Constructor
    /// </summary>
    /// <param name="format">The pdf format.</param>
    ASPOSE_PDF_SHARED_API PdfFormatConversionOptions(PdfFormat format);
    /// <summary>
    /// Constructor
    /// </summary>
    /// <param name="format">The pdf format.</param>
    /// <param name="action">Action for objects that can not be converted</param>
    ASPOSE_PDF_SHARED_API PdfFormatConversionOptions(PdfFormat format, ConvertErrorAction action);
    /// <summary>
    /// Constructor
    /// </summary>
    /// <param name="outputLogFileName">Path to file where comments will be stored.</param>
    /// <param name="format">The pdf format.</param>
    /// <param name="action">Action for objects that can not be converted</param>
    /// <param name="transparencyAction">Action for image masked objects</param>
    ASPOSE_PDF_SHARED_API PdfFormatConversionOptions(System::String outputLogFileName, PdfFormat format, ConvertErrorAction action, ConvertTransparencyAction transparencyAction);
    /// <summary>
    /// Constructor
    /// </summary>
    /// <param name="outputLogStream">Stream where comments will be stored</param>
    /// <param name="format">The pdf format</param>
    /// <param name="action">Action for objects that can not be converted</param>
    ASPOSE_PDF_SHARED_API PdfFormatConversionOptions(System::SharedPtr<System::IO::Stream> outputLogStream, PdfFormat format, ConvertErrorAction action);
    
protected:

    bool PuaProcessingTextStrategyExplicitlyDefined;
    
    System::SharedPtr<System::Xml::XmlTextWriter> get_Xml() const;
    System::SharedPtr<Aspose::Pdf::Document> get_Document() const;
    bool get_OnlyValidation() const;
    bool get_RemoveDuplicatedFonts();
    bool get_RemoveSimilarFontsWithDifferentWidths();
    bool get_SubsetFonts();
    
    void SetAdditionalParameters(System::SharedPtr<System::Xml::XmlTextWriter> xml, System::SharedPtr<Aspose::Pdf::Document> doc, bool onlyValidation);
    System::SharedPtr<System::Xml::XmlTextWriter> CreateTextWriter();
    void AddNotAccessibleFont(System::String fontName);
    
private:

    PdfFormat _format;
    System::String _outLogFileName;
    System::SharedPtr<System::IO::Stream> _outLogStream;
    ConvertErrorAction _action;
    ConvertTransparencyAction _transparencyAction;
    Aspose::Pdf::ConvertSoftMaskAction _softMaskAction;
    static System::SharedPtr<PdfFormatConversionOptions> _defaultOptions;
    System::SharedPtr<System::Xml::XmlTextWriter> _xml;
    System::SharedPtr<Aspose::Pdf::Document> _document;
    bool _onlyValidation;
    bool _alignText;
    bool isLowMemoryMode;
    PdfFormatConversionOptions::PuaProcessingStrategy _puaProcessingTextStrategy;
    bool _optimizeFileSize;
    System::SharedPtr<PdfANonSpecificationFlags> _nonSpecificationFlags;
    System::SharedPtr<PdfASymbolicFontEncodingStrategy> _symbolicEncodingStrategy;
    System::SharedPtr<ToUnicodeProcessingRules> _toUnicodeRules;
    System::SharedPtr<Aspose::Pdf::FontEmbeddingOptions> _fontEmbeddingOpts;
    System::String _iccProfileFileName;
    System::SharedPtr<System::Collections::Generic::List<System::String>> _notAccessibleFonts;
    bool _asyncImageStreamsConversionMode;
    bool _isTransferInfo;
    PdfFormatConversionOptions::RemoveFontsStrategy pr_ExcludeFontsStrategy;
    System::SharedPtr<Aspose::Pdf::OutputIntent> pr_OutputIntent;
    
    static System::SharedPtr<PdfFormatConversionOptions> CreateDefaultOptions();
    void InitBase();
    
};

DECLARE_ENUM_OPERATORS(Aspose::Pdf::PdfFormatConversionOptions::RemoveFontsStrategy);
DECLARE_USING_GLOBAL_OPERATORS
/// <summary>
/// This class holds flags to control PDF/A conversion for cases when source PDF document doesn't 
/// correspond to PDF specification. If flags of this clas are used it decreases performance 
/// but it's necessary when source PDF document can't be convert into PDF/A format by usual way. 
/// By default all flags are set to false.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PdfANonSpecificationFlags : public System::Object
{
    typedef PdfANonSpecificationFlags ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Some PDF documents contain fonts which have different names in internal data. 
    /// Use of this flag enforces special processing logic for cases when fields 
    /// BaseFont and FontDescriptor.FontName are different.
    /// 
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_CheckDifferentNamesInFontDictionaries() const;
    /// <summary>
    /// Some PDF documents contain fonts which have different names in internal data. 
    /// Use of this flag enforces special processing logic for cases when fields 
    /// BaseFont and FontDescriptor.FontName are different.
    /// 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CheckDifferentNamesInFontDictionaries(bool value);
    
    /// <summary>
    /// Constructor
    /// </summary>
    ASPOSE_PDF_SHARED_API PdfANonSpecificationFlags();
    
private:

    bool pr_CheckDifferentNamesInFontDictionaries;
    
};

/// <summary>
/// This class describes rules which can be used to tune process of copying encoding data for cases
/// when TrueType symbolic font has more than one encoding.
/// Some PDF documents after conversion into PDF/A format could give an error 
/// "More than one encoding in symbolic TrueType font's cmap". 
/// What is a reason of this error? All TrueType symbolic fonts have special table "cmap"
/// in it's internal data. This table maps character codes to glyph indices. 
/// And this table could contain different encoding subtables which
/// describe encodings used. See advanced info about cmap tables at
/// https://developer.apple.com/fonts/TrueType-Reference-Manual/RM06/Chap6cmap.html.
/// Usually cmap table contains several encoding subtables, but PDF/A standard requires
/// that either only one encoding subtable must be left for this font in PDF/A document
/// or there must be a (3,0) encoding subtable among this font subtables.
/// And key question here - what data must be taken from another subtables to copy into
/// destination encoding table (3,0)? Majority of fonts have 'well-formed' cmap tables where
/// every encoding subtable is fully consistent with another subtable. But some fonts
/// have cmap tables with collisions - where for example one subtable has glyph index 
/// 100 for unicode 100, but another subtable has glyph index 200 for the same unicode 100.
/// To solve this problems special strategy needed. 
/// By default following strategy used: 
/// mac subtable(1,0) is looked for. If this table is found, only this data used to fill destination
/// table (3,0). If mac subtable is not found then all subtables except (3,0) are iterated 
/// and used to copy data into destination (3,0) subtable. Also mapping for every unicode(unicode, glyph index)
/// is copied into destination table only if destination table does not have this unicode at current moment. 
/// So, for example if first subtabe has glyph index 100 for unicode 100, and next subtable has glyph
/// index 200 for the same unicode 100, only data from first subtable (unicode=100, glyph index = 100) will be copied. 
/// So each previous subtable takes precedence over the next. 
/// Properties of this class <see cref="PdfASymbolicFontEncodingStrategy"></see> help tune default behaviour. 
/// If property <see cref="PreferredCmapEncodingTable"></see> of type <see cref="QueueItem::CMapEncodingTableType"></see>
/// is set, then relevant subtable will be used in precedence to mac subtable(1,0). Value 'MacTable' from
/// enumeration <see cref="QueueItem::CMapEncodingTableType"></see> has no sense in this case, cause it 
/// points on the same mac subtable (1,0) which will be used by default. 
/// Property <see cref="CmapEncodingTablesPriorityQueue"></see> discards all priorities for any subtable.
/// If this property is set, then only subtables from declared queue will be used in specified order.
/// If subtables specified are not found then default iteration of all subtables and copy strategy described above
/// will be used.
/// Object <see cref="QueueItem"></see> specifies encoding subtable used. This subtable can be set
/// via combination of members(PlatformID, PlatformSpecificId) or via <see cref="QueueItem::CMapEncodingTableType"></see>
/// enumeration.
/// In case when the font has no (3,0) subtable some other subtable will be used to maintain the PDF/A compatibility.
/// The choice of the subtable to use is made under the same rules as described earlier, so that
/// <see cref="PreferredCmapEncodingTable"></see> and <see cref="CmapEncodingTablesPriorityQueue"></see> properties
/// are used to determine the resultant subtable, and if the font doesn't have the requested subtable(s) either
/// then any existant subtable will be used.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PdfASymbolicFontEncodingStrategy : public System::Object
{
    typedef PdfASymbolicFontEncodingStrategy ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Specifies encoding subtable. Each encoding subtable has unique combination
    /// of parameters (PlatformID, PlatformSpecificId). Enumeration <see cref="CMapEncodingTableType"></see>
    /// and property <see cref="CMapEncodingTable"></see> were implemented to make easier 
    /// set of encoding subtable needed.
    /// </summary>
    class ASPOSE_PDF_SHARED_CLASS QueueItem : public System::Object
    {
        typedef QueueItem ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Declares set of some known encoding subtables
        /// </summary>
        enum class CMapEncodingTableType : int16_t
        {
            /// <summary>
            /// Specifies windows unicode table(3,1) - Unicode BMP-only (UCS-2)
            /// </summary>
            WindowsUnicodeTable = 0,
            /// <summary>
            /// Specifies windows symbolic table - (3,0)
            /// </summary>
            WindowsSymbolicTable,
            /// <summary>
            /// Specifies mac table(1,0)
            /// </summary>
            MacTable,
            /// <summary>
            /// Specifies unicode table(0,3)
            /// </summary>
            UnicodeTable
        };
        
        
    public:
    
        /// <summary>
        /// Specifies encoding subtable via <see cref="CMapEncodingTableType"></see>enumeration
        /// </summary>
        ASPOSE_PDF_SHARED_API PdfASymbolicFontEncodingStrategy::QueueItem::CMapEncodingTableType get_CMapEncodingTable() const;
        /// <summary>
        /// Specifies encoding subtable via <see cref="CMapEncodingTableType"></see>enumeration
        /// </summary>
        ASPOSE_PDF_SHARED_API void set_CMapEncodingTable(PdfASymbolicFontEncodingStrategy::QueueItem::CMapEncodingTableType value);
        /// <summary>
        /// Platform identifier for encoding subtable
        /// </summary>
        ASPOSE_PDF_SHARED_API uint16_t get_PlatformId() const;
        /// <summary>
        /// Platform identifier for encoding subtable
        /// </summary>
        ASPOSE_PDF_SHARED_API void set_PlatformId(uint16_t value);
        /// <summary>
        /// Platform-specific encoding identifier for encoding subtable
        /// </summary>
        ASPOSE_PDF_SHARED_API uint16_t get_PlatformSpecificId() const;
        /// <summary>
        /// Platform-specific encoding identifier for encoding subtable
        /// </summary>
        ASPOSE_PDF_SHARED_API void set_PlatformSpecificId(uint16_t value);
        
        /// <summary>
        /// Constructor, specifies mac subtable(1,0) by default
        /// </summary>
        ASPOSE_PDF_SHARED_API QueueItem();
        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="platformID">Platform identifier for encoding subtable</param>
        /// <param name="platformSpecificID">Platform-specific encoding identifier for encoding subtable</param>
        ASPOSE_PDF_SHARED_API QueueItem(uint16_t platformID, uint16_t platformSpecificID);
        /// <summary>
        /// Constructor
        /// </summary>
        /// <param name="cmapTable">encoding subtable</param>
        ASPOSE_PDF_SHARED_API QueueItem(PdfASymbolicFontEncodingStrategy::QueueItem::CMapEncodingTableType cmapTable);
        
    private:
    
        PdfASymbolicFontEncodingStrategy::QueueItem::CMapEncodingTableType pr_CMapEncodingTable;
        uint16_t pr_PlatformId;
        uint16_t pr_PlatformSpecificId;
        
    };
    
    
public:

    /// <summary>
    /// Specifies subtable which will be used in precedence to mac subtable(1,0). Value 'MacTable' from
    /// enumeration <see cref="QueueItem::CMapEncodingTableType"></see> has no sense in this case.
    /// </summary>
    ASPOSE_PDF_SHARED_API PdfASymbolicFontEncodingStrategy::QueueItem::CMapEncodingTableType get_PreferredCmapEncodingTable() const;
    /// <summary>
    /// Specifies subtable which will be used in precedence to mac subtable(1,0). Value 'MacTable' from
    /// enumeration <see cref="QueueItem::CMapEncodingTableType"></see> has no sense in this case.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PreferredCmapEncodingTable(PdfASymbolicFontEncodingStrategy::QueueItem::CMapEncodingTableType value);
    /// <summary>
    /// Specifies queue of encoding subtables to process.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<System::Collections::Generic::Queue<System::SharedPtr<PdfASymbolicFontEncodingStrategy::QueueItem>>>& get_CmapEncodingTablesPriorityQueue() const;
    /// <summary>
    /// Specifies queue of encoding subtables to process.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CmapEncodingTablesPriorityQueue(System::SharedPtr<System::Collections::Generic::Queue<System::SharedPtr<PdfASymbolicFontEncodingStrategy::QueueItem>>> value);
    
    /// <summary>
    /// Constructor. Sets default subtable (mac 1,0)
    /// </summary>
    ASPOSE_PDF_SHARED_API PdfASymbolicFontEncodingStrategy();
    /// <summary>
    /// Constructor
    /// </summary>
    /// <param name="priorityQueue">queue of encoding subtables to iterate</param>
    ASPOSE_PDF_SHARED_API PdfASymbolicFontEncodingStrategy(System::SharedPtr<System::Collections::Generic::Queue<System::SharedPtr<PdfASymbolicFontEncodingStrategy::QueueItem>>> priorityQueue);
    /// <summary>
    /// Constructor
    /// </summary>
    /// <param name="preferredEncodingTable">encoding subtable which will be used in precedence to mac subtable(1,0)</param>
    ASPOSE_PDF_SHARED_API PdfASymbolicFontEncodingStrategy(PdfASymbolicFontEncodingStrategy::QueueItem::CMapEncodingTableType preferredEncodingTable);
    
private:

    PdfASymbolicFontEncodingStrategy::QueueItem::CMapEncodingTableType pr_PreferredCmapEncodingTable;
    System::SharedPtr<System::Collections::Generic::Queue<System::SharedPtr<PdfASymbolicFontEncodingStrategy::QueueItem>>> pr_CmapEncodingTablesPriorityQueue;
    
};

} // namespace Pdf
} // namespace Aspose

DECLARE_USING_ENUM_OPERATORS(Aspose::Pdf);



