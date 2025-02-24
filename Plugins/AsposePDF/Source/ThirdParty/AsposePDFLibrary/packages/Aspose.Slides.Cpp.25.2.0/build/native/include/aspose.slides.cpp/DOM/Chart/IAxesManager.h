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
class IAxis;
} // namespace Charts
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Provides access to chart axes.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IAxesManager : public virtual System::Object
{
    typedef IAxesManager ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the chart's horizontal axis.
    /// Read-only <see cref="Aspose::Slides::Charts::IAxis">IAxis</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAxis> get_HorizontalAxis() = 0;
    /// <summary>
    /// Gets the chart's secondary horizontal axis.
    /// Read-only <see cref="Aspose::Slides::Charts::IAxis">IAxis</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAxis> get_SecondaryHorizontalAxis() = 0;
    /// <summary>
    /// Gets the chart's vertical axis.
    /// Read-only <see cref="Aspose::Slides::Charts::IAxis">IAxis</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAxis> get_VerticalAxis() = 0;
    /// <summary>
    /// Gets the chart's secondary vertical axis.
    /// Read-only <see cref="Aspose::Slides::Charts::IAxis">IAxis</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAxis> get_SecondaryVerticalAxis() = 0;
    /// <summary>
    /// Gets the chart's series axis.
    /// Read-only <see cref="Aspose::Slides::Charts::IAxis">IAxis</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAxis> get_SeriesAxis() = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


