#pragma once
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the behavior regarding treating the <see cref="Aspose::Slides::IPresentation">IPresentation</see> source (file or 
/// <see cref="System::IO::Stream"></see>) while loading and working with an instance of <see cref="Aspose::Slides::IPresentation">IPresentation</see>.
/// </summary>
/// <remarks>The source is the parameter passed to the <see cref="Aspose::Slides::IPresentation">IPresentation</see> constructor. In the 
/// example below, the source is the "pres.pptx" file:
/// <example>
/// <code>
/// auto loadOptions = MakeObject&lt;LoadOptions&gt;();
/// loadOptions->get_BlobManagementOptions()->set_PresentationLockingBehavior(PresentationLockingBehavior::KeepLocked);
/// {
///     auto pres = MakeObject&lt;Presentation&gt;(u"pres.pptx", loadOptions);
/// }
/// </code>
/// </example>
/// For this example, the source ("pres.pptx" file) will be locked for a <see cref="Aspose::Slides::IPresentation">IPresentation</see> 
/// instance lifetime, i.e. can't be changed or deleted by the other process.
/// </remarks>
enum class PresentationLockingBehavior
{
    /// <summary>
    /// The source will be locked only for a time of <see cref="Aspose::Slides::IPresentation">IPresentation</see> constructor execution.
    /// <remarks>If <see cref="Aspose::Slides::IBlobManagementOptions::set_IsTemporaryFilesAllowed">IBlobManagementOptions::set_IsTemporaryFilesAllowed()</see> is set to false, all BLOBs 
    /// will be loaded into memory. Otherwise, other means such a temporary files might be used.</remarks>
    /// <remarks>This behavior is slower than <see cref="PresentationLockingBehavior::KeepLocked"></see>, and if it is possible to pass the 
    /// ownership of the source to <see cref="Aspose::Slides::IPresentation">IPresentation</see>, it is recommended to use <see cref="PresentationLockingBehavior::KeepLocked"></see>.
    /// </remarks>
    /// </summary>
    LoadAndRelease = 0,
    /// <summary>
    /// The source will be locked for a whole lifetime of <see cref="Aspose::Slides::IPresentation">IPresentation</see> instance, until it will 
    /// be disposed.
    /// <remarks><see cref="Aspose::Slides::IBlobManagementOptions::set_IsTemporaryFilesAllowed">IBlobManagementOptions::set_IsTemporaryFilesAllowed()</see> is must be set to true for using 
    /// this behavior, otherwise exception will be thrown.</remarks>
    /// <remarks>This behavior is recommended, it is faster and consumes less memory than <see cref="PresentationLockingBehavior::LoadAndRelease"></see>.
    /// </remarks>
    /// </summary>
    KeepLocked = 1
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::PresentationLockingBehavior>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::PresentationLockingBehavior, const char_t*>, 2>& values();
};
/// @endcond



