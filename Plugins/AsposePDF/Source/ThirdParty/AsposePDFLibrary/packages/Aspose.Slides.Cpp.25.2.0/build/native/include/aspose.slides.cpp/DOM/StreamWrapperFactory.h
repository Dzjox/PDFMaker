#pragma once

#include <system/enum_helpers.h>
#include <system/array.h>
#include <DOM/IStreamWrapperFactory.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

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
class ASPOSE_SLIDES_SHARED_CLASS StreamWrapperFactory : public Aspose::Slides::IStreamWrapperFactory
{
    typedef StreamWrapperFactory ThisType;
    typedef Aspose::Slides::IStreamWrapperFactory BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Creates MemoryStream wrapper.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IStreamWrapper> CreateMemoryStreamWrapper() override;
    /// <summary>
    /// Creates MemoryStream wrapper based on the specified byte array.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IStreamWrapper> CreateMemoryStreamWrapper(System::ArrayPtr<uint8_t> buffer) override;
    /// <summary>
    /// Creates FileStream with the specified path and creation mode.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IStreamWrapper> CreateFileStreamWrapper(System::String fileName, System::IO::FileMode fileMode) override;
    /// <summary>
    /// Creates FileStream with the specified path, creation mode, and read/write permission.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IStreamWrapper> CreateFileStreamWrapper(System::String fileName, System::IO::FileMode fileMode, System::IO::FileAccess fileAccess) override;
    
};

} // namespace Slides
} // namespace Aspose


