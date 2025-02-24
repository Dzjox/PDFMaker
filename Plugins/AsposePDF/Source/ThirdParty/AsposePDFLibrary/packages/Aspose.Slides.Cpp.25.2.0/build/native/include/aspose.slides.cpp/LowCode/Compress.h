#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class Presentation;
} // namespace Slides
} // namespace Aspose
namespace System
{
template <typename> class SmartPtr;
template <typename T0> using SharedPtr = System::SmartPtr<T0>;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace LowCode {

/// <summary>
/// Represents a group of methods intended to compress <see cref="Presentation"></see>.
/// </summary>
/// <example>
/// <code>
/// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
/// LowCode::Compress::RemoveUnusedMasterSlides(pres);
/// pres->Save(u"pres-out.pptx", SaveFormat::Pptx);
/// </code>
/// </example> 
class ASPOSE_SLIDES_SHARED_CLASS Compress
{
    typedef Compress ThisType;
    
public:

    /// <summary>
    /// Makes compression of the <see cref="Presentation"></see> by removing unused master slides.  
    /// </summary>
    /// <param name="pres">The presentation instance</param>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// LowCode::Compress::RemoveUnusedMasterSlides(pres);
    /// pres->Save(u"pres-out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    static ASPOSE_SLIDES_SHARED_API void RemoveUnusedMasterSlides(System::SharedPtr<Presentation> pres);
    /// <summary>
    /// Makes compression of the <see cref="Presentation"></see> by removing unused layout slides.  
    /// </summary>
    /// <param name="pres">The presentation instance</param>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// LowCode::Compress::RemoveUnusedLayoutSlides(pres);
    /// pres->Save(u"pres-out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    static ASPOSE_SLIDES_SHARED_API void RemoveUnusedLayoutSlides(System::SharedPtr<Presentation> pres);
    /// <summary>
    /// Makes compression of the <see cref="Presentation"></see> by removing unused characters from embedded fonts.  
    /// </summary>
    /// <param name="pres">The presentation instance</param>
    /// <example>
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
    /// LowCode::Compress::CompressEmbeddedFonts(pres);
    /// 
    /// pres->Save(u"pres-out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    static ASPOSE_SLIDES_SHARED_API void CompressEmbeddedFonts(System::SharedPtr<Presentation> pres);
    
protected:

    /// @cond
    static ASPOSE_SLIDES_LOCAL_API void RemoveUnusedImages(System::SharedPtr<Presentation> pres);
    /// @endcond
    
public:
    Compress() = delete;
};

} // namespace LowCode
} // namespace Slides
} // namespace Aspose


