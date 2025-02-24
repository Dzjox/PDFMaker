#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/IVideoPlayerHtmlControllerFactory.h>

#include "aspose_slides_api_defs.h"

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
class ASPOSE_SLIDES_SHARED_CLASS VideoPlayerHtmlControllerFactory : public Aspose::Slides::Export::IVideoPlayerHtmlControllerFactory
{
    typedef VideoPlayerHtmlControllerFactory ThisType;
    typedef Aspose::Slides::Export::IVideoPlayerHtmlControllerFactory BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Creates new <c>VideoPlayerHtmlController</c>.
    /// </summary>
    /// <param name="path">Path.</param>
    /// <param name="fileName">File name.</param>
    /// <param name="baseUri">Base URI.</param>
    /// <returns></returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IVideoPlayerHtmlController> CreateVideoPlayerHtmlController(System::String path, System::String fileName, System::String baseUri) override;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


