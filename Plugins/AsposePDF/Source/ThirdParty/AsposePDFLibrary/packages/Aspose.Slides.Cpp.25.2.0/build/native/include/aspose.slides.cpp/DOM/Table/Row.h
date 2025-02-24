#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/Table/IRow.h>

#include "DOM/Table/CellCollection.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class Cell;
class CellFormat;
class Column;
class ColumnCollection;
class ICell;
class IParagraphFormat;
class IPortionFormat;
class IRowFormat;
class ITextFrameFormat;
namespace Layout
{
class TableLayout;
} // namespace Layout
namespace PptSerialization
{
class TablePPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class CellPPTXSerialization;
class TablePPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
class RowCollection;
class RowFormat;
class RowFormatEffectiveData;
class Table;
class TextFrame;
class ThemeableTableFormat;
namespace Util
{
class SlideUtil;
} // namespace Util
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IEnumerator;
template <typename> class List;
} // namespace Generic
} // namespace Collections
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a row in a table.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Row final : public Aspose::Slides::CellCollection, public Aspose::Slides::IRow
{
    typedef Row ThisType;
    typedef Aspose::Slides::CellCollection BaseType;
    typedef Aspose::Slides::IRow BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Layout::TableLayout;
    friend class Aspose::Slides::RowFormat;
    friend class Aspose::Slides::RowFormatEffectiveData;
    friend class Aspose::Slides::CellFormat;
    friend class Aspose::Slides::ThemeableTableFormat;
    friend class Aspose::Slides::Cell;
    friend class Aspose::Slides::Column;
    friend class Aspose::Slides::ColumnCollection;
    friend class Aspose::Slides::RowCollection;
    friend class Aspose::Slides::Table;
    friend class Aspose::Slides::TextFrame;
    friend class Aspose::Slides::Util::SlideUtil;
    friend class Aspose::Slides::PptxSerialization::PartParser::CellPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::TablePPTXSerialization;
    friend class Aspose::Slides::PptSerialization::TablePPTSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the height of a row.
    /// Read-only <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_Height() override;
    /// <summary>
    /// Returns the minimal possible height of a row.
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_MinimalHeight() override;
    /// <summary>
    /// Sets the minimal possible height of a row.
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_MinimalHeight(double value) override;
    /// <summary>
    /// Returns the RowFormat object that contains formatting properties for this row.
    /// Read-only <see cref="Aspose::Slides::IRowFormat">IRowFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IRowFormat> get_RowFormat() override;
    
    /// <summary>
    /// Sets defined portion format properties to all row cells' portions.
    /// </summary>
    /// <param name="source">IPortionFormat object with necessary properties set.</param>
    ASPOSE_SLIDES_SHARED_API void SetTextFormat(System::SharedPtr<IPortionFormat> source) override;
    /// <summary>
    /// Sets defined paragraph format properties to all row cells' paragraphs.
    /// </summary>
    /// <param name="source">IParagraphFormat object with necessary properties set.</param>
    ASPOSE_SLIDES_SHARED_API void SetTextFormat(System::SharedPtr<IParagraphFormat> source) override;
    /// <summary>
    /// Sets defined text frame format properties to all row cells' text frames.
    /// </summary>
    /// <param name="source">ITextFrameFormat object with necessary properties set.</param>
    ASPOSE_SLIDES_SHARED_API void SetTextFormat(System::SharedPtr<ITextFrameFormat> source) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<RowCollection> get_ParentRowsCollection();
    ASPOSE_SLIDES_LOCAL_API int32_t get_RowIndex();
    ASPOSE_SLIDES_LOCAL_API double get_RowOffset();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Table> get_ParentTable() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API double get_ActualHeightInternal();
    ASPOSE_SLIDES_LOCAL_API void set_ActualHeightInternal(double value);
    
    int32_t m_rowIndex;
    double m_rowOffset;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<ICell>>> m_cells;
    bool m_needUpdateHeight;
    
    ASPOSE_SLIDES_LOCAL_API Row(System::SharedPtr<RowCollection> parentImmediate, double height);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Row, CODEPORTING_ARGS(System::SharedPtr<RowCollection> parentImmediate, double height));
    /// <summary>
    /// Returns the number of cells in a collection.
    /// Read-only <see cref="int32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int32_t GetCellsCount() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void UpdateCellsCountToColumnCount(int32_t desiredCount);
    ASPOSE_SLIDES_LOCAL_API void InsertCellsInternal(int32_t index, int32_t count);
    /// @endcond
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Cell> GetCellByIndexInternal(int32_t index) override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void RemoveCellsRangeInternal(int32_t startCellIndex, int32_t cellCount);
    /// @endcond
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<ICell>>> ReturnEnumerator() override;
    ASPOSE_SLIDES_SHARED_API int32_t FindByOffset(double offset) override;
    ASPOSE_SLIDES_SHARED_API void CopyToArrayInternal(System::ArrayPtr<System::SharedPtr<ICell>> array, int32_t destIndex) override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void RequestOfHeightValidation();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~Row();
    
private:

    double m_fixedHeight;
    double m_actualHeight;
    System::SharedPtr<Aspose::Slides::RowFormat> m_rowFormat;
    
};

} // namespace Slides
} // namespace Aspose


