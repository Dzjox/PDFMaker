#pragma once
// Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
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

namespace Import {

/// <summary>
/// Callback interface used to resolve external resources during Html, Svg documents import.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IExternalResourceResolver : public virtual System::Object
{
    typedef IExternalResourceResolver ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Resolves the absolute URI from the base and relative URIs.
    /// </summary>
    /// <param name="baseUri">Base URI of linking objects</param>
    /// <param name="relativeUri">Relative URI to the linked object.</param>
    /// <returns>Absolute URI or null if the relative URI cannot be resolved.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String ResolveUri(System::String baseUri, System::String relativeUri) = 0;
    /// <summary>
    /// Maps a URI to an object containing the actual resource.
    /// </summary>
    /// <param name="absoluteUri">Absolute URI to the object.</param>
    /// <returns> A <see cref="System::IO::Stream"></see> object or null if resource cannot be streamed.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<System::IO::Stream> GetEntity(System::String absoluteUri) = 0;
    
};

} // namespace Import
} // namespace Slides
} // namespace Aspose


