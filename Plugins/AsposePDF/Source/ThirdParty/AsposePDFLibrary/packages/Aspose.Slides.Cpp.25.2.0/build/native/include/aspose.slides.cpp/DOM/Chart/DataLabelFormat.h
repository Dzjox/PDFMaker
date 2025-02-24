#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Chart/IDataLabelFormat.h>
#include <cstdint>

#include "DOM/PVI/MemoryAwareness/PVIObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ChartPortionFormatEffectiveData;
namespace Charts
{
class ChartTextFormat;
class DataLabel;
class DataLabelCollection;
class DataLabelFormatImpl;
class Format;
class IChart;
class IChartComponent;
class IChartSeries;
class IChartTextFormat;
class IDataLabel;
class IFormat;
enum class LegendDataLabelPosition;
} // namespace Charts
class IBaseSlide;
class IDOMObject;
class IPortion;
class IPresentation;
class ITextFrame;
namespace PptxSerialization
{
namespace PartParser
{
namespace Chart
{
class DataLabelExPPTXSerialization;
class DataLabelPPTXSerialization;
class DataLabelsExPPTXSerialization;
class DataLabelsPPTXSerialization;
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
/// Represents formatting options for DataLabel.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS DataLabelFormat final : public Aspose::Slides::PVIObject, public Aspose::Slides::Charts::IDataLabelFormat
{
    typedef DataLabelFormat ThisType;
    typedef Aspose::Slides::PVIObject BaseType;
    typedef Aspose::Slides::Charts::IDataLabelFormat BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::ChartPortionFormatEffectiveData;
    friend class Aspose::Slides::Charts::DataLabel;
    friend class Aspose::Slides::Charts::DataLabelCollection;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::DataLabelsExPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::DataLabelExPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::DataLabelPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::DataLabelsPPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// If parent of this DataLabelFormat object is a DataLabelCollection collection of data labels then this
    /// property gets or sets the default value of the IsNumberFormatLinkedToSource property for the new data 
    /// labels in the DataLabelCollection collection.
    /// Set this property with value also sets this value to the IsNumberFormatLinkedToSource property 
    /// for all data labels in the DataLabelCollection collection
    /// (i.e. "DataLabels.DefaultDataLabelFormat.IsNumberFormatLinkedToSource = val;" cause to 
    /// all DataLabels[i].IsNumberFormatLinkedToSource is equal to val).
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API bool get_IsNumberFormatLinkedToSource() override;
    /// <summary>
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// If parent of this DataLabelFormat object is a DataLabelCollection collection of data labels then this
    /// property gets or sets the default value of the IsNumberFormatLinkedToSource property for the new data 
    /// labels in the DataLabelCollection collection.
    /// Set this property with value also sets this value to the IsNumberFormatLinkedToSource property 
    /// for all data labels in the DataLabelCollection collection
    /// (i.e. "DataLabels.DefaultDataLabelFormat.IsNumberFormatLinkedToSource = val;" cause to 
    /// all DataLabels[i].IsNumberFormatLinkedToSource is equal to val).
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void set_IsNumberFormatLinkedToSource(bool value) override;
    /// <summary>
    /// Represents the format string for the DataLabels object.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto defaultDataLabelFormat = series->get_Labels()->get_DefaultDataLabelFormat();
    /// defaultDataLabelFormat->set_ShowValue(true);
    /// defaultDataLabelFormat->set_IsNumberFormatLinkedToSource(false);
    /// defaultDataLabelFormat->set_NumberFormat(u"0.0%");
    /// </code>
    /// </example>        
    /// <remarks>
    /// If parent of this DataLabelFormat object is a DataLabelCollection collection of data labels, then this
    /// property gets or sets the default value of the NumberFormat property for the new data 
    /// labels in the DataLabelCollection collection.
    /// When this property is set with a value, that value is also set for the NumberFormat property for all data labels in the DataLabelCollection collection
    /// (i.e. "DataLabels.DefaultDataLabelFormat.NumberFormat = val;" causes all DataLabels[i].NumberFormat to equal to val).
    /// </remarks>  
    ASPOSE_SLIDES_SHARED_API System::String get_NumberFormat() override;
    /// <summary>
    /// Represents the format string for the DataLabels object.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    /// <example>
    /// <code>
    /// auto defaultDataLabelFormat = series->get_Labels()->get_DefaultDataLabelFormat();
    /// defaultDataLabelFormat->set_ShowValue(true);
    /// defaultDataLabelFormat->set_IsNumberFormatLinkedToSource(false);
    /// defaultDataLabelFormat->set_NumberFormat(u"0.0%");
    /// </code>
    /// </example>        
    /// <remarks>
    /// If parent of this DataLabelFormat object is a DataLabelCollection collection of data labels, then this
    /// property gets or sets the default value of the NumberFormat property for the new data 
    /// labels in the DataLabelCollection collection.
    /// When this property is set with a value, that value is also set for the NumberFormat property for all data labels in the DataLabelCollection collection
    /// (i.e. "DataLabels.DefaultDataLabelFormat.NumberFormat = val;" causes all DataLabels[i].NumberFormat to equal to val).
    /// </remarks>  
    ASPOSE_SLIDES_SHARED_API void set_NumberFormat(System::String value) override;
    /// <summary>
    /// Represents the format of the data label.
    /// Read-only <see cref="Aspose::Slides::Charts::IFormat">IFormat</see>.
    /// </summary>
    /// <remarks>
    /// If parent of this DataLabelFormat object is a DataLabelCollection collection of data labels then this
    /// property represents the default format for the new data labels in the DataLabelCollection collection.
    /// </remarks>  
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFormat> get_Format() override;
    /// <summary>
    /// Represents the position of the data label.
    /// Read <see cref="LegendDataLabelPosition"></see>.
    /// </summary>
    /// <remarks>
    /// If parent of this DataLabelFormat object is a DataLabelCollection collection of data labels then this
    /// property gets or sets the default value of the Position property for the new data 
    /// labels in the DataLabelCollection collection.
    /// Represents the position for the DataLabel objects.
    /// Set this property with value also sets this value to the Position property 
    /// for all data labels in the DataLabelCollection collection
    /// (i.e. "DataLabels.DefaultDataLabelFormat.Position = val;" cause to 
    /// all DataLabels[i].Position is equal to val).
    /// </remarks>  
    ASPOSE_SLIDES_SHARED_API LegendDataLabelPosition get_Position() override;
    /// <summary>
    /// Represents the position of the data label.
    /// Write <see cref="LegendDataLabelPosition"></see>.
    /// </summary>
    /// <remarks>
    /// If parent of this DataLabelFormat object is a DataLabelCollection collection of data labels then this
    /// property gets or sets the default value of the Position property for the new data 
    /// labels in the DataLabelCollection collection.
    /// Represents the position for the DataLabel objects.
    /// Set this property with value also sets this value to the Position property 
    /// for all data labels in the DataLabelCollection collection
    /// (i.e. "DataLabels.DefaultDataLabelFormat.Position = val;" cause to 
    /// all DataLabels[i].Position is equal to val).
    /// </remarks>  
    ASPOSE_SLIDES_SHARED_API void set_Position(LegendDataLabelPosition value) override;
    /// <summary>
    /// Represents a specified chart's data label legend key display behavior. 
    /// True if the data label legend key is visible.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// If parent of this DataLabelFormat object is a DataLabelCollection collection of data labels then this
    /// property gets or sets the default value of the ShowLegendKey property for the new data 
    /// labels in the DataLabelCollection collection.
    /// Set this property with value also sets this value to the ShowLegendKey property 
    /// for all data labels in the DataLabelCollection collection
    /// (i.e. "DataLabels.DefaultDataLabelFormat.ShowLegendKey = val;" cause to 
    /// all DataLabels[i].ShowLegendKey is equal to val).
    /// </remarks>  
    ASPOSE_SLIDES_SHARED_API bool get_ShowLegendKey() override;
    /// <summary>
    /// Represents a specified chart's data label legend key display behavior. 
    /// True if the data label legend key is visible.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// If parent of this DataLabelFormat object is a DataLabelCollection collection of data labels then this
    /// property gets or sets the default value of the ShowLegendKey property for the new data 
    /// labels in the DataLabelCollection collection.
    /// Set this property with value also sets this value to the ShowLegendKey property 
    /// for all data labels in the DataLabelCollection collection
    /// (i.e. "DataLabels.DefaultDataLabelFormat.ShowLegendKey = val;" cause to 
    /// all DataLabels[i].ShowLegendKey is equal to val).
    /// </remarks>  
    ASPOSE_SLIDES_SHARED_API void set_ShowLegendKey(bool value) override;
    /// <summary>
    /// Represents a specified chart's data label percentage value display behavior. 
    /// True displays the percentage value. False to hide.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// If parent of this DataLabelFormat object is a DataLabelCollection collection of data labels then this
    /// property gets or sets the default value of the ShowValue property for the new data 
    /// labels in the DataLabelCollection collection.
    /// Set this property with value also sets this value to the ShowValue property 
    /// for all data labels in the DataLabelCollection collection
    /// (i.e. "DataLabels.DefaultDataLabelFormat.ShowValue = val;" cause to 
    /// all DataLabels[i].ShowValue is equal to val).
    /// </remarks>  
    ASPOSE_SLIDES_SHARED_API bool get_ShowValue() override;
    /// <summary>
    /// Represents a specified chart's data label percentage value display behavior. 
    /// True displays the percentage value. False to hide.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// If parent of this DataLabelFormat object is a DataLabelCollection collection of data labels then this
    /// property gets or sets the default value of the ShowValue property for the new data 
    /// labels in the DataLabelCollection collection.
    /// Set this property with value also sets this value to the ShowValue property 
    /// for all data labels in the DataLabelCollection collection
    /// (i.e. "DataLabels.DefaultDataLabelFormat.ShowValue = val;" cause to 
    /// all DataLabels[i].ShowValue is equal to val).
    /// </remarks>  
    ASPOSE_SLIDES_SHARED_API void set_ShowValue(bool value) override;
    /// <summary>
    /// Represents a specified chart's data label category name display behavior.
    /// True to display the category name for the data labels on a chart. False to hide.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// If parent of this DataLabelFormat object is a DataLabelCollection collection of data labels then this
    /// property gets or sets the default value of the ShowCategoryName property for the new data 
    /// labels in the DataLabelCollection collection.
    /// Set this property with value also sets this value to the ShowCategoryName property 
    /// for all data labels in the DataLabelCollection collection
    /// (i.e. "DataLabels.DefaultDataLabelFormat.ShowCategoryName = val;" cause to 
    /// all DataLabels[i].ShowCategoryName is equal to val).
    /// </remarks>  
    ASPOSE_SLIDES_SHARED_API bool get_ShowCategoryName() override;
    /// <summary>
    /// Represents a specified chart's data label category name display behavior.
    /// True to display the category name for the data labels on a chart. False to hide.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// If parent of this DataLabelFormat object is a DataLabelCollection collection of data labels then this
    /// property gets or sets the default value of the ShowCategoryName property for the new data 
    /// labels in the DataLabelCollection collection.
    /// Set this property with value also sets this value to the ShowCategoryName property 
    /// for all data labels in the DataLabelCollection collection
    /// (i.e. "DataLabels.DefaultDataLabelFormat.ShowCategoryName = val;" cause to 
    /// all DataLabels[i].ShowCategoryName is equal to val).
    /// </remarks>  
    ASPOSE_SLIDES_SHARED_API void set_ShowCategoryName(bool value) override;
    /// <summary>
    /// Returns a Boolean to indicate the series name display behavior for the data labels on a chart. 
    /// True to show the series name. False to hide.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// If parent of this DataLabelFormat object is a DataLabelCollection collection of data labels then this
    /// property gets or sets the default value of the ShowSeriesName property for the new data 
    /// labels in the DataLabelCollection collection.
    /// Set this property with value also sets this value to the ShowSeriesName property 
    /// for all data labels in the DataLabelCollection collection
    /// (i.e. "DataLabels.DefaultDataLabelFormat.ShowSeriesName = val;" cause to 
    /// all DataLabels[i].ShowSeriesName is equal to val).
    /// </remarks>  
    ASPOSE_SLIDES_SHARED_API bool get_ShowSeriesName() override;
    /// <summary>
    /// Sets a Boolean to indicate the series name display behavior for the data labels on a chart. 
    /// True to show the series name. False to hide.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// If parent of this DataLabelFormat object is a DataLabelCollection collection of data labels then this
    /// property gets or sets the default value of the ShowSeriesName property for the new data 
    /// labels in the DataLabelCollection collection.
    /// Set this property with value also sets this value to the ShowSeriesName property 
    /// for all data labels in the DataLabelCollection collection
    /// (i.e. "DataLabels.DefaultDataLabelFormat.ShowSeriesName = val;" cause to 
    /// all DataLabels[i].ShowSeriesName is equal to val).
    /// </remarks>  
    ASPOSE_SLIDES_SHARED_API void set_ShowSeriesName(bool value) override;
    /// <summary>
    /// Represents a specified chart's data label percentage value display behavior. 
    /// True displays the percentage value. False to hide.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// If parent of this DataLabelFormat object is a DataLabelCollection collection of data labels then this
    /// property gets or sets the default value of the ShowPercentage property for the new data 
    /// labels in the DataLabelCollection collection.
    /// Set this property with value also sets this value to the ShowPercentage property 
    /// for all data labels in the DataLabelCollection collection
    /// (i.e. "DataLabels.DefaultDataLabelFormat.ShowPercentage = val;" cause to 
    /// all DataLabels[i].ShowPercentage is equal to val).
    /// </remarks>  
    ASPOSE_SLIDES_SHARED_API bool get_ShowPercentage() override;
    /// <summary>
    /// Represents a specified chart's data label percentage value display behavior. 
    /// True displays the percentage value. False to hide.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// If parent of this DataLabelFormat object is a DataLabelCollection collection of data labels then this
    /// property gets or sets the default value of the ShowPercentage property for the new data 
    /// labels in the DataLabelCollection collection.
    /// Set this property with value also sets this value to the ShowPercentage property 
    /// for all data labels in the DataLabelCollection collection
    /// (i.e. "DataLabels.DefaultDataLabelFormat.ShowPercentage = val;" cause to 
    /// all DataLabels[i].ShowPercentage is equal to val).
    /// </remarks>  
    ASPOSE_SLIDES_SHARED_API void set_ShowPercentage(bool value) override;
    /// <summary>
    /// Represents a specified chart's data label bubble size value display behavior. 
    /// True displays the bubble size value. False to hide.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// If parent of this DataLabelFormat object is a DataLabelCollection collection of data labels then this
    /// property gets or sets the default value of the ShowBubbleSize property for the new data 
    /// labels in the DataLabelCollection collection.
    /// Set this property with value also sets this value to the ShowBubbleSize property 
    /// for all data labels in the DataLabelCollection collection
    /// (i.e. "DataLabels.DefaultDataLabelFormat.ShowBubbleSize = val;" cause to 
    /// all DataLabels[i].ShowBubbleSize is equal to val).
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API bool get_ShowBubbleSize() override;
    /// <summary>
    /// Represents a specified chart's data label bubble size value display behavior. 
    /// True displays the bubble size value. False to hide.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// If parent of this DataLabelFormat object is a DataLabelCollection collection of data labels then this
    /// property gets or sets the default value of the ShowBubbleSize property for the new data 
    /// labels in the DataLabelCollection collection.
    /// Set this property with value also sets this value to the ShowBubbleSize property 
    /// for all data labels in the DataLabelCollection collection
    /// (i.e. "DataLabels.DefaultDataLabelFormat.ShowBubbleSize = val;" cause to 
    /// all DataLabels[i].ShowBubbleSize is equal to val).
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void set_ShowBubbleSize(bool value) override;
    /// <summary>
    /// Represents a specified chart's data label leader lines display behavior. 
    /// True displays the leader lines. False to hide.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// If parent of this DataLabelFormat object is a DataLabelCollection collection of data labels then this
    /// property gets or sets the default value of the ShowLeaderLines property for the new data 
    /// labels in the DataLabelCollection collection.
    /// Set this property with value also sets this value to the ShowLeaderLines property 
    /// for all data labels in the DataLabelCollection collection
    /// (i.e. "DataLabels.DefaultDataLabelFormat.ShowLeaderLines = val;" cause to 
    /// all DataLabels[i].ShowLeaderLines is equal to val).
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API bool get_ShowLeaderLines() override;
    /// <summary>
    /// Represents a specified chart's data label leader lines display behavior. 
    /// True displays the leader lines. False to hide.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// If parent of this DataLabelFormat object is a DataLabelCollection collection of data labels then this
    /// property gets or sets the default value of the ShowLeaderLines property for the new data 
    /// labels in the DataLabelCollection collection.
    /// Set this property with value also sets this value to the ShowLeaderLines property 
    /// for all data labels in the DataLabelCollection collection
    /// (i.e. "DataLabels.DefaultDataLabelFormat.ShowLeaderLines = val;" cause to 
    /// all DataLabels[i].ShowLeaderLines is equal to val).
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void set_ShowLeaderLines(bool value) override;
    /// <summary>
    /// Represents a specified chart's data label cell value display behavior. 
    /// True displays cell value. False to hide.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// If parent of this DataLabelFormat object is a DataLabelCollection collection of data labels then this
    /// property gets or sets the default value of the ShowLabelValueFromCell property for the new data 
    /// labels in the DataLabelCollection collection.
    /// Set this property with value also sets this value to the ShowLabelValueFromCell property 
    /// for all data labels in the DataLabelCollection collection
    /// (i.e. "DataLabels.DefaultDataLabelFormat.ShowLabelValueFromCell = val;" cause to 
    /// all DataLabels[i].ShowLabelValueFromCell is equal to val).
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API bool get_ShowLabelValueFromCell() override;
    /// <summary>
    /// Represents a specified chart's data label cell value display behavior. 
    /// True displays cell value. False to hide.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// If parent of this DataLabelFormat object is a DataLabelCollection collection of data labels then this
    /// property gets or sets the default value of the ShowLabelValueFromCell property for the new data 
    /// labels in the DataLabelCollection collection.
    /// Set this property with value also sets this value to the ShowLabelValueFromCell property 
    /// for all data labels in the DataLabelCollection collection
    /// (i.e. "DataLabels.DefaultDataLabelFormat.ShowLabelValueFromCell = val;" cause to 
    /// all DataLabels[i].ShowLabelValueFromCell is equal to val).
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void set_ShowLabelValueFromCell(bool value) override;
    /// <summary>
    /// Determines either specified chart's data label will be displayed as data callout or as data label.
    /// <remarks>
    /// If parent of this DataLabelFormat object is a DataLabelCollection collection of data labels then this
    /// property gets or sets the default value of the ShowLabelAsDataCallout property for the new data 
    /// labels in the DataLabelCollection collection.
    /// Set this property with value also sets this value to the ShowLabelAsDataCallout property 
    /// for all data labels in the DataLabelCollection collection
    /// (i.e. "DataLabels.DefaultDataLabelFormat.ShowLabelAsDataCallout = val;" cause to 
    /// all DataLabels[i].ShowLabelAsDataCallout is equal to val).
    /// </remarks>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ShowLabelAsDataCallout() override;
    /// <summary>
    /// Determines either specified chart's data label will be displayed as data callout or as data label.
    /// <remarks>
    /// If parent of this DataLabelFormat object is a DataLabelCollection collection of data labels then this
    /// property gets or sets the default value of the ShowLabelAsDataCallout property for the new data 
    /// labels in the DataLabelCollection collection.
    /// Set this property with value also sets this value to the ShowLabelAsDataCallout property 
    /// for all data labels in the DataLabelCollection collection
    /// (i.e. "DataLabels.DefaultDataLabelFormat.ShowLabelAsDataCallout = val;" cause to 
    /// all DataLabels[i].ShowLabelAsDataCallout is equal to val).
    /// </remarks>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ShowLabelAsDataCallout(bool value) override;
    /// <summary>
    /// Sets or returns a Variant representing the separator used for the data labels on a chart.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    /// <remarks>
    /// If parent of this DataLabelFormat object is a DataLabelCollection collection of data labels then this
    /// property gets or sets the default value of the Separator property for the new data 
    /// labels in the DataLabelCollection collection.
    /// Set this property with value also sets this value to the Separator property 
    /// for all data labels in the DataLabelCollection collection
    /// (i.e. "DataLabels.DefaultDataLabelFormat.Separator = val;" cause to 
    /// all DataLabels[i].Separator is equal to val).
    /// </remarks>  
    ASPOSE_SLIDES_SHARED_API System::String get_Separator() override;
    /// <summary>
    /// Sets or returns a Variant representing the separator used for the data labels on a chart.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    /// <remarks>
    /// If parent of this DataLabelFormat object is a DataLabelCollection collection of data labels then this
    /// property gets or sets the default value of the Separator property for the new data 
    /// labels in the DataLabelCollection collection.
    /// Set this property with value also sets this value to the Separator property 
    /// for all data labels in the DataLabelCollection collection
    /// (i.e. "DataLabels.DefaultDataLabelFormat.Separator = val;" cause to 
    /// all DataLabels[i].Separator is equal to val).
    /// </remarks>  
    ASPOSE_SLIDES_SHARED_API void set_Separator(System::String value) override;
    /// <summary>
    /// Returns chart text format.
    /// Read-only <see cref="Aspose::Slides::Charts::IChartTextFormat">IChartTextFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChartTextFormat> get_TextFormat() override;
    /// <summary>
    /// Returns the chart.
    /// Read-only <see cref="Aspose::Slides::Charts::IChart">IChart</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IChart> get_Chart() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<DataLabelFormatImpl> get_RealObject();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool get_IsDefaultNumberFormat() const;
    ASPOSE_SLIDES_LOCAL_API void set_IsDefaultNumberFormat(bool value);
    ASPOSE_SLIDES_LOCAL_API LegendDataLabelPosition get_PositionInternal();
    ASPOSE_SLIDES_LOCAL_API void set_PositionInternal(LegendDataLabelPosition value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IChartTextFormat> get_TextFormatInternal();
    ASPOSE_SLIDES_LOCAL_API bool get_IsExistedEmptyNodeOnLoad();
    ASPOSE_SLIDES_LOCAL_API void set_IsExistedEmptyNodeOnLoad(bool value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IChartComponent> get_Parent();
    
    ASPOSE_SLIDES_LOCAL_API DataLabelFormat(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(DataLabelFormat, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    ASPOSE_SLIDES_SHARED_API void CreateChildObjects() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> CreateRealObject() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<DataLabelFormat> source);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~DataLabelFormat();
    
private:

    bool pr_IsDefaultNumberFormat;
    
    /// <summary>
    /// Returns the base slide.
    /// Read-only <see cref="IBaseSlide"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBaseSlide> get_Slide() override;
    /// <summary>
    /// Returns the presentation. 
    /// Read-only <see cref="Aspose::Slides::IPresentation">IPresentation</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentation> get_Presentation() override;
    
    System::WeakPtr<IChartSeries> m_parentSeries;
    System::WeakPtr<DataLabelCollection> m_parentDataLabels;
    System::SharedPtr<Aspose::Slides::Charts::Format> m_format;
    System::SharedPtr<ChartTextFormat> m_textFormatOfAutoText;
    
    ASPOSE_SLIDES_LOCAL_API void UpdateLabelTextFrame(bool value, System::SharedPtr<IDataLabel> dataLabel);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPortion> FindCellRangePortion(System::SharedPtr<ITextFrame> textFrame);
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


