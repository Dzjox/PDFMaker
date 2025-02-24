#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/MathText/IMathRightSubSuperscriptElement.h>

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
/// and a subscript and superscript placed to the right of the base.
/// </summary>
/// <example>Example:
/// <code>
/// auto subsuperscript = System::MakeObject<MathematicalText>(u"N")->SetSubSuperscriptOnTheRight(u"i", u"j");
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS MathRightSubSuperscriptElement final : public Aspose::Slides::MathText::BaseScript, public Aspose::Slides::MathText::IMathRightSubSuperscriptElement
{
    typedef MathRightSubSuperscriptElement ThisType;
    typedef Aspose::Slides::MathText::BaseScript BaseType;
    typedef Aspose::Slides::MathText::IMathRightSubSuperscriptElement BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Subscript argument
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto baseElement = System::MakeObject<MathematicalText>(u"X");
    /// auto subscript = System::MakeObject<MathematicalText>(u"i");
    /// auto superscript = System::MakeObject<MathematicalText>(u"j");
    /// auto subsuperscript = System::MakeObject<MathRightSubSuperscriptElement>(baseElement, subscript, superscript);
    /// auto sub = subsuperscript->get_Subscript();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathElement> get_Subscript() override;
    /// <summary>
    /// Superscript argument
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto baseElement = System::MakeObject<MathematicalText>(u"X");
    /// auto subscript = System::MakeObject<MathematicalText>(u"i");
    /// auto superscript = System::MakeObject<MathematicalText>(u"j");
    /// auto subsuperscript = System::MakeObject<MathRightSubSuperscriptElement>(baseElement, subscript, superscript);
    /// auto sup = subsuperscript->get_Superscript();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathElement> get_Superscript() override;
    /// <summary>
    /// Specifies the alignment of subscript/superscript. 
    /// When true, subscript and superscript are aligned horizontally to each other.
    /// When false, they are kerned to the shape of the base.
    /// Default value is false.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto baseElement = System::MakeObject<MathematicalText>(u"X");
    /// auto subscript = System::MakeObject<MathematicalText>(u"i");
    /// auto superscript = System::MakeObject<MathematicalText>(u"j");
    /// auto subsuperscript = System::MakeObject<MathRightSubSuperscriptElement>(baseElement, subscript, superscript);
    /// subsuperscript->set_AlignScripts(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_AlignScripts() override;
    /// <summary>
    /// Specifies the alignment of subscript/superscript. 
    /// When true, subscript and superscript are aligned horizontally to each other.
    /// When false, they are kerned to the shape of the base.
    /// Default value is false.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto baseElement = System::MakeObject<MathematicalText>(u"X");
    /// auto subscript = System::MakeObject<MathematicalText>(u"i");
    /// auto superscript = System::MakeObject<MathematicalText>(u"j");
    /// auto subsuperscript = System::MakeObject<MathRightSubSuperscriptElement>(baseElement, subscript, superscript);
    /// subsuperscript->set_AlignScripts(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_AlignScripts(bool value) override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathElement> get_Base() override;
    
    /// <summary>
    /// Initializes a new instance of the MathRightSubSuperscriptElement class.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API MathRightSubSuperscriptElement(System::SharedPtr<IMathElement> baseArg, System::SharedPtr<IMathElement> subScript, System::SharedPtr<IMathElement> superScript);
    
    /// <summary>
    /// Get children elements
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IMathElement>> GetChildren() override;
    
protected:

    ASPOSE_SLIDES_SHARED_API void Accept(System::SharedPtr<MathVisitor> visitor) override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~MathRightSubSuperscriptElement();
    
private:

    bool pr_AlignScripts;
    System::SharedPtr<IMathElement> m_subScript;
    System::SharedPtr<IMathElement> m_superScript;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


