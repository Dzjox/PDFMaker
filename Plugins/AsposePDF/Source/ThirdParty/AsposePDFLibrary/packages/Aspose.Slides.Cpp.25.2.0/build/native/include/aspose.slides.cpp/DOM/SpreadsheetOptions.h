#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <ISpreadsheetOptions.h>

#include "aspose_slides_api_defs.h"

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
class ASPOSE_SLIDES_SHARED_CLASS SpreadsheetOptions : public Aspose::Slides::ISpreadsheetOptions
{
    typedef SpreadsheetOptions ThisType;
    typedef Aspose::Slides::ISpreadsheetOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Gets preferred culture information for calculating some functions intended for use with languages
    /// that use the double-byte character set (DBCS).
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Globalization::CultureInfo> get_PreferredCulture() override;
    /// <summary>
    /// Sets preferred culture information for calculating some functions intended for use with languages
    /// that use the double-byte character set (DBCS).
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_PreferredCulture(System::SharedPtr<System::Globalization::CultureInfo> value) override;
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
    ASPOSE_SLIDES_SHARED_API bool get_RecoverWorkbookFromChartCache() override;
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
    ASPOSE_SLIDES_SHARED_API void set_RecoverWorkbookFromChartCache(bool value) override;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Aspose::Slides::SpreadsheetOptions">SpreadsheetOptions</see> class.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API SpreadsheetOptions();
    
private:

    bool m_wbRecover;
    System::SharedPtr<System::Globalization::CultureInfo> m_preferredCulture;
    
};

} // namespace Slides
} // namespace Aspose


