#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/MathText/IMathElement.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace MathText
{
enum class MathFractionTypes;
} // namespace MathText
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
/// auto mathFraction = System::MakeObject<MathematicalText>(u"x")->Divide(u"y");
/// System::SharedPtr<IMathFraction> mathFraction2 = System::MakeObject<MathFraction>(System::MakeObject<MathematicalText>(u"x"), System::MakeObject<MathematicalText>(u"y"), Aspose::Slides::MathText::MathFractionTypes::Linear);
/// </code>
/// </example>
class ASPOSE_SLIDES_API_SHARED_CLASS IMathFraction : public virtual Aspose::Slides::MathText::IMathElement
{
    typedef IMathFraction ThisType;
    typedef Aspose::Slides::MathText::IMathElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
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
    virtual ASPOSE_SLIDES_API_LOCAL_API MathFractionTypes get_FractionType() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_FractionType(MathFractionTypes value) = 0;
    /// <summary>
    /// Numerator
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathFraction = System::MakeObject<MathematicalText>(u"x")->Divide(u"y");
    /// auto numerator = mathFraction->get_Numerator();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathElement> get_Numerator() = 0;
    /// <summary>
    /// Denominator
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathFraction = System::MakeObject<MathematicalText>(u"x")->Divide(u"y");
    /// auto denominator = mathFraction->get_Denominator();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathElement> get_Denominator() = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


