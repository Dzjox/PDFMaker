#pragma once

#include <system/object.h>

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
namespace MathMLSerialization
{
class MathMLSerializer;
class MathMLSerializerVisitor;
} // namespace MathMLSerialization
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
class NaryOperatorPropertiesMapper;
} // namespace Mappers
} // namespace Omml
} // namespace DOMObjectsSerialization
} // namespace PartParsers
} // namespace PptxSerialization
} // namespace Serialization
} // namespace DOM
namespace MathText
{
namespace Rendering
{
class MathDrawingBase;
class MathRenderContext;
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
/// IMathElement with Control Character Properties
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS IHasControlCharacterProperties : public virtual System::Object
{
    typedef IHasControlCharacterProperties ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    
    /// @cond
    friend class Aspose::Slides::MathText::Rendering::MathDrawingBase;
    friend class Aspose::Slides::MathText::Rendering::MathRenderContext;
    friend class Aspose::Slides::DOM::Serialization::MathMLSerialization::MathMLSerializer;
    friend class Aspose::Slides::DOM::Serialization::MathMLSerialization::MathMLSerializerVisitor;
    friend class Aspose::Slides::DOM::Serialization::PptxSerialization::PartParsers::DOMObjectsSerialization::Omml::Mappers::NaryOperatorPropertiesMapper;
    /// @endcond
    
protected:

    /// @cond
    virtual ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::OmmlControlCharacterPPTXUnsupportedProps> get_ControlCharacterProperties() = 0;
    /// @endcond
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


