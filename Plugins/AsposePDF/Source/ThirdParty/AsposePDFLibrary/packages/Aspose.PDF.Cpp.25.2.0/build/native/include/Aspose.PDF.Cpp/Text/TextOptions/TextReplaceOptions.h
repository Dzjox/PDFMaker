#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum_helpers.h>

#include "Aspose.PDF.Cpp/Text/TextOptions/TextOptions.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents text replace options
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TextReplaceOptions final : public Aspose::Pdf::Text::TextOptions
{
    typedef TextReplaceOptions ThisType;
    typedef Aspose::Pdf::Text::TextOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Scope where replace text operation is applied 
    /// REPLACE_FIRST by default
    /// This obsolete option was kept for compatibility. It affects to PdfContentEditor and has no effect to TextFragmentAbsorber.
    /// </summary>
    enum class Scope
    {
        /// <summary>
        /// Replace only first occurrence of the text on each of affected pages
        /// </summary>
        REPLACE_FIRST,
        /// <summary>
        /// Replace all text occurrences on all affected pages
        /// </summary>
        REPLACE_ALL
    };
    
    /// <summary>
    /// Determines action that will be done after replace of text fragment to more short.
    /// None - no action, replaced text may overlaps rest of the line;
    /// AdjustSpaceWidth - tries adjust spaces between words to keep line length;
    /// WholeWordsHyphenation - tries distribute words between paragraph lines to keep paragraph's right field;
    /// ShiftRestOfLine - shifts rest of the line according to changing length of text, length of the line may be changed;
    /// Default value is ShiftRestOfLine.
    /// </summary>
    enum class ReplaceAdjustment
    {
        /// <summary>
        /// No action, replaced text may overlaps rest of the line
        /// </summary>
        None = 0,
        /// <summary>
        /// Tries adjust spaces between words to keep line length
        /// </summary>
        AdjustSpaceWidth = 1,
        /// <summary>
        /// Tries distribute words between paragraph lines to keep paragraph's right field
        /// </summary>
        WholeWordsHyphenation = 2,
        /// <summary>
        /// Tries to spread the words in the available white space using the paragraph width.
        /// If the text overflows, it will be hidden.
        /// </summary>
        IsFormFillingMode = 4,
        /// <summary>
        /// (Default) Shifts rest of the line according to changing length of text, length of the line may be changed
        /// </summary>
        ShiftRestOfLine = 8
    };
    
    
public:

    /// <summary>
    /// Gets a scope where replace text operation is applied 
    /// </summary>
    ASPOSE_PDF_SHARED_API TextReplaceOptions::Scope get_ReplaceScope() const;
    /// <summary>
    /// Sets a scope where replace text operation is applied 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ReplaceScope(TextReplaceOptions::Scope value);
    /// <summary>
    /// Gets an action that will be done after replace of text fragment to more short.
    /// </summary>
    ASPOSE_PDF_SHARED_API TextReplaceOptions::ReplaceAdjustment get_ReplaceAdjustmentAction() const;
    /// <summary>
    /// Sets an action that will be done after replace of text fragment to more short.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ReplaceAdjustmentAction(TextReplaceOptions::ReplaceAdjustment value);
    /// <summary>
    /// Gets value of line spacing that used if replace adjustment is forced to create new line of text.
    /// The value expected is multiplier of font size of the replaced text. Default is 1.2.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_AdjustmentNewLineSpacing() const;
    /// <summary>
    /// Sets value of line spacing that used if replace adjustment is forced to create new line of text.
    /// The value expected is multiplier of font size of the replaced text. Default is 1.2.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AdjustmentNewLineSpacing(double value);
    /// <summary>
    /// Sets or gets right position adjustment for replaced text when using TextReplaceOptions:
    /// - ReplaceAdjustmentAction = WholeWordsHyphenation;
    /// - ReplaceAdjustmentAction = IsFormFillingMode;
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_RightAdjustment() const;
    /// <summary>
    /// Sets or gets right position adjustment for replaced text when using TextReplaceOptions:
    /// - ReplaceAdjustmentAction = WholeWordsHyphenation;
    /// - ReplaceAdjustmentAction = IsFormFillingMode;
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RightAdjustment(double value);
    /// <summary>
    /// Sets or gets left position adjustment for replaced text when using TextReplaceOptions:
    /// - ReplaceAdjustmentAction = IsFormFillingMode;
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_LeftAdjustment() const;
    /// <summary>
    /// Sets or gets left position adjustment for replaced text when using TextReplaceOptions:
    /// - ReplaceAdjustmentAction = IsFormFillingMode;
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_LeftAdjustment(double value);
    /// <summary>
    /// Gets a value indicating whether to ignore distinct paragraphs when adjusting text on the page after text replacement.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IgnoreParagraphs() const;
    /// <summary>
    /// Sets a value indicating whether to ignore distinct paragraphs when adjusting text on the page after text replacement.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IgnoreParagraphs(bool value);
    
    /// <summary>
    /// Initializes new instance of the <see cref="TextReplaceOptions"></see> object for the specified scope.
    /// </summary>
    /// <param name="scope">Scope object.</param>
    ASPOSE_PDF_SHARED_API TextReplaceOptions(TextReplaceOptions::Scope scope);
    /// <summary>
    /// Initializes new instance of the <see cref="TextReplaceOptions"></see> object for the specified after replace action.
    /// </summary>
    /// <param name="adjustment">ReplaceAdjustment object.</param>
    ASPOSE_PDF_SHARED_API TextReplaceOptions(TextReplaceOptions::ReplaceAdjustment adjustment);
    
private:

    TextReplaceOptions::Scope scope;
    TextReplaceOptions::ReplaceAdjustment _replaceAdjustment;
    double _adjustmentNewLineSpacing;
    double _rightAdjustment;
    double _leftAdjustment;
    bool pr_IgnoreParagraphs;
    
};

DECLARE_ENUM_OPERATORS(Aspose::Pdf::Text::TextReplaceOptions::ReplaceAdjustment);
DECLARE_USING_GLOBAL_OPERATORS
} // namespace Text
} // namespace Pdf
} // namespace Aspose

DECLARE_USING_ENUM_OPERATORS(Aspose::Pdf::Text);



