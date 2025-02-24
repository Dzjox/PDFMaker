#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/MathText/IMathLimit.h>
#include <cstdint>

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
namespace Mappers
{
class LowerLimitMapper;
class UpperLimitMapper;
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
/// Specifies the Limit object, consisting of text on the baseline and reduced-size text immediately above or below it.
/// </summary>
/// <example>Example:
/// <code>
/// auto limitElement = System::MakeObject<MathLimit>(System::MakeObject<MathematicalText>(u"lim"), System::MakeObject<MathematicalText>(u"\U0001d45b→∞"));
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS MathLimit final : public Aspose::Slides::MathText::MathElementBase, public Aspose::Slides::MathText::IMathLimit, public Aspose::Slides::MathText::IHasControlCharacterProperties
{
    typedef MathLimit ThisType;
    typedef Aspose::Slides::MathText::MathElementBase BaseType;
    typedef Aspose::Slides::MathText::IMathLimit BaseType1;
    typedef Aspose::Slides::MathText::IHasControlCharacterProperties BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::DOM::Serialization::PptxSerialization::PartParsers::DOMObjectsSerialization::Omml::Mappers::LowerLimitMapper;
    friend class Aspose::Slides::DOM::Serialization::PptxSerialization::PartParsers::DOMObjectsSerialization::Omml::Mappers::UpperLimitMapper;
    /// @endcond
    
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
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathElement> get_Base() override;
    /// <summary>
    /// Limit argument
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto limitElement = System::MakeObject<MathLimit>(System::MakeObject<MathematicalText>(u"lim"), System::MakeObject<MathematicalText>(u"?\?\u001a?"));
    /// auto limitArg = limitElement->get_Limit();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathElement> get_Limit() override;
    /// <summary>
    /// Specifies upper or lower limit
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto limitElement = System::MakeObject<MathLimit>(System::MakeObject<MathematicalText>(u"lim"), System::MakeObject<MathematicalText>(u"?\?\u001a?"));
    /// limitElement->set_UpperLimit(false);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_UpperLimit() override;
    /// <summary>
    /// Specifies upper or lower limit
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto limitElement = System::MakeObject<MathLimit>(System::MakeObject<MathematicalText>(u"lim"), System::MakeObject<MathematicalText>(u"?\?\u001a?"));
    /// limitElement->set_UpperLimit(false);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_UpperLimit(bool value) override;
    
    /// <summary>
    /// Initializes a new instance of the MathLimit class.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto limitElement = System::MakeObject<MathLimit>(System::MakeObject<MathematicalText>(u"lim"), System::MakeObject<MathematicalText>(u"\U0001d45b→∞"), false);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathLimit(System::SharedPtr<IMathElement> baseArg, System::SharedPtr<IMathElement> limit, bool upperLimit);
    /// <summary>
    /// Initializes a new instance of the MathLimit class with lower limit
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto limitElement = System::MakeObject<MathLimit>(System::MakeObject<MathematicalText>(u"lim"), System::MakeObject<MathematicalText>(u"\U0001d45b→∞"));
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathLimit(System::SharedPtr<IMathElement> baseArg, System::SharedPtr<IMathElement> limit);
    
    /// <summary>
    /// Get children elements
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IMathElement>> GetChildren() override;
    
protected:

    static const ASPOSE_SLIDES_SHARED_API int8_t c_DefaultArgumentSize;
    /// @cond
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::OmmlControlCharacterPPTXUnsupportedProps> СontrolCharactersPropertiesInternal;
    /// @endcond
    
    ASPOSE_SLIDES_SHARED_API void Accept(System::SharedPtr<MathVisitor> visitor) override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~MathLimit();
    
private:

    bool pr_UpperLimit;
    
    /// <summary>
    /// Control Character Properties
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::OmmlControlCharacterPPTXUnsupportedProps> get_ControlCharacterProperties() override;
    
    System::SharedPtr<IMathElement> m_base;
    System::SharedPtr<MathArgument> m_limit;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


