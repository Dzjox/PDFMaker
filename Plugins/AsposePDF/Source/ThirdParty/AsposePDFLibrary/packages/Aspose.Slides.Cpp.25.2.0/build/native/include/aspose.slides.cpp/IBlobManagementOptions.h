#pragma once
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class PresentationLockingBehavior;
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// A Binary Large Object (BLOB) is a binary data stored as a single entity - i.e. BLOB can be an 
/// audio, video or presentation itself. A number of techniques are used to optimize memory consumption 
/// while working with BLOBs - which was already stored in the presentation or be added later programmatically. 
/// Using <see cref="Aspose::Slides::IBlobManagementOptions">IBlobManagementOptions</see> you can change a different behavior aspects regarding BLOBs 
/// handling for the <see cref="Aspose::Slides::IPresentation">IPresentation</see> instance lifetime.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IBlobManagementOptions : public virtual System::Object
{
    typedef IBlobManagementOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// This property defines if an instance of the Presentation class can be an owner of the source - file 
    /// or stream during the instance lifetime. If the instance is an owner, it locks the source. This helps 
    /// to improve memory consumption and performance while working with BLOBs, but the source (stream or file) 
    /// can't be changed during Presentation's instance lifetime. This is an example:
    /// </summary>
    /// <example>
    /// <code>
    /// auto loadOptions = MakeObject&lt;LoadOptions&gt;();
    /// loadOptions->get_BlobManagementOptions()->set_PresentationLockingBehavior(PresentationLockingBehavior::KeepLocked);
    /// {
    ///     auto pres = MakeObject&lt;Presentation&gt;(u"pres.pptx", loadOptions);
    ///     // IOException will be thrown because pres.pptx is locked for a Presentation lifetime
    ///     // File::Delete(u"pres.pptx");
    /// }
    /// // after Presentation object destroyed, file is unlocked and can be deleted
    /// IO::File::Delete(u"pres.pptx");
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::PresentationLockingBehavior get_PresentationLockingBehavior() = 0;
    /// <summary>
    /// This property defines if an instance of the Presentation class can be an owner of the source - file 
    /// or stream during the instance lifetime. If the instance is an owner, it locks the source. This helps 
    /// to improve memory consumption and performance while working with BLOBs, but the source (stream or file) 
    /// can't be changed during Presentation's instance lifetime. This is an example:
    /// </summary>
    /// <example>
    /// <code>
    /// auto loadOptions = MakeObject&lt;LoadOptions&gt;();
    /// loadOptions->get_BlobManagementOptions()->set_PresentationLockingBehavior(PresentationLockingBehavior::KeepLocked);
    /// {
    ///     auto pres = MakeObject&lt;Presentation&gt;(u"pres.pptx", loadOptions);
    ///     // IOException will be thrown because pres.pptx is locked for a Presentation lifetime
    ///     // File::Delete(u"pres.pptx");
    /// }
    /// // after Presentation object destroyed, file is unlocked and can be deleted
    /// IO::File::Delete(u"pres.pptx");
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_PresentationLockingBehavior(Aspose::Slides::PresentationLockingBehavior value) = 0;
    /// <summary>
    /// This property defines if temporary files can be created while working with BLOBs, what greatly 
    /// decreases  the memory consumption but requires permissions to create files.
    /// <remarks>All files will be deleted after work with the presentation will be finished.</remarks>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_IsTemporaryFilesAllowed() = 0;
    /// <summary>
    /// This property defines if temporary files can be created while working with BLOBs, what greatly 
    /// decreases  the memory consumption but requires permissions to create files.
    /// <remarks>All files will be deleted after work with the presentation will be finished.</remarks>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_IsTemporaryFilesAllowed(bool value) = 0;
    /// <summary>
    /// The root path where temporary files will be created. System temorary directory will be used by default. 
    /// Hosting process should have permissions to 
    /// create files and folders there.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_TempFilesRootPath() = 0;
    /// <summary>
    /// The root path where temporary files will be created. System temorary directory will be used by default. 
    /// Hosting process should have permissions to 
    /// create files and folders there.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_TempFilesRootPath(System::String value) = 0;
    /// <summary>
    /// Defines the maximum amount (in bytes) that all BLOBs in total may occupy in memory. First, all BLOBs 
    /// loading into memory as default behavior and only when it reaches the limit defined by this property, 
    /// other mechanisms (such as temporary files) can be involved. In terms of performance, the most efficient 
    /// way is storing BLOBs in memory, but from the other side, it leads to a high memory consumption what 
    /// may be undesirable. Using this property, you may set the optimal behavior for your environment or 
    /// other requirements.
    /// <remarks>
    /// This value will be ignored if <see cref="IBlobManagementOptions::set_IsTemporaryFilesAllowed"></see> is
    /// set to false. It makes no sense to limit the maximum BLOBs in memory, because if
    /// <see cref="IBlobManagementOptions::set_IsTemporaryFilesAllowed"></see> is set to false, the memory is the only place
    /// where BLOBs can be stored.
    /// </remarks>
    /// <remarks>Default value is 629,145,600 bytes (600Mb).</remarks>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint64_t get_MaxBlobsBytesInMemory() = 0;
    /// <summary>
    /// Defines the maximum amount (in bytes) that all BLOBs in total may occupy in memory. First, all BLOBs 
    /// loading into memory as default behavior and only when it reaches the limit defined by this property, 
    /// other mechanisms (such as temporary files) can be involved. In terms of performance, the most efficient 
    /// way is storing BLOBs in memory, but from the other side, it leads to a high memory consumption what 
    /// may be undesirable. Using this property, you may set the optimal behavior for your environment or 
    /// other requirements.
    /// <remarks>
    /// This value will be ignored if <see cref="IBlobManagementOptions::set_IsTemporaryFilesAllowed"></see> is
    /// set to false. It makes no sense to limit the maximum BLOBs in memory, because if
    /// <see cref="IBlobManagementOptions::set_IsTemporaryFilesAllowed"></see> is set to false, the memory is the only place
    /// where BLOBs can be stored.
    /// </remarks>
    /// <remarks>Default value is 629,145,600 bytes (600Mb).</remarks>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_MaxBlobsBytesInMemory(uint64_t value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


