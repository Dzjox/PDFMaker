#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/MathText/IMathSubscriptElement.h>

#include "DOM/MathText/BaseScript.h"
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
namespace Mappers
{
class ScriptMapper;
} // namespace Mappers
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
class MathVisitor;
} // namespace MathText
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Specifies the subscript object, which consists of a base 
/// and a reduced-size subscript placed below and to the right.
/// </summary>
/// <example>Example:
/// <code>
/// auto subscriptElement = System::MakeObject<MathematicalText>(u"N")->SetSubscript(u"i");
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS MathSubscriptElement final : public Aspose::Slides::MathText::BaseScript, public Aspose::Slides::MathText::IMathSubscriptElement
{
    typedef MathSubscriptElement ThisType;
    typedef Aspose::Slides::MathText::BaseScript BaseType;
    typedef Aspose::Slides::MathText::IMathSubscriptElement BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::DOM::Serialization::PptxSerialization::PartParsers::DOMObjectsSerialization::Omml::Mappers::ScriptMapper;
    /// @endcond
    
public:

    /// <summary>
    /// Subscript 
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto baseElement = System::MakeObject<MathematicalText>(u"X");
    /// auto subscript = System::MakeObject<MathematicalText>(u"i");
    /// auto subscriptElement = System::MakeObject<MathSubscriptElement>(baseElement, subscript);
    /// auto sub = subscriptElement->get_Subscript();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathElement> get_Subscript() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathElement> get_Base() override;
    
    /// <summary>
    /// Initializes a new instance of the MathSubscriptElement class.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<IMathElement> baseElement = System::MakeObject<MathematicalText>(u"X");
    /// System::SharedPtr<IMathElement> subscript = System::MakeObject<MathematicalText>(u"i");
    /// auto subscriptElement = System::MakeObject<MathSubscriptElement>(baseElement, subscript);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathSubscriptElement(System::SharedPtr<IMathElement> baseArg, System::SharedPtr<IMathElement> subScript);
    
    /// <summary>
    /// Get children elements
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IMathElement>> GetChildren() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathArgument> get_SubScriptArgument();
    /// @endcond
    
    ASPOSE_SLIDES_SHARED_API void Accept(System::SharedPtr<MathVisitor> visitor) override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~MathSubscriptElement();
    
private:

    System::SharedPtr<MathArgument> m_subScript;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


