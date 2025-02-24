#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Chart/ISingleCellChartValue.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represent string or double value which can be stored in pptx presentation document in two ways:
/// 1) in cell/cells of workbook related to chart;
/// 2) as literal value.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IStringOrDoubleChartValue : public Aspose::Slides::Charts::ISingleCellChartValue
{
    typedef IStringOrDoubleChartValue ThisType;
    typedef Aspose::Slides::Charts::ISingleCellChartValue BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the literal string if DataSourceType property is DataSourceType::StringLiterals.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_AsLiteralString() = 0;
    /// <summary>
    /// Sets the literal string if DataSourceType property is DataSourceType::StringLiterals.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AsLiteralString(System::String value) = 0;
    /// <summary>
    /// Returns the literal double if DataSourceType property is DataSourceType::DoubleLiterals.
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_AsLiteralDouble() = 0;
    /// <summary>
    /// Sets the literal double if DataSourceType property is DataSourceType::DoubleLiterals.
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AsLiteralDouble(double value) = 0;
    
    /// <summary>
    /// Converts value to double.
    /// </summary>
    /// <returns>Double value <see cref="double"></see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API double ToDouble() = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


