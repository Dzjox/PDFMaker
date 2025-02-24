#pragma once
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/Table/IColumn.h>

#include "DOM/Table/CellCollection.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class Cell;
class CellFormat;
class ColumnCollection;
class ColumnFormat;
class ColumnFormatEffectiveData;
class ICell;
class IColumnFormat;
class IParagraphFormat;
class IPortionFormat;
class ITextFrameFormat;
namespace Layout
{
class TableLayout;
} // namespace Layout
namespace PptxSerialization
{
namespace PartParser
{
class CellPPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
class Table;
class ThemeableTableFormat;
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

/// <summary>
/// Represents a column in a table.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Column final : public Aspose::Slides::CellCollection, public Aspose::Slides::IColumn
{
    typedef Column ThisType;
    typedef Aspose::Slides::CellCollection BaseType;
    typedef Aspose::Slides::IColumn BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Layout::TableLayout;
    friend class Aspose::Slides::ColumnFormat;
    friend class Aspose::Slides::ColumnFormatEffectiveData;
    friend class Aspose::Slides::CellFormat;
    friend class Aspose::Slides::ThemeableTableFormat;
    friend class Aspose::Slides::Cell;
    friend class Aspose::Slides::ColumnCollection;
    friend class Aspose::Slides::Table;
    friend class Aspose::Slides::PptxSerialization::PartParser::CellPPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the width of a column.
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_Width() override;
    /// <summary>
    /// Sets the width of a column.
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Width(double value) override;
    /// <summary>
    /// Returns the ColumnFormat object that contains formatting properties for this column.
    /// Read-only <see cref="Aspose::Slides::IColumnFormat">IColumnFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColumnFormat> get_ColumnFormat() override;
    
    /// <summary>
    /// Sets defined portion format properties to all column cells' portions.
    /// </summary>
    /// <param name="source">IPortionFormat object with necessary properties set.</param>
    ASPOSE_SLIDES_SHARED_API void SetTextFormat(System::SharedPtr<IPortionFormat> source) override;
    /// <summary>
    /// Sets defined paragraph format properties to all column cells' paragraphs.
    /// </summary>
    /// <param name="source">IParagraphFormat object with necessary properties set.</param>
    ASPOSE_SLIDES_SHARED_API void SetTextFormat(System::SharedPtr<IParagraphFormat> source) override;
    /// <summary>
    /// Sets defined text frame format properties to all column cells' text frames.
    /// </summary>
    /// <param name="source">ITextFrameFormat object with necessary properties set.</param>
    ASPOSE_SLIDES_SHARED_API void SetTextFormat(System::SharedPtr<ITextFrameFormat> source) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ColumnCollection> get_ParentColumnsCollection();
    ASPOSE_SLIDES_LOCAL_API int32_t get_ColumnIndex();
    ASPOSE_SLIDES_LOCAL_API double get_ColumnOffset();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Table> get_ParentTable() override;
    
    /// @cond
    int32_t m_columnIndex;
    double m_columnOffset;
    static const ASPOSE_SLIDES_LOCAL_API double MinWidth;
    bool m_needUpdateWidth;
    
    ASPOSE_SLIDES_LOCAL_API Column(System::SharedPtr<ColumnCollection> parentImmediate, double width);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Column, CODEPORTING_ARGS(System::SharedPtr<ColumnCollection> parentImmediate, double width));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void RequestOfWidthValidation();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API int32_t GetCellsCount() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Cell> GetCellByIndexInternal(int32_t index) override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<ICell>>> ReturnEnumerator() override;
    ASPOSE_SLIDES_SHARED_API int32_t FindByOffset(double offset) override;
    ASPOSE_SLIDES_SHARED_API void CopyToArrayInternal(System::ArrayPtr<System::SharedPtr<ICell>> array, int32_t destIndex) override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~Column();
    
private:

    double m_width;
    System::SharedPtr<Aspose::Slides::ColumnFormat> m_columnFormat;
    
};

} // namespace Slides
} // namespace Aspose


