#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class FontAlignment;
class ITab;
class ITabCollection;
enum class NullableBool : int8_t;
enum class TextAlignment;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents a paragraph formatting properties of a chart.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IChartParagraphFormat : public virtual System::Object
{
    typedef IChartParagraphFormat ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the text alignment in a paragraph.
    /// Read <see cref="TextAlignment"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API TextAlignment get_Alignment() = 0;
    /// <summary>
    /// Sets the text alignment in a paragraph.
    /// Write <see cref="TextAlignment"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Alignment(TextAlignment value) = 0;
    /// <summary>
    /// Returns the amount of space between base lines in a paragraph.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_SpaceWithin() = 0;
    /// <summary>
    /// Sets the amount of space between base lines in a paragraph.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SpaceWithin(float value) = 0;
    /// <summary>
    /// Returns the amount of space before the first line in a paragraph.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_SpaceBefore() = 0;
    /// <summary>
    /// Sets the amount of space before the first line in a paragraph.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SpaceBefore(float value) = 0;
    /// <summary>
    /// Returns the amount of space after the last line in a paragraph.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_SpaceAfter() = 0;
    /// <summary>
    /// Sets the amount of space after the last line in a paragraph.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SpaceAfter(float value) = 0;
    /// <summary>
    /// Determines whether the East Asian line break is used in a paragraph.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API NullableBool get_EastAsianLineBreak() = 0;
    /// <summary>
    /// Determines whether the East Asian line break is used in a paragraph.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_EastAsianLineBreak(NullableBool value) = 0;
    /// <summary>
    /// Determines whether the Right to Left writing is used in a paragraph.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API NullableBool get_RightToLeft() = 0;
    /// <summary>
    /// Determines whether the Right to Left writing is used in a paragraph.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_RightToLeft(NullableBool value) = 0;
    /// <summary>
    /// Determines whether the Latin line break is used in a paragraph.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API NullableBool get_LatinLineBreak() = 0;
    /// <summary>
    /// Determines whether the Latin line break is used in a paragraph.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_LatinLineBreak(NullableBool value) = 0;
    /// <summary>
    /// Determines whether the hanging punctuation is used in a paragraph.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API NullableBool get_HangingPunctuation() = 0;
    /// <summary>
    /// Determines whether the hanging punctuation is used in a paragraph.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_HangingPunctuation(NullableBool value) = 0;
    /// <summary>
    /// Returns the left margin in a paragraph.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_MarginLeft() = 0;
    /// <summary>
    /// Sets the left margin in a paragraph.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_MarginLeft(float value) = 0;
    /// <summary>
    /// Returns the right margin in a paragraph.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_MarginRight() = 0;
    /// <summary>
    /// Sets the right margin in a paragraph.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_MarginRight(float value) = 0;
    /// <summary>
    /// Returns paragraph First Line Indent/Hanging Indent. Hanging Indent can be defined with negative values.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Indent() = 0;
    /// <summary>
    /// Sets paragraph First Line Indent/Hanging Indent. Hanging Indent can be defined with negative values.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Indent(float value) = 0;
    /// <summary>
    /// Returns default tabulation size.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_DefaultTabSize() = 0;
    /// <summary>
    /// Sets default tabulation size.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DefaultTabSize(float value) = 0;
    /// <summary>
    /// Returns tabulations of a paragraph.
    /// Read-only <see cref="ITabCollection"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITabCollection> get_Tabs() = 0;
    /// <summary>
    /// Returns a font alignment in a paragraph.
    /// Read <see cref="Slides::FontAlignment"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::FontAlignment get_FontAlignment() = 0;
    /// <summary>
    /// Sets a font alignment in a paragraph.
    /// Write <see cref="Slides::FontAlignment"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_FontAlignment(Aspose::Slides::FontAlignment value) = 0;
    
    /// <summary>
    /// Returns the tabulation of a paragraph at the specified index.
    /// Read-only <see cref="Aspose::Slides::ITab"></see>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITab> get_Tab(int32_t index) = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


