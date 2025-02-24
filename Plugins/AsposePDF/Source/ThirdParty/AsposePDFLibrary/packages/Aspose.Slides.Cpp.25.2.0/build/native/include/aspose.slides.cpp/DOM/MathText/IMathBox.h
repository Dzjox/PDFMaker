#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/MathText/IMathElement.h"
#include "aspose_slides_api_api_defs.h"

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
/// auto box = System::MakeObject<MathematicalText>(u"==")->ToBox();
/// </code>
/// </example>
class ASPOSE_SLIDES_API_SHARED_CLASS IMathBox : public virtual Aspose::Slides::MathText::IMathElement
{
    typedef IMathBox ThisType;
    typedef Aspose::Slides::MathText::IMathElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Base argument
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto box = System::MakeObject<MathematicalText>(u"==")->ToBox();
    /// auto baseArg = box->get_Base();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathElement> get_Base() = 0;
    /// <summary>
    /// Operator Emulator.
    /// When true, the box and its contents behave as a single operator and inherit the properties of an operator. 
    /// This means, for example, that the character can serve as a point for a line break and can be aligned to other operators.
    /// Operator Emulators are often used when one or more glyphs combine to form an operator, such as '=='.
    /// Default value: false
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto box = System::MakeObject<MathematicalText>(u"==")->ToBox();
    /// box->set_OperatorEmulator(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_OperatorEmulator() = 0;
    /// <summary>
    /// Operator Emulator.
    /// When true, the box and its contents behave as a single operator and inherit the properties of an operator. 
    /// This means, for example, that the character can serve as a point for a line break and can be aligned to other operators.
    /// Operator Emulators are often used when one or more glyphs combine to form an operator, such as '=='.
    /// Default value: false
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto box = System::MakeObject<MathematicalText>(u"==")->ToBox();
    /// box->set_OperatorEmulator(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_OperatorEmulator(bool value) = 0;
    /// <summary>
    /// No break.
    /// This property specifies the "unbreakable" property on the object box. When true, no line breaks can occur within the box.
    /// This can be important for operator emulators that consist of more than one binary operator. 
    /// When this element is not specified, breaks can occur inside box.
    /// Default: true
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto box = System::MakeObject<MathematicalText>(u"**********")->ToBox();
    /// box->set_NoBreak(false);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_NoBreak() = 0;
    /// <summary>
    /// No break.
    /// This property specifies the "unbreakable" property on the object box. When true, no line breaks can occur within the box.
    /// This can be important for operator emulators that consist of more than one binary operator. 
    /// When this element is not specified, breaks can occur inside box.
    /// Default: true
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto box = System::MakeObject<MathematicalText>(u"**********")->ToBox();
    /// box->set_NoBreak(false);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_NoBreak(bool value) = 0;
    /// <summary>
    /// Differential.
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
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_Differential() = 0;
    /// <summary>
    /// Differential.
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Differential(bool value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_AlignmentPoint() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AlignmentPoint(bool value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API uint8_t get_ExplicitBreak() = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ExplicitBreak(uint8_t value) = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


