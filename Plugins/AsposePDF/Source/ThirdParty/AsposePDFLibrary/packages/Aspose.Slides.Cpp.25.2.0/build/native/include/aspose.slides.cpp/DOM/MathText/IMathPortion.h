#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace MathText
{
class IMathParagraph;
} // namespace MathText
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
class ASPOSE_SLIDES_API_SHARED_CLASS IMathPortion : public virtual System::Object
{
    typedef IMathPortion ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMathParagraph> get_MathParagraph() = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


