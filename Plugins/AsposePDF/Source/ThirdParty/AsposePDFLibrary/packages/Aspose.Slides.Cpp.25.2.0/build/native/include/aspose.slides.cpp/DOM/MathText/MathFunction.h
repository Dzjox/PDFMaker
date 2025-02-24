#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/MathText/IMathFunction.h>

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
class FunctionMapper;
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
/// Specifies a function of an argument.
/// </summary>
/// <example>Example:
/// <code>
/// auto func = System::MakeObject<MathFunction>(u"sin", System::MakeObject<MathematicalText>(u"x"));
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS MathFunction final : public Aspose::Slides::MathText::MathElementBase, public Aspose::Slides::MathText::IMathFunction, public Aspose::Slides::MathText::IHasControlCharacterProperties
{
    typedef MathFunction ThisType;
    typedef Aspose::Slides::MathText::MathElementBase BaseType;
    typedef Aspose::Slides::MathText::IMathFunction BaseType1;
    typedef Aspose::Slides::MathText::IHasControlCharacterProperties BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::MathText::MathElementBase;
    friend class Aspose::Slides::DOM::Serialization::PptxSerialization::PartParsers::DOMObjectsSerialization::Omml::Mappers::FunctionMapper;
    /// @endcond
    
public:

    /// <summary>
    /// Function name
    /// For example, function names are sin and cos
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto func = System::MakeObject<MathematicalText>(u"sin")->Function(u"x");
    /// auto funcName = func->get_Name();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathElement> get_Name() override;
    /// <summary>
    /// Function Argument
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto func = System::MakeObject<MathematicalText>(u"sin")->Function(u"x");
    /// auto baseArg = func->get_Base();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathElement> get_Base() override;
    
    /// <summary>
    /// Initializes a new instance of the MathFunction class.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto func = System::MakeObject<MathFunction>(System::MakeObject<MathematicalText>(u"sin"), System::MakeObject<MathematicalText>(u"x"));
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathFunction(System::SharedPtr<IMathElement> funcName, System::SharedPtr<IMathElement> baseArgument);
    /// <summary>
    /// Initializes a new instance of the MathFunction class.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto func = System::MakeObject<MathFunction>(u"sin", System::MakeObject<MathematicalText>(u"x"));
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathFunction(System::String funcName, System::SharedPtr<IMathElement> baseArgument);
    
    /// <summary>
    /// Get children elements
    /// </summary>
    /// <returns></returns>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IMathElement>> GetChildren() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool get_AreFormattingPropertiesDefault();
    
    static const ASPOSE_SLIDES_LOCAL_API System::String c_sinString;
    static const ASPOSE_SLIDES_LOCAL_API System::String c_cosString;
    static const ASPOSE_SLIDES_LOCAL_API System::String c_tanString;
    static const ASPOSE_SLIDES_LOCAL_API System::String c_cscString;
    static const ASPOSE_SLIDES_LOCAL_API System::String c_secString;
    static const ASPOSE_SLIDES_LOCAL_API System::String c_cotString;
    static const ASPOSE_SLIDES_LOCAL_API System::String c_hyperbolicSinString;
    static const ASPOSE_SLIDES_LOCAL_API System::String c_hyperbolicCosString;
    static const ASPOSE_SLIDES_LOCAL_API System::String c_hyperbolicTanString;
    static const ASPOSE_SLIDES_LOCAL_API System::String c_hyperbolicCscString;
    static const ASPOSE_SLIDES_LOCAL_API System::String c_hyperbolicSecString;
    static const ASPOSE_SLIDES_LOCAL_API System::String c_hyperbolicCotString;
    static const ASPOSE_SLIDES_LOCAL_API System::String c_logString;
    static const ASPOSE_SLIDES_LOCAL_API System::String c_lnString;
    static const ASPOSE_SLIDES_LOCAL_API System::String c_limString;
    static const ASPOSE_SLIDES_LOCAL_API System::String c_minString;
    static const ASPOSE_SLIDES_LOCAL_API System::String c_maxString;
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::OmmlControlCharacterPPTXUnsupportedProps> ControlCharacterPropertiesInternal;
    
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathFunction> Sin(System::SharedPtr<IMathElement> baseArgument);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathFunction> Cos(System::SharedPtr<IMathElement> baseArgument);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathFunction> Tan(System::SharedPtr<IMathElement> baseArgument);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathFunction> Csc(System::SharedPtr<IMathElement> baseArgument);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathFunction> Sec(System::SharedPtr<IMathElement> baseArgument);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathFunction> Cot(System::SharedPtr<IMathElement> baseArgument);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathFunction> ArcSin(System::SharedPtr<IMathElement> baseArgument);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathFunction> ArcCos(System::SharedPtr<IMathElement> baseArgument);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathFunction> ArcTan(System::SharedPtr<IMathElement> baseArgument);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathFunction> ArcCsc(System::SharedPtr<IMathElement> baseArgument);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathFunction> ArcSec(System::SharedPtr<IMathElement> baseArgument);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathFunction> ArcCot(System::SharedPtr<IMathElement> baseArgument);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathFunction> HyperbolicSin(System::SharedPtr<IMathElement> baseArgument);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathFunction> HyperbolicCos(System::SharedPtr<IMathElement> baseArgument);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathFunction> HyperbolicTan(System::SharedPtr<IMathElement> baseArgument);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathFunction> HyperbolicCsc(System::SharedPtr<IMathElement> baseArgument);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathFunction> HyperbolicSec(System::SharedPtr<IMathElement> baseArgument);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathFunction> HyperbolicCot(System::SharedPtr<IMathElement> baseArgument);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathFunction> HyperbolicArcSin(System::SharedPtr<IMathElement> baseArgument);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathFunction> HyperbolicArcCos(System::SharedPtr<IMathElement> baseArgument);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathFunction> HyperbolicArcTan(System::SharedPtr<IMathElement> baseArgument);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathFunction> HyperbolicArcCsc(System::SharedPtr<IMathElement> baseArgument);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathFunction> HyperbolicArcSec(System::SharedPtr<IMathElement> baseArgument);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathFunction> HyperbolicArcCot(System::SharedPtr<IMathElement> baseArgument);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathFunction> Log(System::SharedPtr<IMathElement> logBase, System::SharedPtr<IMathElement> argument);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathFunction> Lg(System::SharedPtr<IMathElement> argument);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathFunction> Ln(System::SharedPtr<IMathElement> argument);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathFunction> Lim(System::SharedPtr<IMathElement> baseArg, System::SharedPtr<IMathElement> limit);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathFunction> Min(System::SharedPtr<IMathElement> baseArg, System::SharedPtr<IMathElement> limit);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathFunction> Max(System::SharedPtr<IMathElement> baseArg, System::SharedPtr<IMathElement> limit);
    /// @endcond
    ASPOSE_SLIDES_SHARED_API void Accept(System::SharedPtr<MathVisitor> visitor) override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~MathFunction();
    
private:

    System::SharedPtr<IMathElement> pr_Name;
    
    /// <summary>
    /// Function name
    /// For example, function names are sin and cos
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto func = System::MakeObject<MathematicalText>(u"sin")->Function(u"x");
    /// auto funcName = func->get_Name();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_Name(System::SharedPtr<IMathElement> value);
    
    System::SharedPtr<IMathElement> pr_Base;
    
    /// <summary>
    /// Function Argument
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto func = System::MakeObject<MathematicalText>(u"sin")->Function(u"x");
    /// auto baseArg = func->get_Base();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_Base(System::SharedPtr<IMathElement> value);
    /// <summary>
    /// Control Character Properties
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::OmmlControlCharacterPPTXUnsupportedProps> get_ControlCharacterProperties() override;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


