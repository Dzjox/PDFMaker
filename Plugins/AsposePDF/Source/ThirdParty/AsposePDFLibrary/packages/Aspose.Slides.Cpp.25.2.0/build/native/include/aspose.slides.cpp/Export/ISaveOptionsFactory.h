#pragma once

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
class IPptxOptions;
} // namespace Export
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Allows to create save options' instances
/// </summary>
/// <remarks>
/// For COM compatibility.
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS ISaveOptionsFactory : public virtual System::Object
{
    typedef ISaveOptionsFactory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates PPTX save options.
    /// </summary>
    /// <returns>Save options.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPptxOptions> CreatePptxOptions() = 0;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


