#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents font fallback rule
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IFontFallBackRule : public virtual System::Object
{
    typedef IFontFallBackRule ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Get first index of continuous unicode range.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint32_t get_RangeStartIndex() = 0;
    /// <summary>
    /// Get last index of continuous unicode range.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint32_t get_RangeEndIndex() = 0;
    /// <summary>
    /// Gets the number of fonts actually defined for range.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Count() = 0;
    
    /// <summary>
    /// Adds a new font(s) to the list of FallBack fonts.
    /// </summary>
    /// <example>
    /// <code>
    /// //Create of new instance of FantFallBackRule
    /// auto newRule = MakeObject<FontFallBackRule>(0x3040, 0x309F, u"MS Mincho");
    /// //Add a second font to the rule
    /// newRule->AddFallBackFonts(u"MS Gothic");
    /// //Add a third and fourth fonts to the rule
    /// newRule->AddFallBackFonts(u"Tahoma, Times New Roman");
    /// </code>
    /// </example>
    /// <param name="fontName">Font's name or names (delimited by comma) for FallBack </param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void AddFallBackFonts(System::String fontName) = 0;
    /// <summary>
    /// Adds a new fonts to the list of FallBack fonts.
    /// </summary>
    /// <example>
    /// <code>
    /// //Create of new instance of FontFallBackRule
    /// auto newRule = MakeObject<FontFallBackRule>(0x3040, 0x309F, u"MS Mincho");
    /// //Add of another three fonts to the rule
    /// newRule->AddFallBackFonts(MakeArray<String>({u"MS Gothic", u"Tahoma, Times New Roman"}));
    /// </code>
    /// </example>
    /// <param name="fontNames">Font's name or names (delimited by comma) for FallBack </param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void AddFallBackFonts(System::ArrayPtr<System::String> fontNames) = 0;
    
    /// <summary>
    /// Gets the font name at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String idx_get(int32_t index) = 0;
    
    /// <summary>
    /// Removes all fonts from the list.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Clear() = 0;
    /// <summary>
    /// Removes the first occurrence of a specific FallBack font from the list.
    /// </summary>
    /// <example>
    /// <code>
    /// // Create a rule contains a list of fonts.
    /// auto newRule = MakeObject<FontFallBackRule>(0x3040, 0x309F, u"MS Mincho, MS Gothic, Tahoma, Times New Roman");
    /// //Removing of Tahoma from list
    /// newRule->Remove(u"Tahoma");
    /// </code>
    /// </example>
    /// <param name="fontName">The font's name to remove from the list.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Remove(System::String fontName) = 0;
    /// <summary>
    /// Removes the FallBack font at the specified index of the list.
    /// </summary>
    /// <example>
    /// <code>
    /// // Create a rule contains a list of fonts.
    /// auto newRule = MakeObject<FontFallBackRule>(0x3040, 0x309F, u"MS Mincho, MS Gothic, Tahoma, Times New Roman");
    /// //Removing of Tahoma from list
    /// newRule->RemoveAt(2);
    /// </code>
    /// </example>
    /// <param name="index">The zero-based index of the font to remove.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveAt(int32_t index) = 0;
    /// <summary>
    /// Creates and returns an array with all FallBack fonts for this rule.
    /// </summary>
    /// <example>
    /// <code>
    /// // Create a rule contains a list of fonts.
    /// auto newRule = MakeObject<FontFallBackRule>(0x3040, 0x309F, u"MS Mincho, MS Gothic, Tahoma, Times New Roman");
    /// //Get all font-names as array
    /// ArrayPtr<String> fontNames = newRule->ToArray();
    /// </code>
    /// </example>
    /// <returns>Array of <see cref="System::String"></see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::String> ToArray() = 0;
    /// <summary>
    /// Creates and returns an array with all FallBack fonts from the specified range in list.
    /// </summary>
    /// <example>
    /// <code>
    /// // Create a rule contains a list of fonts.
    /// auto newRule = MakeObject<FontFallBackRule>(0x3040, 0x309F, u"MS Mincho, MS Gothic, Tahoma, Times New Roman");
    /// //Get a last two font-names as array
    /// ArrayPtr<String> fontNames = newRule->ToArray(2, 2);
    /// </code>
    /// </example>
    /// <param name="startIndex">An index of a first font to add.</param>
    /// <param name="count">A number of fonts to add.</param>
    /// <returns>Array of <see cref="System::String"></see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::String> ToArray(int32_t startIndex, int32_t count) = 0;
    /// <summary>
    /// Returns an index of the specified rule in the collection.
    /// </summary>
    /// <example>
    /// <code>
    /// // Create a rule contains a list of fonts.
    /// auto newRule = MakeObject<FontFallBackRule>(0x3040, 0x309F, u"MS Mincho, MS Gothic, Tahoma, Times New Roman");
    /// //Get index of Tahoma
    /// int32_t tahomaIndex = newRule->IndexOf(u"Tahoma");
    /// </code>
    /// </example>
    /// <param name="fontName">Font's name to find.</param>
    /// <returns>Index of a font or -1 if font not found in list.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t IndexOf(System::String fontName) = 0;
    
};

} // namespace Slides
} // namespace Aspose


