#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/Chart/IDoubleChartValue.h>

#include "DOM/Chart/ValueStoring/BaseChartValue.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Cells
{
namespace Render
{
namespace Chart2007
{
namespace ChartHelpers
{
class Chart2DHelper;
} // namespace ChartHelpers
} // namespace Chart2007
} // namespace Render
} // namespace Cells
namespace Slides
{
namespace Charts
{
class ChartDataCellWrapper;
class ChartDataPoint;
class DataLabel;
class DataPointRenderContext;
class DataSourceTypeHolder;
class ErrorBarsCustomValues;
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
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represent double value which can be stored in pptx presentation document in two ways:
/// 1) in cell/cells of workbook related to chart;
/// 2) as literal value.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS DoubleChartValue : public Aspose::Slides::Charts::BaseChartValue, public Aspose::Slides::Charts::IDoubleChartValue
{
    typedef DoubleChartValue ThisType;
    typedef Aspose::Slides::Charts::BaseChartValue BaseType;
    typedef Aspose::Slides::Charts::IDoubleChartValue BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::ChartDataPoint;
    friend class Aspose::Slides::Charts::DataLabel;
    friend class Aspose::Slides::Charts::ErrorBarsCustomValues;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::DoubleLiteralsDataSerializer;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::StringLiteralsDataSerializer;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::WorkbookDataSerializer;
    friend class Aspose::Cells::Render::Chart2007::ChartHelpers::Chart2DHelper;
    friend class Aspose::Slides::Charts::DataPointRenderContext;
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
    /// Converts to <see cref="double"></see>.
    /// </summary>
    /// <returns>
    /// Returns LiteralDouble if DataSourceType equals DoubleLiterals.
    /// If DataSourceType equals Worksheet returns successfully converted to double cell value, otherwise returns NaN.
    /// </returns>
    ASPOSE_SLIDES_SHARED_API double ToDouble() override;
    
protected:

    /// @cond
    static ASPOSE_SLIDES_LOCAL_API System::String ToString(System::SharedPtr<IDoubleChartValue> value);
    static ASPOSE_SLIDES_LOCAL_API double ToDouble(System::SharedPtr<IDoubleChartValue> value);
    static ASPOSE_SLIDES_LOCAL_API double ToDouble(System::SharedPtr<IDoubleChartValue> value, double defaultValue);
    static ASPOSE_SLIDES_LOCAL_API bool IsNullOrEmpty(System::SharedPtr<ISingleCellChartValue> value);
    static ASPOSE_SLIDES_LOCAL_API bool IsNullOrEmpty(System::SharedPtr<ISingleCellChartValue> value, bool checkEmpty, bool checkNotApplicable);
    
    ASPOSE_SLIDES_LOCAL_API DoubleChartValue(System::SharedPtr<IDOMObject> parentImmediate, System::SharedPtr<DataSourceTypeHolder> dataSourceTypeHolder, bool centralizedTypeChangingRestriction);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(DoubleChartValue, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate, System::SharedPtr<DataSourceTypeHolder> dataSourceTypeHolder, bool centralizedTypeChangingRestriction));
    
    virtual ASPOSE_SLIDES_SHARED_API ~DoubleChartValue();
    
private:

    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ChartDataCellWrapper> get_CellWrapper();
    
    System::SharedPtr<ChartDataCellWrapper> m_cellWrapper;
    double m_literalDouble;
    
    static ASPOSE_SLIDES_LOCAL_API bool IsNumericType(System::SharedPtr<System::Object> o);
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


