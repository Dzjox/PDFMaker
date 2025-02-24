#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IEffectFormat;
class ILineFormat;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents gridlines format properties.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IChartLinesFormat : public virtual System::Object
{
    typedef IChartLinesFormat ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns line style properties of a chart line.
    /// Read-only <see cref="ILineFormat"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILineFormat> get_Line() = 0;
    /// <summary>
    /// Returns effects used for a chart line.
    /// Read-only <see cref="IEffectFormat"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IEffectFormat> get_Effect() = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


