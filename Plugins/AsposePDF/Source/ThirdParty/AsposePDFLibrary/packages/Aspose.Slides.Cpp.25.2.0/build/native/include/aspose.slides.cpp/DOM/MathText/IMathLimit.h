#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/MathText/IMathElement.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Specifies the Limit object, consisting of text on the baseline and reduced-size text immediately above or below it.
/// </summary>
/// <example>Example:
/// <code>
/// auto limitElement = System::MakeObject<MathLimit>(System::MakeObject<MathematicalText>(u"lim"), System::MakeObject<MathematicalText>(u"\U0001d45b→∞"));
/// </code>
/// </example>
class ASPOSE_SLIDES_API_SHARED_CLASS IMathLimit : public virtual Aspose::Slides::MathText::IMathElement
{
    typedef IMathLimit ThisType;
    typedef Aspose::Slides::MathText::IMathElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Base argument
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto limitElement = System::MakeObject<MathLimit>(System::MakeObject<MathematicalText>(u"lim"), System::MakeObject<MathematicalText>(u"?\?\u001a?"));
    /// auto baseArg = limitElement->get_Base();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathElement> get_Base() = 0;
    /// <summary>
    /// Limit argument
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto limitElement = System::MakeObject<MathLimit>(System::MakeObject<MathematicalText>(u"lim"), System::MakeObject<MathematicalText>(u"?\?\u001a?"));
    /// auto limitArg = limitElement->get_Limit();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathElement> get_Limit() = 0;
    /// <summary>
    /// Specifies upper or lower limit
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto limitElement = System::MakeObject<MathLimit>(System::MakeObject<MathematicalText>(u"lim"), System::MakeObject<MathematicalText>(u"?\?\u001a?"));
    /// limitElement->set_UpperLimit(false);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_UpperLimit() = 0;
    /// <summary>
    /// Specifies upper or lower limit
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto limitElement = System::MakeObject<MathLimit>(System::MakeObject<MathematicalText>(u"lim"), System::MakeObject<MathematicalText>(u"?\?\u001a?"));
    /// limitElement->set_UpperLimit(false);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_UpperLimit(bool value) = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


