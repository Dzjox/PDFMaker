#pragma once
//Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>
#include <system/array.h>
#include <DOM/Chart/IChartDataWorksheetCollection.h>
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
class ChartDataWorkbook;
class ChartDataWorksheet;
class IChartDataWorksheet;
class SpreadsheetWorkbookAdapter;
} // namespace Charts
namespace PptxSerialization
{
namespace PartParser
{
namespace Chart
{
class ChartCategoryCollectionPPTXSerialization;
} // namespace Chart
} // namespace PartParser
} // namespace PptxSerialization
namespace XlsxSerialization
{
namespace PartParser
{
class WorkbookPartParser;
} // namespace PartParser
} // namespace XlsxSerialization
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
/// Represents the collection of worksheets of chart data workbook.
/// </summary>
/// <example> Example:
/// <code>
/// auto pres = System::MakeObject<Presentation>();
/// 
/// auto chart = pres->get_Slides()->idx_get(0)->get_Shapes()->AddChart(ChartType::Pie, 50.0f, 50.0f, 400.0f, 500.0f);
/// auto workbook = chart->get_ChartData()->get_ChartDataWorkbook();
/// for (const auto& worksheet : workbook->get_Worksheets())
/// {
///     System::String worksheetName = worksheet->get_Name();
/// }
/// </code>
/// </example>    
class ASPOSE_SLIDES_SHARED_CLASS ChartDataWorksheetCollection final : public Aspose::Slides::Charts::IChartDataWorksheetCollection, public Aspose::Slides::IDOMObject
{
    typedef ChartDataWorksheetCollection ThisType;
    typedef Aspose::Slides::Charts::IChartDataWorksheetCollection BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::ChartDataWorkbook;
    friend class Aspose::Slides::Charts::ChartDataWorksheet;
    friend class Aspose::Slides::Charts::SpreadsheetWorkbookAdapter;
    friend class Aspose::Slides::XlsxSerialization::PartParser::WorkbookPartParser;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartCategoryCollectionPPTXSerialization;
    /// @endcond
    
public:
    /// A collection type whose iterator types is used as iterator types in the current collection.
    using iterator_holder_type = System::Collections::Generic::List<System::SharedPtr<IChartDataWorksheet>>;
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
    /// Returns the count.
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
    /// Returns the worksheet by index.
    /// </summary>
    /// <param name="index">Index of the worksheet in the collection.</param>
    /// <returns>Instance of the IChartDataWorksheet.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataWorksheet> idx_get(int32_t index) override;
    
    /// <summary>
    /// Returns an enumerator that iterates through the collection.
    /// </summary>
    /// <returns>
    /// A <see cref="System::Collections::Generic::IEnumerator">IEnumerator</see> that can be used to iterate through the collection.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IChartDataWorksheet>>> GetEnumerator() override;
    /// <summary>
    /// Copy to specified array.
    /// </summary>
    /// <param name="array">Array to copy to.</param>
    /// <param name="arrayIndex">Index to begin copying.</param>
    ASPOSE_SLIDES_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<IChartDataWorksheet>> array, int32_t arrayIndex) override;
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
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ChartDataWorkbook> get_ParentWorkbook();
    
    System::WeakPtr<ChartDataWorkbook> m_parentImmediate;
    int32_t m_nextSheetId;
    
    ASPOSE_SLIDES_LOCAL_API ChartDataWorksheetCollection(System::SharedPtr<ChartDataWorkbook> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ChartDataWorksheetCollection, CODEPORTING_ARGS(System::SharedPtr<ChartDataWorkbook> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API int32_t Add(System::SharedPtr<ChartDataWorksheet> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ChartDataWorksheet> Add(System::String val);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ChartDataWorksheet> Add();
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ChartDataWorksheet> idx_get(System::String name);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~ChartDataWorksheetCollection();
    
private:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IChartDataWorksheet>>> m_worksheets;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


