#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/MathText/IMathGroupingCharacterFactory.h>

#include "aspose_slides_api_defs.h"

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
/// For COM compatibility
/// </remarks>
class ASPOSE_SLIDES_SHARED_CLASS MathGroupingCharacterFactory : public Aspose::Slides::MathText::IMathGroupingCharacterFactory
{
    typedef MathGroupingCharacterFactory ThisType;
    typedef Aspose::Slides::MathText::IMathGroupingCharacterFactory BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Creates a math grouping character
    /// </summary>
    /// <param name="element">math element to apply grouping character</param>
    /// <param name="character">grouping character</param>
    /// <param name="position">position of grouping character</param>
    /// <param name="verticalJustification">vertical justification</param>
    /// <returns>new grouping character element</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathGroupingCharacter> CreateMathGroupingCharacter(System::SharedPtr<IMathElement> element, char16_t character, MathTopBotPositions position, MathTopBotPositions verticalJustification) override;
    /// <summary>
    /// Creates a math grouping character
    /// </summary>
    /// <param name="element">math element to apply grouping character</param>
    /// <returns>new grouping character element</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathGroupingCharacter> CreateMathGroupingCharacter(System::SharedPtr<IMathElement> element) override;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


