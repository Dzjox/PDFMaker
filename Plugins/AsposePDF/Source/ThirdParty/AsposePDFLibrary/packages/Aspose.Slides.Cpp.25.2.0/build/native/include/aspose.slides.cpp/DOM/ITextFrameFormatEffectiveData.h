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
class ITextStyleEffectiveData;
enum class TextAnchorType : int8_t;
enum class TextAutofitType : int8_t;
enum class TextVerticalType : int8_t;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Immutable object which contains effective text frame formatting properties.
/// </summary>
/// <remarks>
/// This interface is used together with the <see cref="Aspose::Slides::ITextFrameFormat">ITextFrameFormat</see> interface to return effective formatting values with inheritance applied.
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS ITextFrameFormatEffectiveData : public virtual System::Object
{
    typedef ITextFrameFormatEffectiveData ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns effective text's style.
    /// Read-only <see cref="Aspose::Slides::ITextStyleEffectiveData">ITextStyleEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITextStyleEffectiveData> get_TextStyle() = 0;
    /// <summary>
    /// Returns the left margin (points) in a TextFrame.
    /// Read-only <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_MarginLeft() = 0;
    /// <summary>
    /// Returns the right margin (points) in a TextFrame.
    /// Read-only <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_MarginRight() = 0;
    /// <summary>
    /// Returns the top margin (points) in a TextFrame.
    /// Read-only <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_MarginTop() = 0;
    /// <summary>
    /// Returns the bottom margin (points) in a TextFrame.
    /// Read-only <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_MarginBottom() = 0;
    /// <summary>
    /// Returns if text is wrapped at TextFrame's margins.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_WrapText() = 0;
    /// <summary>
    /// Returns vertical anchor text in a TextFrame.
    /// Read-only <see cref="TextAnchorType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API TextAnchorType get_AnchoringType() = 0;
    /// <summary>
    /// Returns if text should be centered in box horizontally.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_CenterText() = 0;
    /// <summary>
    /// Returns text orientation.
    /// Read-only <see cref="Slides::TextVerticalType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::TextVerticalType get_TextVerticalType() = 0;
    /// <summary>
    /// Returns text autofit mode.
    /// Read-only <see cref="TextAutofitType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API TextAutofitType get_AutofitType() = 0;
    /// <summary>
    /// Specifies the number of columns of text in the bounding rectangle.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_ColumnCount() = 0;
    /// <summary>
    /// Specifies the space between text columns in the text area (in points).
    /// Read-only <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_ColumnSpacing() = 0;
    
};

} // namespace Slides
} // namespace Aspose


