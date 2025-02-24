#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/MathText/IMathRadical.h>
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
class RadicalMapper;
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
namespace Rendering
{
class RadicalDrawing;
} // namespace Rendering
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
/// Specifies the radical function, consisting of a base, and an optional degree.
/// Example of radical object is √𝑥.
/// </summary>
/// <example>Example:
/// <code>
/// auto radical = System::MakeObject<MathRadical>(System::MakeObject<MathematicalText>(u"x"), System::MakeObject<MathematicalText>(u"3"));
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS MathRadical final : public Aspose::Slides::MathText::MathElementBase, public Aspose::Slides::MathText::IMathRadical, public Aspose::Slides::MathText::IHasControlCharacterProperties
{
    typedef MathRadical ThisType;
    typedef Aspose::Slides::MathText::MathElementBase BaseType;
    typedef Aspose::Slides::MathText::IMathRadical BaseType1;
    typedef Aspose::Slides::MathText::IHasControlCharacterProperties BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::MathText::Rendering::RadicalDrawing;
    friend class Aspose::Slides::DOM::Serialization::PptxSerialization::PartParsers::DOMObjectsSerialization::Omml::Mappers::RadicalMapper;
    /// @endcond
    
public:

    /// <summary>
    /// Base argument
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto radical = System::MakeObject<MathRadical>(System::MakeObject<MathematicalText>(u"x"), System::MakeObject<MathematicalText>(u"3"));
    /// auto baseElem = radical->get_Base();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathElement> get_Base() override;
    /// <summary>
    /// Degree argument
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto radical = System::MakeObject<MathRadical>(System::MakeObject<MathematicalText>(u"x"), System::MakeObject<MathematicalText>(u"3"));
    /// auto degreeElem = radical->get_Degree();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathElement> get_Degree() override;
    /// <summary>
    /// Hide degree
    /// When is true, the degree is not shown, as in √𝑥
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto radical = System::MakeObject<MathRadical>(System::MakeObject<MathematicalText>(u"x"), System::MakeObject<MathematicalText>(u"3"));
    /// radical->set_HideDegree(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_HideDegree() override;
    /// <summary>
    /// Hide degree
    /// When is true, the degree is not shown, as in √𝑥
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto radical = System::MakeObject<MathRadical>(System::MakeObject<MathematicalText>(u"x"), System::MakeObject<MathematicalText>(u"3"));
    /// radical->set_HideDegree(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_HideDegree(bool value) override;
    
    /// <summary>
    /// Initializes a new instance of the MathRadical class.
    /// </summary>
    /// <param name="baseArgument">Base</param>
    /// <param name="degreeArgument">Degree</param>
    /// <example>Example:
    /// <code>
    /// auto radical = System::MakeObject<MathRadical>(System::MakeObject<MathematicalText>(u"x"), System::MakeObject<MathematicalText>(u"3"));
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathRadical(System::SharedPtr<IMathElement> baseArgument, System::SharedPtr<IMathElement> degreeArgument);
    
    /// <summary>
    /// Get children elements
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IMathElement>> GetChildren() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool get_AreFormattingPropertiesDefault();
    
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::OmmlControlCharacterPPTXUnsupportedProps> ControlCharacterPropertiesInternal;
    /// @endcond
    
    ASPOSE_SLIDES_SHARED_API void Accept(System::SharedPtr<MathVisitor> visitor) override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~MathRadical();
    
private:

    bool pr_HideDegree;
    
    /// <summary>
    /// Control Character Properties
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::OmmlControlCharacterPPTXUnsupportedProps> get_ControlCharacterProperties() override;
    
    static const ASPOSE_SLIDES_LOCAL_API int8_t c_DefaultArgumentSize;
    System::SharedPtr<IMathElement> m_base;
    System::SharedPtr<MathArgument> m_degree;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


