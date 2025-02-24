#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/MathText/IMathElement.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Specifies a function of an argument.
/// </summary>
/// <example>Example:
/// <code>
/// auto sinX = System::MakeObject<MathematicalText>(u"sin")->Function(u"x");
/// </code>
/// </example>
class ASPOSE_SLIDES_API_SHARED_CLASS IMathFunction : public virtual Aspose::Slides::MathText::IMathElement
{
    typedef IMathFunction ThisType;
    typedef Aspose::Slides::MathText::IMathElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Function name
    /// For example, function names are sin and cos
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto func = System::MakeObject<MathematicalText>(u"sin")->Function(u"x");
    /// auto funcName = func->get_Name();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathElement> get_Name() = 0;
    /// <summary>
    /// Function Argument
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto func = System::MakeObject<MathematicalText>(u"sin")->Function(u"x");
    /// auto baseArg = func->get_Base();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathElement> get_Base() = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


