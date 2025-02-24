#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <DOM/Animation/IPoint.h>

#include "aspose_slides_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represent animation point.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Point : public Aspose::Slides::Animation::IPoint
{
    typedef Point ThisType;
    typedef Aspose::Slides::Animation::IPoint BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Represents time value.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Time() override;
    /// <summary>
    /// Represents time value.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Time(float value) override;
    /// <summary>
    /// Represents point value.
    /// Only: bool, ColorFormat, float, int, string.
    /// Read <see cref="System::Object"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> get_Value() override;
    /// <summary>
    /// Represents point value.
    /// Only: bool, ColorFormat, float, int, string.
    /// Write <see cref="System::Object"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Value(System::SharedPtr<System::Object> value) override;
    /// <summary>
    /// Formulas within values, from, to, by attributes can be made up of these:
    /// Standard arithmetic operators: ‘+’, ‘-‘, ‘*’, ‘/’, ‘^’, ‘%’ (mod)
    /// Constants: ‘pi’ ‘e’
    /// Conditional operators: ‘abs’, ‘min’, ‘max’, ‘?’ (if)
    /// Comparison operators: '==', '>=', '', '!=', '!'
    /// Trigonometric operators: ‘sin()’, ‘cos()’, ‘tan()’, ‘asin()’, ‘acos()’, ‘atan()’
    /// Natural logarithm ‘ln()’
    /// Property references (host supported properties)
    /// 
    /// for example: "#ppt_x+(cos(-2*pi*(1-$))*-#ppt_x-sin(-2*pi*(1-$))*(1-#ppt_y))*(1-$)"
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_Formula() override;
    /// <summary>
    /// Formulas within values, from, to, by attributes can be made up of these:
    /// Standard arithmetic operators: ‘+’, ‘-‘, ‘*’, ‘/’, ‘^’, ‘%’ (mod)
    /// Constants: ‘pi’ ‘e’
    /// Conditional operators: ‘abs’, ‘min’, ‘max’, ‘?’ (if)
    /// Comparison operators: '==', '>=', '', '!=', '!'
    /// Trigonometric operators: ‘sin()’, ‘cos()’, ‘tan()’, ‘asin()’, ‘acos()’, ‘atan()’
    /// Natural logarithm ‘ln()’
    /// Property references (host supported properties)
    /// 
    /// for example: "#ppt_x+(cos(-2*pi*(1-$))*-#ppt_x-sin(-2*pi*(1-$))*(1-#ppt_y))*(1-$)"
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Formula(System::String value) override;
    
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Point();
    /// <summary>
    /// Create animation point with time, value and formula.
    /// </summary>
    /// <param name="time"></param>
    /// <param name="value"></param>
    /// <param name="formula"></param>
    ASPOSE_SLIDES_SHARED_API Point(float time, System::SharedPtr<System::Object> value, System::String formula);
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool CheckValue(System::SharedPtr<System::Object> val);
    /// @endcond
    
private:

    float _time;
    System::SharedPtr<System::Object> _value;
    System::String _formula;
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


