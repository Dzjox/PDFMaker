#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class IDoubleChartValue;
} // namespace Charts
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Specifies the errors bar values. It shall be used only when the Error bars value type is Custom.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IErrorBarsCustomValues : public virtual System::Object
{
    typedef IErrorBarsCustomValues ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Specifies the error bar value in the negative direction. 
    /// Avalible if error bars value type is Custom and ErrorBarsXFormat is allowed.
    /// In any other case this property returns null.  
    /// Read-only <see cref="Aspose::Slides::Charts::IDoubleChartValue">IDoubleChartValue</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IDoubleChartValue> get_XMinus() = 0;
    /// <summary>
    /// Specifies the error bar value in the negative direction. 
    ///  Avalible if error bars value type is Custom and ErrorBarsYFormat is allowed. 
    /// In any other case this property returns null. 
    /// Read-only <see cref="Aspose::Slides::Charts::IDoubleChartValue">IDoubleChartValue</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IDoubleChartValue> get_YMinus() = 0;
    /// <summary>
    /// Specifies the error bar value in the positive direction. 
    /// Avalible if error bars value type is Custom and ErrorBarsXFormat is allowed. 
    /// In any other case this property returns null. 
    /// Read-only <see cref="Aspose::Slides::Charts::IDoubleChartValue">IDoubleChartValue</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IDoubleChartValue> get_XPlus() = 0;
    /// <summary>
    /// Specifies the error bar value in the positive direction. 
    /// Avalible if error bars value type is Custom and ErrorBarsYFormat is allowed.
    /// In any other case this property returns null. 
    /// Read-only <see cref="Aspose::Slides::Charts::IDoubleChartValue">IDoubleChartValue</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IDoubleChartValue> get_YPlus() = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


