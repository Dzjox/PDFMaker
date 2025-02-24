#pragma once

#include <system/array.h>
#include <DOM/IStreamWrapper.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class StreamWrapperFactory;
} // namespace Slides
} // namespace Aspose
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
class ASPOSE_SLIDES_SHARED_CLASS StreamWrapper : public Aspose::Slides::IStreamWrapper
{
    typedef StreamWrapper ThisType;
    typedef Aspose::Slides::IStreamWrapper BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::StreamWrapperFactory;
    /// @endcond
    
public:

    /// <summary>
    /// Gets a stream.
    /// Read-only <see cref="System::IO::Stream"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::IO::Stream> get_Stream() override;
    /// <summary>
    /// Gets a value indicating whether the current stream supports reading.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_CanRead() override;
    /// <summary>
    /// Gets a value indicating whether the current stream supports seeking.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_CanSeek() override;
    /// <summary>
    /// Gets a value indicating whether the current stream supports writing.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_CanWrite() override;
    /// <summary>
    /// Gets the length in bytes of the stream.
    /// Read-only <see cref="int64_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int64_t get_Length() override;
    /// <summary>
    /// Gets the position within the current stream.
    /// Read-only <see cref="int64_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int64_t get_Position() override;
    
    /// <summary>
    /// Closes the current stream and releases any resources.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Close() override;
    /// <summary>
    /// Clears all buffers for this stream and causes any buffered data to be written to the underlying device.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Flush() override;
    /// <summary>
    /// Reads a sequence of bytes from the current stream and advances the position within the stream by the number of bytes read.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Read(System::ArrayPtr<uint8_t> buffer, int32_t offset, int32_t count) override;
    /// <summary>
    /// Reads a byte from the stream and advances the position within the stream by one byte, or returns -1 if at the end of the stream.
    /// </summary>
    /// <returns></returns>
    ASPOSE_SLIDES_SHARED_API int32_t ReadByte() override;
    /// <summary>
    /// Sets the position within the current stream
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int64_t Seek(int64_t offset, System::IO::SeekOrigin origin) override;
    /// <summary>
    /// writes a sequence of bytes to the current stream and advances the current position within this stream by the number of bytes written.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void Write(System::ArrayPtr<uint8_t> buffer, int32_t offset, int32_t count) override;
    /// <summary>
    /// Writes a byte to the current position in the stream and advances the position within the stream by one byte.
    /// </summary>
    /// <param name="value"></param>
    ASPOSE_SLIDES_SHARED_API void WriteByte(uint8_t value) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API StreamWrapper(System::SharedPtr<System::IO::Stream> stream);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(StreamWrapper, CODEPORTING_ARGS(System::SharedPtr<System::IO::Stream> stream));
    
private:

    bool m_disposed;
    System::SharedPtr<System::IO::Stream> m_stream;
    
};

} // namespace Slides
} // namespace Aspose


