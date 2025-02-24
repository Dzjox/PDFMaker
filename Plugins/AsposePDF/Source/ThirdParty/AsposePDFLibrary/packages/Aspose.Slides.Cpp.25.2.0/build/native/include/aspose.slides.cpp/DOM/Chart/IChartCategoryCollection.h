#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IGenericCollection.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class IChartCategory;
class IChartDataCell;
} // namespace Charts
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents collection of <see cref="Aspose::Slides::Charts::IChartCategory">IChartCategory</see>
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IChartCategoryCollection : public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::Charts::IChartCategory>>
{
    typedef IChartCategoryCollection ThisType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::Charts::IChartCategory>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// If true then worksheet is used for storing categories (this case supports a multi-level categories).
    /// If false then worksheet is NOT used for storing values (and this case doesn't support a 
    /// multi-level categories).
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_UseCells() = 0;
    /// <summary>
    /// If true then worksheet is used for storing categories (this case supports a multi-level categories).
    /// If false then worksheet is NOT used for storing values (and this case doesn't support a 
    /// multi-level categories).
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_UseCells(bool value) = 0;
    /// <summary>
    /// Returns count of category grouping levels used.
    /// Is more then one for multilevel categories.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_GroupingLevelCount() = 0;
    
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartCategory> idx_get(int32_t index) = 0;
    
    /// <summary>
    /// If category exists in collection, return it. Else creates new chart category from 
    /// <see cref="Aspose::Slides::Charts::IChartDataCell">IChartDataCell</see> and adds it to the collection.
    /// </summary>
    /// <param name="chartDataCell">Cell used to create chart category.</param>       
    /// <returns>Added or existing category.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartCategory> Add(System::SharedPtr<IChartDataCell> chartDataCell) = 0;
    /// <summary>
    ///  Creates new <see cref="Aspose::Slides::Charts::IChartCategory">IChartCategory</see> from value and adds it to the collection.
    /// </summary>
    /// <param name="value">The value.</param>
    /// <returns>Added <see cref="Aspose::Slides::Charts::IChartCategory">IChartCategory</see>.</returns>
    /// <remarks>This method adds worksheet with name AUTO_DATA and adds all values there.  If you use <see cref="Aspose::Slides::Charts::IChartDataWorkbook">IChartDataWorkbook</see> to add or edit cell values, be sure that you do not use this worksheet
    /// Maximum number of values added using this method must not exceed 16711680</remarks>
    /// <exception cref="System::InvalidOperationException">if limit exceeded</exception>    
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartCategory> Add(System::SharedPtr<System::Object> value) = 0;
    /// <summary>
    /// Searches for the specified <see cref="Aspose::Slides::Charts::IChartCategory">IChartCategory</see> and returns the zero-based index of the first occurrence within the entire Collection
    /// </summary>
    /// <param name="value">Chart category.</param>
    /// <returns>The zero-based index of the first occurrence of value within the entire CollectionBase, if found; otherwise, -1.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t IndexOf(System::SharedPtr<IChartCategory> value) = 0;
    /// <summary>
    /// Removes the specified value.
    /// </summary>
    /// <param name="value">The value.</param>
    /// <exception cref="System::ArgumentException ">The value parameter was not found in the collection.</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Remove(System::SharedPtr<IChartCategory> value) = 0;
    /// <summary>
    /// Removes the element at the given index.
    /// </summary>
    /// <param name="index">Index of a category to remove.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveAt(int32_t index) = 0;
    /// <summary>
    /// Removes all elements from the collection.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Clear() = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


