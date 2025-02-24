#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
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
/// Represents an embedded audio file.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IAudio : public virtual System::Object
{
    typedef IAudio ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns a MIME type of an audio, encoded in <see cref="IAudio::get_BinaryData"></see>.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_ContentType() = 0;
    /// <summary>
    /// Returns the copy of an audio's data. In case of large amount of data consider 
    /// using of <see cref="IAudio::GetStream"></see> method to prevent unnecessary  loading of audio's
    /// data into memory or even OutOfMemoryException.
    /// Read-only <see cref="uint8_t"></see>[].
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<uint8_t> get_BinaryData() = 0;
    
    /// <summary>
    /// Returns Stream stream for reading.
    /// Use 'using' or close stream after using.
    /// </summary>
    /// <returns>Stream for reading.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<System::IO::Stream> GetStream() = 0;
    
};

} // namespace Slides
} // namespace Aspose


