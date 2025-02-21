#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/Text/TextOptions/TextOptions.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class PageGenerator;
namespace Text
{
class TextBuilder;
class TextParagraph;
} // namespace Text
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents text formatting options
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TextFormattingOptions final : public Aspose::Pdf::Text::TextOptions
{
    typedef TextFormattingOptions ThisType;
    typedef Aspose::Pdf::Text::TextOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Text::TextParagraph;
    friend class Aspose::Pdf::Text::TextBuilder;
    
public:

    /// <summary>
    /// Defines word wrapping strategies
    /// </summary>
    enum class WordWrapMode
    {
        /// <summary>
        /// No wrapping is performed
        /// </summary>
        NoWrap,
        /// <summary>
        /// Discretionary hyphenation is performed. Allows breaking words in the middle.
        /// </summary>
        DiscretionaryHyphenation,
        /// <summary>
        /// Word wrapping only wraps complete words.
        /// If the complete word cannot be wrapped, attempts to use discretionary hyphenation
        /// </summary>
        ByWords,
        /// <summary>
        /// WordWrapMode not set.
        /// Wrapping strategies of upper-level structure (table cell, paragraph, etc.) will be used.
        /// </summary>
        Undefined
    };
    
    /// <summary>
    /// Defines line spacing specifics
    /// </summary>
    enum class LineSpacingMode
    {
        /// <summary>
        /// Line spacing is font size
        /// </summary>
        FontSize,
        /// <summary>
        /// Line spacing is a full space between descender and ascender
        /// </summary>
        FullSize
    };
    
    
public:

    /// <summary>
    /// Gets word wrap mode.
    /// Default value is WordWrapMode.NoWrap
    /// </summary>
    ASPOSE_PDF_SHARED_API TextFormattingOptions::WordWrapMode get_WrapMode() const;
    /// <summary>
    /// Sets word wrap mode.
    /// Default value is WordWrapMode.NoWrap
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_WrapMode(TextFormattingOptions::WordWrapMode value);
    /// <summary>
    /// Gets line spacing mode.
    /// Default value is LineSpacingMode.FontSize
    /// </summary>
    ASPOSE_PDF_SHARED_API TextFormattingOptions::LineSpacingMode get_LineSpacing() const;
    /// <summary>
    /// Sets line spacing mode.
    /// Default value is LineSpacingMode.FontSize
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_LineSpacing(TextFormattingOptions::LineSpacingMode value);
    /// <summary>
    /// Gets hyphen symbol that is used in hyphenation process. 
    /// </summary>
    /// <remarks>
    /// To eliminate hyphen drawing (with wrapping procedure still in place) please set empty string string.Empty for HyphenSymbol.
    /// </remarks>
    ASPOSE_PDF_SHARED_API System::String get_HyphenSymbol() const;
    /// <summary>
    /// Sets hyphen symbol that is used in hyphenation process. 
    /// </summary>
    /// <remarks>
    /// To eliminate hyphen drawing (with wrapping procedure still in place) please set empty string string.Empty for HyphenSymbol.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_HyphenSymbol(System::String value);
    /// <summary>
    /// Gets subsequent lines indent value.
    /// </summary>
    ASPOSE_PDF_SHARED_API float get_SubsequentLinesIndent() const;
    /// <summary>
    /// Sets subsequent lines indent value.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SubsequentLinesIndent(float value);
    /// <summary>
    /// Gets first line indent value.
    /// </summary>
    ASPOSE_PDF_SHARED_API float get_FirstLineIndent() const;
    /// <summary>
    /// Sets first line indent value.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FirstLineIndent(float value);
    
    /// <summary>
    /// Initializes new instance of the <see cref="TextFormattingOptions"></see> object for the specified word wrap mode.
    /// </summary>
    /// <param name="wrapMode">Word wrap mode.</param>
    ASPOSE_PDF_SHARED_API TextFormattingOptions(TextFormattingOptions::WordWrapMode wrapMode);
    /// <summary>
    /// Initializes new instance of the <see cref="TextFormattingOptions"></see> object with undefined word wrap mode.
    /// </summary>
    ASPOSE_PDF_SHARED_API TextFormattingOptions();
    
protected:

    bool get_IsChanged() const;
    void set_IsChanged(bool value);
    
    /// <summary>
    /// Clones TextFormattingOptions instance.
    /// </summary>
    /// <returns>Cloned TextFormattingOptions</returns>
    System::SharedPtr<TextFormattingOptions> Clone();
    
private:

    TextFormattingOptions::WordWrapMode _wrapMode;
    TextFormattingOptions::LineSpacingMode _lineSpacing;
    float _subsequentLinesIndent;
    float _firstLineIndent;
    bool pr_IsChanged;
    System::String pr_HyphenSymbol;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


