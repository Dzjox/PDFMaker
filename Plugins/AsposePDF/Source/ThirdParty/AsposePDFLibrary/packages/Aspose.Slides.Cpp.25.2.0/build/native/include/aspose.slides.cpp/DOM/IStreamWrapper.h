#pragma once

#include <system/idisposable.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace System
{
namespace IO
{
enum class SeekOrigin;
class Stream;
} // namespace IO
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Aspose.IO.Stream wrapper for COM interface.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IStreamWrapper : public System::IDisposable
{
    typedef IStreamWrapper ThisType;
    typedef System::IDisposable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets a stream.
    /// Read-only <see cref="System::IO::Stream"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<System::IO::Stream> get_Stream() = 0;
    /// <summary>
    /// Gets a value indicating whether the current stream supports reading.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_CanRead() = 0;
    /// <summary>
    /// Gets a value indicating whether the current stream supports seeking.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_CanSeek() = 0;
    /// <summary>
    /// Gets a value indicating whether the current stream supports writing.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_CanWrite() = 0;
    /// <summary>
    /// Gets the length in bytes of the stream.
    /// Read-only <see cref="int64_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int64_t get_Length() = 0;
    /// <summary>
    /// Gets the position within the current stream.
    /// Read-only <see cref="int64_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int64_t get_Position() = 0;
    
    /// <summary>
    /// Closes the current stream and releases any resources.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Close() = 0;
    /// <summary>
    /// Clears all buffers for this stream and causes any buffered data to be written to the underlying device.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Flush() = 0;
    /// <summary>
    /// Reads a sequence of bytes from the current stream and advances the position within the stream by the number of bytes read.
    /// </summary>
    /// <param name="buffer">Sequence of bytes <see cref="uint8_t"></see>[]</param>
    /// <param name="offset">Start reading position <see cref="int32_t"></see></param>
    /// <param name="count">Count bytes for reading <see cref="int32_t"></see></param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Read(System::ArrayPtr<uint8_t> buffer, int32_t offset, int32_t count) = 0;
    /// <summary>
    /// Reads a byte from the stream and advances the position within the stream by one byte, or returns -1 if at the end of the stream.
    /// </summary>
    /// <returns>Read byte <see cref="int32_t"></see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t ReadByte() = 0;
    /// <summary>
    /// Sets the position within the current stream
    /// </summary>
    /// <param name="offset">A byte offset relative to the origin parameter <see cref="int64_t"></see></param>
    /// <param name="origin">A value of type <see cref="System::IO::SeekOrigin"></see> indicating the reference point used to obtain the new position</param>
    /// <returns>The new position within the current stream <see cref="int64_t"></see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API int64_t Seek(int64_t offset, System::IO::SeekOrigin origin) = 0;
    /// <summary>
    /// writes a sequence of bytes to the current stream and advances the current position within this stream by the number of bytes written.
    /// </summary>
    /// <param name="buffer">An array of bytes <see cref="uint8_t"></see>[]</param>
    /// <param name="offset">The zero-based byte offset in buffer at which to begin copying bytes to the current stream <see cref="int32_t"></see></param>
    /// <param name="count">The number of bytes to be written to the current stream <see cref="int32_t"></see></param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Write(System::ArrayPtr<uint8_t> buffer, int32_t offset, int32_t count) = 0;
    /// <summary>
    /// Writes a byte to the current position in the stream and advances the position within the stream by one byte.
    /// </summary>
    /// <param name="value">Byte for writion <see cref="uint8_t"></see></param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void WriteByte(uint8_t value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


