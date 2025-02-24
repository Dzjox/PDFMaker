#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <DOM/Chart/IStringChartValue.h>
#include <cstdint>

#include "DOM/Chart/ValueStoring/BaseChartValue.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class BubbleChartDataBuilder;
class CategoryValueChartDataBuilder;
class ChartCellCollection;
class ChartSeries;
class DataSourceTypeHolder;
class IChartCellCollection;
class IChartDataCell;
class ScatterChartDataBuilder;
} // namespace Charts
class IDOMObject;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represent string value which can be stored in pptx presentation document in two ways:
/// 1) in cell/cells of workbook related to chart;
/// 2) as literal value.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS StringChartValue : public Aspose::Slides::Charts::BaseChartValue, public Aspose::Slides::Charts::IStringChartValue
{
    typedef StringChartValue ThisType;
    typedef Aspose::Slides::Charts::BaseChartValue BaseType;
    typedef Aspose::Slides::Charts::IStringChartValue BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::CategoryValueChartDataBuilder;
    friend class Aspose::Slides::Charts::BubbleChartDataBuilder;
    friend class Aspose::Slides::Charts::ScatterChartDataBuilder;
    friend class Aspose::Slides::Charts::ChartSeries;
    /// @endcond
    
public:

    /// <summary>
    /// Null value assigning is not allowed.
    /// Returning value always is not null.
    /// Read <see cref="Aspose::Slides::Charts::IChartCellCollection">IChartCellCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartCellCollection> get_AsCells() override;
    /// <summary>
    /// Null value assigning is not allowed.
    /// Returning value always is not null.
    /// Write <see cref="Aspose::Slides::Charts::IChartCellCollection">IChartCellCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_AsCells(System::SharedPtr<IChartCellCollection> value) override;
    /// <summary>
    /// Returns value as literal string.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_AsLiteralString() override;
    /// <summary>
    /// Sets value as literal string.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_AsLiteralString(System::String value) override;
    /// <summary>
    /// Returns Data object.
    /// Read <see cref="System::Object"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> get_Data() override;
    /// <summary>
    /// Sets Data object.
    /// Write <see cref="System::Object"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Data(System::SharedPtr<System::Object> value) override;
    
    /// <summary>
    /// Sets value from specified cell.
    /// </summary>
    /// <param name="cell">Cell.</param>
    ASPOSE_SLIDES_SHARED_API void SetFromOneCell(System::SharedPtr<IChartDataCell> cell) override;
    /// <summary>
    /// If DataSourceType property is DataSourceType::Worksheet then this method returns address
    /// of the cells in workbook which represent the string data. Otherwise return
    /// empty string.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String GetCellsAddressInWorkbook() override;
    /// <summary>
    /// Returns a chart cell at the specified index.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataCell> get_AsCell(int32_t index) override;
    /// <summary>
    /// Returns string value data. 
    /// Return null if DataSourceType is false and no string value was assigned.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String ToString() const override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API StringChartValue(System::SharedPtr<IDOMObject> parentImmediate, System::SharedPtr<DataSourceTypeHolder> dataSourceTypeHolder, bool centralizedTypeChangingRestriction);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(StringChartValue, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate, System::SharedPtr<DataSourceTypeHolder> dataSourceTypeHolder, bool centralizedTypeChangingRestriction));
    
    virtual ASPOSE_SLIDES_SHARED_API ~StringChartValue();
    
private:

    System::String m_literalString;
    System::SharedPtr<ChartCellCollection> m_cellCollectionWithValue;
    
    System::String ToString_NonConst();
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


