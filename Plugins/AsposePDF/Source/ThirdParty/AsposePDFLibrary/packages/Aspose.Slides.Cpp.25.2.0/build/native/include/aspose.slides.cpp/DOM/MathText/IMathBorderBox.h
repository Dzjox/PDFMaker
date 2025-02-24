#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/MathText/IMathElement.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Draws a rectangular or some other border around the IMathElement.
/// </summary>
/// <example>Example:
/// <code>
/// auto borderBox = System::MakeObject<MathematicalText>(u"x+y+z")->ToBorderBox();
/// </code>
/// </example>
class ASPOSE_SLIDES_API_SHARED_CLASS IMathBorderBox : public virtual Aspose::Slides::MathText::IMathElement
{
    typedef IMathBorderBox ThisType;
    typedef Aspose::Slides::MathText::IMathElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Base argument
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathematicalText>(u"x+y+z")->ToBorderBox();
    /// auto baseArg = borderBox->get_Base();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathElement> get_Base() = 0;
    /// <summary>
    /// Hide Top Edge (default is false) - specifies the hidden or shown state of the top edge of border box.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathematicalText>(u"x+y+z")->ToBorderBox();
    /// borderBox->set_HideTop(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_HideTop() = 0;
    /// <summary>
    /// Hide Top Edge (default is false) - specifies the hidden or shown state of the top edge of border box.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathematicalText>(u"x+y+z")->ToBorderBox();
    /// borderBox->set_HideTop(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_HideTop(bool value) = 0;
    /// <summary>
    /// Hide Bottom Edge (default is false) - specifies the hidden or shown state of the bottom edge of border box.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathematicalText>(u"x+y+z")->ToBorderBox();
    /// borderBox->set_HideBottom(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_HideBottom() = 0;
    /// <summary>
    /// Hide Bottom Edge (default is false) - specifies the hidden or shown state of the bottom edge of border box.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathematicalText>(u"x+y+z")->ToBorderBox();
    /// borderBox->set_HideBottom(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_HideBottom(bool value) = 0;
    /// <summary>
    /// Hide Left Edge (default is false) - specifies the hidden or shown state of the left edge of border box.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathematicalText>(u"x+y+z")->ToBorderBox();
    /// borderBox->set_HideLeft(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_HideLeft() = 0;
    /// <summary>
    /// Hide Left Edge (default is false) - specifies the hidden or shown state of the left edge of border box.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathematicalText>(u"x+y+z")->ToBorderBox();
    /// borderBox->set_HideLeft(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_HideLeft(bool value) = 0;
    /// <summary>
    /// Hide Right Edge (default is false) - specifies the hidden or shown state of the right edge of border box.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathematicalText>(u"x+y+z")->ToBorderBox();
    /// borderBox->set_HideRight(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_HideRight() = 0;
    /// <summary>
    /// Hide Right Edge (default is false) - specifies the hidden or shown state of the right edge of border box.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathematicalText>(u"x+y+z")->ToBorderBox();
    /// borderBox->set_HideRight(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_HideRight(bool value) = 0;
    /// <summary>
    /// Strikethrough Horizontal (default is false) - specifies the hidden or shown state of a strikethrough horizontal line.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathematicalText>(u"x+y+z")->ToBorderBox();
    /// borderBox->set_StrikethroughHorizontal(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_StrikethroughHorizontal() = 0;
    /// <summary>
    /// Strikethrough Horizontal (default is false) - specifies the hidden or shown state of a strikethrough horizontal line.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathematicalText>(u"x+y+z")->ToBorderBox();
    /// borderBox->set_StrikethroughHorizontal(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_StrikethroughHorizontal(bool value) = 0;
    /// <summary>
    /// Strikethrough Vertical (default is false) - specifies the hidden or shown state of a strikethrough vertical line.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathematicalText>(u"x+y+z")->ToBorderBox();
    /// borderBox->set_StrikethroughVertical(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_StrikethroughVertical() = 0;
    /// <summary>
    /// Strikethrough Vertical (default is false) - specifies the hidden or shown state of a strikethrough vertical line.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathematicalText>(u"x+y+z")->ToBorderBox();
    /// borderBox->set_StrikethroughVertical(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_StrikethroughVertical(bool value) = 0;
    /// <summary>
    /// Strikethrough Bottom-Left to Top-Right (default is false).
    /// Specifies the hidden or shown state of a strikethrough diagonal line from the bottom-left corner to the top-right corner of border box.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathematicalText>(u"x+y+z")->ToBorderBox();
    /// borderBox->set_StrikethroughBottomLeftToTopRight(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_StrikethroughBottomLeftToTopRight() = 0;
    /// <summary>
    /// Strikethrough Bottom-Left to Top-Right (default is false).
    /// Specifies the hidden or shown state of a strikethrough diagonal line from the bottom-left corner to the top-right corner of border box.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathematicalText>(u"x+y+z")->ToBorderBox();
    /// borderBox->set_StrikethroughBottomLeftToTopRight(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_StrikethroughBottomLeftToTopRight(bool value) = 0;
    /// <summary>
    /// Strikethrough Top-Left to Bottom-Right (default is false).
    /// Specifies the hidden or shown state of a strikethrough diagonal line from the top-left corner to the bottom-right corner of border box.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathematicalText>(u"x+y+z")->ToBorderBox();
    /// borderBox->set_StrikethroughTopLeftToBottomRight(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_StrikethroughTopLeftToBottomRight() = 0;
    /// <summary>
    /// Strikethrough Top-Left to Bottom-Right (default is false).
    /// Specifies the hidden or shown state of a strikethrough diagonal line from the top-left corner to the bottom-right corner of border box.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto borderBox = System::MakeObject<MathematicalText>(u"x+y+z")->ToBorderBox();
    /// borderBox->set_StrikethroughTopLeftToBottomRight(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_StrikethroughTopLeftToBottomRight(bool value) = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


