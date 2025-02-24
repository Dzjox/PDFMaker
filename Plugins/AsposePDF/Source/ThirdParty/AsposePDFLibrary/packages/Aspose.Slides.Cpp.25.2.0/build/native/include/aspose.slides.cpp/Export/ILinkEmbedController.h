#pragma once
// Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
enum class LinkEmbedDecision;
} // namespace Export
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Callback interface used to determine how object should be processed during saving.
/// </summary> 
class ASPOSE_SLIDES_API_SHARED_CLASS ILinkEmbedController : public virtual System::Object
{
    typedef ILinkEmbedController ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Determines where object should be stored.
    /// This method is called once for each object id.
    /// It is not guaranteed that there won't be two objects with same data, semanticName and contentType but with different id.
    /// </summary>
    /// <param name="id">Object id. This id is saving operation-wide unique.</param>
    /// <param name="entityData">Object binary data. This parameter can be null, if object binary data is not generated yet.</param>
    /// <param name="semanticName">Some short text, describing meaning of object. Controller may use this as a part of external object name, but it is up to dispatcher to ensure that names will be unique and contain only allowed characters.</param>
    /// <param name="contentType">MIME type of object.</param>
    /// <param name="recomendedExtension">File name extension, recommended for this MIME type.</param>
    /// <returns>Decision</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API LinkEmbedDecision GetObjectStoringLocation(int32_t id, System::ArrayPtr<uint8_t> entityData, System::String semanticName, System::String contentType, System::String recomendedExtension) = 0;
    /// <summary>
    /// Returns an URL to an external object.
    /// This method always called if <see cref="ILinkEmbedController::GetObjectStoringLocation"></see> returned <see cref="LinkEmbedDecision::Link"></see> and may be called if <see cref="ILinkEmbedController::GetObjectStoringLocation"></see> returned <see cref="LinkEmbedDecision::Embed"></see> but embedding is impossible.
    /// Can be called multiple time for same object id.
    /// </summary>
    /// <param name="id">Object id. This id is saving operation-wide unique.</param>
    /// <param name="referrer">id of referrencing object or 0, if object is referrenced by the root document. May be used to generate relative link.</param>
    /// <returns>Url of external object or null if this object should be ignored.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String GetUrl(int32_t id, int32_t referrer) = 0;
    /// <summary>
    /// Saves external object.
    /// </summary>
    /// <param name="id">Object id. This id is saving operation-wide unique.</param>
    /// <param name="entityData">Object binary data. This parameter cannot be null.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void SaveExternal(int32_t id, System::ArrayPtr<uint8_t> entityData) = 0;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


