#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IPortionFormat;
namespace MathText
{
class IMathematicalText;
} // namespace MathText
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Allows to create a MathematicalText element
/// </summary>
/// <remarks>
/// For COM comparibility
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IMathematicalTextFactory : public virtual System::Object
{
    typedef IMathematicalTextFactory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Create empty mathematical text element
    /// </summary>
    /// <returns>new Mathematical Text</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathematicalText> CreateMathematicalText() = 0;
    /// <summary>
    /// Create mathematical text element with the specified value
    /// </summary>
    /// <param name="mathSymbol">single symbol to use as text value</param>
    /// <returns>new Mathematical Text</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathematicalText> CreateMathematicalText(char16_t mathSymbol) = 0;
    /// <summary>
    /// Create empty mathematical text element with the specified value
    /// </summary>
    /// <param name="mathText">text value</param>
    /// <returns>new Mathematical Text</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathematicalText> CreateMathematicalText(System::String mathText) = 0;
    /// <summary>
    /// Create empty mathematical text element with the specified value and formatting properties
    /// </summary>
    /// <param name="mathText">text value</param>
    /// <param name="portionFormat">text format settings</param>
    /// <returns>new Mathematical Text</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathematicalText> CreateMathematicalText(System::String mathText, System::SharedPtr<IPortionFormat> portionFormat) = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


