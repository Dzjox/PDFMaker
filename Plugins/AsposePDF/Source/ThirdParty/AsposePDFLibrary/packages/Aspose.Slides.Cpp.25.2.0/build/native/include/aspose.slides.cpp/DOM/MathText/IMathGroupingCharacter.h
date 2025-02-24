#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/MathText/IMathElement.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace MathText
{
enum class MathTopBotPositions;
} // namespace MathText
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Specifies a grouping symbol above or below an expression, usually to highlight the relationship between elements 
/// </summary>
/// <example>Example:
/// <code>
/// auto groupingElement = System::MakeObject<MathematicalText>(u"x;y;z")->Group();
/// </code>
/// </example>
class ASPOSE_SLIDES_API_SHARED_CLASS IMathGroupingCharacter : public virtual Aspose::Slides::MathText::IMathElement
{
    typedef IMathGroupingCharacter ThisType;
    typedef Aspose::Slides::MathText::IMathElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Base argument
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto groupingCharacter = System::MakeObject<MathGroupingCharacter>(System::MakeObject<MathematicalText>(u"abc"));
    /// auto baseArg = groupingCharacter->get_Base();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathElement> get_Base() = 0;
    /// <summary>
    /// Grouping Character
    /// Default value: U+23DF (BOTTOM CURLY BRACKET)
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto groupingCharacter = System::MakeObject<MathGroupingCharacter>(System::MakeObject<MathematicalText>(u"abc"));
    /// groupingCharacter->set_Character(u'\u23DD');
    /// // Bottom Parenthesis
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API char16_t get_Character() = 0;
    /// <summary>
    /// Grouping Character
    /// Default value: U+23DF (BOTTOM CURLY BRACKET)
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto groupingCharacter = System::MakeObject<MathGroupingCharacter>(System::MakeObject<MathematicalText>(u"abc"));
    /// groupingCharacter->set_Character(u'\u23DD');
    /// // Bottom Parenthesis
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Character(char16_t value) = 0;
    /// <summary>
    /// Position of grouping character.
    /// Default: Bottom 
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto groupingCharacter = System::MakeObject<MathGroupingCharacter>(System::MakeObject<MathematicalText>(u"abc"));
    /// groupingCharacter->set_Position(MathTopBotPositions::Top);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API MathTopBotPositions get_Position() = 0;
    /// <summary>
    /// Position of grouping character.
    /// Default: Bottom 
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto groupingCharacter = System::MakeObject<MathGroupingCharacter>(System::MakeObject<MathematicalText>(u"abc"));
    /// groupingCharacter->set_Position(MathTopBotPositions::Top);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Position(MathTopBotPositions value) = 0;
    /// <summary>
    /// Vertical justification of group character.
    /// Specifies the alignment of the object with respect to the baseline.
    /// For example, when the group character is above the object, 
    /// VerticalJustification of Top signifies that the top of the object falls on the baseline;
    /// when VerticalJustification is set to Bottom, the bottom of the object is on the baseline
    /// Default: Bottom for Position=Top, and Top for Position=Bottom
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto groupingCharacter = System::MakeObject<MathGroupingCharacter>(System::MakeObject<MathematicalText>(u"abc"));
    /// groupingCharacter->set_VerticalJustification(MathTopBotPositions::Top);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API MathTopBotPositions get_VerticalJustification() = 0;
    /// <summary>
    /// Vertical justification of group character.
    /// Specifies the alignment of the object with respect to the baseline.
    /// For example, when the group character is above the object, 
    /// VerticalJustification of Top signifies that the top of the object falls on the baseline;
    /// when VerticalJustification is set to Bottom, the bottom of the object is on the baseline
    /// Default: Bottom for Position=Top, and Top for Position=Bottom
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto groupingCharacter = System::MakeObject<MathGroupingCharacter>(System::MakeObject<MathematicalText>(u"abc"));
    /// groupingCharacter->set_VerticalJustification(MathTopBotPositions::Top);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_VerticalJustification(MathTopBotPositions value) = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


