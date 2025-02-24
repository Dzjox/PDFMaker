#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/ienumerable.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class IChartDataCell;
} // namespace Charts
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
/// Represents collection of a cells with data.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IChartCellCollection : public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Slides::Charts::IChartDataCell>>
{
    typedef IChartCellCollection ThisType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Slides::Charts::IChartDataCell>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the count of cells in collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Count() = 0;
    
    /// <summary>
    /// Returns address of the set of cells in workbook.
    /// </summary>
    /// <returns>Address of the set of cells in workbook <see cref="System::String"></see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String GetCellsAddress() = 0;
    /// <summary>
    /// Concatenation string from all cells string values.
    /// </summary>
    /// <returns>Resulting string <see cref="System::String"></see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String GetConcatenatedValuesFromCells() = 0;
    
    /// <summary>
    /// Returns a cell (IChartDataCell) by index.
    /// </summary>
    /// <param name="index">Index of a cell.</param>
    /// <returns>Cell with data.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataCell> idx_get(int32_t index) = 0;
    
    /// <summary>
    /// Add new cell to the collection.
    /// </summary>
    /// <param name="chartDataCell">New cell to add.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Add(System::SharedPtr<IChartDataCell> chartDataCell) = 0;
    /// <summary>
    /// Creates <see cref="Aspose::Slides::Charts::IChartDataCell">IChartDataCell</see> from specified value and adds it to the collection.
    /// </summary>
    /// <param name="value">The value.</param>
    /// <remarks>This method adds worksheet with name AUTO_DATA and adds all values there.  If you use <see cref="Aspose::Slides::Charts::IChartDataWorkbook">IChartDataWorkbook</see> to add or edit Cell values, be sure that you do not use this worksheet
    /// Maximum number of values added using this method must not exceed 16711680</remarks>
    /// <exception cref="System::InvalidOperationException">if limit exceeded</exception>                
    virtual ASPOSE_SLIDES_API_LOCAL_API void Add(System::SharedPtr<System::Object> value) = 0;
    /// <summary>
    /// Removes a cell from the collection by index.
    /// </summary>
    /// <param name="index">Index of a cell to remove.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveAt(int32_t index) = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


