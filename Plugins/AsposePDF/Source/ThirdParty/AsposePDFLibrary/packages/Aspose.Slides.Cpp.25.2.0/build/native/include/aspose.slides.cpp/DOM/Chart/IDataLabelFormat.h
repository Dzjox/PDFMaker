#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Chart/IFormattedTextContainer.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class IFormat;
enum class LegendDataLabelPosition;
} // namespace Charts
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
class ASPOSE_SLIDES_API_SHARED_CLASS IDataLabelFormat : public Aspose::Slides::Charts::IFormattedTextContainer
{
    typedef IDataLabelFormat ThisType;
    typedef Aspose::Slides::Charts::IFormattedTextContainer BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
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
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsNumberFormatLinkedToSource() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_IsNumberFormatLinkedToSource(bool value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_NumberFormat() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_NumberFormat(System::String value) = 0;
    /// <summary>
    /// Represents the format of the data label.
    /// Read-only <see cref="Aspose::Slides::Charts::IFormat">IFormat</see>.
    /// </summary>
    /// <remarks>
    /// If parent of this DataLabelFormat object is a DataLabelCollection collection of data labels then this
    /// property represents the default format for the new data labels in the DataLabelCollection collection.
    /// </remarks>  
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFormat> get_Format() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API LegendDataLabelPosition get_Position() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Position(LegendDataLabelPosition value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ShowLegendKey() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ShowLegendKey(bool value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ShowValue() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ShowValue(bool value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ShowCategoryName() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ShowCategoryName(bool value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ShowSeriesName() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ShowSeriesName(bool value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ShowPercentage() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ShowPercentage(bool value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ShowBubbleSize() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ShowBubbleSize(bool value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ShowLeaderLines() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ShowLeaderLines(bool value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ShowLabelAsDataCallout() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ShowLabelAsDataCallout(bool value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ShowLabelValueFromCell() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ShowLabelValueFromCell(bool value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Separator() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Separator(System::String value) = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


