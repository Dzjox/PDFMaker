#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>
#include <DOM/Chart/IChartSeriesCollection.h>

#include "DOM/DomObject.h"
#include "DOM/Chart/ChartData.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class Chart;
class ChartDataBuilder;
class ChartSeries;
enum class ChartType;
class IChart;
class IChartCellCollection;
class IChartDataCell;
class IChartSeries;
class IChartSeriesGroup;
template <typename> class ListOfChartDataItems;
} // namespace Charts
namespace OdpSerialization
{
namespace PartParser
{
class ChartOdpDeserialization;
} // namespace PartParser
} // namespace OdpSerialization
namespace PptxSerialization
{
namespace PartParser
{
namespace Chart
{
class ChartDataExPPTXSerialization;
class ChartDataPPTXSerialization;
} // namespace Chart
} // namespace PartParser
} // namespace PptxSerialization
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IEnumerator;
} // namespace Generic
} // namespace Collections
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents collection of  <see cref="Aspose::Slides::Charts::ChartSeries">ChartSeries</see>
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ChartSeriesCollection : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::ChartData>>, public Aspose::Slides::Charts::IChartSeriesCollection
{
    typedef ChartSeriesCollection ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::ChartData>> BaseType;
    typedef Aspose::Slides::Charts::IChartSeriesCollection BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::OdpSerialization::PartParser::ChartOdpDeserialization;
    friend class Aspose::Slides::Charts::ChartDataBuilder;
    friend class Aspose::Slides::Charts::ChartData;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartDataExPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartDataPPTXSerialization;
    /// @endcond
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<IChartSeries>>;
    /// Iterator type.
    using iterator = typename iterator_holder_type::iterator;
    /// Const iterator type.
    using const_iterator = typename iterator_holder_type::const_iterator;
    /// Virtualized element type.
    using virtualized_iterator_element = typename iterator_holder_type::virtualized_iterator_element;
    /// Virtualized type.
    using virtualized_iterator = typename iterator_holder_type::virtualized_iterator;
    
public:

    /// <summary>
    /// Returns a number of objects in the collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Count() override;
    /// <summary>
    /// Returns a value indicating whether access to the collection is synchronized (thread-safe).
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsSynchronized() override;
    /// <summary>
    /// Returns a synchronization root.
    /// Read-only <see cref="System::Object"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> get_SyncRoot() override;
    
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
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartSeries> idx_get(int32_t index) override;
    
    /// <summary>
    /// Creates new chart series and adds it to the collection. 
    /// </summary>
    /// <param name="type">Type of series</param>
    /// <returns>New chart series.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartSeries> Add(ChartType type) override;
    /// <summary>
    /// Creates new chart series and inserts it into the collection. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartSeries> Insert(int32_t index, ChartType type) override;
    /// <summary>
    /// Creates new chart series from <see cref="Aspose::Slides::Charts::ChartDataCell">ChartDataCell</see> and adds it to the collection. 
    /// </summary>
    /// <remarks>If chart series careted from same cell already in collection 
    /// then method adds nothing and returns it's index.</remarks>
    /// <param name="cellWithSeriesName">Cell which contain series name.</param>        
    /// <param name="type">Type set type of series</param>
    /// <returns>Added chart series or series that already is in collection.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartSeries> Add(System::SharedPtr<IChartDataCell> cellWithSeriesName, ChartType type) override;
    /// <summary>
    /// Creates new chart series from <see cref="Aspose::Slides::Charts::ChartCellCollection">ChartCellCollection</see> and adds it to the collection. 
    /// </summary>
    /// <remarks>If chart series careted from same cell already in collection 
    /// then method adds nothing and returns it's index.</remarks>
    /// <param name="cellsWithSeriesName">Cells which contain series name.</param>        
    /// <param name="type">Type set type of series</param>
    /// <returns>Added chart series or series that already is in collection.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartSeries> Add(System::SharedPtr<IChartCellCollection> cellsWithSeriesName, ChartType type) override;
    /// <summary>
    /// Creates new chart series from value and adds it to the collection. 
    /// </summary>        
    /// <param name="name">Series name.</param>
    /// <param name="type">Type set type of series</param>
    /// <returns>Added chart series.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartSeries> Add(System::String name, ChartType type) override;
    /// <summary>
    /// Searches for the specified <see cref="Aspose::Slides::Charts::ChartSeries">ChartSeries</see> and returns the zero-based index of the first occurrence within the entire Collection
    /// </summary>
    /// <param name="value">Chart series value.</param>
    /// <returns>The zero-based index of the first occurrence of value within the entire CollectionBase, if found; otherwise, -1.</returns>
    ASPOSE_SLIDES_SHARED_API int32_t IndexOf(System::SharedPtr<IChartSeries> value) override;
    /// <summary>
    /// Removes the specified value.
    /// </summary>
    /// <param name="value">The value.</param>
    /// <exception cref="System::ArgumentException ">The value parameter was not found in the collection.</exception>
    ASPOSE_SLIDES_SHARED_API void Remove(System::SharedPtr<IChartSeries> value) override;
    /// <summary>
    /// Removes an ActiveX control stored at specified position from the collection.
    /// </summary>
    /// <param name="index">Index of a control to remove.</param>
    ASPOSE_SLIDES_SHARED_API void RemoveAt(int32_t index) override;
    /// <summary>
    /// Removes all controls from the collection.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Clear() override;
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IChartSeries>>> GetEnumerator() override;
    ASPOSE_SLIDES_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<IChartSeries>> array, int32_t index) override;
    /// Gets iterator pointing to the first element (if any) of the collection.
    /// @return An iterator pointing to the first element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API iterator begin() noexcept;
    /// Gets iterator pointing right after the last element (if any) of the collection.
    /// @return An iterator pointing right after the last element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API iterator end() noexcept;
    /// Gets iterator pointing to the first element (if any) of the const-qualified instance of the collection.
    /// @return An iterator pointing to the first element (if any) of the const-qualified instance of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator begin() const noexcept;
    /// Gets iterator pointing right after the last element (if any) of the const-qualified instance of the collection.
    /// @return An iterator pointing right after the last element (if any) of the const-qualified instance of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator end() const noexcept;
    /// Gets iterator pointing to the first const-qualified element (if any) of the collection.
    /// @return An iterator pointing to the first const-qualified element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator cbegin() const noexcept;
    /// Gets iterator pointing right after the last const-qualified element (if any) of the collection.
    /// @return An iterator pointing right after the last const-qualified element (if any) of the collection
    ASPOSE_SLIDES_SHARED_API const_iterator cend() const noexcept;
    /// Gets iterator pointing to the first element (if any) of the collection.
    /// @return An iterator pointing to the first element (if any) of the collection
    /// Provides iterator implementation to container's first element.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeBeginIterator() override;
    /// Gets iterator pointing right after the last element (if any) of the collection.
    /// @return An iterator pointing right after the last element (if any) of the collection
    /// Provides iterator implementation to container's end.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeEndIterator() override;
    /// Gets iterator pointing to the first element (if any)of the const-qualified instance of the collection.
    /// @return An iterator pointing to the first element (if any)of the const-qualified instance of the collection
    /// Provides const iterator implementation to container's first element.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeBeginConstIterator() const override;
    /// Gets iterator pointing right after the last element (if any)of the const-qualified instance of the collection.
    /// @return An iterator pointing right after the last element (if any)of the const-qualified instance of the collection
    /// Provides const iterator implementation to container's end.
    /// @return Newly-created iterator object.
    ASPOSE_SLIDES_SHARED_API virtualized_iterator* virtualizeEndConstIterator() const override;
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IChart> get_Chart();
    
    ASPOSE_SLIDES_LOCAL_API ChartSeriesCollection(System::SharedPtr<ChartData> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ChartSeriesCollection, CODEPORTING_ARGS(System::SharedPtr<ChartData> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void SetSeriesToPosition(int32_t index, System::SharedPtr<IChartSeries> series);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IChartSeries> AddAndBindToDefinedSeriesGroup(ChartType type, System::SharedPtr<IChartSeriesGroup> seriesGroup, bool plotOnSecondAxis);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IChartSeries> AddAndBindToNewSeriesGroup(ChartType type, bool plotOnSecondAxis);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~ChartSeriesCollection();
    
private:

    System::WeakPtr<Aspose::Slides::Charts::Chart> m_parentChart;
    System::SharedPtr<ListOfChartDataItems<System::SharedPtr<IChartSeries>>> m_items;
    
    ASPOSE_SLIDES_LOCAL_API bool CheckIfSeriesCanBeAddedAndGetAppropriatePlotOnSecondAxis(System::SharedPtr<ChartSeries> series);
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


