#pragma once

#include <DOM/IParagraphFactory.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IParagraph;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Allows to create paragraphs
/// </summary>
/// <remarks>
/// For COM compatibility.
/// </remarks>
class ASPOSE_SLIDES_SHARED_CLASS ParagraphFactory : public Aspose::Slides::IParagraphFactory
{
    typedef ParagraphFactory ThisType;
    typedef Aspose::Slides::IParagraphFactory BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Creates a new empty paragraph.
    /// </summary>
    /// <returns>Paragraph.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IParagraph> CreateParagraph() override;
    /// <summary>
    /// Creates a new paragraph with specified paragraph data using.
    /// </summary>
    /// <param name="paragraph">A paragraph to use data.</param>
    /// <returns>Paragraph.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IParagraph> CreateParagraph(System::SharedPtr<IParagraph> paragraph) override;
    
};

} // namespace Slides
} // namespace Aspose


