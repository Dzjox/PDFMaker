#pragma once
//Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum_helpers.h>
#include <system/array.h>
#include <DOM/IFontsManager.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Common
{
namespace TrueType
{
class TTFont;
} // namespace TrueType
} // namespace Common
namespace Fonts
{
namespace Common
{
enum class FontStyle;
} // namespace Common
namespace TTF
{
class TTFFont;
} // namespace TTF
} // namespace Fonts
namespace Slides
{
class EmbeddedFont;
class EmbeddedFontsStorage;
enum class EmbeddingLevel : uint16_t;
namespace Export
{
class DrawingMLExporter;
class EmbeddedFontsHtmlControllerInternal;
enum class EmbedFontCharacters;
} // namespace Export
class FontData;
class FontsList;
class FontsListEntry;
class FontsListManager;
class FontsManagerInternal;
class FontsManagerRenderingGuard;
class FontSubstitutionInfo;
class IFontData;
class IFontFallBackRule;
class IFontFallBackRulesCollection;
class IFontSubstRule;
class IFontSubstRuleCollection;
class IPresentation;
namespace PptSerialization
{
class PptSerializator;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class EmbeddedFontsCollectionPPTXSerialization;
} // namespace PartParser
class PptxCloner;
} // namespace PptxSerialization
class Presentation;
namespace Util
{
class FontWrapper;
} // namespace Util
} // namespace Slides
} // namespace Aspose
namespace PdfImport
{
class PdfImporter;
class PdfSlideHelper;
} // namespace PdfImport
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class IDictionary;
template <typename> class IEnumerable;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
enum class FontStyle;
} // namespace Drawing
namespace IO
{
class MemoryStream;
} // namespace IO
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Manages fonts across the presentation.
/// </summary>
/// <example>
/// The following example shows how to add embedded fonts to PowerPoint Presentation.
/// <code>
/// auto presentation = System::MakeObject<Presentation>(u"Fonts.pptx");
/// System::ArrayPtr<System::SharedPtr<IFontData>> allFonts = presentation->get_FontsManager()->GetFonts();
/// System::ArrayPtr<System::SharedPtr<IFontData>> embeddedFonts = presentation->get_FontsManager()->GetEmbeddedFonts();
/// 
/// for (auto&& font : allFonts)
/// {
///     if (!embeddedFonts->Contains(font))
///     {
///         presentation->get_FontsManager()->AddEmbeddedFont(font, EmbedFontCharacters::All);
///     }
/// }
/// 
/// // Save the presentation
/// presentation->Save(u"AddEmbeddedFont_out.pptx", SaveFormat::Pptx);
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS FontsManager : public Aspose::Slides::IFontsManager
{
    typedef FontsManager ThisType;
    typedef Aspose::Slides::IFontsManager BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class PdfImport::PdfImporter;
    friend class PdfImport::PdfSlideHelper;
    friend class Aspose::Slides::FontsManagerRenderingGuard;
    friend class Aspose::Slides::FontsListEntry;
    friend class Aspose::Slides::FontsListManager;
    friend class Aspose::Slides::EmbeddedFontsStorage;
    friend class Aspose::Slides::Export::DrawingMLExporter;
    friend class Aspose::Slides::Export::EmbeddedFontsHtmlControllerInternal;
    friend class Aspose::Slides::Presentation;
    friend class Aspose::Slides::PptxSerialization::PartParser::EmbeddedFontsCollectionPPTXSerialization;
    friend class Aspose::Slides::PptSerialization::PptSerializator;
    friend class Aspose::Slides::PptxSerialization::PptxCloner;
    /// @endcond
    
public:

    /// <summary>
    /// Font substitutions to use when rendering.
    /// Read <see cref="Aspose::Slides::IFontSubstRuleCollection">IFontSubstRuleCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::IFontSubstRuleCollection> get_FontSubstRuleList() override;
    /// <summary>
    /// Font substitutions to use when rendering.
    /// Write <see cref="Aspose::Slides::IFontSubstRuleCollection">IFontSubstRuleCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_FontSubstRuleList(System::SharedPtr<Aspose::Slides::IFontSubstRuleCollection> value) override;
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
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::IFontFallBackRulesCollection> get_FontFallBackRulesCollection() override;
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
    ASPOSE_SLIDES_SHARED_API void set_FontFallBackRulesCollection(System::SharedPtr<Aspose::Slides::IFontFallBackRulesCollection> value) override;
    
    /// <summary>
    /// Returns the fonts used in the presentation
    /// </summary>
    /// <returns>An array of fonts</returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<Aspose::Slides::IFontData>> GetFonts() override;
    /// <summary>
    /// Gets the information about fonts that will be replaced on the presentation's rendering.
    /// </summary>
    /// <returns>Collection of all fonts substitution <see cref="FontSubstitutionInfo"></see>.</returns>
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
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Slides::FontSubstitutionInfo>>> GetSubstitutions() override;
    /// <summary>
    /// Returns the fonts embedded in the presentation
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<Aspose::Slides::IFontData>> GetEmbeddedFonts() override;
    /// <summary>
    /// Removes the embedded font
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void RemoveEmbeddedFont(System::SharedPtr<Aspose::Slides::IFontData> fontData) override;
    /// <summary>
    /// Adds the embedded font
    /// <remarks>Keep in mind when copying any fonts that most fonts are copyrighted. First locate the license of 
    /// a font before hand and verify they can be freely transferred to another machine.</remarks>
    /// <exception cref="System::ArgumentException">An ArgumentException can be thrown if font data is null or this font is already embedded</exception>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void AddEmbeddedFont(System::SharedPtr<Aspose::Slides::IFontData> fontData, Aspose::Slides::Export::EmbedFontCharacters embedFontRule) override;
    /// <summary>
    /// Adds the embedded font
    /// <remarks>Keep in mind when copying any fonts that most fonts are copyrighted. First locate the license of 
    /// a font before hand and verify they can be freely transferred to another machine.</remarks>
    /// <exception cref="System::ArgumentException">An ArgumentException can be thrown if font data is null or this font is already embedded</exception>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void AddEmbeddedFont(System::ArrayPtr<uint8_t> fontData, Aspose::Slides::Export::EmbedFontCharacters embedFontRule) override;
    /// <summary>
    /// Replace font in presentation
    /// </summary>
    /// <param name="sourceFont">Source font</param>
    /// <param name="destFont">Destination font</param>
    ASPOSE_SLIDES_SHARED_API void ReplaceFont(System::SharedPtr<Aspose::Slides::IFontData> sourceFont, System::SharedPtr<Aspose::Slides::IFontData> destFont) override;
    /// <summary>
    /// Replace font in presentation using information provided in <see cref="Aspose::Slides::FontSubstRule">FontSubstRule</see>
    /// </summary>
    /// <param name="substRule">Font substitution info</param>
    ASPOSE_SLIDES_SHARED_API void ReplaceFont(System::SharedPtr<Aspose::Slides::IFontSubstRule> substRule) override;
    /// <summary>
    /// Replace font in presentation using information provided in collection of <see cref="Aspose::Slides::FontSubstRule">FontSubstRule</see>
    /// </summary>
    /// <param name="substRules">Font substitution rules collection</param>
    ASPOSE_SLIDES_SHARED_API void ReplaceFont(System::SharedPtr<Aspose::Slides::IFontSubstRuleCollection> substRules) override;
    /// <summary>
    /// Retrieves the byte array representing the font data for a specified font style and font data.
    /// </summary>
    /// <param name="fontData">The font data object containing the information about the font <see cref="Aspose::Slides::FontData">FontData</see>.</param>
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
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<uint8_t> GetFontBytes(System::SharedPtr<Aspose::Slides::IFontData> fontData, System::Drawing::FontStyle fontStyle) override;
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
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::EmbeddingLevel GetFontEmbeddingLevel(System::ArrayPtr<uint8_t> fontBytes, System::String fontName) override;
    /// <summary>
    /// Returns font substitution rule at the specified index to use when rendering.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::IFontSubstRule> get_FontSubstRule(int32_t index) override;
    /// <summary>
    /// Returns rule at the specified index for proper substitutions by fallback functionality.
    /// Read-only <see cref="Aspose::Slides::IFontFallBackRule"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::IFontFallBackRule> get_FontFallBackRule(int32_t index) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool get_UseFontsSubstitutionsList();
    ASPOSE_SLIDES_LOCAL_API void set_UseFontsSubstitutionsList(bool value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::FontsList> get_FontsList();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::FontsManagerInternal> get_ManagerInternal();
    
    ASPOSE_SLIDES_LOCAL_API FontsManager(System::SharedPtr<Aspose::Slides::FontsManagerInternal> fontsManagerInternal, System::SharedPtr<Aspose::Slides::FontsList> fontsList, System::SharedPtr<Aspose::Slides::IPresentation> owner);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FontsManager, CODEPORTING_ARGS(System::SharedPtr<Aspose::Slides::FontsManagerInternal> fontsManagerInternal, System::SharedPtr<Aspose::Slides::FontsList> fontsList, System::SharedPtr<Aspose::Slides::IPresentation> owner));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Util::FontWrapper> GetFontWrapperStub(System::SharedPtr<Aspose::Slides::FontData> font);
    ASPOSE_SLIDES_LOCAL_API void AddEmbeddedFontsFrom(System::SharedPtr<Aspose::Slides::FontsManager> fontsManager);
    ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<uint8_t> SubsetFont(System::ArrayPtr<uint8_t> fontBytes, System::ArrayPtr<int32_t> slides);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::IDictionary<System::Drawing::FontStyle, System::ArrayPtr<uint8_t>>> SubsetFont(System::SharedPtr<Aspose::Slides::EmbeddedFont> embeddedFont, System::ArrayPtr<int32_t> slides);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::EmbeddedFont> EmbedFont(System::ArrayPtr<uint8_t> fontBytes, bool subsetted);
    static ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<uint8_t> ConvertToEot(System::ArrayPtr<uint8_t> fontBytes, System::SharedPtr<Aspose::Slides::FontData>& fontData);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::FontsManagerRenderingGuard> StartRendering();
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Fonts::TTF::TTFFont> LoadFont(System::ArrayPtr<uint8_t> fontBytes);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Common::TrueType::TTFont> LoadTTFont(System::ArrayPtr<uint8_t> fontBytes, System::String fontName);
    static ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<uint8_t> GetTrueTypeFontData(System::ArrayPtr<uint8_t> eotFontData);
    static ASPOSE_SLIDES_LOCAL_API System::Drawing::FontStyle Convert(Aspose::Fonts::Common::FontStyle fontStyle);
    static ASPOSE_SLIDES_LOCAL_API System::Drawing::FontStyle Convert(System::String fontStyle);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~FontsManager();
    
private:

    System::WeakPtr<Aspose::Slides::FontsList> m_fontsList;
    System::WeakPtr<Aspose::Slides::FontsManagerInternal> m_fontsManagerInternal;
    System::SharedPtr<Aspose::Slides::IFontSubstRuleCollection> m_fontSubstRuleList;
    bool m_useFontsSubstitution;
    System::WeakPtr<Aspose::Slides::IPresentation> m_owner;
    System::ArrayPtr<char16_t> BasicPowerPointSubset;
    
    ASPOSE_SLIDES_LOCAL_API void SetUseFontsSubstitutionsOn();
    ASPOSE_SLIDES_LOCAL_API void SetUseFontsSubstitutionsOff();
    ASPOSE_SLIDES_LOCAL_API void ClearTextFormatEffectiveData();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::IFontData> GetDefaultFontSubstitutionFromLoadOptions(System::SharedPtr<Aspose::Slides::IFontData> font);
    ASPOSE_SLIDES_LOCAL_API void AddEmbeddedFont(System::ArrayPtr<uint8_t> fontBytes, System::SharedPtr<Aspose::Slides::FontData> fontData, Aspose::Slides::Export::EmbedFontCharacters embedFontRule);
    ASPOSE_SLIDES_LOCAL_API void EmbedFont(System::ArrayPtr<uint8_t> fontBytes, System::SharedPtr<Aspose::Slides::FontData> fontData, bool subsetted);
    static ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<uint8_t> FixTtfFontForEmbedding(System::SharedPtr<System::IO::MemoryStream> ttfFontStream);
    
};

} // namespace Slides
} // namespace Aspose


