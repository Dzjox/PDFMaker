#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IGenericCollection.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IAudio;
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
/// Represents a collection of embedded audio files.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IAudioCollection : public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::IAudio>>
{
    typedef IAudioCollection ThisType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::IAudio>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the element at the specified index.
    /// Read-only <see cref="Aspose::Slides::IAudio">IAudio</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAudio> idx_get(int32_t index) = 0;
    
    /// <summary>
    /// Adds a copy of an audio file from an another presentation.
    /// </summary>
    /// <param name="audio">Source audio.</param>
    /// <returns>Added audio.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAudio> AddAudio(System::SharedPtr<IAudio> audio) = 0;
    /// @deprecated Use AddAudio(Stream stream, LoadingStreamBehavior loadingStreamBehavior). The method will be removed in version 17.10.
    /// <summary>
    /// Creates and adds a audio to a presentation from stream.
    /// </summary>
    /// <param name="stream">Stream to add audio from.</param>
    /// <returns>Added audio.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAudio> AddAudio(System::SharedPtr<System::IO::Stream> stream) = 0;
    /// <summary>
    /// Creates and adds a audio to a presentation from stream.
    /// </summary>
    /// <param name="stream">Stream to add video audio from.</param>
    /// <param name="loadingStreamBehavior">The behavior which will be applied to the stream.</param>
    /// <returns>Added audio.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAudio> AddAudio(System::SharedPtr<System::IO::Stream> stream, LoadingStreamBehavior loadingStreamBehavior) = 0;
    /// <summary>
    /// Creates and adds a audio to a presentation from byte array.
    /// </summary>
    /// <param name="audioData">Audio bytes.</param>
    /// <returns>Added audio.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAudio> AddAudio(System::ArrayPtr<uint8_t> audioData) = 0;
    
};

} // namespace Slides
} // namespace Aspose


