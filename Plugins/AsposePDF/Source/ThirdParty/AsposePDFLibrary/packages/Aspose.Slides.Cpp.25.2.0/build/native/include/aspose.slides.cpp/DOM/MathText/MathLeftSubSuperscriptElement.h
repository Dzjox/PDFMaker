#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/MathText/IMathLeftSubSuperscriptElement.h>

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
class MathVisitor;
} // namespace MathText
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Specifies the Sub-Superscript object, which consists of a base 
/// and a subscript and superscript placed to the left of the base.
/// </summary>
/// <example>Example:
/// <code>
/// auto baseElement = System::MakeObject<MathematicalText>(u"X");
/// auto subscript = System::MakeObject<MathematicalText>(u"i");
/// auto superscript = System::MakeObject<MathematicalText>(u"j");
/// auto leftSubSuperscript = System::MakeObject<MathLeftSubSuperscriptElement>(baseElement, subscript, superscript);
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS MathLeftSubSuperscriptElement final : public Aspose::Slides::MathText::BaseScript, public Aspose::Slides::MathText::IMathLeftSubSuperscriptElement
{
    typedef MathLeftSubSuperscriptElement ThisType;
    typedef Aspose::Slides::MathText::BaseScript BaseType;
    typedef Aspose::Slides::MathText::IMathLeftSubSuperscriptElement BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Subscript 
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto baseElement = System::MakeObject<MathematicalText>(u"X");
    /// auto subscript = System::MakeObject<MathematicalText>(u"i");
    /// auto superscript = System::MakeObject<MathematicalText>(u"j");
    /// auto leftSubSuperscript = System::MakeObject<MathLeftSubSuperscriptElement>(baseElement, subscript, superscript);
    /// auto sub = leftSubSuperscript->get_Subscript();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathElement> get_Subscript() override;
    /// <summary>
    /// Superscript
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto baseElement = System::MakeObject<MathematicalText>(u"X");
    /// auto subscript = System::MakeObject<MathematicalText>(u"i");
    /// auto superscript = System::MakeObject<MathematicalText>(u"j");
    /// auto leftSubSuperscript = System::MakeObject<MathLeftSubSuperscriptElement>(baseElement, subscript, superscript);
    /// auto sup = leftSubSuperscript->get_Superscript();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathElement> get_Superscript() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathElement> get_Base() override;
    
    /// <summary>
    /// Initializes a new instance of the MathLeftSubSuperscriptElement class.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto baseElement = System::MakeObject<MathematicalText>(u"X");
    /// auto subscript = System::MakeObject<MathematicalText>(u"i");
    /// auto superscript = System::MakeObject<MathematicalText>(u"j");
    /// auto leftSubSuperscript = System::MakeObject<MathLeftSubSuperscriptElement>(baseElement, subscript, superscript);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathLeftSubSuperscriptElement(System::SharedPtr<IMathElement> baseArg, System::SharedPtr<IMathElement> subScript, System::SharedPtr<IMathElement> superScript);
    
    /// <summary>
    /// Get children elements
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IMathElement>> GetChildren() override;
    
protected:

    ASPOSE_SLIDES_SHARED_API void Accept(System::SharedPtr<MathVisitor> visitor) override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~MathLeftSubSuperscriptElement();
    
private:

    System::SharedPtr<IMathElement> m_subScript;
    System::SharedPtr<IMathElement> m_superScript;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


