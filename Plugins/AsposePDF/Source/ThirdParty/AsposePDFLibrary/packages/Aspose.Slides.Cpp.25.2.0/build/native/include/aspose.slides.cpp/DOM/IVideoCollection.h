#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IGenericCollection.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IVideo;
enum class LoadingStreamBehavior;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace IO
{
class Stream;
} // namespace IO
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a collection of Video objects.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IVideoCollection : public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::IVideo>>
{
    typedef IVideoCollection ThisType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::IVideo>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the element at the specified index.
    /// Read-only <see cref="Aspose::Slides::IVideo">IVideo</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IVideo> idx_get(int32_t index) = 0;
    
    /// <summary>
    /// Adds a copy of an video file from an another presentation.
    /// </summary>
    /// <param name="video">Source video.</param>
    /// <returns>Added video.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IVideo> AddVideo(System::SharedPtr<IVideo> video) = 0;
    /// <summary>
    /// Creates and adds a video to a presentation from stream.
    /// </summary>
    /// <param name="stream">Stream to add video file from.</param>
    /// <param name="loadingStreamBehavior">The behavior which will be applied to the stream.</param>
    /// <returns>Added <see cref="Aspose::Slides::IVideo">IVideo</see>.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IVideo> AddVideo(System::SharedPtr<System::IO::Stream> stream, LoadingStreamBehavior loadingStreamBehavior) = 0;
    /// <summary>
    /// Creates and adds a video to a presentation from byte array.
    /// </summary>
    /// <param name="videoData">Video bytes.</param>
    /// <returns>Added video.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IVideo> AddVideo(System::ArrayPtr<uint8_t> videoData) = 0;
    
};

} // namespace Slides
} // namespace Aspose


