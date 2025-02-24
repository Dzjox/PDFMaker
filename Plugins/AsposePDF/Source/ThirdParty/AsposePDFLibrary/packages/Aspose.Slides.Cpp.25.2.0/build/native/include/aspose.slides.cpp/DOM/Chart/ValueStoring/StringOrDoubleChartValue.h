#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <DOM/Chart/IStringOrDoubleChartValue.h>

#include "DOM/Chart/ValueStoring/BaseChartValue.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class ChartDataCellWrapper;
class ChartDataPoint;
class DataSourceTypeHolder;
class IChartDataCell;
class ISingleCellChartValue;
} // namespace Charts
class IDOMObject;
namespace PptxSerialization
{
namespace PartParser
{
namespace Chart
{
class DoubleLiteralsDataSerializer;
class StringLiteralsDataSerializer;
class WorkbookDataSerializer;
} // namespace Chart
} // namespace PartParser
} // namespace PptxSerialization
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represent string or double value which can be stored in pptx presentation document in two ways:
/// 1) in cell/cells of workbook related to chart;
/// 2) as literal value.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS StringOrDoubleChartValue : public Aspose::Slides::Charts::BaseChartValue, public Aspose::Slides::Charts::IStringOrDoubleChartValue
{
    typedef StringOrDoubleChartValue ThisType;
    typedef Aspose::Slides::Charts::BaseChartValue BaseType;
    typedef Aspose::Slides::Charts::IStringOrDoubleChartValue BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::ChartDataPoint;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::DoubleLiteralsDataSerializer;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::StringLiteralsDataSerializer;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::WorkbookDataSerializer;
    /// @endcond
    
public:

    /// <summary>
    /// Returns chart data cell.
    /// Read <see cref="Aspose::Slides::Charts::IChartDataCell">IChartDataCell</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartDataCell> get_AsCell() override;
    /// <summary>
    /// Sets chart data cell.
    /// Write <see cref="Aspose::Slides::Charts::IChartDataCell">IChartDataCell</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_AsCell(System::SharedPtr<IChartDataCell> value) override;
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
    /// Returns value as literal double.
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_AsLiteralDouble() override;
    /// <summary>
    /// Sets value as literal double.
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_AsLiteralDouble(double value) override;
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
    /// Converts to double.
    /// </summary>
    /// <returns>Double value.</returns>
    ASPOSE_SLIDES_SHARED_API double ToDouble() override;
    
protected:

    /// @cond
    static ASPOSE_SLIDES_LOCAL_API System::String ToString(System::SharedPtr<IStringOrDoubleChartValue> value);
    static ASPOSE_SLIDES_LOCAL_API double ToDouble(System::SharedPtr<IStringOrDoubleChartValue> value);
    static ASPOSE_SLIDES_LOCAL_API double ToDouble(System::SharedPtr<IStringOrDoubleChartValue> value, double defaultValue);
    static ASPOSE_SLIDES_LOCAL_API bool IsNullOrEmpty(System::SharedPtr<ISingleCellChartValue> value);
    static ASPOSE_SLIDES_LOCAL_API bool IsNullOrEmpty(System::SharedPtr<ISingleCellChartValue> value, bool checkEmpty);
    
    ASPOSE_SLIDES_LOCAL_API StringOrDoubleChartValue(System::SharedPtr<IDOMObject> parentImmediate, System::SharedPtr<DataSourceTypeHolder> dataSourceTypeHolder, bool centralizedTypeChangingRestriction);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(StringOrDoubleChartValue, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate, System::SharedPtr<DataSourceTypeHolder> dataSourceTypeHolder, bool centralizedTypeChangingRestriction));
    
    virtual ASPOSE_SLIDES_SHARED_API ~StringOrDoubleChartValue();
    
private:

    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ChartDataCellWrapper> get_CellWrapper();
    
    System::SharedPtr<ChartDataCellWrapper> m_cellWrapper;
    System::String m_literalString;
    double m_literalDouble;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


