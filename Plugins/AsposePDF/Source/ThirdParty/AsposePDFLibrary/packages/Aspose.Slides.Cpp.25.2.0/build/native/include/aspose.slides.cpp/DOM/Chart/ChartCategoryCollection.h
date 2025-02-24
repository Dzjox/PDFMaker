#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>
#include <system/array.h>
#include <DOM/Chart/IChartCategoryCollection.h>

#include "DOM/DomObject.h"
#include "DOM/Chart/ChartData.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Cells
{
namespace Render
{
namespace Chart2007
{
namespace ChartHelpers
{
class AxisHelper;
} // namespace ChartHelpers
} // namespace Chart2007
} // namespace Render
} // namespace Cells
namespace Slides
{
namespace Charts
{
class CategoryAxisBase;
class ChartCategory;
class ChartDataPointLevel;
class IChartCategory;
class IChartDataCell;
class LegendElement;
template <typename> class ListOfChartDataItems;
class ScaleElement;
class SunburstElement;
class TreemapSquareElement;
} // namespace Charts
namespace PptxSerialization
{
namespace PartParser
{
namespace Chart
{
class ChartCategoryCollectionExPPTXSerialization;
class ChartCategoryCollectionPPTXSerialization;
class ChartDataCachePPTXSerialization;
class ChartDataPPTXSerialization;
class WorkbookPPTXSerialization;
} // namespace Chart
} // namespace PartParser
} // namespace PptxSerialization
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
namespace Charts
{
class ChartCategoryCollectionPPTXUnsupportedProps;
} // namespace Charts
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
template <typename> class IEnumerator;
template <typename, typename> class KeyValuePair;
} // namespace Generic
} // namespace Collections
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents collection of <see cref="Aspose::Slides::Charts::ChartCategory">ChartCategory</see>
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ChartCategoryCollection : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::ChartData>>, public Aspose::Slides::Charts::IChartCategoryCollection
{
    typedef ChartCategoryCollection ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::ChartData>> BaseType;
    typedef Aspose::Slides::Charts::IChartCategoryCollection BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::ChartDataPointLevel;
    friend class Aspose::Slides::Charts::ChartCategory;
    friend class Aspose::Slides::Charts::ChartData;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartCategoryCollectionExPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartDataCachePPTXSerialization;
    friend class Aspose::Slides::Charts::CategoryAxisBase;
    friend class Aspose::Slides::Charts::SunburstElement;
    friend class Aspose::Slides::Charts::TreemapSquareElement;
    friend class Aspose::Cells::Render::Chart2007::ChartHelpers::AxisHelper;
    friend class Aspose::Slides::Charts::ScaleElement;
    friend class Aspose::Slides::Charts::LegendElement;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartCategoryCollectionPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartDataPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::WorkbookPPTXSerialization;
    /// @endcond
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<IChartCategory>>;
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
    /// If true then worksheet is used for storing categories (this case supports a multi-level categories).
    /// If false then worksheet is NOT used for storing values (and this case doesn't support a 
    /// multi-level categories).
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_UseCells() override;
    /// <summary>
    /// If true then worksheet is used for storing categories (this case supports a multi-level categories).
    /// If false then worksheet is NOT used for storing values (and this case doesn't support a 
    /// multi-level categories).
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_UseCells(bool value) override;
    /// <summary>
    /// Returns count of category grouping levels used.
    /// Is more then one for multilevel categories.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_GroupingLevelCount() override;
    /// <summary>
    /// Returns a number of elements int the collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Count() override;
    /// <summary>
    /// Returns a value indicating whether access to the List is synchronized (thread safe).
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsSynchronized() override;
    /// <summary>
    /// Returns an object that can be used to synchronize access to the collection.
    /// Read-only <see cref="System::Object"></see>.
    /// </summary>
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
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartCategory> idx_get(int32_t index) override;
    
    /// <summary>
    /// If category exists in collection, return it. Else creates new chart category from 
    /// <see cref="Aspose::Slides::Charts::IChartDataCell">IChartDataCell</see> and adds it to the collection.
    /// </summary>
    /// <param name="chartDataCell">Cell used to create chart category.</param>       
    /// <returns>Added or existing category.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartCategory> Add(System::SharedPtr<IChartDataCell> chartDataCell) override;
    /// <summary>
    ///  Creates new <see cref="Aspose::Slides::Charts::ChartCategory">ChartCategory</see> from value and adds it to the collection.
    /// </summary>
    /// <param name="value">The value.</param>
    /// <returns>Added <see cref="Aspose::Slides::Charts::IChartCategory">IChartCategory</see>.</returns>
    /// <remarks>This method adds worksheet with name AUTO_DATA and adds all values there.  If you use <see cref="Aspose::Slides::Charts::ChartDataWorkbook">ChartDataWorkbook</see> to add or edit cell values, be sure that you do not use this worksheet
    /// Maximum number of values added using this method must not exceed 16711680</remarks>
    /// <exception cref="System::InvalidOperationException">if limit exceeded</exception>    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartCategory> Add(System::SharedPtr<System::Object> value) override;
    /// <summary>
    /// Searches for the specified <see cref="Aspose::Slides::Charts::ChartCategory">ChartCategory</see> and returns the zero-based index of the first occurrence within the entire Collection.
    /// </summary>
    /// <param name="value">Chart category.</param>
    /// <returns>The zero-based index of the first occurrence of value within the entire CollectionBase, if found; otherwise, -1.</returns>
    ASPOSE_SLIDES_SHARED_API int32_t IndexOf(System::SharedPtr<IChartCategory> value) override;
    /// <summary>
    /// Removes the specified value.
    /// </summary>
    /// <param name="value">The value.</param>
    /// <exception cref="System::ArgumentException ">The value parameter was not found in the collection.</exception>
    ASPOSE_SLIDES_SHARED_API void Remove(System::SharedPtr<IChartCategory> value) override;
    /// <summary>
    /// Removes the element at the given index.
    /// </summary>
    /// <param name="index">Index of a category to remove.</param>
    ASPOSE_SLIDES_SHARED_API void RemoveAt(int32_t index) override;
    /// <summary>
    /// Removes all elements from the collection.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Clear() override;
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IChartCategory>>> GetEnumerator() override;
    /// <summary>
    /// Copies all elements of the collection to the specified array.
    /// </summary>
    /// <param name="array">Target array.</param>
    /// <param name="index">Starting index in the array.</param>
    ASPOSE_SLIDES_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<IChartCategory>> array, int32_t index) override;
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
    ASPOSE_SLIDES_LOCAL_API System::String get_CellsRangeCachedFormula() const;
    ASPOSE_SLIDES_LOCAL_API void set_CellsRangeCachedFormula(System::String value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::ChartCategoryCollectionPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API bool get_IsCatElementNotFound() const;
    ASPOSE_SLIDES_LOCAL_API void set_IsCatElementNotFound(bool value);
    
    ASPOSE_SLIDES_LOCAL_API ChartCategoryCollection(System::SharedPtr<ChartData> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ChartCategoryCollection, CODEPORTING_ARGS(System::SharedPtr<ChartData> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ChartCategory> AddValueFromCache(System::SharedPtr<System::Object> value);
    ASPOSE_SLIDES_LOCAL_API void ClearInternal();
    ASPOSE_SLIDES_LOCAL_API bool IsNumberValuesOnly();
    ASPOSE_SLIDES_LOCAL_API void RemoveInternal(System::SharedPtr<ChartCategory> value);
    ASPOSE_SLIDES_LOCAL_API void Add(System::SharedPtr<IChartCategory> category);
    ASPOSE_SLIDES_LOCAL_API System::String GetCellsAddress();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::List<System::Collections::Generic::KeyValuePair<int32_t, System::String>>> GetGroupingItems(int32_t level);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~ChartCategoryCollection();
    
private:

    System::String pr_CellsRangeCachedFormula;
    bool pr_IsCatElementNotFound;
    bool m_useCells;
    System::SharedPtr<ListOfChartDataItems<System::SharedPtr<IChartCategory>>> m_items;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<ChartCategory>>> m_namesCache;
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::ChartCategoryCollectionPPTXUnsupportedProps> m_pptxUnsupportedProps;
    
    ASPOSE_SLIDES_LOCAL_API void RemoveCategoryNameCacheItem(System::SharedPtr<IChartCategory> category);
    ASPOSE_SLIDES_LOCAL_API void AddCategoryNameCacheItem(System::SharedPtr<IChartCategory> category);
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


