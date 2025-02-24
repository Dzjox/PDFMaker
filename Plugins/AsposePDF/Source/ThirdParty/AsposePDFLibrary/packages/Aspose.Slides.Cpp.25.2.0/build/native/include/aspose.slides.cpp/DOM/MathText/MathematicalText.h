#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/MathText/IMathematicalText.h>

#include "DOM/MathText/MathElementBase.h"
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
class MathElementMapper;
class TextContentMapper;
} // namespace Mappers
} // namespace Omml
} // namespace DOMObjectsSerialization
} // namespace PartParsers
} // namespace PptxSerialization
} // namespace Serialization
} // namespace DOM
class IPortionFormat;
namespace MathText
{
class IMathElement;
enum class MathFontStyle;
class MathVisitor;
namespace Rendering
{
class MathParagraphDrawing;
class MathTextDrawing;
} // namespace Rendering
class RunProperties;
} // namespace MathText
class PortionFormat;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Mathematical text
/// </summary>
/// <example>Example:
/// <code>
/// auto mathText = System::MakeObject<MathematicalText>(u"x+y");
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS MathematicalText final : public Aspose::Slides::MathText::MathElementBase, public Aspose::Slides::MathText::IMathematicalText
{
    typedef MathematicalText ThisType;
    typedef Aspose::Slides::MathText::MathElementBase BaseType;
    typedef Aspose::Slides::MathText::IMathematicalText BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::MathText::Rendering::MathTextDrawing;
    friend class Aspose::Slides::MathText::Rendering::MathParagraphDrawing;
    friend class Aspose::Slides::DOM::Serialization::PptxSerialization::PartParsers::DOMObjectsSerialization::Omml::Mappers::DomToXmlParserMapperVisitor;
    friend class Aspose::Slides::DOM::Serialization::PptxSerialization::PartParsers::DOMObjectsSerialization::Omml::Mappers::MathElementMapper;
    friend class Aspose::Slides::DOM::Serialization::PptxSerialization::PartParsers::DOMObjectsSerialization::Omml::Mappers::TextContentMapper;
    /// @endcond
    
public:

    /// <summary>
    /// Text value
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathText = System::MakeObject<MathematicalText>(u"x+y");
    /// System::String textValue = mathText->get_Value();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::String get_Value() override;
    /// <summary>
    /// Text value
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathText = System::MakeObject<MathematicalText>(u"x+y");
    /// System::String textValue = mathText->get_Value();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_Value(System::String value) override;
    /// <summary>
    /// Text formatting properties
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathText = System::MakeObject<MathematicalText>(u"x+y");
    /// mathText->get_Format()->set_FontHeight(28.0f);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPortionFormat> get_Format() override;
    
    /// <summary>
    /// Default constructor (create String::Empty Value)
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathText = System::MakeObject<MathematicalText>();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathematicalText();
    /// <summary>
    /// Create MathText with single symbol
    /// </summary>
    /// <param name="mathSymbol">single symbol</param>
    /// <example>Example:
    /// <code>
    /// auto mathText = System::MakeObject<MathematicalText>(u'$');
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathematicalText(char16_t mathSymbol);
    /// <summary>
    /// Create MathematicalText from text
    /// </summary>
    /// <param name="mathText">text value</param>
    /// <example>Example:
    /// <code>
    /// auto mathText = System::MakeObject<MathematicalText>(u"x+y");
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathematicalText(System::String mathText);
    /// <summary>
    /// Create MathematicalText from text and format settings
    /// </summary>
    /// <param name="mathText">text value</param>
    /// <param name="portionFormat">text format settings</param>
    /// <example>Example:
    /// <code>
    /// auto format = [&]{ auto tmp_0 = System::MakeObject<PortionFormat>(); tmp_0->set_FontHeight(12); return tmp_0; }();
    /// auto mathText = System::MakeObject<MathematicalText>(u"x+y", format);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathematicalText(System::String mathText, System::SharedPtr<IPortionFormat> portionFormat);
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::MathText::RunProperties> get_RunProperties();
    ASPOSE_SLIDES_LOCAL_API void set_RunProperties(System::SharedPtr<Aspose::Slides::MathText::RunProperties> value);
    
    static ASPOSE_SLIDES_LOCAL_API MathFontStyle GetFontStyle(System::SharedPtr<IPortionFormat> format);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MathematicalText> Differential(System::String value);
    /// @endcond
    ASPOSE_SLIDES_SHARED_API void Accept(System::SharedPtr<MathVisitor> visitor) override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~MathematicalText();
    
private:

    System::SharedPtr<Aspose::Slides::MathText::RunProperties> m_runProps;
    System::SharedPtr<PortionFormat> m_format;
    System::String m_text;
    
    /// <summary>
    /// Get children elements
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IMathElement>> GetChildren() override;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


