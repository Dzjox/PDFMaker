#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/MathText/IMathPortion.h>

#include "DOM/Portion.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Layout
{
namespace MathMixed
{
class MathBlocksSplitter;
} // namespace MathMixed
} // namespace Layout
namespace MathText
{
class IMathParagraph;
class MathParagraph;
} // namespace MathText
class TextLayout;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Represents a portion with mathematical context inside.
/// </summary>
/// <example>Example:
/// <code>
/// auto pres = System::MakeObject<Presentation>();
/// auto shape = pres->get_Slides()->idx_get(0)->get_Shapes()->AddMathShape(0.0f, 0.0f, 300.0f, 50.0f);
/// auto paragraph = shape->get_TextFrame()->get_Paragraphs()->idx_get(0);
/// auto mathPortion = System::MakeObject<MathPortion>();
/// paragraph->get_Portions()->Add(mathPortion);
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS MathPortion final : public Aspose::Slides::Portion, public Aspose::Slides::MathText::IMathPortion
{
    typedef MathPortion ThisType;
    typedef Aspose::Slides::Portion BaseType;
    typedef Aspose::Slides::MathText::IMathPortion BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Layout::MathMixed::MathBlocksSplitter;
    friend class Aspose::Slides::MathText::MathParagraph;
    friend class Aspose::Slides::TextLayout;
    /// @endcond
    
public:

    /// <summary>
    /// Math paragraph
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// auto shape = pres->get_Slides()->idx_get(0)->get_Shapes()->AddMathShape(0.0f, 0.0f, 300.0f, 50.0f);
    /// auto mathParagraph = (System::AsCast<Aspose::Slides::MathText::MathPortion>(shape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_Portions()->idx_get(0)))->get_MathParagraph();
    /// mathParagraph->Add(System::MakeObject<MathBlock>(System::MakeObject<MathematicalText>(u"x+y")));
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IMathParagraph> get_MathParagraph() override;
    
    /// <summary>
    /// Initializes a new instance of the MathPortion class.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// auto shape = pres->get_Slides()->idx_get(0)->get_Shapes()->AddMathShape(0.0f, 0.0f, 300.0f, 50.0f);
    /// auto paragraph = shape->get_TextFrame()->get_Paragraphs()->idx_get(0);
    /// auto mathPortion = System::MakeObject<MathPortion>();
    /// paragraph->get_Portions()->Add(mathPortion);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API MathPortion();
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API MathPortion(System::SharedPtr<Aspose::Slides::MathText::MathParagraph> paragraph);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MathPortion, CODEPORTING_ARGS(System::SharedPtr<Aspose::Slides::MathText::MathParagraph> paragraph));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void NotifyParentOfChanges();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~MathPortion();
    
private:

    System::SharedPtr<Aspose::Slides::MathText::MathParagraph> m_mathParagraph;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


