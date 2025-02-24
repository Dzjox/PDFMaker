#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/MathText/IMathBorderBox.h>

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
class BorderBoxPPTXSerialization;
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
/// Draws a rectangular or some other border around the IMathElement. 
/// </summary>
/// <example>Example:
/// <code>
/// auto borderBox = System::MakeObject<MathBorderBox>(System::MakeObject<MathematicalText>(u"x"));
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS MathBorderBox final : public Aspose::Slides::MathText::MathElementBase, public Aspose::Slides::MathText::IMathBorderBox, public Aspose::Slides::MathText::IHasControlCharacterProperties
{
    typedef MathBorderBox ThisType;
    typedef Aspose::Slides::MathText::MathElementBase BaseType;
    typedef Aspose::Slides::MathText::IMathBorderBox BaseType1;
    typedef Aspose::Slides::MathText::IHasControlCharacterProperties BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::DOM::Serialization::PptxSerialization::PartParsers::DOMObjectsSerialization::Omml::BorderBoxPPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Base argument
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathBorderBox>(System::MakeObject<MathematicalText>(u"x"));
    /// auto baseArg = borderBox->get_Base();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathElement> get_Base() override;
    /// <summary>
    /// Hide Top Edge (default is false) - specifies the hidden or shown state of the top edge of border box.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathBorderBox>(System::MakeObject<MathematicalText>(u"x"));
    /// borderBox->set_HideTop(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_HideTop() override;
    /// <summary>
    /// Hide Top Edge (default is false) - specifies the hidden or shown state of the top edge of border box.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathBorderBox>(System::MakeObject<MathematicalText>(u"x"));
    /// borderBox->set_HideTop(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_HideTop(bool value) override;
    /// <summary>
    /// Hide Bottom Edge (default is false) - specifies the hidden or shown state of the bottom edge of border box.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathBorderBox>(System::MakeObject<MathematicalText>(u"x"));
    /// borderBox->set_HideBottom(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_HideBottom() override;
    /// <summary>
    /// Hide Bottom Edge (default is false) - specifies the hidden or shown state of the bottom edge of border box.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathBorderBox>(System::MakeObject<MathematicalText>(u"x"));
    /// borderBox->set_HideBottom(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_HideBottom(bool value) override;
    /// <summary>
    /// Hide Left Edge (default is false) - specifies the hidden or shown state of the left edge of border box.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathBorderBox>(System::MakeObject<MathematicalText>(u"x"));
    /// borderBox->set_HideLeft(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_HideLeft() override;
    /// <summary>
    /// Hide Left Edge (default is false) - specifies the hidden or shown state of the left edge of border box.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathBorderBox>(System::MakeObject<MathematicalText>(u"x"));
    /// borderBox->set_HideLeft(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_HideLeft(bool value) override;
    /// <summary>
    /// Hide Right Edge (default is false) - specifies the hidden or shown state of the right edge of border box.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathBorderBox>(System::MakeObject<MathematicalText>(u"x"));
    /// borderBox->set_HideRight(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_HideRight() override;
    /// <summary>
    /// Hide Right Edge (default is false) - specifies the hidden or shown state of the right edge of border box.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathBorderBox>(System::MakeObject<MathematicalText>(u"x"));
    /// borderBox->set_HideRight(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_HideRight(bool value) override;
    /// <summary>
    /// Strikethrough Horizontal (default is false) - specifies the hidden or shown state of a strikethrough horizontal line.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathBorderBox>(System::MakeObject<MathematicalText>(u"x"));
    /// borderBox->set_StrikethroughHorizontal(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_StrikethroughHorizontal() override;
    /// <summary>
    /// Strikethrough Horizontal (default is false) - specifies the hidden or shown state of a strikethrough horizontal line.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathBorderBox>(System::MakeObject<MathematicalText>(u"x"));
    /// borderBox->set_StrikethroughHorizontal(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_StrikethroughHorizontal(bool value) override;
    /// <summary>
    /// Strikethrough Vertical (default is false) - specifies the hidden or shown state of a strikethrough vertical line.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathBorderBox>(System::MakeObject<MathematicalText>(u"x"));
    /// borderBox->set_StrikethroughVertical(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_StrikethroughVertical() override;
    /// <summary>
    /// Strikethrough Vertical (default is false) - specifies the hidden or shown state of a strikethrough vertical line.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathBorderBox>(System::MakeObject<MathematicalText>(u"x"));
    /// borderBox->set_StrikethroughVertical(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_StrikethroughVertical(bool value) override;
    /// <summary>
    /// Strikethrough Bottom-Left to Top-Right (default is false).
    /// Specifies the hidden or shown state of a strikethrough diagonal line from the bottom-left corner to the top-right corner of border box.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathBorderBox>(System::MakeObject<MathematicalText>(u"x"));
    /// borderBox->set_StrikethroughBottomLeftToTopRight(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_StrikethroughBottomLeftToTopRight() override;
    /// <summary>
    /// Strikethrough Bottom-Left to Top-Right (default is false).
    /// Specifies the hidden or shown state of a strikethrough diagonal line from the bottom-left corner to the top-right corner of border box.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathBorderBox>(System::MakeObject<MathematicalText>(u"x"));
    /// borderBox->set_StrikethroughBottomLeftToTopRight(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_StrikethroughBottomLeftToTopRight(bool value) override;
    /// <summary>
    /// Strikethrough Top-Left to Bottom-Right (default is false).
    /// Specifies the hidden or shown state of a strikethrough diagonal line from the top-left corner to the bottom-right corner of border box.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathBorderBox>(System::MakeObject<MathematicalText>(u"x"));
    /// borderBox->set_StrikethroughTopLeftToBottomRight(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool get_StrikethroughTopLeftToBottomRight() override;
    /// <summary>
    /// Strikethrough Top-Left to Bottom-Right (default is false).
    /// Specifies the hidden or shown state of a strikethrough diagonal line from the top-left corner to the bottom-right corner of border box.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathBorderBox>(System::MakeObject<MathematicalText>(u"x"));
    /// borderBox->set_StrikethroughTopLeftToBottomRight(true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_StrikethroughTopLeftToBottomRight(bool value) override;
    
    /// <summary>
    /// Creates MathBorderBox element with rectangular border
    /// </summary>
    /// <param name="element">The base element to which the border box is applied. Can be null.</param>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathBorderBox>(System::MakeObject<MathematicalText>(u"x"));
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathBorderBox(System::SharedPtr<IMathElement> element);
    /// <summary>
    /// Creates MathBorderBox element 
    /// </summary>
    /// <param name="element">The base element to which the border box is applied</param>
    /// <param name="hideTop">Hide Top Edge</param>
    /// <param name="hideBottom">Hide Bottom Edge</param>
    /// <param name="hideLeft">Hide Left Edge</param>
    /// <param name="hideRight">Hide Right Edge</param>
    /// <param name="strikethroughHorizontal">Strikethrough Horizontal</param>
    /// <param name="strikethroughVertical">Strikethrough Vertical</param>
    /// <param name="strikethroughBottomLeftToTopRight">Strikethrough Bottom-Left to Top-Right</param>
    /// <param name="strikethroughTopLeftToBottomRight">Strikethrough Top-Left to Bottom-Right</param>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathBorderBox>(System::MakeObject<MathematicalText>(u"x"), true, true, true, false, true, true, true, true);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathBorderBox(System::SharedPtr<IMathElement> element, bool hideTop, bool hideBottom, bool hideLeft, bool hideRight, bool strikethroughHorizontal, bool strikethroughVertical, bool strikethroughBottomLeftToTopRight, bool strikethroughTopLeftToBottomRight);
    
    /// <summary>
    /// Get children elements
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IMathElement>> GetChildren() override;
    
protected:

    /// @cond
    System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::OmmlControlCharacterPPTXUnsupportedProps> ControlCharacterPropertiesInternal;
    /// @endcond
    
    ASPOSE_SLIDES_SHARED_API void Accept(System::SharedPtr<MathVisitor> visitor) override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~MathBorderBox();
    
private:

    System::SharedPtr<IMathElement> pr_Base;
    
    /// <summary>
    /// Base argument
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathBorderBox>(System::MakeObject<MathematicalText>(u"x"));
    /// auto baseArg = borderBox->get_Base();
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_Base(System::SharedPtr<IMathElement> value);
    
    bool pr_HideTop;
    bool pr_HideBottom;
    bool pr_HideLeft;
    bool pr_HideRight;
    bool pr_StrikethroughHorizontal;
    bool pr_StrikethroughVertical;
    bool pr_StrikethroughBottomLeftToTopRight;
    bool pr_StrikethroughTopLeftToBottomRight;
    
    /// <summary>
    /// Control Character Properties
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::OmmlControlCharacterPPTXUnsupportedProps> get_ControlCharacterProperties() override;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


