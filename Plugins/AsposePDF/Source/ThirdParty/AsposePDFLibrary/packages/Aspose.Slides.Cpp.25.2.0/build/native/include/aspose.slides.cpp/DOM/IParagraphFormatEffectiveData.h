#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class FontAlignment;
class IBulletFormatEffectiveData;
class IPortionFormatEffectiveData;
class ITabEffectiveData;
enum class TextAlignment;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Immutable object which contains effective paragraph formatting properties.
/// </summary>
/// <remarks>
/// This interface is used together with the <see cref="Aspose::Slides::IParagraphFormat">IParagraphFormat</see> interface to return effective formatting values with inheritance applied.
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IParagraphFormatEffectiveData : public virtual System::Object
{
    typedef IParagraphFormatEffectiveData ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns a bullet format of a paragraph.
    /// Read-only <see cref="Aspose::Slides::IBulletFormatEffectiveData">IBulletFormatEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IBulletFormatEffectiveData> get_Bullet() = 0;
    /// <summary>
    /// Returns a depth of a paragraph.
    /// Read-only <see cref="int16_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int16_t get_Depth() = 0;
    /// <summary>
    /// Returns the text alignment in a paragraph.
    /// Read-only <see cref="TextAlignment"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API TextAlignment get_Alignment() = 0;
    /// <summary>
    /// Returns the amount of space between base lines in a paragraph.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_SpaceWithin() = 0;
    /// <summary>
    /// Returns the amount of space before the first line in a paragraph.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_SpaceBefore() = 0;
    /// <summary>
    /// Returns the amount of space after the last line in a paragraph.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_SpaceAfter() = 0;
    /// <summary>
    /// Determines whether the East Asian line break is used in a paragraph.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_EastAsianLineBreak() = 0;
    /// <summary>
    /// Determines whether the Right to Left writing is used in a paragraph.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_RightToLeft() = 0;
    /// <summary>
    /// Determines whether the Latin line break is used in a paragraph.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_LatinLineBreak() = 0;
    /// <summary>
    /// Determines whether the hanging punctuation is used in a paragraph.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_HangingPunctuation() = 0;
    /// <summary>
    /// Returns the left margin in a paragraph.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_MarginLeft() = 0;
    /// <summary>
    /// Returns the right margin in a paragraph.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_MarginRight() = 0;
    /// <summary>
    /// Returns paragraph First Line Indent/Hanging Indent. Hanging Indent can be defined with negative values.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Indent() = 0;
    /// <summary>
    /// Returns default tabulation size.
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_DefaultTabSize() = 0;
    /// <summary>
    /// Returns tabulations of a paragraph.
    /// Read-only <see cref="Aspose::Slides::ITabEffectiveData">ITabEffectiveData</see>[].
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<ITabEffectiveData>> get_Tabs() = 0;
    /// <summary>
    /// Returns a font alignment in a paragraph.
    /// Read-only <see cref="Slides::FontAlignment"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::FontAlignment get_FontAlignment() = 0;
    /// <summary>
    /// Returns default portion format of a paragraph.
    /// Read-only <see cref="Aspose::Slides::IPortionFormatEffectiveData">IPortionFormatEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPortionFormatEffectiveData> get_DefaultPortionFormat() = 0;
    
};

} // namespace Slides
} // namespace Aspose


