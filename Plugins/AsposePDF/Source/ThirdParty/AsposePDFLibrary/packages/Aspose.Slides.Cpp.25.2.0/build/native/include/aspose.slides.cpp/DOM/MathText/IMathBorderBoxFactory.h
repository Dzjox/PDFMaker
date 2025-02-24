#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace MathText
{
class IMathBorderBox;
class IMathElement;
} // namespace MathText
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Allows to create a math border box
/// </summary>
/// <remarks>
/// For COM comparibility
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IMathBorderBoxFactory : public virtual System::Object
{
    typedef IMathBorderBoxFactory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Create a math border box by applying to the element
    /// </summary>
    /// <param name="element">math element to apply border box</param>
    /// <returns>new border box element</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathBorderBox> CreateMathBorderBox(System::SharedPtr<IMathElement> element) = 0;
    /// <summary>
    /// Create a math border box by applying to the element
    /// </summary>
    /// <param name="element">math element to apply border box</param>
    /// <param name="hideTop">Hide Top Edge</param>
    /// <param name="hideBottom">Hide Bottom Edge</param>
    /// <param name="hideLeft">Hide Left Edge</param>
    /// <param name="hideRight">Hide Right Edge</param>
    /// <param name="strikethroughHorizontal">Border Box Strikethrough Horizontal</param>
    /// <param name="strikethroughVertical">Border Box Strikethrough Vertical</param>
    /// <param name="strikethroughBottomLeftToTopRight">Border Box Strikethrough Bottom-Left to Top-Right</param>
    /// <param name="strikethroughTopLeftToBottomRight">Border Box Strikethrough Top-Left to Bottom-Right</param>
    /// <returns>new border box element</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathBorderBox> CreateMathBorderBox(System::SharedPtr<IMathElement> element, bool hideTop, bool hideBottom, bool hideLeft, bool hideRight, bool strikethroughHorizontal, bool strikethroughVertical, bool strikethroughBottomLeftToTopRight, bool strikethroughTopLeftToBottomRight) = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


