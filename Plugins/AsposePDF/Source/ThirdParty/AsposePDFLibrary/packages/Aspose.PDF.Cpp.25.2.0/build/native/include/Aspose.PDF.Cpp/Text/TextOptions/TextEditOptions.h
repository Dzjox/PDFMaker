#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

#include "Aspose.PDF.Cpp/Text/TextOptions/TextOptions.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Engine
{
namespace CommonData
{
namespace Text
{
namespace Segmenting
{
class PhysicalTextSegment;
} // namespace Segmenting
} // namespace Text
} // namespace CommonData
} // namespace Engine
namespace Text
{
class Font;
class TextFragmentAbsorber;
} // namespace Text
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Descubes options of text edit operations.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TextEditOptions final : public Aspose::Pdf::Text::TextOptions
{
    typedef TextEditOptions ThisType;
    typedef Aspose::Pdf::Text::TextOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::Text::Segmenting::PhysicalTextSegment;
    friend class Aspose::Pdf::Text::TextFragmentAbsorber;
    
public:

    /// <summary>
    /// Action to perform if font does not contain required character 
    /// </summary>
    enum class NoCharacterAction
    {
        /// <summary>
        /// Throw exception
        /// </summary>
        ThrowException,
        /// <summary>
        /// Repalce font to standard font which contains required character
        /// </summary>
        UseStandardFont,
        /// <summary>
        /// Replace text anyway without font substitution
        /// </summary>
        ReplaceAnyway,
        /// <summary>
        /// Replaces fonts as necessary to ensure all characters in the text can be displayed.
        /// The font substitution algorithm follows these steps:
        /// 1. If the user explicitly sets the Font property, check if the specified font can display the desired characters.
        /// 2. If no user-defined font is set, search through fonts added via the <see cref="FontRepository::Sources"></see>.
        /// 3. Analyze the text to identify its alphabet or script and suggest font names accordingly.
        ///    Attempt to locate and use these fonts from the system.
        /// 4. As a fallback, search the system for any font capable of displaying the required characters.
        /// </summary>
        ReplaceFonts,
        /// <summary>
        /// Repalce font to defined replacement font
        /// </summary>
        UseCustomReplacementFont
    };
    
    /// <summary>
    /// Font replacement behavior.
    /// </summary>
    enum class FontReplace
    {
        /// <summary>
        /// No additional changes performed during font replacement.
        /// </summary>
        Default,
        /// <summary>
        /// Fonts that become unused during font replacement will be removed from resulting document.
        /// </summary>
        RemoveUnusedFonts
    };
    
    /// <summary>
    /// Language transformation modes
    /// </summary>
    enum class LanguageTransformation
    {
        /// <summary>
        /// Default language transformation is performed.
        /// </summary>
        Default,
        /// <summary>
        /// Language transformation is performed the same way as in a text editor. It usually means text will looks in the document exactly as You see it in code. But no warranties.
        /// </summary>
        ExactlyAsISee,
        /// <summary>
        /// Language transformation is not performed.
        /// </summary>
        None
    };
    
    /// <summary>
    /// Clipping path processing modes
    /// </summary>
    enum class ClippingPathsProcessingMode
    {
        /// <summary>
        /// Keeps clipping paths of the original page layout. (Default)
        /// </summary>
        KeepIntact,
        /// <summary>
        /// Original clipping path will be expanded in the case edited text requires more space.
        /// </summary>
        Expand,
        /// <summary>
        /// Original clipping path will be removed in the case edited text requires more space. Caution: Because of clipping paths may interact with each other removing of it may lead to unexpected result on the page layout.
        /// </summary>
        Remove
    };
    
    
protected:

    /// <summary>
    /// Text rearrangement modes
    /// </summary>
    enum class TextRearrangement
    {
        /// <summary>
        /// Text rearrangement is not performed.
        /// </summary>
        None,
        /// <summary>
        /// Text rearrangement is performed automatically.
        /// </summary>
        Auto
    };
    
    
public:

    /// <summary>
    /// Gets font used for replacing if user font does not contain required character
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Font> get_ReplacementFont() const;
    /// <summary>
    /// Sets font used for replacing if user font does not contain required character
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ReplacementFont(System::SharedPtr<Font> value);
    /// <summary>
    /// Gets mode that defines behavior in case fonts don't contain requested characters.
    /// </summary>
    ASPOSE_PDF_SHARED_API TextEditOptions::NoCharacterAction get_NoCharacterBehavior() const;
    /// <summary>
    /// Sets mode that defines behavior in case fonts don't contain requested characters.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_NoCharacterBehavior(TextEditOptions::NoCharacterAction value);
    /// <summary>
    /// Gets mode that defines behavior for fonts replacement scenarios.
    /// </summary>
    ASPOSE_PDF_SHARED_API TextEditOptions::FontReplace get_FontReplaceBehavior() const;
    /// <summary>
    /// Gets mode that defines behavior for fonts replacement scenarios.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FontReplaceBehavior(TextEditOptions::FontReplace value);
    /// <summary>
    /// Gets value that permits usage of language transformation during adding or editing of text.
    /// true - language transformation will be applied if necessary (default value).
    /// false - language transformation will NOT be applied.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_AllowLanguageTransformation() const;
    /// <summary>
    /// Sets value that permits usage of language transformation during adding or editing of text.
    /// true - language transformation will be applied if necessary (default value).
    /// false - language transformation will NOT be applied.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AllowLanguageTransformation(bool value);
    /// <summary>
    /// Gets mode that defines behavior for language transformation scenarios.
    /// </summary>
    ASPOSE_PDF_SHARED_API TextEditOptions::LanguageTransformation get_LanguageTransformationBehavior() const;
    /// <summary>
    /// Gets mode that defines behavior for language transformation scenarios.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_LanguageTransformationBehavior(TextEditOptions::LanguageTransformation value);
    /// <summary>
    /// Gets mode for processing clipping path of the edited text.
    /// </summary>
    ASPOSE_PDF_SHARED_API TextEditOptions::ClippingPathsProcessingMode get_ClippingPathsProcessing() const;
    /// <summary>
    /// Gets mode for processing clipping path of the edited text.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ClippingPathsProcessing(TextEditOptions::ClippingPathsProcessingMode value);
    /// <summary>
    /// Gets value that permits searching for text underlining on the page of source document.
    /// (Obsolete) Please use TextSearchOptions.SearchForTextRelatedGraphics instead this.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_ToAttemptGetUnderlineFromSource() const;
    /// <summary>
    /// Sets value that permits searching for text underlining on the page of source document.
    /// (Obsolete) Please use TextSearchOptions.SearchForTextRelatedGraphics instead this.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ToAttemptGetUnderlineFromSource(bool value);
    
    /// <summary>
    /// Initializes new instance of the <see cref="TextEditOptions"></see> object for the specified no-character behavior mode.
    /// </summary>
    /// <param name="noCharacterBehavior">No-character behavior mode object.</param>
    ASPOSE_PDF_SHARED_API TextEditOptions(TextEditOptions::NoCharacterAction noCharacterBehavior);
    /// <summary>
    /// Initializes new instance of the <see cref="TextEditOptions"></see> object for the specified font replacement behavior mode.
    /// </summary>
    /// <param name="fontReplaceBehavior">Font replace behavior object.</param>
    ASPOSE_PDF_SHARED_API TextEditOptions(TextEditOptions::FontReplace fontReplaceBehavior);
    /// <summary>
    /// Initializes new instance of the <see cref="TextEditOptions"></see> object for the specified language transformation permission.
    /// </summary>
    /// <param name="allowLanguageTransformation">Allows language transformation if set to true.</param>
    ASPOSE_PDF_SHARED_API TextEditOptions(bool allowLanguageTransformation);
    /// <summary>
    /// Initializes new instance of the <see cref="TextEditOptions"></see> object for the specified language transformation behavior mode.
    /// </summary>
    /// <param name="languageTransformationBehavior">language transformation behavior object.</param>
    ASPOSE_PDF_SHARED_API TextEditOptions(TextEditOptions::LanguageTransformation languageTransformationBehavior);
    
protected:

    /// <summary>
    /// Gets mode that defines text rearrangement behavior.
    /// </summary>
    TextEditOptions::TextRearrangement get_RearrangementMode() const;
    /// <summary>
    /// Gets mode that defines text rearrangement behavior.
    /// </summary>
    void set_RearrangementMode(TextEditOptions::TextRearrangement value);
    /// <summary>
    /// Indicates that mass operation will performed. It instructs TextFragmentAbsorber (and underlying logic) to omit some checkings. It is for performance. That checkings are necessary if not all text segments are affected by operation.
    /// Don't set this to 'true' if you aren't sure that _all_ text operators must be affected.
    /// </summary>
    bool get_IsMassOperation() const;
    /// <summary>
    /// Indicates that mass operation will performed. It instructs TextFragmentAbsorber (and underlying logic) to omit some checkings. It is for performance. That checkings are necessary if not all text segments are affected by operation.
    /// Don't set this to 'true' if you aren't sure that _all_ text operators must be affected.
    /// </summary>
    void set_IsMassOperation(bool value);
    
    /// <summary>
    /// Initializes new instance of the <see cref="TextEditOptions"></see> object for the specified text rearrangement mode.
    /// </summary>
    /// <param name="rearrangementMode">Rearrangement mode object.</param>
    TextEditOptions(TextEditOptions::TextRearrangement rearrangementMode);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TextEditOptions, CODEPORTING_ARGS(TextEditOptions::TextRearrangement rearrangementMode));
    
private:

    TextEditOptions::NoCharacterAction noCharacterBehavior;
    System::SharedPtr<Font> replacementFont;
    TextEditOptions::TextRearrangement rearrangementMode;
    TextEditOptions::FontReplace fontReplace;
    TextEditOptions::LanguageTransformation languageTransformation;
    TextEditOptions::ClippingPathsProcessingMode clippingPathsProcessing;
    bool allowLanguageTransformation;
    bool isUnderlineFromSource;
    bool pr_IsMassOperation;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


