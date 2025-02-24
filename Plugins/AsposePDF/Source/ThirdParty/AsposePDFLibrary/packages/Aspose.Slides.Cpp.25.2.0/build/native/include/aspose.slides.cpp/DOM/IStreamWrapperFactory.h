#pragma once

#include <system/enum_helpers.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IStreamWrapper;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace IO
{
enum class FileAccess;
enum class FileMode;
} // namespace IO
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Factory of StreamWrappers. For COM interface.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IStreamWrapperFactory : public virtual System::Object
{
    typedef IStreamWrapperFactory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates MemoryStream wrapper.
    /// </summary>
    /// <returns>Stream wrapper for COM interface <see cref="Aspose::Slides::IStreamWrapper">IStreamWrapper</see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IStreamWrapper> CreateMemoryStreamWrapper() = 0;
    /// <summary>
    /// Creates MemoryStream wrapper based on the specified byte array.
    /// </summary>
    /// <param name="buffer">Byte array <see cref="uint8_t"></see>[]</param>
    /// <returns>Stream wrapper for COM interface <see cref="Aspose::Slides::IStreamWrapper">IStreamWrapper</see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IStreamWrapper> CreateMemoryStreamWrapper(System::ArrayPtr<uint8_t> buffer) = 0;
    /// <summary>
    /// Creates FileStream with the specified path and creation mode.
    /// </summary>
    /// <param name="fileName">File name <see cref="System::String"></see></param>
    /// <param name="fileMode">File mode <see cref="System::IO::FileMode"></see></param>
    /// <returns>Stream wrapper for COM interface <see cref="Aspose::Slides::IStreamWrapper">IStreamWrapper</see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IStreamWrapper> CreateFileStreamWrapper(System::String fileName, System::IO::FileMode fileMode) = 0;
    /// <summary>
    /// Creates FileStream with the specified path, creation mode, and read/write permission.
    /// </summary>
    /// <param name="fileName">File name <see cref="System::String"></see></param>
    /// <param name="fileMode">File mode <see cref="System::IO::FileMode"></see></param>
    /// <param name="fileAccess">File access <see cref="System::IO::FileAccess"></see></param>
    /// <returns>Stream wrapper for COM interface <see cref="Aspose::Slides::IStreamWrapper">IStreamWrapper</see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IStreamWrapper> CreateFileStreamWrapper(System::String fileName, System::IO::FileMode fileMode, System::IO::FileAccess fileAccess) = 0;
    
};

} // namespace Slides
} // namespace Aspose


