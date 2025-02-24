#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Chart/ISingleCellChartValue.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represent double value which can be stored in pptx presentation document in two ways:
/// 1) in cell/cells of workbook related to chart;
/// 2) as literal value.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IDoubleChartValue : public Aspose::Slides::Charts::ISingleCellChartValue
{
    typedef IDoubleChartValue ThisType;
    typedef Aspose::Slides::Charts::ISingleCellChartValue BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns literal double value if DataSourceType = Charts::DataSourceType::DoubleLiterals.
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_AsLiteralDouble() = 0;
    /// <summary>
    /// Sets literal double value if DataSourceType = Charts::DataSourceType::DoubleLiterals.
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AsLiteralDouble(double value) = 0;
    
    /// <summary>
    /// Converst to double.
    /// </summary>
    /// <returns>Double value.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API double ToDouble() = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


