#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class IChartParagraphFormat;
class IChartPortionFormat;
class IChartTextBlockFormat;
} // namespace Charts
class ITextFrame;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Chart operate with restricted set of text format properties.
/// IChartTextFormat, IChartTextBlockFormat, IChartParagraphFormat, IChartPortionFormat
/// interfaces describe this restricted set.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IChartTextFormat : public virtual System::Object
{
    typedef IChartTextFormat ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns format for the chart text elements.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartTextBlockFormat">IChartTextBlockFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartTextBlockFormat> get_TextBlockFormat() = 0;
    /// <summary>
    /// Returns paragraph format.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartParagraphFormat">IChartParagraphFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartParagraphFormat> get_ParagraphFormat() = 0;
    /// <summary>
    /// Returns portion format.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartPortionFormat">IChartPortionFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartPortionFormat> get_PortionFormat() = 0;
    
    /// <summary>
    /// Copies text format to specified text frame.
    /// </summary>
    /// <param name="destTextFrame">Text frame to copy text format to.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void CopyTo(System::SharedPtr<ITextFrame> destTextFrame) = 0;
    /// <summary>
    /// Copies text format from specified text frame.
    /// </summary>
    /// <param name="sourceTextFrame">Text frame to copy text format.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void CopyFrom(System::SharedPtr<ITextFrame> sourceTextFrame) = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


