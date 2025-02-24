#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum_helpers.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class EmbeddingLevel : uint16_t;
namespace Export
{
enum class EmbedFontCharacters;
} // namespace Export
class FontSubstitutionInfo;
class IFontData;
class IFontFallBackRule;
class IFontFallBackRulesCollection;
class IFontSubstRule;
class IFontSubstRuleCollection;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IEnumerable;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
enum class FontStyle;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Manages fonts across the presentation.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IFontsManager : public virtual System::Object
{
    typedef IFontsManager ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Font substitutions to use when rendering
    /// Read <see cref="Aspose::Slides::IFontSubstRuleCollection">IFontSubstRuleCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFontSubstRuleCollection> get_FontSubstRuleList() = 0;
    /// <summary>
    /// Font substitutions to use when rendering
    /// Write <see cref="Aspose::Slides::IFontSubstRuleCollection">IFontSubstRuleCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_FontSubstRuleList(System::SharedPtr<IFontSubstRuleCollection> value) = 0;
    /// <summary>
    /// Represents a user's collection of FontFallBack rules for managing of collections of fonts for proper substitutions by fallback functionality
    /// Read <see cref="Aspose::Slides::IFontFallBackRulesCollection">IFontFallBackRulesCollection</see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = MakeObject<Presentation>();
    /// // Getting of empty or preinitialized rules collection from FontsManager
    /// auto rulesList = pres->get_FontsManager()->get_FontFallBackRulesCollection();
    /// // adding of rules to collection
    /// rulesList->Add(MakeObject<FontFallBackRule>(0x400, 0x4FF, u"Times New Roman"));
    /// // or
    /// // initialization of new instance of rules collection
    /// auto rulesList = MakeObject<FontFallBackRulesCollection>();
    /// // adding of rules to collection
    /// rulesList->Add(MakeObject<FontFallBackRule>(0x400, 0x4FF, u"Times New Roman"));
    /// // and replacing of existing collection by the new one in FontsManager
    /// pres->get_FontsManager()->set_FontFallBackRulesCollection(rulesList);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFontFallBackRulesCollection> get_FontFallBackRulesCollection() = 0;
    /// <summary>
    /// Represents a user's collection of FontFallBack rules for managing of collections of fonts for proper substitutions by fallback functionality
    /// Write <see cref="Aspose::Slides::IFontFallBackRulesCollection">IFontFallBackRulesCollection</see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = MakeObject<Presentation>();
    /// // Getting of empty or preinitialized rules collection from FontsManager
    /// auto rulesList = pres->get_FontsManager()->get_FontFallBackRulesCollection();
    /// // adding of rules to collection
    /// rulesList->Add(MakeObject<FontFallBackRule>(0x400, 0x4FF, u"Times New Roman"));
    /// // or
    /// // initialization of new instance of rules collection
    /// auto rulesList = MakeObject<FontFallBackRulesCollection>();
    /// // adding of rules to collection
    /// rulesList->Add(MakeObject<FontFallBackRule>(0x400, 0x4FF, u"Times New Roman"));
    /// // and replacing of existing collection by the new one in FontsManager
    /// pres->get_FontsManager()->set_FontFallBackRulesCollection(rulesList);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_FontFallBackRulesCollection(System::SharedPtr<IFontFallBackRulesCollection> value) = 0;
    
    /// <summary>
    /// Returns the fonts used in the presentation
    /// </summary>
    /// <returns>An array of fonts</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<IFontData>> GetFonts() = 0;
    /// <summary>
    /// Gets the information about fonts that will be replaced on the presentation's rendering.
    /// </summary>
    /// <returns>Collection of all fonts substitution <see cref="Aspose::Slides::FontSubstitutionInfo">FontSubstitutionInfo</see>.</returns>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// 
    /// for (auto fontSubstitution : System::IterateOver(pres->get_FontsManager()->GetSubstitutions()))
    /// {
    ///     System::Console::WriteLine(u"{0} -> {1}", fontSubstitution->get_OriginalFontName(), fontSubstitution->get_SubstitutedFontName());
    /// }
    /// </code>
    /// </example>         
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<FontSubstitutionInfo>>> GetSubstitutions() = 0;
    /// <summary>
    /// Returns the fonts embedded in the presentation
    /// </summary>
    /// <returns>Embedded fonts <see cref="Aspose::Slides::IFontData">IFontData</see>[]</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<IFontData>> GetEmbeddedFonts() = 0;
    /// <summary>
    /// Removes the embedded font
    /// </summary>
    /// <param name="fontData">Font data object <see cref="Aspose::Slides::IFontData">IFontData</see></param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveEmbeddedFont(System::SharedPtr<IFontData> fontData) = 0;
    /// <summary>
    /// Adds the embedded font.
    /// <remarks>Keep in mind when copying any fonts that most fonts are copyrighted. First locate the license of 
    /// a font before hand and verify they can be freely transferred to another machine.</remarks>
    /// <exception cref="System::ArgumentException">An ArgumentException can be thrown if font data is null or this font is already embedded</exception>
    /// </summary>
    /// <param name="fontData">Font data object <see cref="Aspose::Slides::IFontData">IFontData</see></param>
    /// <param name="embedFontRule">Embedded font rule <see cref="Aspose::Slides::Export::EmbedFontCharacters">EmbedFontCharacters</see></param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void AddEmbeddedFont(System::SharedPtr<IFontData> fontData, Export::EmbedFontCharacters embedFontRule) = 0;
    /// <summary>
    /// Adds the embedded font
    /// <remarks>Keep in mind when adding any fonts that most fonts are copyrighted. First locate the license of 
    /// a font before hand and verify they can be freely transferred to another machine.</remarks>
    /// <exception cref="System::ArgumentException">An ArgumentException can be thrown if font data is null or this font is already embedded</exception>
    /// </summary>
    /// <param name="fontData">Font data <see cref="uint8_t"></see>[]</param>
    /// <param name="embedFontRule">Embedded font rule <see cref="Aspose::Slides::Export::EmbedFontCharacters">EmbedFontCharacters</see></param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void AddEmbeddedFont(System::ArrayPtr<uint8_t> fontData, Export::EmbedFontCharacters embedFontRule) = 0;
    /// <summary>
    /// Replace font in presentation
    /// </summary>
    /// <param name="sourceFont">Source font</param>
    /// <param name="destFont">Destination font</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void ReplaceFont(System::SharedPtr<IFontData> sourceFont, System::SharedPtr<IFontData> destFont) = 0;
    /// <summary>
    /// Replace font in presentation using information provided in <see cref="Aspose::Slides::IFontSubstRule">IFontSubstRule</see>
    /// </summary>
    /// <param name="substRule">Font substitution info</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void ReplaceFont(System::SharedPtr<IFontSubstRule> substRule) = 0;
    /// <summary>
    /// Replace font in presentation using information provided in collection of <see cref="Aspose::Slides::IFontSubstRule">IFontSubstRule</see>
    /// </summary>
    /// <param name="substRules">Font substitution info collection</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void ReplaceFont(System::SharedPtr<IFontSubstRuleCollection> substRules) = 0;
    /// <summary>
    /// Retrieves the byte array representing the font data for a specified font style and font data.
    /// </summary>
    /// <param name="fontData">The font data object containing the information about the font <see cref="Aspose::Slides::IFontData">IFontData</see>.</param>
    /// <param name="fontStyle">The style of the font for which the data is to be retrieved <see cref="System::Drawing::FontStyle">FontStyle</see>.</param>
    /// <returns>A byte array containing the font data for the specified font style. If the font data or style is not found, returns null.</returns>
    /// <example>
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"Presentation.pptx");
    /// 
    /// // Retrieve all fonts used in the presentation
    /// System::ArrayPtr<System::SharedPtr<IFontData>> fonts = pres->get_FontsManager()->GetFonts();
    /// 
    /// // Get the byte array representing the regular style of the first font in the presentation
    /// System::ArrayPtr<uint8_t> bytes = pres->get_FontsManager()->GetFontBytes(fonts[0], System::Drawing::FontStyle::Regular);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<uint8_t> GetFontBytes(System::SharedPtr<IFontData> fontData, System::Drawing::FontStyle fontStyle) = 0;
    /// <summary>
    /// Determines the embedding level of a font from the given byte array and font name.
    /// </summary>
    /// <param name="fontBytes">The byte array containing the font data.</param>
    /// <param name="fontName">The name of the font.</param>
    /// <returns>The embedding level of the specified font.</returns>
    /// <exception cref="System::ArgumentNullException">Thrown when <paramref name="fontBytes"></paramref> is null.</exception>
    /// <example>
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"Presentation.pptx");
    /// 
    /// // Retrieve all fonts used in the presentation
    /// System::ArrayPtr<System::SharedPtr<IFontData>> fontDatas = pres->get_FontsManager()->GetFonts();
    /// 
    /// // Get the byte array representing the regular style of the first font in the presentation
    /// System::ArrayPtr<uint8_t> bytes = pres->get_FontsManager()->GetFontBytes(fontDatas[0], System::Drawing::FontStyle::Regular);
    /// 
    /// // Determine the embedding level of the font
    /// EmbeddingLevel embeddingLevel = pres->get_FontsManager()->GetFontEmbeddingLevel(bytes, fontDatas[0]->get_FontName());
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API EmbeddingLevel GetFontEmbeddingLevel(System::ArrayPtr<uint8_t> fontBytes, System::String fontName) = 0;
    /// <summary>
    /// Returns font substitution rule at the specified index to use when rendering.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFontSubstRule> get_FontSubstRule(int32_t index) = 0;
    /// <summary>
    /// Returns rule at the specified index for proper substitutions by fallback functionality.
    /// Read-only <see cref="Aspose::Slides::IFontFallBackRule"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFontFallBackRule> get_FontFallBackRule(int32_t index) = 0;
    
};

} // namespace Slides
} // namespace Aspose


