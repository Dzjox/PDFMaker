#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/MathText/IMathematicalTextFactory.h>

#include "aspose_slides_api_defs.h"

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
class ASPOSE_SLIDES_SHARED_CLASS MathematicalTextFactory : public Aspose::Slides::MathText::IMathematicalTextFactory
{
    typedef MathematicalTextFactory ThisType;
    typedef Aspose::Slides::MathText::IMathematicalTextFactory BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Create empty mathematical text element
    /// </summary>
    /// <returns>new Mathematical Text</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathematicalText> CreateMathematicalText() override;
    /// <summary>
    /// Create mathematical text element with the specified value
    /// </summary>
    /// <param name="mathSymbol">single symbol to use as text value</param>
    /// <returns>new Mathematical Text</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathematicalText> CreateMathematicalText(char16_t mathSymbol) override;
    /// <summary>
    /// Create empty mathematical text element with the specified value
    /// </summary>
    /// <param name="mathText">text value</param>
    /// <returns>new Mathematical Text</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathematicalText> CreateMathematicalText(System::String mathText) override;
    /// <summary>
    /// Create empty mathematical text element with the specified value and formatting properties
    /// </summary>
    /// <param name="mathText">text value</param>
    /// <param name="portionFormat">text format settings</param>
    /// <returns>new Mathematical Text</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathematicalText> CreateMathematicalText(System::String mathText, System::SharedPtr<IPortionFormat> portionFormat) override;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


