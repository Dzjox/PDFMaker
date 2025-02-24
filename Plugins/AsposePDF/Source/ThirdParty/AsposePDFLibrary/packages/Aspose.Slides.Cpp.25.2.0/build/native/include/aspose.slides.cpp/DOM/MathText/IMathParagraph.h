#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/MathText/IMathBlockCollection.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace MathText
{
enum class MathJustification;
} // namespace MathText
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace IO
{
class Stream;
} // namespace IO
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace MathText {

/// <summary>
/// Mathematical paragraph that is a container for mathematical blocks (IMathBlock)
/// </summary>
/// <example>Example:
/// <code>
/// auto shape = slide->get_Shapes()->AddMathShape(x, y, width, height);
/// auto mathParagraph = (System::AsCast<Aspose::Slides::MathText::MathPortion>(shape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_Portions()->idx_get(0)))->get_MathParagraph();
/// mathParagraph->set_Justification(Aspose::Slides::MathText::MathJustification::LeftJustified);
/// </code>
/// </example>
class ASPOSE_SLIDES_API_SHARED_CLASS IMathParagraph : public Aspose::Slides::MathText::IMathBlockCollection
{
    typedef IMathParagraph ThisType;
    typedef Aspose::Slides::MathText::IMathBlockCollection BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Paragraph Justification 
    /// Default value: CenteredAsGroup
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto shape = slide->get_Shapes()->AddMathShape(x, y, width, height);
    /// auto mathParagraph = (System::AsCast<MathPortion>(shape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_Portions()->idx_get(0)))->get_MathParagraph();
    /// mathParagraph->set_Justification(MathJustification::LeftJustified);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API MathJustification get_Justification() = 0;
    /// <summary>
    /// Paragraph Justification 
    /// Default value: CenteredAsGroup
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto shape = slide->get_Shapes()->AddMathShape(x, y, width, height);
    /// auto mathParagraph = (System::AsCast<MathPortion>(shape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_Portions()->idx_get(0)))->get_MathParagraph();
    /// mathParagraph->set_Justification(MathJustification::LeftJustified);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Justification(MathJustification value) = 0;
    
    /// <summary>
    /// Saves content of this <see cref="Aspose::Slides::MathText::IMathParagraph">IMathParagraph</see> as MathML
    /// </summary>
    /// <param name="stream">Target stream</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void WriteAsMathMl(System::SharedPtr<System::IO::Stream> stream) = 0;
    /// <summary>
    /// Gets mathematical equation in LaTeX format
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<IAutoShape> shape = slide->get_Shapes()->AddMathShape(x, y, width, height);
    /// System::SharedPtr<IMathParagraph> mathParagraph = (System::AsCast<Aspose::Slides::MathText::MathPortion>(shape->get_TextFrame()->get_Paragraph(0)->get_Portion(0)))->get_MathParagraph();
    /// mathParagraph->Add(System::MakeObject<MathematicalText>(u"a")->Join(u"+")->Join(System::MakeObject<MathematicalText>(u"b")->Join(u"=")->Join(System::MakeObject<MathematicalText>(u"c"))));
    /// System::String mathLatex = mathParagraph->ToLatex();
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String ToLatex() = 0;
    
};

} // namespace MathText
} // namespace Slides
} // namespace Aspose


