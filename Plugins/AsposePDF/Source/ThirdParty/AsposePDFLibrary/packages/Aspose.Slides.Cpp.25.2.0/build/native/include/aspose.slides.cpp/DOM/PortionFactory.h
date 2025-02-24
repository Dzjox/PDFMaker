#pragma once

#include <DOM/IPortionFactory.h>

#include "aspose_slides_api_defs.h"

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
class ASPOSE_SLIDES_SHARED_CLASS PortionFactory : public Aspose::Slides::IPortionFactory
{
    typedef PortionFactory ThisType;
    typedef Aspose::Slides::IPortionFactory BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Creates an empty text portion.
    /// </summary>
    /// <returns>Portion.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPortion> CreatePortion() override;
    /// <summary>
    /// Creates a text portion from specified string.
    /// </summary>
    /// <param name="str">String.</param>
    /// <returns>Portion.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPortion> CreatePortion(System::String str) override;
    /// <summary>
    /// Creates a portion with the using of a specified portion data.
    /// </summary>
    /// <param name="portion">A portion to use.</param>
    /// <returns>Portion.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPortion> CreatePortion(System::SharedPtr<IPortion> portion) override;
    
};

} // namespace Slides
} // namespace Aspose


