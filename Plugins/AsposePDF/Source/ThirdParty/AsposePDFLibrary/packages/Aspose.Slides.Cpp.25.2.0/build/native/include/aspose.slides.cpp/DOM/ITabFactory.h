#pragma once

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ITab;
enum class TabAlignment;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Allow to create ITab instances
/// </summary>
/// <remarks>For COM compatibility.</remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS ITabFactory : public virtual System::Object
{
    typedef ITabFactory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a new ITab instance.
    /// </summary>
    /// <param name="position">Tab position.</param>
    /// <param name="align">Align.</param>
    /// <returns>Created tab.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITab> CreateTab(double position, TabAlignment align) = 0;
    
};

} // namespace Slides
} // namespace Aspose


