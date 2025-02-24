#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/MathText/IMathFraction.h>

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
class FractionMapper;
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
enum class MathFractionTypes;
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
/// Specifies the fraction object, consisting of a numerator and denominator separated by a fraction bar.
/// The fraction bar can be horizontal or diagonal, depending on the fraction properties.
/// The fraction object is also used to represent the stack function, which places one element above another, with no fraction bar.
/// </summary>
/// <example>Example:
/// <code>
/// auto mathFraction = System::MakeObject<MathFraction>(System::MakeObject<MathematicalText>(u"x"), System::MakeObject<MathematicalText>(u"y"), Aspose::Slides::MathText::MathFractionTypes::Linear);
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS MathFraction final : public Aspose::Slides::MathText::MathElementBase, public Aspose::Slides::MathText::IMathFraction, public Aspose::Slides::MathText::IHasControlCharacterProperties
{
    typedef MathFraction ThisType;
    typedef Aspose::Slides::MathText::MathElementBase BaseType;
    typedef Aspose::Slides::MathText::IMathFraction BaseType1;
    typedef Aspose::Slides::MathText::IHasControlCharacterProperties BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::DOM::Serialization::PptxSerialization::PartParsers::DOMObjectsSerialization::Omml::Mappers::FractionMapper;
    /// @endcond
    
public:

    /// <summary>
    /// Fraction type
    /// Default: Bar
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathFraction = System::MakeObject<MathematicalText>(u"x")->Divide(u"y");
    /// mathFraction->set_FractionType(MathFractionTypes::Linear);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathFractionTypes get_FractionType() override;
    /// <summary>
    /// Fraction type
    /// Default: Bar
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathFraction = System::MakeObject<MathematicalText>(u"x")->Divide(u"y");
    /// mathFraction->set_FractionType(MathFractionTypes::Linear);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_FractionType(MathFractionTypes value) override;
    /// <summary>
    /// Numerator
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathFraction = System::MakeObject<MathematicalText>(u"x")->Divide(u"y");
    /// auto numerator = mathFraction->get_Numerator();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathElement> get_Numerator() override;
    /// <summary>
    /// Denominator
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathFraction = System::MakeObject<MathematicalText>(u"x")->Divide(u"y");
    /// auto denominator = mathFraction->get_Denominator();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathElement> get_Denominator() override;
    
    /// <summary>
    /// Initializes MathFraction with the specified numerator, denominator and type
    /// </summary>
    /// <param name="numerator">Numerator</param>
    /// <param name="denominator">Denominator</param>
    /// <param name="fractionType">Fraction type</param>
    /// <example>Example:
    /// <code>
    /// auto mathFraction = System::MakeObject<MathFraction>(System::MakeObject<MathematicalText>(u"x"), System::MakeObject<MathematicalText>(u"y"), Aspose::Slides::MathText::MathFractionTypes::Linear);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathFraction(System::SharedPtr<IMathElement> numerator, System::SharedPtr<IMathElement> denominator, MathFractionTypes fractionType);
    /// <summary>
    /// Initializes a MathFraction of type 'Bar' with the specified numerator and denominator
    /// </summary>
    /// <param name="numerator">Numerator</param>
    /// <param name="denominator">Denominator</param>
    /// <example>Example:
    /// <code>
    /// auto mathFraction = System::MakeObject<MathFraction>(System::MakeObject<MathematicalText>(u"x"), System::MakeObject<MathematicalText>(u"y"));
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathFraction(System::SharedPtr<IMathElement> numerator, System::SharedPtr<IMathElement> denominator);
    
    /// <summary>
    /// Get children elements
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IMathElement>> GetChildren() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool get_AreFormattingPropertiesDefault();
    
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::OmmlControlCharacterPPTXUnsupportedProps> ControlCharactersPropertiesInternal;
    /// @endcond
    
    ASPOSE_SLIDES_SHARED_API void Accept(System::SharedPtr<MathVisitor> visitor) override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~MathFraction();
    
private:

    MathFractionTypes pr_FractionType;
    System::SharedPtr<IMathElement> pr_Numerator;
    
    /// <summary>
    /// Numerator
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathFraction = System::MakeObject<MathematicalText>(u"x")->Divide(u"y");
    /// auto numerator = mathFraction->get_Numerator();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_Numerator(System::SharedPtr<IMathElement> value);
    
    System::SharedPtr<IMathElement> pr_Denominator;
    
    /// <summary>
    /// Denominator
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathFraction = System::MakeObject<MathematicalText>(u"x")->Divide(u"y");
    /// auto denominator = mathFraction->get_Denominator();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_Denominator(System::SharedPtr<IMathElement> value);
    /// <summary>
    /// Control Character Properties
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::OmmlControlCharacterPPTXUnsupportedProps> get_ControlCharacterProperties() override;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


