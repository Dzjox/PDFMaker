#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Table/IRowFormat.h>

#include "DOM/Table/Row.h"
#include "DOM/PVI/IPVIObject.h"
#include "DOM/DomObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IPresentationComponent;
class IRowFormatEffectiveData;
class RowFormatEffectiveData;
class Table;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents format of a table row.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS RowFormat final : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Row>>, public Aspose::Slides::IRowFormat, public Aspose::Slides::IPVIObject
{
    typedef RowFormat ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Row>> BaseType;
    typedef Aspose::Slides::IRowFormat BaseType1;
    typedef Aspose::Slides::IPVIObject BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::RowFormatEffectiveData;
    friend class Aspose::Slides::Row;
    /// @endcond
    
public:

    /// <summary>
    /// Gets effective table row formatting properties with inheritance and table styles applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::IRowFormatEffectiveData">IRowFormatEffectiveData</see>.</returns>
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
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IRowFormatEffectiveData> GetEffective() override;
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Row> get_ParentRow();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Table> get_ParentTable();
    ASPOSE_SLIDES_LOCAL_API uint32_t get_Version() override;
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPresentationComponent> get_Parent_IPresentationComponent() override;
    
    ASPOSE_SLIDES_LOCAL_API RowFormat(System::SharedPtr<Row> row);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(RowFormat, CODEPORTING_ARGS(System::SharedPtr<Row> row));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<RowFormatEffectiveData> GetEffectiveInternal();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~RowFormat();
    
private:

    System::WeakPtr<IPresentationComponent> m_parentIPresentationComponent;
    uint32_t m_version;
    System::SharedPtr<RowFormatEffectiveData> m_effective;
    
};

} // namespace Slides
} // namespace Aspose


