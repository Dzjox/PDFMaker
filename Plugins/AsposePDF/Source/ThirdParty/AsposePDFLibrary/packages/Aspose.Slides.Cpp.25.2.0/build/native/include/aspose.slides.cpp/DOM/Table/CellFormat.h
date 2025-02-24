#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Table/ICellFormat.h>

#include "DOM/PVI/MemoryAwareness/PVIObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class Cell;
class CellFormatEffectiveData;
class CellFormatImpl;
class FillFormat;
class FillFormatEffectiveData;
class ICellFormatEffectiveData;
class IDOMObject;
class IFillFormat;
class ILineFormat;
namespace Layout
{
class TableLayout;
} // namespace Layout
class LineFormat;
class LineFormatEffectiveData;
namespace OdpSerialization
{
namespace PartParser
{
class TableOdpDeserialization;
} // namespace PartParser
} // namespace OdpSerialization
namespace PptxSerialization
{
namespace PartParser
{
class CellPPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
class TableCellTextStyle;
class TableFormat;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents format of a table cell.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS CellFormat final : public Aspose::Slides::PVIObject, public Aspose::Slides::ICellFormat
{
    typedef CellFormat ThisType;
    typedef Aspose::Slides::PVIObject BaseType;
    typedef Aspose::Slides::ICellFormat BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::FillFormatEffectiveData;
    friend class Aspose::Slides::LineFormatEffectiveData;
    friend class Aspose::Slides::Layout::TableLayout;
    friend class Aspose::Slides::TableFormat;
    friend class Aspose::Slides::Cell;
    friend class Aspose::Slides::OdpSerialization::PartParser::TableOdpDeserialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::CellPPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns a cell fill properties object.
    /// Read-only <see cref="Aspose::Slides::IFillFormat">IFillFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFillFormat> get_FillFormat() override;
    /// <summary>
    /// Returns a left border line properties object.
    /// Read-only <see cref="Aspose::Slides::ILineFormat">ILineFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ILineFormat> get_BorderLeft() override;
    /// <summary>
    /// Returns a top border line properties object.
    /// Read-only <see cref="Aspose::Slides::ILineFormat">ILineFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ILineFormat> get_BorderTop() override;
    /// <summary>
    /// Returns a right border line properties object.
    /// Read-only <see cref="Aspose::Slides::ILineFormat">ILineFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ILineFormat> get_BorderRight() override;
    /// <summary>
    /// Returns a bottom border line properties object.
    /// Read-only <see cref="Aspose::Slides::ILineFormat">ILineFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ILineFormat> get_BorderBottom() override;
    /// <summary>
    /// Returns a top-left to bottom-right diagonal line properties object.
    /// Read-only <see cref="Aspose::Slides::ILineFormat">ILineFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ILineFormat> get_BorderDiagonalDown() override;
    /// <summary>
    /// Returns a bottom-left to top-right diagonal line properties object.
    /// Read-only <see cref="Aspose::Slides::ILineFormat">ILineFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ILineFormat> get_BorderDiagonalUp() override;
    /// <summary>
    /// Gets the transparency of the fill color.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Transparency() override;
    /// <summary>
    /// Sets the transparency of the fill color.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Transparency(float value) override;
    
    /// <summary>
    /// Gets effective table cell formatting properties with inheritance and table styles applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::ICellFormatEffectiveData">ICellFormatEffectiveData</see>.</returns>
    /// <example>
    /// This example demonstrates getting effective fill format for different table logic parts.
    /// Please note that cell formatting always has higher priority than row formatting, row - higher than column, column - higher that whole table.
    /// So finally CellFormatEffectiveData properties always used to draw the table. The following code is just an example of API.
    /// <code>
    /// auto pres = MakeObject<Presentation>(u"MyPresentation.pptx");
    /// auto tbl = AsCast<Table>(pres->get_Slides()->idx_get(0)->get_Shapes()->idx_get(0));
    /// auto tableFillFormatEffective = tbl->get_TableFormat()->GetEffective()->get_FillFormat();
    /// auto rowFillFormatEffective = tbl->get_Rows()->idx_get(0)->get_RowFormat()->GetEffective()->get_FillFormat();
    /// auto columnFillFormatEffective = tbl->get_Columns()->idx_get(0)->get_ColumnFormat()->GetEffective()->get_FillFormat();
    /// auto cellFillFormatEffective = tbl->idx_get(0, 0)->get_CellFormat()->GetEffective()->get_FillFormat();
    /// // Output and comparison
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ICellFormatEffectiveData> GetEffective() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<CellFormatImpl> get_RealObject();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<TableCellTextStyle> get_TextStyle();
    
    ASPOSE_SLIDES_LOCAL_API CellFormat(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CellFormat, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    ASPOSE_SLIDES_SHARED_API void CreateChildObjects() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> CreateRealObject() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void BorderChanged(System::SharedPtr<LineFormat> source);
    ASPOSE_SLIDES_LOCAL_API void UnsubscribeBorderChanged();
    ASPOSE_SLIDES_LOCAL_API void SubscribeBorderChanged();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<CellFormatEffectiveData> GetEffectiveInternal();
    ASPOSE_SLIDES_LOCAL_API bool IsSolidFillType();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~CellFormat();
    
private:

    System::SharedPtr<Aspose::Slides::FillFormat> m_fillFormat;
    System::SharedPtr<LineFormat> m_borderLeft;
    System::SharedPtr<LineFormat> m_borderTop;
    System::SharedPtr<LineFormat> m_borderRight;
    System::SharedPtr<LineFormat> m_borderBottom;
    System::SharedPtr<LineFormat> m_borderDiagonalDown;
    System::SharedPtr<LineFormat> m_borderDiagonalUp;
    System::WeakPtr<Cell> m_parentCell;
    System::SharedPtr<CellFormatEffectiveData> m_effective;
    
    ASPOSE_SLIDES_LOCAL_API void EnsureSolidFillType();
    ASPOSE_SLIDES_LOCAL_API void SetTransparency(float value);
    ASPOSE_SLIDES_LOCAL_API void RemoveAlphaTransform();
    ASPOSE_SLIDES_LOCAL_API float GetTransparency();
    
};

} // namespace Slides
} // namespace Aspose


