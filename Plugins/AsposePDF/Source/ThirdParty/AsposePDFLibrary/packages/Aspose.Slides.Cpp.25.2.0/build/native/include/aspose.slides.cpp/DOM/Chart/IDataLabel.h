#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Chart/IOverridableText.h"
#include "DOM/Chart/ILayoutable.h"
#include "DOM/Chart/IActualLayout.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class IChartDataCell;
class IDataLabelFormat;
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
/// Represents a series labels.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IDataLabel : public Aspose::Slides::Charts::ILayoutable, public Aspose::Slides::Charts::IOverridableText, public Aspose::Slides::Charts::IActualLayout
{
    typedef IDataLabel ThisType;
    typedef Aspose::Slides::Charts::ILayoutable BaseType;
    typedef Aspose::Slides::Charts::IOverridableText BaseType1;
    typedef Aspose::Slides::Charts::IActualLayout BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// False means that data label is not visible (and so all Show*-flags (ShowValue, ...) are false).
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// If data label is visible you can make it hidden with Hide() method.
    /// But if data label is not visible (IsVisible is false) you can make data label visible 
    /// with setting Show*-flags (ShowValue, ...) to true state.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsVisible() = 0;
    /// <summary>
    /// Returns format of the data label.
    /// Read-only <see cref="Aspose::Slides::Charts::IDataLabelFormat">IDataLabelFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IDataLabelFormat> get_DataLabelFormat() = 0;
    /// <summary>
    /// Gets workbook data cell. Applied if IDataLabelFormat::get(set)_ShowLabelValueFromCell property equals true.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IChartDataCell> get_ValueFromCell() = 0;
    /// <summary>
    /// Sets workbook data cell. Applied if IDataLabelFormat::get(set)_ShowLabelValueFromCell property equals true.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ValueFromCell(System::SharedPtr<IChartDataCell> value) = 0;
    
    /// <summary>
    /// Make data label hidden by setting all Show*-flags (ShowValue, ...) to false state.
    /// IsVisible will be false after this.
    /// </summary>
    /// <remarks>
    /// If data label is not visible (IsVisible is false) you can make data label visible with 
    /// setting Show*-flags (ShowValue, ...) to true state.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Hide() = 0;
    /// <summary>
    /// Returns actual label text based on DataLabelFormat settings or TextFrameForOverriding.Text value.
    /// </summary>
    /// <returns>Actual label text <see cref="System::String"></see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String GetActualLabelText() = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


