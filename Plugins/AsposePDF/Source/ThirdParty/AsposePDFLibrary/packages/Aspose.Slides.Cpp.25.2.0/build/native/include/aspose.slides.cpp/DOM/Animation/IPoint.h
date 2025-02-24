#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represent animation point.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IPoint : public virtual System::Object
{
    typedef IPoint ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Represents time value.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Time() = 0;
    /// <summary>
    /// Represents time value.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Time(float value) = 0;
    /// <summary>
    /// Represents point value.
    /// Only: bool, ColorFormat, float, int, string.
    /// Read <see cref="System::Object"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<System::Object> get_Value() = 0;
    /// <summary>
    /// Represents point value.
    /// Only: bool, ColorFormat, float, int, string.
    /// Write <see cref="System::Object"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Value(System::SharedPtr<System::Object> value) = 0;
    /// <summary>
    /// Formulas within values, from, to, by attributes can be made up of these:
    /// Standard arithmetic operators: �+�, �-�, �*�, �/�, �^�, �%� (mod)
    /// Constants: �pi� �e�
    /// Conditional operators: �abs�, �min�, �max�, �?� (if)
    /// Comparison operators: '==', '>=', '', '!=', '!'
    /// Trigonometric operators: �sin()�, �cos()�, �tan()�, �asin()�, �acos()�, �atan()�
    /// Natural logarithm �ln()�
    /// Property references (host supported properties)
    /// 
    /// for example: "#ppt_x+(cos(-2*pi*(1-$))*-#ppt_x-sin(-2*pi*(1-$))*(1-#ppt_y))*(1-$)"
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Formula() = 0;
    /// <summary>
    /// Formulas within values, from, to, by attributes can be made up of these:
    /// Standard arithmetic operators: �+�, �-�, �*�, �/�, �^�, �%� (mod)
    /// Constants: �pi� �e�
    /// Conditional operators: �abs�, �min�, �max�, �?� (if)
    /// Comparison operators: '==', '>=', '', '!=', '!'
    /// Trigonometric operators: �sin()�, �cos()�, �tan()�, �asin()�, �acos()�, �atan()�
    /// Natural logarithm �ln()�
    /// Property references (host supported properties)
    /// 
    /// for example: "#ppt_x+(cos(-2*pi*(1-$))*-#ppt_x-sin(-2*pi*(1-$))*(1-#ppt_y))*(1-$)"
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Formula(System::String value) = 0;
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


