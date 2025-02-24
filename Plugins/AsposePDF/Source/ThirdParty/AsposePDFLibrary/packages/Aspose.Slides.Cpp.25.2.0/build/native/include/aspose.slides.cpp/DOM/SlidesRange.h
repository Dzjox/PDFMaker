#pragma once

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Slides range
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS SlidesRange : public System::Object
{
    typedef SlidesRange ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Start
    /// </summary>
    ASPOSE_SLIDES_SHARED_API uint32_t get_Start() const;
    /// <summary>
    /// Start
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Start(uint32_t value);
    /// <summary>
    /// End
    /// </summary>
    ASPOSE_SLIDES_SHARED_API uint32_t get_End() const;
    /// <summary>
    /// End
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_End(uint32_t value);
    
    ASPOSE_SLIDES_SHARED_API SlidesRange();
    
private:

    uint32_t pr_Start;
    uint32_t pr_End;
    
};

} // namespace Slides
} // namespace Aspose


