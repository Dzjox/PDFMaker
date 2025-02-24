#pragma once

#include <system/object_ext.h>
#include <system/details/pointer_collection_helpers.h>
#include <cstdint>

#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class AdjustValueCollection;
namespace Animation
{
class AnimationTimeLine;
} // namespace Animation
class Audio;
class AudioCollection;
namespace Charts
{
class AggregatedDataPoint;
class AggregatedDataPointCollection;
class AxesManager;
class Axis;
class AxisFormat;
class ChartCategoryCollection;
class ChartData;
class ChartDataPointCollection;
class ChartDataPointLevel;
class ChartDataPointLevelsManager;
class ChartDataWorkbook;
class ChartDataWorksheet;
class ChartPlotArea;
class ChartSeriesCollection;
class ChartWall;
class DataLabelCollection;
class DataTable;
class DisplayUnitLabel;
class ErrorBarsCustomValues;
class ErrorBarsFormat;
class FormatOverride;
class FormatOverrides;
class Legend;
class Trendline;
class TrendlineCollection;
class UpDownBarsManager;
} // namespace Charts
class ColumnCollection;
class ColumnFormat;
class CommentAuthorCollection;
class CommentCollection;
class Control;
class DigitalSignatureCollection;
class Field;
class ImageCollection;
class MasterHandoutSlide;
class MasterHandoutSlideManager;
class MasterNotesSlide;
class MasterNotesSlideManager;
class MasterSlideCollection;
class NotesSlideManager;
class ParagraphCollection;
class PlaceholderCollection;
class PortionCollection;
class RowCollection;
class RowFormat;
class Section;
class SectionCollection;
class SectionSlideCollection;
class ShapeCollection;
class ShapeStyle;
class SlideCollection;
namespace SlideShow
{
class SlideShowTransition;
} // namespace SlideShow
class SlideSize;
namespace SmartArt
{
class LayoutTree;
} // namespace SmartArt
class SummaryZoomSectionCollection;
class TableCellTextStyle;
class TableFormat;
class TablePartStyle;
class TableStyleCollection;
namespace Theme
{
class EffectStyle;
class EffectStyleCollection;
class FillFormatCollection;
class LineFormatCollection;
} // namespace Theme
class ThemeableCellFormat;
class ThemeableTableFormat;
class VideoCollection;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Base DOM object
/// </summary>
/// <typeparam name="TParent">Type of parent DOM object</typeparam>
template<typename TParent>
class ASPOSE_SLIDES_LOCAL_API DomObject : public virtual Aspose::Slides::IDOMObject
{
    typedef DomObject<TParent> ThisType;
    typedef Aspose::Slides::IDOMObject BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_TEMPLATE_CLASS(ThisType, ThisTypeBaseTypesInfo);
    
    /// @cond
    friend class Aspose::Slides::Charts::FormatOverride;
    friend class Aspose::Slides::Charts::FormatOverrides;
    friend class Aspose::Slides::SummaryZoomSectionCollection;
    friend class Aspose::Slides::Charts::ChartDataPointLevel;
    friend class Aspose::Slides::Charts::ChartDataPointLevelsManager;
    friend class Aspose::Slides::Charts::ChartDataWorkbook;
    friend class Aspose::Slides::Charts::ChartDataWorksheet;
    friend class Aspose::Slides::ColumnFormat;
    friend class Aspose::Slides::RowFormat;
    friend class Aspose::Slides::TableFormat;
    friend class Aspose::Slides::Charts::AggregatedDataPoint;
    friend class Aspose::Slides::Charts::AggregatedDataPointCollection;
    friend class Aspose::Slides::DigitalSignatureCollection;
    friend class Aspose::Slides::Section;
    friend class Aspose::Slides::SectionCollection;
    friend class Aspose::Slides::SectionSlideCollection;
    friend class Aspose::Slides::ThemeableTableFormat;
    friend class Aspose::Slides::ThemeableCellFormat;
    friend class Aspose::Slides::Charts::AxesManager;
    friend class Aspose::Slides::Charts::Axis;
    friend class Aspose::Slides::Charts::AxisFormat;
    friend class Aspose::Slides::Charts::ChartCategoryCollection;
    friend class Aspose::Slides::Charts::ChartData;
    friend class Aspose::Slides::Charts::ChartDataPointCollection;
    friend class Aspose::Slides::Charts::ChartPlotArea;
    friend class Aspose::Slides::Charts::ChartSeriesCollection;
    friend class Aspose::Slides::Charts::ChartWall;
    friend class Aspose::Slides::Charts::DataLabelCollection;
    friend class Aspose::Slides::Charts::DataTable;
    friend class Aspose::Slides::Charts::DisplayUnitLabel;
    friend class Aspose::Slides::Charts::ErrorBarsCustomValues;
    friend class Aspose::Slides::Charts::ErrorBarsFormat;
    friend class Aspose::Slides::Charts::Legend;
    friend class Aspose::Slides::Charts::Trendline;
    friend class Aspose::Slides::Charts::TrendlineCollection;
    friend class Aspose::Slides::Charts::UpDownBarsManager;
    friend class Aspose::Slides::NotesSlideManager;
    friend class Aspose::Slides::ColumnCollection;
    friend class Aspose::Slides::RowCollection;
    friend class Aspose::Slides::TableCellTextStyle;
    friend class Aspose::Slides::TablePartStyle;
    friend class Aspose::Slides::TableStyleCollection;
    friend class Aspose::Slides::Theme::EffectStyle;
    friend class Aspose::Slides::Theme::EffectStyleCollection;
    friend class Aspose::Slides::Theme::FillFormatCollection;
    friend class Aspose::Slides::Theme::LineFormatCollection;
    friend class Aspose::Slides::AdjustValueCollection;
    friend class Aspose::Slides::Animation::AnimationTimeLine;
    friend class Aspose::Slides::Audio;
    friend class Aspose::Slides::AudioCollection;
    friend class Aspose::Slides::CommentAuthorCollection;
    friend class Aspose::Slides::CommentCollection;
    friend class Aspose::Slides::Control;
    friend class Aspose::Slides::Field;
    friend class Aspose::Slides::ImageCollection;
    friend class Aspose::Slides::MasterHandoutSlide;
    friend class Aspose::Slides::MasterNotesSlide;
    friend class Aspose::Slides::MasterSlideCollection;
    friend class Aspose::Slides::ParagraphCollection;
    friend class Aspose::Slides::PlaceholderCollection;
    friend class Aspose::Slides::PortionCollection;
    friend class Aspose::Slides::ShapeCollection;
    friend class Aspose::Slides::ShapeStyle;
    friend class Aspose::Slides::SlideCollection;
    friend class Aspose::Slides::SlideShow::SlideShowTransition;
    friend class Aspose::Slides::SlideSize;
    friend class Aspose::Slides::VideoCollection;
    friend class Aspose::Slides::SmartArt::LayoutTree;
    friend class Aspose::Slides::MasterHandoutSlideManager;
    friend class Aspose::Slides::MasterNotesSlideManager;
    template<typename FT0> friend class Aspose::Slides::DomObject;
    /// @endcond
    
public:

    void SetTemplateWeakPtr(uint32_t argument) override
    {
        switch (argument)
        {
            case 0:
                System::Details::CollectionHelpers::SetWeakPointer(m_parentImmediate);
                break;
                
        }
    }
    
protected:

    /// @cond
    typename System::WeakPtrFromTypeParameter<TParent>::type m_parentImmediate;
    
    DomObject(TParent parent) : m_parentImmediate(TParent())
    {
        m_parentImmediate = parent;
    }
    
    /// @endcond
    
private:

    System::SharedPtr<IDOMObject> get_Parent_Immediate() override
    {
        return System::ExplicitCast<Aspose::Slides::IDOMObject>(m_parentImmediate);
    }
    
    
};

} // namespace Slides
} // namespace Aspose


