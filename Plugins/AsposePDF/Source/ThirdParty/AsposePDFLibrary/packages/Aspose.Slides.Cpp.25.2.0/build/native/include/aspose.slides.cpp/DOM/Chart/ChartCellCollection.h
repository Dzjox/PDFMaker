#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <DOM/Chart/IChartCellCollection.h>
#include <cstdint>

#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class Chart;
class ChartCategoryCollection;
class ChartData;
class ChartDataCell;
class ChartDataCellWrapper;
class ChartDataWorkbook;
class DataLabelCollection;
class IChartDataCell;
class StringChartValue;
} // namespace Charts
namespace PptxSerialization
{
namespace PartParser
{
namespace Chart
{
class WorkbookPPTXSerialization;
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
template <typename, typename> class Dictionary;
template <typename> class IEnumerable;
template <typename> class IEnumerator;
template <typename> class List;
} // namespace Generic
} // namespace Collections
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents collection of a cells with data.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ChartCellCollection : public Aspose::Slides::Charts::IChartCellCollection, public Aspose::Slides::IDOMObject
{
    typedef ChartCellCollection ThisType;
    typedef Aspose::Slides::Charts::IChartCellCollection BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::ChartDataWorkbook;
    friend class Aspose::Slides::Charts::ChartCategoryCollection;
    friend class Aspose::Slides::Charts::ChartData;
    friend class Aspose::Slides::Charts::DataLabelCollection;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::WorkbookPPTXSerialization;
    friend class Aspose::Slides::Charts::StringChartValue;
    /// @endcond
    
public:

    /// <summary>
    /// Gets the count of cells in collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t get_Count() override;
    
    /// <summary>
    /// Returns address of the set of cells in workbook.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String GetCellsAddress() override;
    /// <summary>
    /// Concatenation string from all cells string values.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String GetConcatenatedValuesFromCells() override;
    
    /// <summary>
    /// Returns a cell (IChartDataCell) by index.
    /// </summary>
    /// <param name="index">Index of a cell.</param>
    /// <returns>Cell with data.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataCell> idx_get(int32_t index) override;
    
    /// <summary>
    /// Add new cell to the collection.
    /// </summary>
    /// <param name="cell">New cell to add.</param>
    ASPOSE_SLIDES_SHARED_API void Add(System::SharedPtr<IChartDataCell> cell) override;
    /// <summary>
    /// Creates <see cref="Aspose::Slides::Charts::ChartDataCell">ChartDataCell</see> from specified value and adds it to the collection.
    /// </summary>
    /// <param name="value">The value.</param>
    /// <remarks>This method adds worksheet with name AUTO_DATA and adds all values there.  If you use <see cref="Aspose::Slides::Charts::ChartDataWorkbook">ChartDataWorkbook</see> to add or edit Cell values, be sure that you do not use this worksheet
    /// Maximum number of values added using this method must not exceed 16711680</remarks>
    /// <exception cref="System::InvalidOperationException">if limit exceeded</exception>                
    ASPOSE_SLIDES_SHARED_API void Add(System::SharedPtr<System::Object> value) override;
    /// <summary>
    /// Removes a cell from the collection by index.
    /// </summary>
    /// <param name="index">Index of a cell to remove.</param>
    ASPOSE_SLIDES_SHARED_API void RemoveAt(int32_t index) override;
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IChartDataCell>>> GetEnumerator() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API ChartCellCollection(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ChartCellCollection, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void AddRangeInternal(System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<ChartDataCell>>> cells);
    ASPOSE_SLIDES_LOCAL_API System::String GetRectangleBoundaryCellsAddress();
    static ASPOSE_SLIDES_LOCAL_API System::String GetAddressCellFormat(System::String name);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~ChartCellCollection();
    
private:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Chart> get_ChartInternal();
    
    System::WeakPtr<Chart> m_parentChart;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<ChartDataCellWrapper>>> m_items;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<ChartDataCellWrapper>>>>> m_namesCache;
    System::WeakPtr<IDOMObject> m_parentImmediate;
    
    ASPOSE_SLIDES_LOCAL_API bool IsRange();
    ASPOSE_SLIDES_LOCAL_API System::String AdjustFStringsSyntax(System::String sheetName);
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


