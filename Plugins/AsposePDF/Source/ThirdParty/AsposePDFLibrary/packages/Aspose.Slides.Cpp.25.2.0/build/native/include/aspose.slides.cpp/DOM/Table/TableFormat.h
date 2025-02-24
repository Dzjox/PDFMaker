#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Table/ITableFormat.h>

#include "DOM/Table/Table.h"
#include "DOM/PVI/IPVIObject.h"
#include "DOM/DomObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ColumnFormatEffectiveData;
class FillFormat;
class FillFormatEffectiveData;
class IFillFormat;
class IPresentation;
class IPresentationComponent;
class ITableFormatEffectiveData;
class RowFormatEffectiveData;
class TableFormatEffectiveData;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents format of a table.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS TableFormat final : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Table>>, public Aspose::Slides::ITableFormat, public Aspose::Slides::IPVIObject
{
    typedef TableFormat ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Table>> BaseType;
    typedef Aspose::Slides::ITableFormat BaseType1;
    typedef Aspose::Slides::IPVIObject BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::FillFormatEffectiveData;
    friend class Aspose::Slides::ColumnFormatEffectiveData;
    friend class Aspose::Slides::RowFormatEffectiveData;
    friend class Aspose::Slides::TableFormatEffectiveData;
    friend class Aspose::Slides::Table;
    /// @endcond
    
public:

    /// <summary>
    /// Returns a table fill properties object.
    /// Read-only <see cref="Aspose::Slides::IFillFormat">IFillFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFillFormat> get_FillFormat() override;
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
    /// Gets effective table formatting properties with inheritance and table styles applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::ITableFormatEffectiveData">ITableFormatEffectiveData</see>.</returns>
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
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITableFormatEffectiveData> GetEffective() override;
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Table> get_ParentTable();
    ASPOSE_SLIDES_LOCAL_API uint32_t get_Version() override;
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPresentationComponent> get_Parent_IPresentationComponent() override;
    
    ASPOSE_SLIDES_LOCAL_API TableFormat(System::SharedPtr<Table> table);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TableFormat, CODEPORTING_ARGS(System::SharedPtr<Table> table));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<TableFormatEffectiveData> GetEffectiveInternal();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~TableFormat();
    
private:

    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPresentation> get_Presentation();
    
    System::WeakPtr<IPresentationComponent> m_parentIPresentationComponent;
    uint32_t m_version;
    System::SharedPtr<Aspose::Slides::FillFormat> m_fillFormat;
    System::SharedPtr<TableFormatEffectiveData> m_effective;
    
    ASPOSE_SLIDES_LOCAL_API void SetTransparencyValue(float value);
    ASPOSE_SLIDES_LOCAL_API float GetTransparencyValue();
    ASPOSE_SLIDES_LOCAL_API void EnsureSolidFillType();
    
};

} // namespace Slides
} // namespace Aspose


