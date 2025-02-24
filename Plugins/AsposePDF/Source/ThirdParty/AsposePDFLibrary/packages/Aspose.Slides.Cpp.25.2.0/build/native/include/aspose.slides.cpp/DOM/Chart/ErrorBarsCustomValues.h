#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/Chart/IErrorBarsCustomValues.h>

#include "DOM/DomObject.h"
#include "DOM/Chart/ChartDataPoint.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Charts
{
class ChartDataPointCollection;
class DoubleChartValue;
class IDoubleChartValue;
class XErrorBarElement;
class YErrorBarElement;
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
class ASPOSE_SLIDES_SHARED_CLASS ErrorBarsCustomValues : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::ChartDataPoint>>, public Aspose::Slides::Charts::IErrorBarsCustomValues
{
    typedef ErrorBarsCustomValues ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Charts::ChartDataPoint>> BaseType;
    typedef Aspose::Slides::Charts::IErrorBarsCustomValues BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Charts::ChartDataPoint;
    friend class Aspose::Slides::Charts::XErrorBarElement;
    friend class Aspose::Slides::Charts::YErrorBarElement;
    /// @endcond
    
public:

    /// <summary>
    /// Specifies the error bar value in the negative direction. 
    /// Available if error bars value type is Custom and ErrorBarsXFormat is allowed.
    /// In any other case this property returns null.
    /// Read-only <see cref="Aspose::Slides::Charts::IDoubleChartValue">IDoubleChartValue</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDoubleChartValue> get_XMinus() override;
    /// <summary>
    /// Specifies the error bar value in the negative direction. 
    /// Available if error bars value type is Custom and ErrorBarsYFormat is allowed. 
    /// In any other case this property returns null. 
    /// Read-only <see cref="Aspose::Slides::Charts::IDoubleChartValue">IDoubleChartValue</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDoubleChartValue> get_YMinus() override;
    /// <summary>
    /// Specifies the error bar value in the positive direction. 
    /// Available if error bars value type is Custom and ErrorBarsXFormat is allowed. 
    /// In any other case this property returns null. 
    /// Read-only <see cref="Aspose::Slides::Charts::IDoubleChartValue">IDoubleChartValue</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDoubleChartValue> get_XPlus() override;
    /// <summary>
    /// Specifies the error bar value in the positive direction. 
    /// Available if error bars value type is Custom and ErrorBarsYFormat is allowed.
    /// In any other case this property returns null. 
    /// Read-only <see cref="Aspose::Slides::Charts::IDoubleChartValue">IDoubleChartValue</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDoubleChartValue> get_YPlus() override;
    
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API ErrorBarsCustomValues(System::SharedPtr<ChartDataPoint> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ErrorBarsCustomValues, CODEPORTING_ARGS(System::SharedPtr<ChartDataPoint> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API double GetActualXMinusCustomValue();
    ASPOSE_SLIDES_LOCAL_API double GetActualXPlusCustomValue();
    ASPOSE_SLIDES_LOCAL_API double GetActualYMinusCustomValue();
    ASPOSE_SLIDES_LOCAL_API double GetActualYPlusCustomValue();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~ErrorBarsCustomValues();
    
private:

    System::SharedPtr<DoubleChartValue> m_xMinus;
    System::SharedPtr<DoubleChartValue> m_xPlus;
    System::SharedPtr<DoubleChartValue> m_yMinus;
    System::SharedPtr<DoubleChartValue> m_yPlus;
    System::WeakPtr<ChartDataPointCollection> m_dataPointCollection;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


