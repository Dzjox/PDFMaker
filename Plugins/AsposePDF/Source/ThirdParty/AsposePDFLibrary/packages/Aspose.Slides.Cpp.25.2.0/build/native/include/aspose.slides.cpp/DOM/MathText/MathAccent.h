#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/MathText/IMathAccent.h>

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
class AccentPPTXSerialization;
} // namespace Omml
} // namespace DOMObjectsSerialization
} // namespace PartParsers
} // namespace PptxSerialization
} // namespace Serialization
} // namespace DOM
namespace MathText
{
class IMathElement;
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
/// Specifies the accent function, consisting of a base and a combining diacritical mark
/// Example: 𝑎́
/// </summary>
/// <example>Example:
/// <code>
/// auto baseElement = System::MakeObject<MathematicalText>(u"x");
/// auto accent = System::MakeObject<MathAccent>(baseElement, u'~');
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS MathAccent final : public Aspose::Slides::MathText::MathElementBase, public Aspose::Slides::MathText::IMathAccent, public Aspose::Slides::MathText::IHasControlCharacterProperties
{
    typedef MathAccent ThisType;
    typedef Aspose::Slides::MathText::MathElementBase BaseType;
    typedef Aspose::Slides::MathText::IMathAccent BaseType1;
    typedef Aspose::Slides::MathText::IHasControlCharacterProperties BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::DOM::Serialization::PptxSerialization::PartParsers::DOMObjectsSerialization::Omml::AccentPPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// The argument to which the accent was applied
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto accent = System::MakeObject<MathematicalText>(u"x")->Accent(u'~');
    /// auto baseArg = accent->get_Base();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathElement> get_Base() override;
    /// <summary>
    /// Accent Character
    /// The value should be within the range of (U+0300–U+036F) or(U+20D0–U+20EF)
    /// Default value: Combining Circumflex Accent (U+0302)
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto accent = System::MakeObject<MathematicalText>(u"x")->Accent(u'~');
    /// char16_t ch = accent->get_Character();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API char16_t get_Character() override;
    /// <summary>
    /// Accent Character
    /// The value should be within the range of (U+0300–U+036F) or(U+20D0–U+20EF)
    /// Default value: Combining Circumflex Accent (U+0302)
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto accent = System::MakeObject<MathematicalText>(u"x")->Accent(u'~');
    /// char16_t ch = accent->get_Character();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_Character(char16_t value) override;
    
    /// <summary>
    /// Creates a math accent applying to a specified math element with the default accent character value
    /// </summary>
    /// <param name="element">a math element to apply accent</param>
    /// <example>Example:
    /// <code>
    /// auto baseElement = System::MakeObject<MathematicalText>(u"x");
    /// auto accent = System::MakeObject<MathAccent>(baseElement);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathAccent(System::SharedPtr<IMathElement> element);
    /// <summary>
    /// Creates a math accent applying to a specified math element
    /// </summary>
    /// <param name="element">math element to apply accent</param>
    /// <param name="accentCharacter">accent character</param>
    /// <example>Example:
    /// <code>
    /// auto baseElement = System::MakeObject<MathematicalText>(u"x");
    /// auto accent = System::MakeObject<MathAccent>(baseElement, u'~');
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathAccent(System::SharedPtr<IMathElement> element, char16_t accentCharacter);
    
    /// <summary>
    /// Get children elements
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IMathElement>> GetChildren() override;
    
protected:

    /// @cond
    static const ASPOSE_SLIDES_LOCAL_API char16_t c_defaultAccentCharacter;
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::OmmlControlCharacterPPTXUnsupportedProps> ControlCharacterPropertiesInternal;
    /// @endcond
    
    ASPOSE_SLIDES_SHARED_API void Accept(System::SharedPtr<MathVisitor> visitor) override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~MathAccent();
    
private:

    System::SharedPtr<IMathElement> pr_Base;
    
    /// <summary>
    /// The argument to which the accent was applied
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto accent = System::MakeObject<MathematicalText>(u"x")->Accent(u'~');
    /// auto baseArg = accent->get_Base();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_Base(System::SharedPtr<IMathElement> value);
    /// <summary>
    /// Control Character Properties
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::OmmlControlCharacterPPTXUnsupportedProps> get_ControlCharacterProperties() override;
    
    char16_t m_character;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


