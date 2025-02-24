#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/Chart/IBaseChartValue.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class IChartCellCollection;
class IChartDataCell;
} // namespace Charts
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents a collection of a chart cells.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IMultipleCellChartValue : public virtual Aspose::Slides::Charts::IBaseChartValue
{
    typedef IMultipleCellChartValue ThisType;
    typedef Aspose::Slides::Charts::IBaseChartValue BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the collection of chart cells.
    /// Read <see cref="Aspose::Slides::Charts::IChartCellCollection">IChartCellCollection</see>.
    /// </summary>
    /// <remarks>
    /// Null value assigning is not allowed.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartCellCollection> get_AsCells() = 0;
    /// <summary>
    /// Sets the collection of chart cells.
    /// Write <see cref="Aspose::Slides::Charts::IChartCellCollection">IChartCellCollection</see>.
    /// </summary>
    /// <remarks>
    /// Null value assigning is not allowed.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AsCells(System::SharedPtr<IChartCellCollection> value) = 0;
    
    /// <summary>
    /// Returns a chart cell at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataCell> get_AsCell(int32_t index) = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


