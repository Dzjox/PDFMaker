#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>
#include <system/array.h>
#include <DOM/Chart/IPieSplitCustomPointCollection.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class ChartSeriesGroup;
class IChartDataPoint;
class IChartSeriesGroup;
} // namespace Charts
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
/// Represents a collection of points for splitting point in a bar-of-pie or pie-of-pie chart with a custom split.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS PieSplitCustomPointCollection : public Aspose::Slides::Charts::IPieSplitCustomPointCollection
{
    typedef PieSplitCustomPointCollection ThisType;
    typedef Aspose::Slides::Charts::IPieSplitCustomPointCollection BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::ChartSeriesGroup;
    /// @endcond
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<IChartDataPoint>>;
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
    /// Returns the count of chart data points.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Count() const override;
    /// <summary>
    /// Gets a value indicating whether the <see cref="System::Collections::Generic::ICollection">ICollection</see> is read-only.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    /// <returns>
    /// true if the <see cref="System::Collections::Generic::ICollection">ICollection</see> is read-only; otherwise, false.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API bool get_IsReadOnly() const override;
    /// <summary>
    /// Returns a value indicating whether access to the collection is synchronized (thread-safe).
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsSynchronized();
    /// <summary>
    /// Returns a synchronization root.
    /// Read-only <see cref="System::Object"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> get_SyncRoot() const;
    
    /// <summary>
    /// Returns chart data point for specified index.
    /// </summary>
    /// <param name="index">Index.</param>
    /// <returns>Chart data point.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataPoint> idx_get(int32_t index) override;
    
    /// <summary>
    /// Adds data point by its index in parent series points collection.
    /// </summary>
    /// <param name="dataPointIndex">Index of data point in parent series points collection.</param>
    /// <exception cref="System::ArgumentException">Point with the given index was not found".</exception>
    ASPOSE_SLIDES_SHARED_API void Add(const int32_t& dataPointIndex) override;
    /// <summary>
    /// Adds data point to collection.
    /// </summary>
    /// <param name="dataPoint">Data point add to.</param>
    ASPOSE_SLIDES_SHARED_API void Add(const System::SharedPtr<IChartDataPoint>& dataPoint) override;
    /// <summary>
    /// Removes item from collection.
    /// </summary>
    /// <param name="dataPoint">Data point remove to.</param>
    /// <returns>
    /// true if item is successfully removed; otherwise, false. This method also
    /// returns false if item was not found in the System::Collections::Generic::List{T}.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API bool Remove(const System::SharedPtr<IChartDataPoint>& dataPoint) override;
    /// <summary>
    /// Removes item from collection by it index in parent series points collection.
    /// </summary>
    /// <param name="dataPointIndex">Index of data point in parent series points collection.</param>
    /// <exception cref="System::ArgumentException">Point with the given index was not found.</exception>
    /// <exception cref="System::ArgumentOutOfRangeException"><paramref name="dataPointIndex"></paramref> is negative.</exception>
    ASPOSE_SLIDES_SHARED_API void Remove(int32_t dataPointIndex) override;
    /// <summary>
    /// Removes all items from the <see cref="System::Collections::Generic::ICollection">ICollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Clear() override;
    /// <summary>
    /// Determines whether the <see cref="System::Collections::Generic::ICollection">ICollection</see> contains a specific value.
    /// </summary>
    /// <returns>
    /// true if <paramref name="item"></paramref> is found in the <see cref="System::Collections::Generic::ICollection">ICollection</see>; otherwise, false.
    /// </returns>
    /// <param name="item">The object to locate in the <see cref="System::Collections::Generic::ICollection">ICollection</see>.</param>
    ASPOSE_SLIDES_SHARED_API bool Contains(const System::SharedPtr<IChartDataPoint>& item) const override;
    /// <summary>
    /// Copies the elements of the <see cref="System::Collections::Generic::ICollection">ICollection</see> to an <see cref="System::Array"></see>, starting at a particular <see cref="System::Array"></see> index.
    /// </summary>
    /// <param name="array">The one-dimensional <see cref="System::Array"></see> that is the destination of the elements copied from <see cref="System::Collections::Generic::ICollection">ICollection</see>. The <see cref="System::Array"></see> must have zero-based indexing.</param>
    /// <param name="arrayIndex">The zero-based index in <paramref name="array"></paramref> at which copying begins.</param>
    /// <exception cref="System::ArgumentNullException"><paramref name="array"></paramref> is null.</exception>
    /// <exception cref="System::ArgumentOutOfRangeException"><paramref name="arrayIndex"></paramref> is less than 0.</exception>
    /// <exception cref="System::ArgumentException">The number of elements in the source <see cref="System::Collections::Generic::ICollection">ICollection</see> is greater than the available space from <paramref name="arrayIndex"></paramref> to the end of the destination <paramref name="array"></paramref>.</exception>
    ASPOSE_SLIDES_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<IChartDataPoint>> array, int32_t arrayIndex) override;
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IChartDataPoint>>> GetEnumerator() override;
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
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API PieSplitCustomPointCollection(System::SharedPtr<IChartSeriesGroup> parentSeriesGroup);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PieSplitCustomPointCollection, CODEPORTING_ARGS(System::SharedPtr<IChartSeriesGroup> parentSeriesGroup));
    
    virtual ASPOSE_SLIDES_SHARED_API ~PieSplitCustomPointCollection();
    
private:

    System::WeakPtr<IChartSeriesGroup> m_parentSeriesGroup;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IChartDataPoint>>> m_dataPoints;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


