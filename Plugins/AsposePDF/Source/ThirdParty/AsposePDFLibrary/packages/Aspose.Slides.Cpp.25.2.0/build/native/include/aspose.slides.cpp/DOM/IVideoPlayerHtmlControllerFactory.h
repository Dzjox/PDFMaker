#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
class IVideoPlayerHtmlController;
} // namespace Export
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Allows to create VideoPlayerHtmlController.
/// </summary>
/// <remarks>
/// For COM compatibility.
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IVideoPlayerHtmlControllerFactory : public virtual System::Object
{
    typedef IVideoPlayerHtmlControllerFactory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Create video player HTML controller.
    /// </summary>
    /// <param name="path">Path.</param>
    /// <param name="fileName">File Name.</param>
    /// <param name="baseUri">Base URI.</param>
    /// <returns>Video player HTML controller <see cref="Aspose::Slides::Export::IVideoPlayerHtmlController">IVideoPlayerHtmlController</see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IVideoPlayerHtmlController> CreateVideoPlayerHtmlController(System::String path, System::String fileName, System::String baseUri) = 0;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


