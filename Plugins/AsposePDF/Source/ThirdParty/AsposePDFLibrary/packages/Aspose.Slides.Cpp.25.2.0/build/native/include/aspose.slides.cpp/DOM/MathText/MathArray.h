#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/MathText/IMathArray.h>
#include <cstdint>

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
class ArrayFunctionMapper;
class ArrayFunctionPropertiesMapper;
} // namespace Mappers
} // namespace Omml
} // namespace DOMObjectsSerialization
} // namespace PartParsers
} // namespace PptxSerialization
} // namespace Serialization
} // namespace DOM
namespace MathText
{
class IMathArrayProperties;
class IMathElement;
class IMathElementCollection;
class MathArrayProperties;
enum class MathRowSpacingRule;
enum class MathVerticalAlignment;
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
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IEnumerable;
} // namespace Generic
} // namespace Collections
} // namespace System
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
class ASPOSE_SLIDES_SHARED_CLASS MathArray final : public Aspose::Slides::MathText::MathElementBase, public Aspose::Slides::MathText::IMathArray
{
    typedef MathArray ThisType;
    typedef Aspose::Slides::MathText::MathElementBase BaseType;
    typedef Aspose::Slides::MathText::IMathArray BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::DOM::Serialization::PptxSerialization::PartParsers::DOMObjectsSerialization::Omml::Mappers::ArrayFunctionMapper;
    friend class Aspose::Slides::DOM::Serialization::PptxSerialization::PartParsers::DOMObjectsSerialization::Omml::Mappers::ArrayFunctionPropertiesMapper;
    /// @endcond
    
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
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathElementCollection> get_Arguments() override;
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
    ASPOSE_SLIDES_SHARED_API MathVerticalAlignment get_BaseJustification() override;
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
    ASPOSE_SLIDES_SHARED_API void set_BaseJustification(MathVerticalAlignment value) override;
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
    ASPOSE_SLIDES_SHARED_API bool get_MaximumDistribution() override;
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
    ASPOSE_SLIDES_SHARED_API void set_MaximumDistribution(bool value) override;
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
    ASPOSE_SLIDES_SHARED_API bool get_ObjectDistribution() override;
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
    ASPOSE_SLIDES_SHARED_API void set_ObjectDistribution(bool value) override;
    /// <summary>
    /// The type of vertical spacing between array elements
    /// Default: SingleLineGap
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathArray = System::MakeObject<MathArray>(System::MakeObject<MathematicalText>(u"item1"));
    /// mathArray->set_RowSpacingRule(MathRowSpacingRule::OneAndAHalfLineGap);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathRowSpacingRule get_RowSpacingRule() override;
    /// <summary>
    /// The type of vertical spacing between array elements
    /// Default: SingleLineGap
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathArray = System::MakeObject<MathArray>(System::MakeObject<MathematicalText>(u"item1"));
    /// mathArray->set_RowSpacingRule(MathRowSpacingRule::OneAndAHalfLineGap);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_RowSpacingRule(MathRowSpacingRule value) override;
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
    ASPOSE_SLIDES_SHARED_API uint32_t get_RowSpacing() override;
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
    ASPOSE_SLIDES_SHARED_API void set_RowSpacing(uint32_t value) override;
    
    /// <summary>
    /// Creates a mathematical array and places the specified element in it
    /// </summary>
    /// <param name="element">The element to place in the array</param>
    /// <example>Example:
    /// <code>
    /// auto mathArray = System::MakeObject<MathArray>(System::MakeObject<MathematicalText>(u"item1"));
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathArray(System::SharedPtr<IMathElement> element);
    /// <summary>
    /// Creates a mathematical array and places specified elements in it
    /// </summary>
    /// <param name="elements">Elements to place in the array</param>
    ASPOSE_SLIDES_SHARED_API MathArray(System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<IMathElement>>> elements);
    
    /// <summary>
    /// Get children elements
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IMathElement>> GetChildren() override;
    /// <summary>
    /// Returns item at the specified index of the array.
    /// Read-only <see cref="Aspose::Slides::MathText::IMathElement"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathElement> get_Argument(int32_t index) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::OmmlControlCharacterPPTXUnsupportedProps> get_ControlCharacterProperties();
    ASPOSE_SLIDES_LOCAL_API bool get_AreFormattingPropertiesDefault();
    
    ASPOSE_SLIDES_LOCAL_API MathArray(System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<IMathElement>>> elements, System::SharedPtr<IMathArrayProperties> properties);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MathArray, CODEPORTING_ARGS(System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<IMathElement>>> elements, System::SharedPtr<IMathArrayProperties> properties));
    ASPOSE_SLIDES_SHARED_API void Accept(System::SharedPtr<MathVisitor> visitor) override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~MathArray();
    
private:

    System::SharedPtr<IMathElementCollection> pr_Arguments;
    
    /// <summary>
    /// The set of items of the array
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto mathArray = System::MakeObject<MathArray>(System::MakeObject<MathematicalText>(u"item1"));
    /// mathArray->get_Arguments()->Add(System::MakeObject<MathematicalText>(u"item2"));
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_Arguments(System::SharedPtr<IMathElementCollection> value);
    
    System::SharedPtr<MathArrayProperties> m_properties;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


