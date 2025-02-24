#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/MathText/IMathBar.h>

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
class BarPPTXSerialization;
} // namespace Omml
} // namespace DOMObjectsSerialization
} // namespace PartParsers
} // namespace PptxSerialization
} // namespace Serialization
} // namespace DOM
namespace MathText
{
class IMathElement;
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
/// Specifies the bar function, consisting of a base argument and an overbar or underbar
/// </summary>
/// <example>Example:
/// <code>
/// auto mathBar = System::MakeObject<MathBar>(System::MakeObject<MathematicalText>(u"x"));
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS MathBar final : public Aspose::Slides::MathText::MathElementBase, public Aspose::Slides::MathText::IMathBar, public Aspose::Slides::MathText::IHasControlCharacterProperties
{
    typedef MathBar ThisType;
    typedef Aspose::Slides::MathText::MathElementBase BaseType;
    typedef Aspose::Slides::MathText::IMathBar BaseType1;
    typedef Aspose::Slides::MathText::IHasControlCharacterProperties BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::DOM::Serialization::PptxSerialization::PartParsers::DOMObjectsSerialization::Omml::BarPPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Base argument
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathBar = System::MakeObject<MathBar>(System::MakeObject<MathematicalText>(u"x"));
    /// auto baseArg = mathBar->get_Base();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathElement> get_Base() override;
    /// <summary>
    /// Position of the bar line. 
    /// Default: Top
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathBar = System::MakeObject<MathBar>(System::MakeObject<MathematicalText>(u"x"));
    /// mathBar->set_Position(MathTopBotPositions::Bottom);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathTopBotPositions get_Position() override;
    /// <summary>
    /// Position of the bar line. 
    /// Default: Top
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathBar = System::MakeObject<MathBar>(System::MakeObject<MathematicalText>(u"x"));
    /// mathBar->set_Position(MathTopBotPositions::Bottom);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_Position(MathTopBotPositions value) override;
    
    /// <summary>
    /// Initializes MathBar with overbar (Top position)
    /// </summary>
    /// <param name="element">The base element to which the bar is applied</param>
    /// <example>Example:
    /// <code>
    /// auto mathBar = System::MakeObject<MathBar>(System::MakeObject<MathematicalText>(u"x"));
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathBar(System::SharedPtr<IMathElement> element);
    /// <summary>
    /// Initializes MathBar with specified position
    /// </summary>
    /// <param name="element">The base element to which the bar is applied</param>
    /// <param name="position">Position of the bar line.</param>
    /// <example>Example:
    /// <code>
    /// auto mathBar = System::MakeObject<MathBar>(System::MakeObject<MathematicalText>(u"x"), Aspose::Slides::MathText::MathTopBotPositions::Bottom);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathBar(System::SharedPtr<IMathElement> element, MathTopBotPositions position);
    
    /// <summary>
    /// Get children elements
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IMathElement>> GetChildren() override;
    
protected:

    /// @cond
    static const ASPOSE_SLIDES_LOCAL_API MathTopBotPositions c_defaultPosition;
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::OmmlControlCharacterPPTXUnsupportedProps> ControlCharacterPropertiesInternal;
    /// @endcond
    
    ASPOSE_SLIDES_SHARED_API void Accept(System::SharedPtr<MathVisitor> visitor) override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~MathBar();
    
private:

    System::SharedPtr<IMathElement> pr_Base;
    
    /// <summary>
    /// Base argument
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathBar = System::MakeObject<MathBar>(System::MakeObject<MathematicalText>(u"x"));
    /// auto baseArg = mathBar->get_Base();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_Base(System::SharedPtr<IMathElement> value);
    
    MathTopBotPositions pr_Position;
    
    /// <summary>
    /// Control Character Properties
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::OmmlControlCharacterPPTXUnsupportedProps> get_ControlCharacterProperties() override;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


