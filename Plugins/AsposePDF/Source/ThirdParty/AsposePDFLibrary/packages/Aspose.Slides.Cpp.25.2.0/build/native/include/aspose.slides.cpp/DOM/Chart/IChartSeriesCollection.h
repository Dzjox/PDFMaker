#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IGenericCollection.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
enum class ChartType;
class IChartCellCollection;
class IChartDataCell;
class IChartSeries;
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
/// Represents collection of  <see cref="Aspose::Slides::Charts::IChartSeries">IChartSeries</see>
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IChartSeriesCollection : public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::Charts::IChartSeries>>
{
    typedef IChartSeriesCollection ThisType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::Charts::IChartSeries>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the element at the specified index.
    /// </summary>
    /// <returns>
    /// The element at the specified index.
    ///   </returns>
    ///   
    /// <exception cref="System::ArgumentOutOfRangeException">
    ///   <paramref name="index"></paramref> is not a valid index in the <see cref="System::Collections::Generic::IList">IList</see>.
    ///   </exception>       
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartSeries> idx_get(int32_t index) = 0;
    
    /// <summary>
    /// Creates new chart series and adds it to the collection. 
    /// </summary>
    /// <param name="type">Type of series</param>
    /// <returns>New chart series.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartSeries> Add(ChartType type) = 0;
    /// <summary>
    /// Creates new chart series and inserts it into the collection. 
    /// </summary>
    /// <param name="index">Index for insertion <see cref="int32_t"></see></param>
    /// <param name="type">Chart type <see cref="ChartType"></see></param>
    /// <returns>New chart series <see cref="Aspose::Slides::Charts::IChartSeries">IChartSeries</see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartSeries> Insert(int32_t index, ChartType type) = 0;
    /// <summary>
    /// Creates new chart series from <see cref="Aspose::Slides::Charts::IChartDataCell">IChartDataCell</see> and adds it to the collection. 
    /// </summary>
    /// <remarks>If chart series careted from same cell already in collection 
    /// then method adds nothing and returns it's index.</remarks>
    /// <param name="cellWithSeriesName">Cell which contain series name.</param>        
    /// <param name="type">Type set type of series</param>
    /// <returns>Added chart series or series that already is in collection.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartSeries> Add(System::SharedPtr<IChartDataCell> cellWithSeriesName, ChartType type) = 0;
    /// <summary>
    /// Creates new chart series from <see cref="Aspose::Slides::Charts::IChartCellCollection">IChartCellCollection</see> and adds it to the collection. 
    /// </summary>
    /// <remarks>If chart series careted from same cell already in collection 
    /// then method adds nothing and returns it's index.</remarks>
    /// <param name="cellsWithSeriesName">Cells which contain series name.</param>        
    /// <param name="type">Type set type of series</param>
    /// <returns>Added chart series or series that already is in collection.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartSeries> Add(System::SharedPtr<IChartCellCollection> cellsWithSeriesName, ChartType type) = 0;
    /// <summary>
    /// Creates new chart series from value and adds it to the collection. 
    /// </summary>        
    /// <param name="name">Series name.</param>
    /// <param name="type">Type set type of series</param>
    /// <returns>Added chart series.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartSeries> Add(System::String name, ChartType type) = 0;
    /// <summary>
    /// Searches for the specified <see cref="Aspose::Slides::Charts::IChartSeries">IChartSeries</see> and returns the zero-based index of the first occurrence within the entire Collection
    /// </summary>
    /// <param name="value">Chart series value.</param>
    /// <returns>The zero-based index of the first occurrence of value within the entire CollectionBase, if found; otherwise, -1.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t IndexOf(System::SharedPtr<IChartSeries> value) = 0;
    /// <summary>
    /// Removes the specified value.
    /// </summary>
    /// <param name="value">The value.</param>
    /// <exception cref="System::ArgumentException ">The value parameter was not found in the collection.</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Remove(System::SharedPtr<IChartSeries> value) = 0;
    /// <summary>
    /// Removes the element at the specified index
    /// </summary>
    /// <param name="index">Index <see cref="int32_t"></see></param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveAt(int32_t index) = 0;
    /// <summary>
    /// Removes all elements (including the chart style) from the collection.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Clear() = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


