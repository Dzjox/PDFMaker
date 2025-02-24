#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class FontAlignment;
class IBulletFormat;
class IParagraphFormatEffectiveData;
class IPortionFormat;
class ITab;
class ITabCollection;
enum class NullableBool : int8_t;
enum class TextAlignment;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// This class contains the paragraph formatting properties. Unlike <see cref="Aspose::Slides::IParagraphFormatEffectiveData">IParagraphFormatEffectiveData</see>, all properties of this class are writeable.
/// </summary>
/// <remarks><para>This class is used to return and manipulate paragraph formatting properties defined for the particular paragraph. This means that
/// no inheritance is applied when getting values so for the majority of cases you will get values meaning "undefined".</para>
/// <para>In order to get the effective formatting parameter values including inherited you need to use <see cref="IParagraphFormat::GetEffective"></see> method 
/// which returns a <see cref="Aspose::Slides::IParagraphFormatEffectiveData">IParagraphFormatEffectiveData</see> instance.</para></remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IParagraphFormat : public virtual System::Object
{
    typedef IParagraphFormat ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns bullet format of the paragraph.
    /// Read-only <see cref="Aspose::Slides::IBulletFormat">IBulletFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IBulletFormat> get_Bullet() = 0;
    /// <summary>
    /// Returns depth of the paragraph.
    /// Value 0 means undefined value.
    /// Read <see cref="int16_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int16_t get_Depth() = 0;
    /// <summary>
    /// Sets depth of the paragraph.
    /// Value 0 means undefined value.
    /// Write <see cref="int16_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Depth(int16_t value) = 0;
    /// <summary>
    /// Returns the text alignment in a paragraph with no inheritance.
    /// Read <see cref="TextAlignment"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API TextAlignment get_Alignment() = 0;
    /// <summary>
    /// Sets the text alignment in a paragraph with no inheritance.
    /// Write <see cref="TextAlignment"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Alignment(TextAlignment value) = 0;
    /// <summary>
    /// Returns the amount of space between base lines in a paragraph. Positive value means percentage, negative - size in points. No inheritance applied.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_SpaceWithin() = 0;
    /// <summary>
    /// Sets the amount of space between base lines in a paragraph. Positive value means percentage, negative - size in points. No inheritance applied.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SpaceWithin(float value) = 0;
    /// <summary>
    /// Returns the amount of space before the first line in a paragraph with no inheritance.
    /// A positive value specifies the percentage of the font size that the white space should be.
    /// A negative value specifies the size of the white space in point size.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_SpaceBefore() = 0;
    /// <summary>
    /// Sets the amount of space before the first line in a paragraph with no inheritance.
    /// A positive value specifies the percentage of the font size that the white space should be.
    /// A negative value specifies the size of the white space in point size.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SpaceBefore(float value) = 0;
    /// <summary>
    /// Returns the amount of space after the last line in a paragraph with no inheritance.
    /// A positive value specifies the percentage of the font size that the white space should be.
    /// A negative value specifies the size of the white space in point size.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_SpaceAfter() = 0;
    /// <summary>
    /// Sets the amount of space after the last line in a paragraph with no inheritance.
    /// A positive value specifies the percentage of the font size that the white space should be.
    /// A negative value specifies the size of the white space in point size.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SpaceAfter(float value) = 0;
    /// <summary>
    /// Determines whether the East Asian line break is used in a paragraph. No inheritance applied.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API NullableBool get_EastAsianLineBreak() = 0;
    /// <summary>
    /// Determines whether the East Asian line break is used in a paragraph. No inheritance applied.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_EastAsianLineBreak(NullableBool value) = 0;
    /// <summary>
    /// Determines whether the Right to Left writing is used in a paragraph. No inheritance applied.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API NullableBool get_RightToLeft() = 0;
    /// <summary>
    /// Determines whether the Right to Left writing is used in a paragraph. No inheritance applied.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_RightToLeft(NullableBool value) = 0;
    /// <summary>
    /// Determines whether the Latin line break is used in a paragraph. No inheritance applied.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API NullableBool get_LatinLineBreak() = 0;
    /// <summary>
    /// Determines whether the Latin line break is used in a paragraph. No inheritance applied.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_LatinLineBreak(NullableBool value) = 0;
    /// <summary>
    /// Determines whether the hanging punctuation is used in a paragraph. No inheritance applied.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API NullableBool get_HangingPunctuation() = 0;
    /// <summary>
    /// Determines whether the hanging punctuation is used in a paragraph. No inheritance applied.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_HangingPunctuation(NullableBool value) = 0;
    /// <summary>
    /// Returns the left margin in a paragraph with no inheritance.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_MarginLeft() = 0;
    /// <summary>
    /// Sets the left margin in a paragraph with no inheritance.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_MarginLeft(float value) = 0;
    /// <summary>
    /// Returns the right margin in a paragraph with no inheritance.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_MarginRight() = 0;
    /// <summary>
    /// Sets the right margin in a paragraph with no inheritance.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_MarginRight(float value) = 0;
    /// <summary>
    /// Returns paragraph First Line Indent/Hanging Indent with no inheritance. Hanging Indent can be defined with negative values.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Indent() = 0;
    /// <summary>
    /// Sets paragraph First Line Indent/Hanging Indent with no inheritance. Hanging Indent can be defined with negative values.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Indent(float value) = 0;
    /// <summary>
    /// Returns default tabulation size with no inheritance.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_DefaultTabSize() = 0;
    /// <summary>
    /// Sets default tabulation size with no inheritance.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DefaultTabSize(float value) = 0;
    /// <summary>
    /// Returns tabulations of a paragraph. No inheritance applied.
    /// Read-only <see cref="Aspose::Slides::ITabCollection">ITabCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITabCollection> get_Tabs() = 0;
    /// <summary>
    /// Returns a font alignment in a paragraph with no inheritance.
    /// Read <see cref="Slides::FontAlignment"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::FontAlignment get_FontAlignment() = 0;
    /// <summary>
    /// Sets a font alignment in a paragraph with no inheritance.
    /// Write <see cref="Slides::FontAlignment"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_FontAlignment(Aspose::Slides::FontAlignment value) = 0;
    /// <summary>
    /// Returns default portion format of a paragraph. No inheritance applied.
    /// Read-only <see cref="Aspose::Slides::IPortionFormat">IPortionFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPortionFormat> get_DefaultPortionFormat() = 0;
    
    /// <summary>
    /// Gets effective paragraph formatting data with the inheritance applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::IParagraphFormatEffectiveData">IParagraphFormatEffectiveData</see>.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IParagraphFormatEffectiveData> GetEffective() = 0;
    /// <summary>
    /// Returns the tabulation of a paragraph at the specified index. No inheritance applied.
    /// Read-only <see cref="Aspose::Slides::ITab"></see>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITab> get_Tab(int32_t index) = 0;
    
};

} // namespace Slides
} // namespace Aspose


