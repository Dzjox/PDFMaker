#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/Chart/ILegendEntryCollection.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class Chart;
class ILegendEntryProperties;
class Legend;
} // namespace Charts
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents legends collection.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS LegendEntryCollection : public Aspose::Slides::Charts::ILegendEntryCollection
{
    typedef LegendEntryCollection ThisType;
    typedef Aspose::Slides::Charts::ILegendEntryCollection BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::Legend;
    /// @endcond
    
public:

    /// <summary>
    /// Gets the number of legend entries.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Count() override;
    
    /// <summary>
    /// Gets properties of the legend entry corresponding to Chart::get_ChartData()->get_Series()[0].DataPoints[index]
    /// in case of chart type from this list:
    ///   ChartType::BarOfPie,
    ///   ChartType::ExplodedPie,
    ///   ChartType::ExplodedPie3D,
    ///   ChartType::Pie,
    ///   ChartType::Pie3D,
    ///   ChartType::PieOfPie;
    /// or corresponding to Chart::get_ChartData()->get_Series()[index] for other chart types.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ILegendEntryProperties> idx_get(int32_t index) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API LegendEntryCollection(System::SharedPtr<Chart> parent);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(LegendEntryCollection, CODEPORTING_ARGS(System::SharedPtr<Chart> parent));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API int32_t IndexOf(System::SharedPtr<ILegendEntryProperties> value);
    /// @endcond
    
private:

    System::WeakPtr<Chart> m_parent;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


