#pragma once

#include <system/string.h>
#include <IBlobManagementOptions.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class PresentationLockingBehavior;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents options which can be used to manage BLOB handling rules and other BLOB settings.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS BlobManagementOptions : public Aspose::Slides::IBlobManagementOptions
{
    typedef BlobManagementOptions ThisType;
    typedef Aspose::Slides::IBlobManagementOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// This property defines if an instance of the Presentation class can be an owner of the source - file 
    /// or stream during the instance lifetime. If the instance is an owner, it locks the source. This helps 
    /// to improve memory consumption and performance while working with BLOBs, but the source (stream or file) 
    /// can't be changed during Presentation's instance lifetime.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::PresentationLockingBehavior get_PresentationLockingBehavior() override;
    /// <summary>
    /// This property defines if an instance of the Presentation class can be an owner of the source - file 
    /// or stream during the instance lifetime. If the instance is an owner, it locks the source. This helps 
    /// to improve memory consumption and performance while working with BLOBs, but the source (stream or file) 
    /// can't be changed during Presentation's instance lifetime.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_PresentationLockingBehavior(Aspose::Slides::PresentationLockingBehavior value) override;
    /// <summary>
    /// This property defines if temporary files can be created while working with BLOBs, what greatly 
    /// decreases  the memory consumption but requires permissions to create files.
    /// <remarks>All files will be deleted after work with the presentation will be finished.</remarks>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsTemporaryFilesAllowed() override;
    /// <summary>
    /// This property defines if temporary files can be created while working with BLOBs, what greatly 
    /// decreases  the memory consumption but requires permissions to create files.
    /// <remarks>All files will be deleted after work with the presentation will be finished.</remarks>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_IsTemporaryFilesAllowed(bool value) override;
    /// <summary>
    /// The root path where temporary files will be created. System temorary directory will be used by default. 
    /// Hosting process should have permissions to 
    /// create files and folders there.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_TempFilesRootPath() override;
    /// <summary>
    /// The root path where temporary files will be created. System temorary directory will be used by default. 
    /// Hosting process should have permissions to 
    /// create files and folders there.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_TempFilesRootPath(System::String value) override;
    /// <summary>
    /// Defines the maximum amount (in bytes) that all BLOBs in total may occupy in memory. First, all BLOBs 
    /// loading into memory as default behavior and only when it reaches the limit defined by this property, 
    /// other mechanisms (such as temporary files) can be involved. In terms of performance, the most efficient 
    /// way is storing BLOBs in memory, but from the other side, it leads to a high memory consumption what 
    /// may be undesirable. Using this property, you may set the optimal behavior for your environment or 
    /// other requirements.
    /// <remarks>
    /// This value will be ignored if <see cref="BlobManagementOptions::set_IsTemporaryFilesAllowed"></see> is
    /// set to false. It makes no sense to limit the maximum BLOBs in memory, because if
    /// <see cref="BlobManagementOptions::set_IsTemporaryFilesAllowed"></see> is set to false, the memory is the only place
    /// where BLOBs can be stored.
    /// </remarks>
    /// <remarks>Default value is 629,145,600 bytes (600Mb).</remarks>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API uint64_t get_MaxBlobsBytesInMemory() override;
    /// <summary>
    /// Defines the maximum amount (in bytes) that all BLOBs in total may occupy in memory. First, all BLOBs 
    /// loading into memory as default behavior and only when it reaches the limit defined by this property, 
    /// other mechanisms (such as temporary files) can be involved. In terms of performance, the most efficient 
    /// way is storing BLOBs in memory, but from the other side, it leads to a high memory consumption what 
    /// may be undesirable. Using this property, you may set the optimal behavior for your environment or 
    /// other requirements.
    /// <remarks>
    /// This value will be ignored if <see cref="BlobManagementOptions::set_IsTemporaryFilesAllowed"></see> is
    /// set to false. It makes no sense to limit the maximum BLOBs in memory, because if
    /// <see cref="BlobManagementOptions::set_IsTemporaryFilesAllowed"></see> is set to false, the memory is the only place
    /// where BLOBs can be stored.
    /// </remarks>
    /// <remarks>Default value is 629,145,600 bytes (600Mb).</remarks>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_MaxBlobsBytesInMemory(uint64_t value) override;
    
    /// <summary>
    /// Creates new default blob management options.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API BlobManagementOptions();
    
private:

    uint64_t m_maxBlobsBytesInMemory;
    Aspose::Slides::PresentationLockingBehavior m_presentationLockingBehavior;
    bool m_isTemporaryFilesAllowed;
    System::String m_tempFilesRootPath;
    
};

} // namespace Slides
} // namespace Aspose


