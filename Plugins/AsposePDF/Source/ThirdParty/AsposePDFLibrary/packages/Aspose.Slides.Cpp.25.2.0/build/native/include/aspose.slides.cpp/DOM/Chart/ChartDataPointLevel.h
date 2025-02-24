#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Chart/IChartDataPointLevel.h>

#include "DOM/DomObject.h"
#include "DOM/Chart/ChartDataPointLevelsManager.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class BannerDataLabelElement;
class BannerDataLabelText;
class ChartDataPoint;
class DataLabel;
class DataLabelRenderContext;
class DataPointLevelLegendKeyElement;
class DoughnutSector;
class Format;
class IDataLabel;
class IFormat;
class PieSector;
class TreemapDataLabelText;
class TreemapSquareElement;
} // namespace Charts
class FillFormat;
class IEffectFormat;
namespace PptxSerialization
{
namespace PartParser
{
namespace Chart
{
class ChartDataPointExPPTXSerialization;
class ChartSeriesExPPTXSerialization;
class DataLabelsExPPTXSerialization;
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
/// Represents data point level. Applies for Treemap and Sunburst chart.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ChartDataPointLevel : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::ChartDataPointLevelsManager>>, public Aspose::Slides::Charts::IChartDataPointLevel
{
    typedef ChartDataPointLevel ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::ChartDataPointLevelsManager>> BaseType;
    typedef Aspose::Slides::Charts::IChartDataPointLevel BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::ChartDataPointLevelsManager;
    friend class Aspose::Slides::Charts::DataLabel;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartDataPointExPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartSeriesExPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::DataLabelsExPPTXSerialization;
    friend class Aspose::Slides::Charts::DataPointLevelLegendKeyElement;
    friend class Aspose::Slides::Charts::BannerDataLabelElement;
    friend class Aspose::Slides::Charts::BannerDataLabelText;
    friend class Aspose::Slides::Charts::TreemapDataLabelText;
    friend class Aspose::Slides::Charts::TreemapSquareElement;
    friend class Aspose::Slides::Charts::DataLabelRenderContext;
    friend class Aspose::Slides::Charts::DoughnutSector;
    friend class Aspose::Slides::Charts::PieSector;
    /// @endcond
    
public:

    /// <summary>
    /// Represents formatting properties of data point level.
    /// Read <see cref="Aspose::Slides::Charts::IFormat">IFormat</see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = MakeObject<Presentation>();
    /// auto chart = pres->get_Slides()->idx_get(0)->get_Shapes()->AddChart(ChartType::Treemap, 50.0f, 50.0f, 500.0f, 400.0f);
    /// auto series = chart->get_ChartData()->get_Series()->idx_get(0);
    /// auto dataPointLevel = series->get_DataPoints()->idx_get(7)->get_DataPointLevels()->idx_get(2);
    /// dataPointLevel->get_Format()->get_Fill()->set_FillType(FillType::Solid);
    /// dataPointLevel->get_Format()->get_Fill()->get_SolidFillColor()->set_Color(Color::get_Red());
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFormat> get_Format() override;
    /// <summary>
    /// Represents data label of data point level. Applied for Treemap and  Sunburst sereis types.
    /// Read-only <see cref="Aspose::Slides::Charts::IDataLabel">IDataLabel</see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = MakeObject<Presentation>();
    /// auto chart = pres->get_Slides()->idx_get(0)->get_Shapes()->AddChart(ChartType::Sunburst, 50.0f, 50.0f, 500.0f, 400.0f);
    /// auto series = chart->get_ChartData()->get_Series()->idx_get(0);
    /// auto dataPointLevel = series->get_DataPoints()->idx_get(0)->get_DataPointLevels()->idx_get(1);
    /// 
    /// dataPointLevel->get_Label()->get_DataLabelFormat()->set_ShowCategoryName(false);
    /// dataPointLevel->get_Label()->get_DataLabelFormat()->set_ShowValue(true);
    /// dataPointLevel->get_Label()->get_DataLabelFormat()->set_ShowSeriesName(true);
    /// 
    /// dataPointLevel = series->get_DataPoints()->idx_get(12)->get_DataPointLevels()->idx_get(1);
    /// dataPointLevel->get_Label()->get_TextFormat()->get_PortionFormat()->get_FillFormat()->set_FillType(FillType::Solid);
    /// dataPointLevel->get_Label()->get_TextFormat()->get_PortionFormat()->get_FillFormat()->get_SolidFillColor()->set_Color(Color::get_Red());
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDataLabel> get_Label() override;
    
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ChartDataPoint> get_ParentDataPoint();
    ASPOSE_SLIDES_LOCAL_API bool get_IsAllowedRenderingEffects();
    ASPOSE_SLIDES_LOCAL_API void set_IsAllowedRenderingEffects(bool value);
    ASPOSE_SLIDES_LOCAL_API int32_t get_XMLIndex() const;
    ASPOSE_SLIDES_LOCAL_API void set_XMLIndex(int32_t value);
    
    ASPOSE_SLIDES_LOCAL_API ChartDataPointLevel(System::SharedPtr<ChartDataPointLevelsManager> parent, int32_t lvlIndex);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ChartDataPointLevel, CODEPORTING_ARGS(System::SharedPtr<ChartDataPointLevelsManager> parent, int32_t lvlIndex));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IChartDataPointLevel> FindFormatHolderPoint();
    ASPOSE_SLIDES_LOCAL_API bool IsFormatHolder();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<FillFormat> GetEffectiveFillFormat();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IEffectFormat> GetEffectiveEffectFormat();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IFormat> GetAutomaticDataPointFormat();
    ASPOSE_SLIDES_LOCAL_API System::String GetRelatedCategoryName();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~ChartDataPointLevel();
    
private:

    bool m_isAllowedRenderingEffects;
    int32_t pr_XMLIndex;
    int32_t m_lvlIndex;
    System::SharedPtr<Aspose::Slides::Charts::Format> m_format;
    System::SharedPtr<DataLabel> m_labelProperties;
    System::SharedPtr<IFormat> m_automaticFormatCached;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


