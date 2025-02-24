#pragma once
//Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/IFontFallBackRule.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class FallBackFontContext;
class FallBackFontsCollection;
class FallBackRulesImplnternal;
class FontFallBackRulesCollection;
class FontsManagerInternal;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class List;
} // namespace Generic
} // namespace Collections
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents font fallback rule
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS FontFallBackRule : public Aspose::Slides::IFontFallBackRule
{
    typedef FontFallBackRule ThisType;
    typedef Aspose::Slides::IFontFallBackRule BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::FallBackFontsCollection;
    friend class Aspose::Slides::FallBackRulesImplnternal;
    friend class Aspose::Slides::FontFallBackRulesCollection;
    friend class Aspose::Slides::FontsManagerInternal;
    /// @endcond
    
public:

    /// <summary>
    /// Get first index of continuous unicode range.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API uint32_t get_RangeStartIndex() override;
    /// <summary>
    /// Get first index of continuous unicode range.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_RangeStartIndex(uint32_t value);
    /// <summary>
    /// Get last index of continuous unicode range.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API uint32_t get_RangeEndIndex() override;
    /// <summary>
    /// Get last index of continuous unicode range.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_RangeEndIndex(uint32_t value);
    /// <summary>
    /// Gets the number of fonts actually defined for range.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Count() override;
    
    /// <summary>
    /// Creates new instance.
    /// </summary>
    /// <example>
    /// <code>
    /// // Create new instance of FantFallBackRule with one font.
    /// auto newRule = MakeObject<FontFallBackRule>(0x3040, 0x309F, u"MS Mincho");
    /// // Create new instance of FantFallBackRule with several fonts.
    /// auto newRule = MakeObject<FontFallBackRule>(0x3040, 0x309F, u"MS Mincho, MS Gothic, Tahoma");
    /// </code>
    /// </example>
    /// <param name="startIndex">Start index of unicode range</param>
    /// <param name="endIndex">End index of unicode range</param>
    /// <param name="fontNames">Font's name or names (delimited by comma) for FallBack </param>
    ASPOSE_SLIDES_SHARED_API FontFallBackRule(uint32_t startIndex, uint32_t endIndex, System::String fontNames);
    /// <summary>
    /// Creates new instance.
    /// </summary>
    /// <example>
    /// <code>
    /// // Create new instance of FantFallBackRule with two fonts
    /// auto newRule = MakeObject<FontFallBackRule>(0x3040, 0x309F, MakeArray<String>({u"MS Mincho", u"MS Gothic"}));
    /// // Create new instance of FantFallBackRule with several fonts.
    /// auto newRule = MakeObject<FontFallBackRule>(0x3040, 0x309F, MakeArray<String>({u"MS Gothic", u"Tahoma, Times New Roman"}));
    /// </code>
    /// </example>
    /// <param name="startIndex">Start index of unicode range</param>
    /// <param name="endIndex">End index of unicode range</param>
    /// <param name="fontNames">Font's name or names (delimited by comma) for FallBack </param>
    ASPOSE_SLIDES_SHARED_API FontFallBackRule(uint32_t startIndex, uint32_t endIndex, System::ArrayPtr<System::String> fontNames);
    
    /// <summary>
    /// Adds a new font(s) to the list of FallBack fonts.
    /// </summary>
    /// <example>
    /// <code>
    /// // Create new instance of FontFallBackRule
    /// auto newRule = MakeObject<FontFallBackRule>(0x3040, 0x309F, u"MS Mincho");
    /// //Add a second font to the rule
    /// newRule->AddFallBackFonts(u"MS Gothic");
    /// //Add a third and fourth fonts to the rule
    /// newRule->AddFallBackFonts(u"Tahoma, Times New Roman");
    /// </code>
    /// </example>
    /// <param name="fontName">Font's name or names (delimited by comma) for FallBack </param>
    ASPOSE_SLIDES_SHARED_API void AddFallBackFonts(System::String fontName) override;
    /// <summary>
    /// Adds a new fonts to the list of FallBack fonts.
    /// </summary>
    /// <example>
    /// <code>
    /// //Create new instance of FontFallBackRule
    /// auto newRule = MakeObject<FontFallBackRule>(0x3040, 0x309F, u"MS Mincho");
    /// //Add of another three fonts to the rule
    /// newRule->AddFallBackFonts(MakeArray<String>({u"MS Gothic", u"Tahoma, Times New Roman"}));
    /// </code>
    /// </example>
    /// <param name="fontNames">Font's name or names (delimited by comma) for FallBack </param>
    ASPOSE_SLIDES_SHARED_API void AddFallBackFonts(System::ArrayPtr<System::String> fontNames) override;
    
    /// <summary>
    /// Gets the font name at the specified index.
    /// Read-only <see cref="Aspose::Slides::IFontFallBackRule">IFontFallBackRule</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String idx_get(int32_t index) override;
    
    /// <summary>
    /// Removes all fonts from the list.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Clear() override;
    /// <summary>
    /// Removes the first occurrence of a specific FallBack font from the list.
    /// </summary>
    /// <example>
    /// <code>
    /// // Create a rule contains a list of fonts.
    /// auto newRule = MakeObject<FontFallBackRule>(0x3040, 0x309F, u"MS Mincho, MS Gothic, Tahoma, Times New Roman");
    /// // Remove Tahoma from the list.
    /// newRule->Remove(u"Tahoma");
    /// </code>
    /// </example>
    /// <param name="fontName">The font's name to remove from the list.</param>
    ASPOSE_SLIDES_SHARED_API void Remove(System::String fontName) override;
    /// <summary>
    /// Removes the FallBack font at the specified index of the list.
    /// </summary>
    /// <example>
    /// <code>
    /// // Create a rule contains a list of fonts.
    /// auto newRule = MakeObject<FontFallBackRule>(0x3040, 0x309F, u"MS Mincho, MS Gothic, Tahoma, Times New Roman");
    /// //Removing Tahoma from the list.
    /// newRule->RemoveAt(2);
    /// </code>
    /// </example>
    /// <param name="index">The zero-based index of the font to remove.</param>
    ASPOSE_SLIDES_SHARED_API void RemoveAt(int32_t index) override;
    /// <summary>
    /// Creates and returns an array with all FallBack fonts for this rule.
    /// </summary>
    /// <example>
    /// <code>
    /// // Create a rule contains a list of fonts.
    /// auto newRule = MakeObject<FontFallBackRule>(0x3040, 0x309F, u"MS Mincho, MS Gothic, Tahoma, Times New Roman");
    /// // Get all font names as array.
    /// ArrayPtr<String> fontNames = newRule->ToArray();
    /// </code>
    /// </example>
    /// <returns>Array of <see cref="System::String"></see></returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::String> ToArray() override;
    /// <summary>
    /// Creates and returns an array with all FallBack fonts from the specified range in list.
    /// </summary>
    /// <example>
    /// <code>
    /// // Create a rule contains a list of fonts.
    /// auto newRule = MakeObject<FontFallBackRule>(0x3040, 0x309F, u"MS Mincho, MS Gothic, Tahoma, Times New Roman");
    /// // Get a last two font names as array.
    /// ArrayPtr<String> fontNames = newRule->ToArray(2, 2);
    /// </code>
    /// </example>
    /// <param name="startIndex">An index of a first font to add.</param>
    /// <param name="count">A number of fonts to add.</param>
    /// <returns>Array of <see cref="System::String"></see></returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::String> ToArray(int32_t startIndex, int32_t count) override;
    /// <summary>
    /// Returns an index of the specified rule in the collection.
    /// </summary>
    /// <example>
    /// <code>
    /// // Create a rule contains a list of fonts.
    /// auto newRule = MakeObject<FontFallBackRule>(0x3040, 0x309F, u"MS Mincho, MS Gothic, Tahoma, Times New Roman");
    /// // Get index of Tahoma.
    /// int32_t tahomaIndex = newRule->IndexOf(u"Tahoma");
    /// </code>
    /// </example>
    /// <param name="fontName">Font's name to find.</param>
    /// <returns>Index of a font or -1 if font not found in list.</returns>
    ASPOSE_SLIDES_SHARED_API int32_t IndexOf(System::String fontName) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<FallBackFontContext>>> get_FontContextsList();
    ASPOSE_SLIDES_LOCAL_API uint32_t get_IndexationVersion() const;
    ASPOSE_SLIDES_LOCAL_API void set_IndexationVersion(uint32_t value);
    
    ASPOSE_SLIDES_LOCAL_API FontFallBackRule(uint32_t startIndex, uint32_t endIndex);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FontFallBackRule, CODEPORTING_ARGS(uint32_t startIndex, uint32_t endIndex));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API FontFallBackRule(uint32_t startIndex, uint32_t endIndex, System::SharedPtr<FontFallBackRule> sourceFallBackRule);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FontFallBackRule, CODEPORTING_ARGS(uint32_t startIndex, uint32_t endIndex, System::SharedPtr<FontFallBackRule> sourceFallBackRule));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void AddFallBackFontContext(System::SharedPtr<FallBackFontContext> sourceFallBackFontContext);
    ASPOSE_SLIDES_LOCAL_API void AddFallBackFontContext(System::SharedPtr<FallBackFontContext> sourceFallBackFontContext, bool checkFontUniquness);
    ASPOSE_SLIDES_LOCAL_API void UpdateFontsFromExisting(System::SharedPtr<FontFallBackRule> sourceFallBackRule, bool checkFontUniquness);
    ASPOSE_SLIDES_LOCAL_API void SetParentCollection(System::SharedPtr<FontFallBackRulesCollection> parentCollection);
    ASPOSE_SLIDES_LOCAL_API void DropParentCollection(System::SharedPtr<FontFallBackRulesCollection> parentCollection);
    ASPOSE_SLIDES_LOCAL_API void DropRelations();
    ASPOSE_SLIDES_LOCAL_API void DropFontsRegistration();
    /// @endcond
    
private:

    uint32_t pr_IndexationVersion;
    uint32_t m_startIndex;
    uint32_t m_endIndex;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<FallBackFontContext>>> m_fallBackFontContexts;
    System::DynamicWeakPtr<System::Collections::Generic::List<System::SharedPtr<FontFallBackRulesCollection>>, System::SmartPtrMode::Shared, 0> m_parentsList;
    
    ASPOSE_SLIDES_LOCAL_API void ValidateIndexes();
    ASPOSE_SLIDES_LOCAL_API void UserDataWasChanged();
    
};

} // namespace Slides
} // namespace Aspose


