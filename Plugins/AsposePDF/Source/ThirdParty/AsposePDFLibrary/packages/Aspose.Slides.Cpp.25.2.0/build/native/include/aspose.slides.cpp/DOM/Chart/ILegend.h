#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/Chart/ILayoutable.h"
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
class ILegendEntryCollection;
class ILegendEntryProperties;
enum class LegendPositionType;
} // namespace Charts
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents chart's legend properties.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ILegend : public Aspose::Slides::Charts::ILayoutable, public Aspose::Slides::Charts::IFormattedTextContainer
{
    typedef ILegend ThisType;
    typedef Aspose::Slides::Charts::ILayoutable BaseType;
    typedef Aspose::Slides::Charts::IFormattedTextContainer BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Determines whether other chart elements shall be allowed to overlap legend.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_Overlay() = 0;
    /// <summary>
    /// Determines whether other chart elements shall be allowed to overlap legend.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Overlay(bool value) = 0;
    /// <summary>
    /// Specifies the position of the legend on a chart.
    /// Non-NaN values of X, Y, Width, Heigt properties override effect of this property.
    /// Read <see cref="LegendPositionType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API LegendPositionType get_Position() = 0;
    /// <summary>
    /// Specifies the position of the legend on a chart.
    /// Non-NaN values of X, Y, Width, Heigt properties override effect of this property.
    /// Write <see cref="LegendPositionType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Position(LegendPositionType value) = 0;
    /// <summary>
    /// Returns the format of a legend.
    /// Read-only <see cref="Aspose::Slides::Charts::IFormat">IFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFormat> get_Format() = 0;
    /// <summary>
    /// Gets legend entries.
    /// Read-only <see cref="Aspose::Slides::Charts::ILegendEntryCollection">ILegendEntryCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILegendEntryCollection> get_Entries() = 0;
    
    /// <summary>
    /// Get properties of legend entry corresponding to data point in chart at the specified index.
    /// In case of chart types: bar-of-pie, exploded pie, exploded pie 3D, pie, pie 3D, pie-of-pie, data point is taken from first series.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILegendEntryProperties> get_Entry(int32_t index) = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


