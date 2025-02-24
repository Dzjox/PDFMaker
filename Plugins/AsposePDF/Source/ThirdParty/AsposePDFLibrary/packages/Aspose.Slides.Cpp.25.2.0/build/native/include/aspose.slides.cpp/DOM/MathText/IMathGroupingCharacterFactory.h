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
class IMathElement;
class IMathGroupingCharacter;
enum class MathTopBotPositions;
} // namespace MathText
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Allows to create a math grouping character
/// </summary>
/// <remarks>
/// For COM comparibility
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IMathGroupingCharacterFactory : public virtual System::Object
{
    typedef IMathGroupingCharacterFactory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a math grouping character
    /// </summary>
    /// <param name="element">math element to apply grouping character</param>
    /// <param name="character">grouping character</param>
    /// <param name="position">position of grouping character</param>
    /// <param name="verticalJustification">vertical justification</param>
    /// <returns>new grouping character element</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathGroupingCharacter> CreateMathGroupingCharacter(System::SharedPtr<IMathElement> element, char16_t character, MathTopBotPositions position, MathTopBotPositions verticalJustification) = 0;
    /// <summary>
    /// Creates a math grouping character
    /// </summary>
    /// <param name="element">math element to apply grouping character</param>
    /// <returns>new grouping character element</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathGroupingCharacter> CreateMathGroupingCharacter(System::SharedPtr<IMathElement> element) = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


