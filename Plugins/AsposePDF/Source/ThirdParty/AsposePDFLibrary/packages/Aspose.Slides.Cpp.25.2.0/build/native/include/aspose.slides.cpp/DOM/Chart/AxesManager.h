#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/nullable.h>
#include <DOM/Chart/IAxesManager.h>

#include "DOM/DomObject.h"
#include "DOM/Chart/Chart.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
enum class AxesCompositionType;
class Axis;
class ChartSeries;
class ChartSeriesCollection;
enum class ChartType;
class IAxis;
} // namespace Charts
namespace PptxSerialization
{
namespace PartParser
{
namespace Chart
{
class AxesManagerPPTXSerialization;
} // namespace Chart
namespace XmlParser
{
class cht_CT_SerAxElementData;
} // namespace XmlParser
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
template <typename> class List;
} // namespace Generic
} // namespace Collections
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Provides access to chart axes.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS AxesManager : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::Chart>>, public Aspose::Slides::Charts::IAxesManager
{
    typedef AxesManager ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::Chart>> BaseType;
    typedef Aspose::Slides::Charts::IAxesManager BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::Chart;
    friend class Aspose::Slides::Charts::ChartSeries;
    friend class Aspose::Slides::Charts::ChartSeriesCollection;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::AxesManagerPPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Gets the chart's horizontal axis.
    /// Read-only <see cref="Aspose::Slides::Charts::IAxis">IAxis</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAxis> get_HorizontalAxis() override;
    /// <summary>
    /// Gets the chart's secondary horizontal axis.
    /// Read-only <see cref="Aspose::Slides::Charts::IAxis">IAxis</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAxis> get_SecondaryHorizontalAxis() override;
    /// <summary>
    /// Gets the chart's vertical axis.
    /// Read-only <see cref="Aspose::Slides::Charts::IAxis">IAxis</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAxis> get_VerticalAxis() override;
    /// <summary>
    /// Gets the chart's secondary vertical axis.
    /// Read-only <see cref="Aspose::Slides::Charts::IAxis">IAxis</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAxis> get_SecondaryVerticalAxis() override;
    /// <summary>
    /// Gets the chart's series axis.
    /// Read-only <see cref="Aspose::Slides::Charts::IAxis">IAxis</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAxis> get_SeriesAxis() override;
    
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Chart> get_ChartInternal();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::PptxSerialization::PartParser::XmlParser::cht_CT_SerAxElementData> get_SeriesAxisUnsupported() const;
    ASPOSE_SLIDES_LOCAL_API void set_SeriesAxisUnsupported(System::SharedPtr<Aspose::Slides::PptxSerialization::PartParser::XmlParser::cht_CT_SerAxElementData> value);
    
    ASPOSE_SLIDES_LOCAL_API AxesManager(System::SharedPtr<Chart> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(AxesManager, CODEPORTING_ARGS(System::SharedPtr<Chart> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void ValidateConsistencyOf_AxesExistence_ChartType_SeriesType();
    ASPOSE_SLIDES_LOCAL_API void ValidateConsistencyOf_AxesExistence_SeriesType();
    ASPOSE_SLIDES_LOCAL_API bool CheckIfSeriesCanBeAddedInRegardToAxesComposition(ChartType seriesType, bool secondaryAxes);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~AxesManager();
    
private:

    System::SharedPtr<Aspose::Slides::PptxSerialization::PartParser::XmlParser::cht_CT_SerAxElementData> pr_SeriesAxisUnsupported;
    System::SharedPtr<Axis> m_horizontalAxis;
    System::SharedPtr<Axis> m_secondaryHorizontalAxis;
    System::SharedPtr<Axis> m_verticalAxis;
    System::SharedPtr<Axis> m_secondaryVerticalAxis;
    System::SharedPtr<Axis> m_seriesAxis;
    bool m_allowAccessToHorizontalAxis;
    bool m_allowAccessToSecondaryHorizontalAxis;
    bool m_allowAccessToVerticalAxis;
    bool m_allowAccessToSecondaryVerticalAxis;
    bool m_allowAccessToSeriesAxis;
    
    ASPOSE_SLIDES_LOCAL_API void InitSecondaryAxis();
    ASPOSE_SLIDES_LOCAL_API System::Nullable<AxesCompositionType> MergeChartTypesAsToAxesCompositions(System::SharedPtr<System::Collections::Generic::List<AxesCompositionType>> axesCompositions);
    ASPOSE_SLIDES_LOCAL_API bool MergeChartTypesAsToAxesCompositions_ReduceByOne(System::SharedPtr<System::Collections::Generic::List<AxesCompositionType>> axesCompositions);
    ASPOSE_SLIDES_LOCAL_API void ValidateAxesComposition(bool horizontalAxisIsPresent, bool secondaryHorizontalAxisIsPresent, bool verticalAxisIsPresent, bool secondaryVerticalAxisIsPresent, bool seriesAxisIsPresent);
    ASPOSE_SLIDES_LOCAL_API void ValidateAxesIsInitialized(bool horizontalAxisIsPresent, bool secondaryHorizontalAxisIsPresent, bool verticalAxisIsPresent, bool secondaryVerticalAxisIsPresent, bool seriesAxisIsPresent);
    static ASPOSE_SLIDES_LOCAL_API void BindCrossingAxes(System::SharedPtr<IAxis> x, System::SharedPtr<IAxis> y);
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


