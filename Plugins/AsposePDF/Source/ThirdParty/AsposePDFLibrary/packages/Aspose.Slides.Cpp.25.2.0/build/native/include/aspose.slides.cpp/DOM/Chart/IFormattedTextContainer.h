#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Chart/IChartComponent.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class IChartTextFormat;
} // namespace Charts
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents chart text format.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IFormattedTextContainer : public virtual Aspose::Slides::Charts::IChartComponent
{
    typedef IFormattedTextContainer ThisType;
    typedef Aspose::Slides::Charts::IChartComponent BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns chart text format.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartTextFormat">IChartTextFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartTextFormat> get_TextFormat() = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


