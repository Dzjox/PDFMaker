#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace System
{
namespace Globalization
{
class CultureInfo;
} // namespace Globalization
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents options which can be used to specify additional spreadsheets behavior.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ISpreadsheetOptions : public virtual System::Object
{
    typedef ISpreadsheetOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets preferred culture information for calculating some functions intended for use with languages
    /// that use the double-byte character set (DBCS).
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<System::Globalization::CultureInfo> get_PreferredCulture() = 0;
    /// <summary>
    /// Sets preferred culture information for calculating some functions intended for use with languages
    /// that use the double-byte character set (DBCS).
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_PreferredCulture(System::SharedPtr<System::Globalization::CultureInfo> value) = 0;
    /// <summary>
    /// If data source for the chart is an external workbook and it's not available, it will be recovered from the chart cache.
    /// </summary>
    /// <exception cref="System::InvalidOperationException">Thrown when external workbook in unavailable and RecoverWorkbookFromChartCache property value is false.</exception>
    /// <example> Example:
    /// <code>
    /// auto loadOptions = MakeObject<LoadOptions>();
    /// loadOptions->set_SpreadsheetOptions(System::MakeObject<SpreadsheetOptions>());
    /// loadOptions->get_SpreadsheetOptions()->set_RecoverWorkbookFromChartCache(true);
    /// 
    /// auto pres = MakeObject<Presentation>(u"Presentation.pptx", loadOptions);
    /// auto chart = AsCast<Aspose::Slides::Charts::IChart>(pres->get_Slides()->idx_get(0)->get_Shapes()->idx_get(0));
    /// auto recoveredWorkbook = chart->get_ChartData()->get_ChartDataWorkbook();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_RecoverWorkbookFromChartCache() = 0;
    /// <summary>
    /// If data source for the chart is an external workbook and it's not available, it will be recovered from the chart cache.
    /// </summary>
    /// <exception cref="System::InvalidOperationException">Thrown when external workbook in unavailable and RecoverWorkbookFromChartCache property value is false.</exception>
    /// <example> Example:
    /// <code>
    /// auto loadOptions = MakeObject<LoadOptions>();
    /// loadOptions->set_SpreadsheetOptions(System::MakeObject<SpreadsheetOptions>());
    /// loadOptions->get_SpreadsheetOptions()->set_RecoverWorkbookFromChartCache(true);
    /// 
    /// auto pres = MakeObject<Presentation>(u"Presentation.pptx", loadOptions);
    /// auto chart = AsCast<Aspose::Slides::Charts::IChart>(pres->get_Slides()->idx_get(0)->get_Shapes()->idx_get(0));
    /// auto recoveredWorkbook = chart->get_ChartData()->get_ChartDataWorkbook();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_RecoverWorkbookFromChartCache(bool value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


