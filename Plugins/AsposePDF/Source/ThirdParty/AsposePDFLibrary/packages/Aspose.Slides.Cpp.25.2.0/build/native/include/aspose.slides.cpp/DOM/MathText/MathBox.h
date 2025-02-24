#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/MathText/IMathBox.h>
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
class GroupBoxPPTXSerialization;
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
/// Specifies the logical boxing (packaging) of mathematical element.
/// For example, a boxed object can serve as an operator emulator with or without an alignment point, 
/// serve as a line break point, or be grouped such as not to allow line breaks within.
/// For example, the "==" operator should be boxed to prevent line breaks.
/// </summary>
/// <example>Example:
/// <code>
/// auto box = System::MakeObject<MathBox>(System::MakeObject<MathematicalText>(u"=="));
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS MathBox final : public Aspose::Slides::MathText::MathElementBase, public Aspose::Slides::MathText::IMathBox, public Aspose::Slides::MathText::IHasControlCharacterProperties
{
    typedef MathBox ThisType;
    typedef Aspose::Slides::MathText::MathElementBase BaseType;
    typedef Aspose::Slides::MathText::IMathBox BaseType1;
    typedef Aspose::Slides::MathText::IHasControlCharacterProperties BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::DOM::Serialization::PptxSerialization::PartParsers::DOMObjectsSerialization::Omml::GroupBoxPPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Base argument
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto box = System::MakeObject<MathBox>(System::MakeObject<MathematicalText>(u"=="));
    /// auto baseArg = box->get_Base();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathElement> get_Base() override;
    /// <summary>
    /// Operator Emulator.
    /// When true, the box and its contents behave as a single operator and inherit the properties of an operator. 
    /// This means, for example, that the character can serve as a point for a line break and can be aligned to other operators.
    /// Operator Emulators are often used when one or more glyphs combine to form an operator, such as '=='.
    /// Default value: false
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto box = System::MakeObject<MathBox>(System::MakeObject<MathematicalText>(u"=="));
    /// box->set_OperatorEmulator(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_OperatorEmulator() override;
    /// <summary>
    /// Operator Emulator.
    /// When true, the box and its contents behave as a single operator and inherit the properties of an operator. 
    /// This means, for example, that the character can serve as a point for a line break and can be aligned to other operators.
    /// Operator Emulators are often used when one or more glyphs combine to form an operator, such as '=='.
    /// Default value: false
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto box = System::MakeObject<MathBox>(System::MakeObject<MathematicalText>(u"=="));
    /// box->set_OperatorEmulator(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_OperatorEmulator(bool value) override;
    /// <summary>
    /// No break
    /// This property specifies the "unbreakable" property on the object box. When true, no line breaks can occur within the box.
    /// This can be important for operator emulators that consist of more than one binary operator. 
    /// When this element is not specified, breaks can occur inside box.
    /// Default: true
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto box = System::MakeObject<MathBox>(System::MakeObject<MathematicalText>(u"*****"));
    /// box->set_NoBreak(false);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_NoBreak() override;
    /// <summary>
    /// No break
    /// This property specifies the "unbreakable" property on the object box. When true, no line breaks can occur within the box.
    /// This can be important for operator emulators that consist of more than one binary operator. 
    /// When this element is not specified, breaks can occur inside box.
    /// Default: true
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto box = System::MakeObject<MathBox>(System::MakeObject<MathematicalText>(u"*****"));
    /// box->set_NoBreak(false);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_NoBreak(bool value) override;
    /// <summary>
    /// Differential
    /// When true, the box acts as a differential (e.g., 𝑑𝑥 in an integrand), and receives the appropriate 
    /// horizontal spacing for the mathematical differential.
    /// Default: false
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto differential = System::MakeObject<MathematicalText>(u"dx")->ToBox();
    /// differential->set_Differential(true);
    /// auto baseArg = System::MakeObject<MathematicalText>(u"x")->Join(differential);
    /// auto integral = baseArg->Integral(Aspose::Slides::MathText::MathIntegralTypes::Simple, u"0", u"1");
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_Differential() override;
    /// <summary>
    /// Differential
    /// When true, the box acts as a differential (e.g., 𝑑𝑥 in an integrand), and receives the appropriate 
    /// horizontal spacing for the mathematical differential.
    /// Default: false
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto differential = System::MakeObject<MathematicalText>(u"dx")->ToBox();
    /// differential->set_Differential(true);
    /// auto baseArg = System::MakeObject<MathematicalText>(u"x")->Join(differential);
    /// auto integral = baseArg->Integral(Aspose::Slides::MathText::MathIntegralTypes::Simple, u"0", u"1");
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_Differential(bool value) override;
    /// <summary>
    /// When true, this operator emulator serves as an alignment point; that is, 
    /// designated alignment points in other equations can be aligned with it.
    /// Default: false
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto box = System::MakeObject<MathematicalText>(u"==")->ToBox();
    /// box->set_AlignmentPoint(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_AlignmentPoint() override;
    /// <summary>
    /// When true, this operator emulator serves as an alignment point; that is, 
    /// designated alignment points in other equations can be aligned with it.
    /// Default: false
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto box = System::MakeObject<MathematicalText>(u"==")->ToBox();
    /// box->set_AlignmentPoint(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_AlignmentPoint(bool value) override;
    /// <summary>
    /// Explicit break specifies whether there is a line break at the start of the Box object, 
    /// such that the line wraps at the start of the box object.
    /// Specifies the number of the operator on the previous line of mathematical text which shall
    /// be used as the alignment point for the current line of mathematical text
    /// possible values: 1..255
    /// Default: 0 (no explicit break)
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto box = System::MakeObject<MathematicalText>(u"==")->ToBox();
    /// box->set_ExplicitBreak(1);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API uint8_t get_ExplicitBreak() override;
    /// <summary>
    /// Explicit break specifies whether there is a line break at the start of the Box object, 
    /// such that the line wraps at the start of the box object.
    /// Specifies the number of the operator on the previous line of mathematical text which shall
    /// be used as the alignment point for the current line of mathematical text
    /// possible values: 1..255
    /// Default: 0 (no explicit break)
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto box = System::MakeObject<MathematicalText>(u"==")->ToBox();
    /// box->set_ExplicitBreak(1);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_ExplicitBreak(uint8_t value) override;
    
    /// <summary>
    /// Initializes MathBox with the specified element as an argument
    /// </summary>
    /// <param name="element">The base element to which the box is applied. Can be null.</param>
    /// <example>Example:
    /// <code>
    /// auto box = System::MakeObject<MathBox>(System::MakeObject<MathematicalText>(u"=="));
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathBox(System::SharedPtr<IMathElement> element);
    
    /// <summary>
    /// Get children elements
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IMathElement>> GetChildren() override;
    
protected:

    /// @cond
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::OmmlControlCharacterPPTXUnsupportedProps> ControlCharacterPropertiesInternal;
    /// @endcond
    
    ASPOSE_SLIDES_SHARED_API void Accept(System::SharedPtr<MathVisitor> visitor) override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~MathBox();
    
private:

    bool pr_OperatorEmulator;
    bool pr_NoBreak;
    bool pr_Differential;
    bool pr_AlignmentPoint;
    uint8_t pr_ExplicitBreak;
    
    /// <summary>
    /// Control Character Properties
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::OmmlControlCharacterPPTXUnsupportedProps> get_ControlCharacterProperties() override;
    
    System::SharedPtr<MathArgument> m_base;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


