#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/MathText/IMathGroupingCharacter.h>

#include "DOM/MathText/MathElementBase.h"
#include "DOM/MathText/IHasControlCharacterProperties.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace DOM
{
namespace Serialization
{
namespace PptxSerialization
{
namespace PartParsers
{
namespace DOMObjectsSerialization
{
namespace Omml
{
class GroupingCharacterPPTXSerialization;
} // namespace Omml
} // namespace DOMObjectsSerialization
} // namespace PartParsers
} // namespace PptxSerialization
} // namespace Serialization
} // namespace DOM
namespace MathText
{
class IMathElement;
class MathArgument;
enum class MathTopBotPositions;
class MathVisitor;
} // namespace MathText
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class OmmlControlCharacterPPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
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
/// auto groupingCharacter = System::MakeObject<MathGroupingCharacter>(System::MakeObject<MathematicalText>(u"abc"));
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS MathGroupingCharacter final : public Aspose::Slides::MathText::MathElementBase, public Aspose::Slides::MathText::IMathGroupingCharacter, public Aspose::Slides::MathText::IHasControlCharacterProperties
{
    typedef MathGroupingCharacter ThisType;
    typedef Aspose::Slides::MathText::MathElementBase BaseType;
    typedef Aspose::Slides::MathText::IMathGroupingCharacter BaseType1;
    typedef Aspose::Slides::MathText::IHasControlCharacterProperties BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::DOM::Serialization::PptxSerialization::PartParsers::DOMObjectsSerialization::Omml::GroupingCharacterPPTXSerialization;
    /// @endcond
    
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
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathElement> get_Base() override;
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
    ASPOSE_SLIDES_SHARED_API char16_t get_Character() override;
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
    ASPOSE_SLIDES_SHARED_API void set_Character(char16_t value) override;
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
    ASPOSE_SLIDES_SHARED_API MathTopBotPositions get_Position() override;
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
    ASPOSE_SLIDES_SHARED_API void set_Position(MathTopBotPositions value) override;
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
    ASPOSE_SLIDES_SHARED_API MathTopBotPositions get_VerticalJustification() override;
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
    ASPOSE_SLIDES_SHARED_API void set_VerticalJustification(MathTopBotPositions value) override;
    
    /// <summary>
    /// Initializes a new instance of the MathGroupingCharacter class 
    /// with the default grouping character U+23DF (BOTTOM CURLY BRACKET)
    /// </summary>
    /// <param name="element">The base element to which the bar is applied</param>
    /// <example>Example:
    /// <code>
    /// auto groupingCharacter = System::MakeObject<MathGroupingCharacter>(System::MakeObject<MathematicalText>(u"abc"));
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathGroupingCharacter(System::SharedPtr<IMathElement> element);
    /// <summary>
    /// Initializes a new instance of the MathGroupingCharacter class.
    /// </summary>
    /// <param name="element">The base element to which the bar is applied</param>
    /// <param name="character">Grouping Character</param>
    /// <param name="position">Position of grouping character</param>
    /// <param name="verticalJustification">Vertical justification of group character</param>
    /// <example>Example:
    /// <code>
    /// auto groupingCharacter = System::MakeObject<MathGroupingCharacter>(System::MakeObject<MathematicalText>(u"abc"), u'_', Aspose::Slides::MathText::MathTopBotPositions::Top, Aspose::Slides::MathText::MathTopBotPositions::Bottom);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathGroupingCharacter(System::SharedPtr<IMathElement> element, char16_t character, MathTopBotPositions position, MathTopBotPositions verticalJustification);
    
    /// <summary>
    /// Get children elements
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IMathElement>> GetChildren() override;
    
protected:

    /// @cond
    static const ASPOSE_SLIDES_LOCAL_API char16_t c_defaultCharacter;
    static const ASPOSE_SLIDES_LOCAL_API MathTopBotPositions c_defaultPosition;
    static const ASPOSE_SLIDES_LOCAL_API MathTopBotPositions c_defaultVerticalJustification;
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::OmmlControlCharacterPPTXUnsupportedProps> ControlCharacterPropertiesInternal;
    
    static ASPOSE_SLIDES_LOCAL_API MathTopBotPositions InvertTopBot(MathTopBotPositions topBot);
    /// @endcond
    ASPOSE_SLIDES_SHARED_API void Accept(System::SharedPtr<MathVisitor> visitor) override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~MathGroupingCharacter();
    
private:

    char16_t pr_Character;
    MathTopBotPositions pr_Position;
    MathTopBotPositions pr_VerticalJustification;
    
    /// <summary>
    /// Control Character Properties
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::OmmlControlCharacterPPTXUnsupportedProps> get_ControlCharacterProperties() override;
    
    System::SharedPtr<MathArgument> m_base;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


