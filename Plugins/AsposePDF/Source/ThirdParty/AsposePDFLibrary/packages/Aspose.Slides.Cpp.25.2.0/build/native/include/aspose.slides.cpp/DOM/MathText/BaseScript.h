#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
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
class DomToXmlParserMapperVisitor;
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
class MathLeftSubSuperscriptElement;
class MathRightSubSuperscriptElement;
class MathSubscriptElement;
class MathSuperscriptElement;
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
/// Math script
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS BaseScript : public Aspose::Slides::MathText::MathElementBase, public Aspose::Slides::MathText::IHasControlCharacterProperties
{
    typedef BaseScript ThisType;
    typedef Aspose::Slides::MathText::MathElementBase BaseType;
    typedef Aspose::Slides::MathText::IHasControlCharacterProperties BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    
    /// @cond
    friend class Aspose::Slides::MathText::MathLeftSubSuperscriptElement;
    friend class Aspose::Slides::MathText::MathRightSubSuperscriptElement;
    friend class Aspose::Slides::MathText::MathSubscriptElement;
    friend class Aspose::Slides::MathText::MathSuperscriptElement;
    friend class Aspose::Slides::DOM::Serialization::PptxSerialization::PartParsers::DOMObjectsSerialization::Omml::Mappers::DomToXmlParserMapperVisitor;
    friend class Aspose::Slides::DOM::Serialization::PptxSerialization::PartParsers::DOMObjectsSerialization::Omml::Mappers::ScriptMapper;
    /// @endcond
    
public:

    /// <summary>
    /// Base argument
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathElement> get_Base();
    
protected:

    /// @cond
    static const ASPOSE_SLIDES_LOCAL_API int8_t c_DefaultArgumentSize;
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::OmmlControlCharacterPPTXUnsupportedProps> ControlCharacterPropertiesInternal;
    /// @endcond
    
    /// <summary>
    /// Hide constructor
    /// </summary>
    ASPOSE_SLIDES_SHARED_API BaseScript(System::SharedPtr<IMathElement> scriptBase);
    
private:

    System::SharedPtr<IMathElement> m_base;
    
    /// <summary>
    /// Control Character Properties
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::OmmlControlCharacterPPTXUnsupportedProps> get_ControlCharacterProperties() override;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


