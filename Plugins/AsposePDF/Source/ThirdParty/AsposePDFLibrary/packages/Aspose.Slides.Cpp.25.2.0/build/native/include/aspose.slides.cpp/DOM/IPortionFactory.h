#pragma once

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IPortion;
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
/// Allows to create test portions
/// </summary>
/// <remarks>
/// For COM comparibility
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IPortionFactory : public virtual System::Object
{
    typedef IPortionFactory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates an empty text portion.
    /// </summary>
    /// <returns>Portion.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPortion> CreatePortion() = 0;
    /// <summary>
    /// Creates a text portion from specified string.
    /// </summary>
    /// <param name="str">String.</param>
    /// <returns>Portion.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPortion> CreatePortion(System::String str) = 0;
    /// <summary>
    /// Creates a portion with the using of a specified portion data.
    /// </summary>
    /// <param name="portion">A portion to use.</param>
    /// <returns>Portion.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPortion> CreatePortion(System::SharedPtr<IPortion> portion) = 0;
    
};

} // namespace Slides
} // namespace Aspose


