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
/// Specifies the bar function, consisting of a base argument and an overbar or underbar
/// </summary>
/// <example>Example:
/// <code>
/// auto mathBar = System::MakeObject<MathBar>(System::MakeObject<MathematicalText>(u"x"));
/// </code>
/// </example>
class ASPOSE_SLIDES_API_SHARED_CLASS IMathBar : public virtual Aspose::Slides::MathText::IMathElement
{
    typedef IMathBar ThisType;
    typedef Aspose::Slides::MathText::IMathElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathElement> get_Base() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API MathTopBotPositions get_Position() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Position(MathTopBotPositions value) = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


