#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/MathText/IMathElement.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IPortionFormat;
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
/// Mathematical text
/// </summary>
/// <example>Example:
/// <code>
/// System::SharedPtr<IMathematicalText> mathText = System::MakeObject<MathematicalText>(u"x+y");
/// </code>
/// </example>
class ASPOSE_SLIDES_API_SHARED_CLASS IMathematicalText : public virtual Aspose::Slides::MathText::IMathElement
{
    typedef IMathematicalText ThisType;
    typedef Aspose::Slides::MathText::IMathElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Text value
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathText = System::MakeObject<MathematicalText>(u"x+y");
    /// System::String textValue = mathText->get_Value();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Value() = 0;
    /// <summary>
    /// Text value
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathText = System::MakeObject<MathematicalText>(u"x+y");
    /// System::String textValue = mathText->get_Value();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Value(System::String value) = 0;
    /// <summary>
    /// Text formatting properties
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathText = System::MakeObject<MathematicalText>(u"x+y");
    /// mathText->get_Format()->set_FontHeight(28.0f);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPortionFormat> get_Format() = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


