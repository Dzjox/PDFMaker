#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Chart/IOverridableText.h"
#include "DOM/Chart/ILayoutable.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class IFormat;
} // namespace Charts
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents chart title properties.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IChartTitle : public Aspose::Slides::Charts::ILayoutable, public Aspose::Slides::Charts::IOverridableText
{
    typedef IChartTitle ThisType;
    typedef Aspose::Slides::Charts::ILayoutable BaseType;
    typedef Aspose::Slides::Charts::IOverridableText BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Determines whether other chart elements shall be allowed to overlap title.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_Overlay() = 0;
    /// <summary>
    /// Determines whether other chart elements shall be allowed to overlap title.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Overlay(bool value) = 0;
    /// <summary>
    /// Returns the fill, line, effect styles of a title.
    /// Read-only <see cref="Aspose::Slides::Charts::IFormat">IFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFormat> get_Format() = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


