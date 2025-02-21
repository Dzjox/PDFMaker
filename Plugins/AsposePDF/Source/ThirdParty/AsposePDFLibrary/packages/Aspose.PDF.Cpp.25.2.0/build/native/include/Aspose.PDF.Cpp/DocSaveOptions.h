#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/UnifiedSaveOptions.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class DocConverter;
namespace Tests
{
namespace Cpp
{
class PdfToDocxTests;
} // namespace Cpp
class DocConverterFlowTests;
class DocConverterTextBoxTests;
} // namespace Tests
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// Save options for export to Doc format
/// </summary>
class ASPOSE_PDF_SHARED_CLASS DocSaveOptions : public Aspose::Pdf::UnifiedSaveOptions, public Aspose::Pdf::IPipelineOptions
{
    typedef DocSaveOptions ThisType;
    typedef Aspose::Pdf::UnifiedSaveOptions BaseType;
    typedef Aspose::Pdf::IPipelineOptions BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::DocConverter;
    friend class Aspose::Pdf::Tests::DocConverterTextBoxTests;
    friend class Aspose::Pdf::Tests::DocConverterFlowTests;
    friend class Aspose::Pdf::Tests::Cpp::PdfToDocxTests;
    
public:

    /// <summary>
    /// Allows to control how a PDF document is converted into a word processing document.
    /// </summary>
    /// <remarks>
    /// <para>Use the <see cref="RecognitionMode::Textbox"></see> mode when the resulting document is not goining 
    /// to be heavily edited futher. Textboxes are easy to modify when there is not a lot to do.</para>
    /// 
    /// <para>Use the <see cref="RecognitionMode::Flow"></see> mode when the output document needs further editing. 
    /// Paragraphs and texlines in the flow mode allow easy modification of text, but unupported
    /// formatting objects will look worse than in the <see cref="RecognitionMode::Textbox"></see> mode.</para>
    /// </remarks>
    enum class RecognitionMode
    {
        /// <summary>
        /// <para>This mode is fast and good for maximally preserving original look of the PDF file, 
        /// but editability of the resulting document could be limited.</para>
        /// 
        /// <para>Every visually grouped block of text int the original PDF file is converted into a textbox 
        /// in the resulting document. This achieves maximal resemblance of the output document to the original 
        /// PDF file. The output document will look good, but it will consist entirely of textboxes and it 
        /// could makes further editing of the document in Microsoft Word quite hard.</para>
        /// 
        /// <para>This is the default mode.</para>
        /// </summary>
        Textbox,
        /// <summary>
        /// Full recognition mode, the engine performs grouping and multi-level analysis to restore
        /// the original document author's intent and produce a maximally editable document.
        /// The downside is that the output document might look different from the original PDF file.
        /// </summary>
        Flow,
        /// <summary>
        /// An alternative Flow mode that supports the recognition of tables.
        /// </summary>
        EnhancedFlow
    };
    
    /// <summary>
    /// Allows to specify .doc or .docx file format.
    /// </summary>
    enum class DocFormat
    {
        /// <summary>
        /// \c \[MS-DOC]: Word (.doc) Binary File Format
        /// </summary>
        Doc,
        /// <summary>
        /// Office Open XML (.docx) File Format
        /// </summary>
        DocX
    };
    
    
public:

    /// <summary>
    /// Recognition mode.
    /// </summary>
    ASPOSE_PDF_SHARED_API DocSaveOptions::RecognitionMode get_Mode() const;
    /// <summary>
    /// Recognition mode.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Mode(DocSaveOptions::RecognitionMode value);
    /// <summary>
    ///     In Pdf words may be innerly represented with operators that prints words
    ///   by independently printing their letters or syllables. So, to detect words sometimes we need detect groups
    ///   of independent chars that are in fact words.
    ///     This setting defines width of space between text elements(letters, syllables) 
    ///   that must be treated as distance between words during recognition of words in source PDF.
    ///   (presence of empty space at least with this width between letters means that 
    ///    textual elements pertain to different words).
    ///   It's normed to font size -  1.0 means 100% of supposed word's font size.
    ///  ATTENTION!It's used only in cases when source PDF contains specific rarely used fonts
    ///  for which optimal value cannot be calculated from font. 
    ///    So, in vast majority of cases this parameter changes nothing in result document.
    /// </summary>
    ASPOSE_PDF_SHARED_API float get_RelativeHorizontalProximity() const;
    /// <summary>
    ///     In Pdf words may be innerly represented with operators that prints words
    ///   by independently printing their letters or syllables. So, to detect words sometimes we need detect groups
    ///   of independent chars that are in fact words.
    ///     This setting defines width of space between text elements(letters, syllables) 
    ///   that must be treated as distance between words during recognition of words in source PDF.
    ///   (presence of empty space at least with this width between letters means that 
    ///    textual elements pertain to different words).
    ///   It's normed to font size -  1.0 means 100% of supposed word's font size.
    ///  ATTENTION!It's used only in cases when source PDF contains specific rarely used fonts
    ///  for which optimal value cannot be calculated from font. 
    ///    So, in vast majority of cases this parameter changes nothing in result document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RelativeHorizontalProximity(float value);
    /// <summary>
    /// This parameter is used for grouping text lines into paragraphs.
    /// Determines how far apart can be two relative text lines. Specified in hundreds of percent of the text lines height.
    /// </summary>
    ASPOSE_PDF_SHARED_API float get_MaxDistanceBetweenTextLines() const;
    /// <summary>
    /// This parameter is used for grouping text lines into paragraphs.
    /// Determines how far apart can be two relative text lines. Specified in hundreds of percent of the text lines height.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_MaxDistanceBetweenTextLines(float value);
    /// <summary>
    /// Switch on the recognition of bullets
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_RecognizeBullets() const;
    /// <summary>
    /// Switch on the recognition of bullets
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RecognizeBullets(bool value);
    /// <summary>
    /// Use paragraph or line breaks
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_AddReturnToLineEnd() const;
    /// <summary>
    /// Use paragraph or line breaks
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AddReturnToLineEnd(bool value);
    /// <summary>
    /// Converted images X resolution.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_ImageResolutionX() const;
    /// <summary>
    /// Converted images X resolution.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ImageResolutionX(int32_t value);
    /// <summary>
    /// Converted images Y resolution.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_ImageResolutionY() const;
    /// <summary>
    /// Converted images Y resolution.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ImageResolutionY(int32_t value);
    /// <summary>
    /// Output format
    /// </summary>
    ASPOSE_PDF_SHARED_API DocSaveOptions::DocFormat get_Format() const;
    /// <summary>
    /// Output format
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Format(DocSaveOptions::DocFormat value);
    /// <summary>
    /// Defines batch size if batched conversion is applicable
    /// to source and destination formats pair.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_BatchSize() override;
    /// <summary>
    /// Defines batch size if batched conversion is applicable
    /// to source and destination formats pair.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BatchSize(int32_t value) override;
    /// <summary>
    /// Defines the path (file name or directory name) to hold
    /// temporary data when converting in memory save mode.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_MemorySaveModePath() const;
    /// <summary>
    /// Defines the path (file name or directory name) to hold
    /// temporary data when converting in memory save mode.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_MemorySaveModePath(System::String value);
    /// <summary>
    /// Gets conversion for Type3 fonts.
    /// In Type 3 fonts, glyphs shall be defined by streams of graphics operators.
    /// This means that in the DOC/DOCX output we see images instead of text.
    /// Set this flag to true to convert Type3 fonts to TTF and get text in the resulting file.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_ConvertType3Fonts() const;
    /// <summary>
    /// Sets conversion for Type3 fonts.
    /// In Type 3 fonts, glyphs shall be defined by streams of graphics operators.
    /// This means that in the DOC/DOCX output we see images instead of text.
    /// Set this flag to true to convert Type3 fonts to TTF and get text in the resulting file.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ConvertType3Fonts(bool value);
    /// <summary>
    /// Gets the procedure for resaving fonts.
    /// If set to true, we reload fonts on every page
    /// to avoid the influence of previous font properties and load the newly created font from scratch.
    /// Set this option to false if you want to improve performance.
    /// The default value is true;
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_ReSaveFonts() const;
    /// <summary>
    /// Sets the procedure for resaving fonts.
    /// If set to true, we reload fonts on every page
    /// to avoid the influence of previous font properties and load the newly created font from scratch.
    /// Set this option to false if you want to improve performance.
    /// The default value is true;
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ReSaveFonts(bool value);
    
    /// <summary>
    ///  This handler can be used to handle conversion progress events
    ///  f.e. it can be used to show progress bar or messages about current amount
    ///  of processed  pages, example of handler's code that shows progress on console is :
    /// </summary>
    /// <example>
    /// </example>
    UnifiedSaveOptions::ConversionProgressEventHandler CustomProgressHandler;
    
    /// <summary>
    /// Constructor
    /// </summary>
    ASPOSE_PDF_SHARED_API DocSaveOptions();
    
protected:

    /// <summary>
    /// Internal parameter for OCR files conversion.
    /// Parameter is temporary
    /// </summary>
    bool UseNewTextBoxRecognitionAlgorithm;
    
private:

    DocSaveOptions::RecognitionMode mode;
    float relativeHorizontalProximity;
    bool recognizeBullets;
    bool addReturnToLineEnd;
    int32_t imageResolutionX;
    int32_t imageResolutionY;
    DocSaveOptions::DocFormat format;
    int32_t _batchSize;
    System::String _memorySaveModePath;
    bool convertType3Fonts;
    bool reSaveFonts;
    float pr_MaxDistanceBetweenTextLines;
    
};

} // namespace Pdf
} // namespace Aspose


