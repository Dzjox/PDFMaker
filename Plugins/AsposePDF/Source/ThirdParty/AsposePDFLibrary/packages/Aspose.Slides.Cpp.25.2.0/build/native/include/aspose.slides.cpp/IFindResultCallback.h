#pragma once

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ITextFrame;
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Callback interface used to getting search text result.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IFindResultCallback : public virtual System::Object
{
    typedef IFindResultCallback ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Callback method that receives data about the found text.
    /// </summary>
    /// <param name="textFrame">The <see cref="Aspose::Slides::ITextFrame">ITextFrame</see> in which the text was found.</param>
    /// <param name="sourceText">The source text in which the text was found.</param>
    /// <param name="foundText">The found text.</param>
    /// <param name="textPosition">The position of the found text.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void FoundResult(System::SharedPtr<ITextFrame> textFrame, System::String sourceText, System::String foundText, int32_t textPosition) = 0;
    
};

} // namespace Slides
} // namespace Aspose


