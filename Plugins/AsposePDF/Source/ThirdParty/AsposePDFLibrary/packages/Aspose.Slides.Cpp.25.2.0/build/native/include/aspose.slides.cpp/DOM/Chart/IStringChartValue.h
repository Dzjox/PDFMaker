#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Chart/IMultipleCellChartValue.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class IChartDataCell;
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
/// Represent string value which can be stored in pptx presentation document in two ways:
/// 1) in cell/cells of workbook related to chart;
/// 2) as literal value.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IStringChartValue : public Aspose::Slides::Charts::IMultipleCellChartValue
{
    typedef IStringChartValue ThisType;
    typedef Aspose::Slides::Charts::IMultipleCellChartValue BaseType;
    
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
    /// Sets value from specified cell.
    /// </summary>
    /// <param name="cell">Cell.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SetFromOneCell(System::SharedPtr<IChartDataCell> cell) = 0;
    /// <summary>
    /// If DataSourceType property is DataSourceType::Worksheet then this method returns address
    /// of the cells in workbook which represent the string data. Otherwise return
    /// empty string.
    /// </summary>
    /// <returns>String value <see cref="System::String"></see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String GetCellsAddressInWorkbook() = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


