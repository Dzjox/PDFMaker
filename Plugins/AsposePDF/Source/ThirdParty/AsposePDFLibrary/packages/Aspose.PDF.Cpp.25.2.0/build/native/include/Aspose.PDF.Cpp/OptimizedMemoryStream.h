#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/io/stream.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace IO
{
enum class SeekOrigin;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Defines a MemoryStream that can contains more standard capacity
/// </summary>
class ASPOSE_PDF_SHARED_CLASS OptimizedMemoryStream : public System::IO::Stream
{
    typedef OptimizedMemoryStream ThisType;
    typedef System::IO::Stream BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Default buffer size value in bytes.
    /// </summary>
    static const ASPOSE_PDF_SHARED_API int32_t DefaultBufferSize;
    
    /// <summary>
    /// When overridden in a derived class, gets a value indicating whether the current stream supports reading.
    /// </summary>
    /// <value></value>
    /// <returns>true if the stream supports reading; otherwise, false.
    /// </returns>
    ASPOSE_PDF_SHARED_API bool get_CanRead() const override;
    /// <summary>
    /// When overridden in a derived class, gets a value indicating whether the current stream supports seeking.
    /// </summary>
    /// <value></value>
    /// <returns>true if the stream supports seeking; otherwise, false.
    /// </returns>
    ASPOSE_PDF_SHARED_API bool get_CanSeek() const override;
    /// <summary>
    /// When overridden in a derived class, gets a value indicating whether the current stream supports writing.
    /// </summary>
    /// <value></value>
    /// <returns>true if the stream supports writing; otherwise, false.
    /// </returns>
    ASPOSE_PDF_SHARED_API bool get_CanWrite() const override;
    /// <summary>
    /// Gets the size of the underlying buffers. 
    /// </summary>
    /// <value>The buffers size.</value>
    ASPOSE_PDF_SHARED_API int32_t get_BufferSize() const;
    /// <summary>
    /// Sets the size of the underlying buffers. 
    /// </summary>
    /// <value>The buffers size.</value>
    ASPOSE_PDF_SHARED_API void set_BufferSize(int32_t value);
    /// <summary>
    /// When overridden in a derived class, gets the length in bytes of the stream.
    /// </summary>
    /// <value></value>
    /// <returns>
    /// A long value representing the length of the stream in bytes.
    /// </returns>
    ASPOSE_PDF_SHARED_API int64_t get_Length() const override;
    /// <summary>
    /// When overridden in a derived class, gets or sets the position within the current stream.
    /// </summary>
    /// <value></value>
    /// <returns>
    /// The current position within the stream.
    /// </returns>
    ASPOSE_PDF_SHARED_API int64_t get_Position() const override;
    /// <summary>
    /// When overridden in a derived class, gets or sets the position within the current stream.
    /// </summary>
    /// <value></value>
    /// <returns>
    /// The current position within the stream.
    /// </returns>
    ASPOSE_PDF_SHARED_API void set_Position(int64_t value) override;
    /// <summary>
    /// Gets a value indicating whether to free the underlying buffers on dispose.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_FreeOnDispose() const;
    /// <summary>
    /// Sets a value indicating whether to free the underlying buffers on dispose.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FreeOnDispose(bool value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="OptimizedMemoryStream"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API OptimizedMemoryStream();
    /// <summary>
    /// Initializes a new instance of the <see cref="OptimizedMemoryStream"></see> class based on the specified byte array.
    /// </summary>
    /// <param name="bufferSize">Size of the underlying buffers.</param>
    /// <param name="buffer">The array of unsigned bytes from which to create the current stream.</param>
    ASPOSE_PDF_SHARED_API OptimizedMemoryStream(int32_t bufferSize, System::ArrayPtr<uint8_t> buffer);
    /// <summary>
    /// Initializes a new instance of the <see cref="OptimizedMemoryStream"></see> class.
    /// </summary>
    /// <param name="bufferSize">Size of the underlying buffers.</param>
    ASPOSE_PDF_SHARED_API OptimizedMemoryStream(int32_t bufferSize);
    /// <summary>
    /// Initializes a new instance of the <see cref="OptimizedMemoryStream"></see> class based on the specified byte array.
    /// </summary>
    /// <param name="buffer">The array of unsigned bytes from which to create the current stream.</param>
    ASPOSE_PDF_SHARED_API OptimizedMemoryStream(System::ArrayPtr<uint8_t> buffer);
    
    /// <summary>
    /// When overridden in a derived class, reads a sequence of bytes from the current stream and advances the position within the stream by the number of bytes read.
    /// </summary>
    /// <param name="buffer">An array of bytes. When this method returns, the buffer contains the specified byte array with the values</param>
    /// <param name="offset">The zero-based byte offset in at which to begin storing the data read from the current stream.</param>
    /// <param name="count">The maximum number of bytes to be read from the current stream.</param>
    /// <returns>
    /// The total number of bytes read into the buffer. This can be less than the number of bytes requested if that many bytes are not currently available, or zero (0) if the end of the stream has been reached.
    /// </returns>
    ASPOSE_PDF_SHARED_API int32_t Read(const System::ArrayPtr<uint8_t>& buffer, int32_t offset, int32_t count) override;
    /// <summary>
    /// Reads a byte from the stream and advances the position within the stream by one byte, or returns -1 if at the end of the stream.
    /// </summary>
    /// <returns>
    /// byte or -1 if at the end of the stream.
    /// </returns>
    ASPOSE_PDF_SHARED_API int32_t ReadByte() override;
    /// <summary>
    /// When overridden in a derived class, sets the position within the current stream.
    /// </summary>
    /// <param name="offset">A byte offset relative to the <paramref name="origin"></paramref> parameter.</param>
    /// <param name="origin">A value of type <see cref="T:System::IO::SeekOrigin"></see> indicating the reference point used to obtain the new position.</param>
    /// <returns>
    /// The new position within the current stream.
    /// </returns>
    ASPOSE_PDF_SHARED_API int64_t Seek(int64_t offset, System::IO::SeekOrigin origin) override;
    /// <summary>
    /// The function overrided.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Flush() override;
    /// <summary>
    /// When overridden in a derived class, sets the length of the current stream.
    /// </summary>
    /// <param name="value">The desired length of the current stream in bytes.</param>
    ASPOSE_PDF_SHARED_API void SetLength(int64_t value) override;
    /// <summary>
    /// Converts the current stream to a byte array.
    /// </summary>
    /// <returns>An array of bytes</returns>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<uint8_t> ToArray();
    /// <summary>
    /// When overridden in a derived class, writes a sequence of bytes to the current stream and advances the current position within this stream by the number of bytes written.
    /// </summary>
    /// <param name="buffer">An array of bytes. This method copies <paramref name="count"></paramref> bytes from <paramref name="buffer"></paramref> to the current stream.</param>
    /// <param name="offset">The zero-based byte offset in <paramref name="buffer"></paramref> at which to begin copying bytes to the current stream.</param>
    /// <param name="count">The number of bytes to be written to the current stream.</param>
    /// The sum of <paramref name="offset"></paramref> and <paramref name="count"></paramref> is greater than the buffer length.
    ASPOSE_PDF_SHARED_API void Write(const System::ArrayPtr<uint8_t>& buffer, int32_t offset, int32_t count) override;
    /// <summary>
    /// Writes a byte to the current position in the stream and advances the position within the stream by one byte.
    /// </summary>
    /// <param name="value">The byte to write to the stream.</param>
    ASPOSE_PDF_SHARED_API void WriteByte(uint8_t value) override;
    /// <summary>
    /// Writes to the specified stream.
    /// </summary>
    /// <param name="stream">The stream.</param>
    ASPOSE_PDF_SHARED_API void WriteTo(System::SharedPtr<System::IO::Stream> stream);
    
protected:

    /// <summary>
    /// Releases the unmanaged resources used by the <see cref="T:System::IO::Stream"></see> and optionally releases the managed resources.
    /// </summary>
    /// <param name="disposing">true to release both managed and unmanaged resources; false to release only unmanaged resources.</param>
    ASPOSE_PDF_SHARED_API void Dispose(bool disposing) override;
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::ArrayPtr<uint8_t>>> buffers;
    int32_t lastPos;
    int32_t lastPosIndex;
    int64_t position;
    int32_t pr_BufferSize;
    bool pr_FreeOnDispose;
    
    void CheckDisposed() const;
    
};

} // namespace Pdf
} // namespace Aspose


