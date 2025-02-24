#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/MathText/IMathElement.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace MathText
{
class IMathElementCollection;
enum class MathRowSpacingRule;
enum class MathVerticalAlignment;
} // namespace MathText
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Specifies a vertical array of equations or any mathematical objects
/// </summary>
/// <example>Example:
/// <code>
/// auto mathArray = System::MakeObject<MathArray>(System::MakeObject<MathematicalText>(u"item1"));
/// </code>
/// </example>
class ASPOSE_SLIDES_API_SHARED_CLASS IMathArray : public virtual Aspose::Slides::MathText::IMathElement
{
    typedef IMathArray ThisType;
    typedef Aspose::Slides::MathText::IMathElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// The set of items of the array
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathArray = System::MakeObject<MathArray>(System::MakeObject<MathematicalText>(u"item1"));
    /// mathArray->get_Arguments()->Add(System::MakeObject<MathematicalText>(u"item2"));
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathElementCollection> get_Arguments() = 0;
    /// <summary>
    /// Specifies alignment of the array relative to surrounding text
    /// Text outside of the array can be aligned with the bottom, top, or center of a array object.
    /// Default value: Center
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathArray = System::MakeObject<MathArray>(System::MakeObject<MathematicalText>(u"item1"));
    /// mathArray->set_BaseJustification(MathVerticalAlignment::Top);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API MathVerticalAlignment get_BaseJustification() = 0;
    /// <summary>
    /// Specifies alignment of the array relative to surrounding text
    /// Text outside of the array can be aligned with the bottom, top, or center of a array object.
    /// Default value: Center
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathArray = System::MakeObject<MathArray>(System::MakeObject<MathematicalText>(u"item1"));
    /// mathArray->set_BaseJustification(MathVerticalAlignment::Top);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_BaseJustification(MathVerticalAlignment value) = 0;
    /// <summary>
    /// Maximum Distribution
    /// When true, the array is spaced to the maximum width of the containing element(page, column, cell, etc.).
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathArray = System::MakeObject<MathArray>(System::MakeObject<MathematicalText>(u"item1"));
    /// mathArray->set_MaximumDistribution(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_MaximumDistribution() = 0;
    /// <summary>
    /// Maximum Distribution
    /// When true, the array is spaced to the maximum width of the containing element(page, column, cell, etc.).
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathArray = System::MakeObject<MathArray>(System::MakeObject<MathematicalText>(u"item1"));
    /// mathArray->set_MaximumDistribution(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_MaximumDistribution(bool value) = 0;
    /// <summary>
    /// Object Distribution
    /// When true, the contents of the array are spaced to the maximum width of the array object.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathArray = System::MakeObject<MathArray>(System::MakeObject<MathematicalText>(u"item1"));
    /// mathArray->set_ObjectDistribution(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ObjectDistribution() = 0;
    /// <summary>
    /// Object Distribution
    /// When true, the contents of the array are spaced to the maximum width of the array object.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathArray = System::MakeObject<MathArray>(System::MakeObject<MathematicalText>(u"item1"));
    /// mathArray->set_ObjectDistribution(true);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ObjectDistribution(bool value) = 0;
    /// <summary>
    /// The type of vertical spacing between array elements
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathArray = System::MakeObject<MathArray>(System::MakeObject<MathematicalText>(u"item1"));
    /// mathArray->set_RowSpacingRule(MathRowSpacingRule::OneAndAHalfLineGap);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API MathRowSpacingRule get_RowSpacingRule() = 0;
    /// <summary>
    /// The type of vertical spacing between array elements
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathArray = System::MakeObject<MathArray>(System::MakeObject<MathematicalText>(u"item1"));
    /// mathArray->set_RowSpacingRule(MathRowSpacingRule::OneAndAHalfLineGap);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_RowSpacingRule(MathRowSpacingRule value) = 0;
    /// <summary>
    /// Spacing between rows of an array
    /// It is used only when RowSpacingRule is set to 3 Exactly in which case the unit of measure is points 
    /// or Multiple in which case the unit of measure is half-lines.
    /// Default: 0
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathArray = System::MakeObject<MathArray>(System::MakeObject<MathematicalText>(u"item1"));
    /// mathArray->set_RowSpacingRule(MathRowSpacingRule::Exactly);
    /// mathArray->set_RowSpacing(10);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint32_t get_RowSpacing() = 0;
    /// <summary>
    /// Spacing between rows of an array
    /// It is used only when RowSpacingRule is set to 3 Exactly in which case the unit of measure is points 
    /// or Multiple in which case the unit of measure is half-lines.
    /// Default: 0
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathArray = System::MakeObject<MathArray>(System::MakeObject<MathematicalText>(u"item1"));
    /// mathArray->set_RowSpacingRule(MathRowSpacingRule::Exactly);
    /// mathArray->set_RowSpacing(10);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_RowSpacing(uint32_t value) = 0;
    
    /// <summary>
    /// Returns item at the specified index of the array.
    /// Read-only <see cref="Aspose::Slides::MathText::IMathElement"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathElement> get_Argument(int32_t index) = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


