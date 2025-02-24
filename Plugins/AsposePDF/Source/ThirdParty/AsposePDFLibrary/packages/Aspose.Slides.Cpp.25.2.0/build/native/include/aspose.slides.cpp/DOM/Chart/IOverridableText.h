#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Chart/IFormattedTextContainer.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ITextFrame;
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents overridable text for a chart.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IOverridableText : public Aspose::Slides::Charts::IFormattedTextContainer
{
    typedef IOverridableText ThisType;
    typedef Aspose::Slides::Charts::IFormattedTextContainer BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Can contain a rich formatted text. If this property is not null then this 
    /// formatted text value overrides auto-generated text.
    /// Auto-generated text is an implicit property of the data label, the display 
    /// unit label of the value axis, the axis title, the chart title, the label of the trendline.
    /// Auto-generated text is formatted with the IFormattedTextContainer::get_TextFormat property.
    /// Read-only <see cref="ITextFrame"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITextFrame> get_TextFrameForOverriding() = 0;
    
    /// <summary>
    /// Initialize TextFrameForOverriding with the text in paramener "text".
    /// If TextFrameForOverriding is already initialized then simply changes its text.
    /// </summary>
    /// <param name="text">Text for a new TextFrameForOverriding.</param>
    /// <returns>Text frame <see cref="ITextFrame"></see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITextFrame> AddTextFrameForOverriding(System::String text) = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


