#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Chart/IFormattedTextContainer.h"
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
/// Represents data table properties.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IDataTable : public Aspose::Slides::Charts::IFormattedTextContainer
{
    typedef IDataTable ThisType;
    typedef Aspose::Slides::Charts::IFormattedTextContainer BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the line, fill, and effect styles of an object.
    /// Read-only <see cref="Aspose::Slides::Charts::IFormat">IFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFormat> get_Format() = 0;
    /// <summary>
    /// True if the chart data table has horizontal cell borders.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_HasBorderHorizontal() = 0;
    /// <summary>
    /// True if the chart data table has horizontal cell borders.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_HasBorderHorizontal(bool value) = 0;
    /// <summary>
    /// True if the chart data table has outline borders.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_HasBorderOutline() = 0;
    /// <summary>
    /// True if the chart data table has outline borders.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_HasBorderOutline(bool value) = 0;
    /// <summary>
    /// True if the chart data table has vertical cell borders.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_HasBorderVertical() = 0;
    /// <summary>
    /// True if the chart data table has vertical cell borders.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_HasBorderVertical(bool value) = 0;
    /// <summary>
    /// True if the data label legend key is visible.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ShowLegendKey() = 0;
    /// <summary>
    /// True if the data label legend key is visible.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ShowLegendKey(bool value) = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


