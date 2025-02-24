#pragma once

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

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
class ASPOSE_SLIDES_API_SHARED_CLASS IParagraphFactory : public virtual System::Object
{
    typedef IParagraphFactory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a new empty paragraph.
    /// </summary>
    /// <returns>Paragraph.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IParagraph> CreateParagraph() = 0;
    /// <summary>
    /// Creates a new paragraph with specified paragraph data using.
    /// </summary>
    /// <param name="paragraph">A paragraph to use data.</param>
    /// <returns>Paragraph.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IParagraph> CreateParagraph(System::SharedPtr<IParagraph> paragraph) = 0;
    
};

} // namespace Slides
} // namespace Aspose


