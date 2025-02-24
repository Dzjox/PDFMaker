#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/MathText/IMathSuperscriptElement.h>

#include "DOM/MathText/BaseScript.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace MathText
{
class IMathElement;
class MathArgument;
class MathVisitor;
} // namespace MathText
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Specifies the superscript object, which consists of a base 
/// and a reduced-size superscript placed above and to the right
/// </summary>
/// <example>Example:
/// <code>
/// auto superscriptElement = System::MakeObject<MathematicalText>(u"N")->SetSuperscript(u"i");
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS MathSuperscriptElement final : public Aspose::Slides::MathText::BaseScript, public Aspose::Slides::MathText::IMathSuperscriptElement
{
    typedef MathSuperscriptElement ThisType;
    typedef Aspose::Slides::MathText::BaseScript BaseType;
    typedef Aspose::Slides::MathText::IMathSuperscriptElement BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Superscript
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto baseElement = System::MakeObject<MathematicalText>(u"X");
    /// auto superscript = System::MakeObject<MathematicalText>(u"i");
    /// auto superscriptElement = System::MakeObject<MathSuperscriptElement>(baseElement, superscript);
    /// auto super = superscriptElement->get_Superscript();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathElement> get_Superscript() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathElement> get_Base() override;
    
    /// <summary>
    /// Initializes a new instance of the MathSuperscriptElement class.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<IMathElement> baseElement = System::MakeObject<MathematicalText>(u"X");
    /// System::SharedPtr<IMathElement> superscript = System::MakeObject<MathematicalText>(u"i");
    /// auto superscriptElement = System::MakeObject<MathSuperscriptElement>(baseElement, superscript);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathSuperscriptElement(System::SharedPtr<IMathElement> baseArg, System::SharedPtr<IMathElement> superScript);
    
    /// <summary>
    /// Get children elements
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IMathElement>> GetChildren() override;
    
protected:

    ASPOSE_SLIDES_SHARED_API void Accept(System::SharedPtr<MathVisitor> visitor) override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~MathSuperscriptElement();
    
private:

    System::SharedPtr<MathArgument> m_superScript;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


