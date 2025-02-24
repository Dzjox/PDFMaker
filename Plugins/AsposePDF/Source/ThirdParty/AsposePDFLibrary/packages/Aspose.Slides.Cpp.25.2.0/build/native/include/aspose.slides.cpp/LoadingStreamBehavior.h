#pragma once
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// The <see cref="System::IO::Stream"></see> passed to a method is considered as a Binary Large Object (BLOB) (see 
/// <see cref="Aspose::Slides::IBlobManagementOptions">IBlobManagementOptions</see> description). Values of this enumeration identify how 
/// the <see cref="System::IO::Stream"></see> should be treated when it passed to the method. Depending on the 
/// requirements, different decisions could be made to provide the most efficient behavior. 
/// </summary>
enum class LoadingStreamBehavior
{
    /// <summary>
    /// The stream will be read to the end and then released - i.e. it will be guaranteed that this stream 
    /// will not be used by <see cref="Aspose::Slides::IPresentation">IPresentation</see> instance in the future. It can be closed by the client 
    /// code or used in any other way.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = MakeObject&lt;Presentation&gt;();
    /// auto fileStream = MakeObject&lt;IO::FileStream&gt;(u"video.avi", IO::FileMode::Open);
    /// pres->get_Videos()->AddVideo(fileStream, LoadingStreamBehavior::ReadStreamAndRelease);
    /// fileStream->Close(); // the stream can be closed, it's no longer needed for the "pres" object.
    /// </code>
    /// </example>
    ReadStreamAndRelease,
    /// <summary>
    /// The stream will be locked inside the <see cref="Aspose::Slides::IPresentation">IPresentation</see> object, i.e. the ownership of 
    /// the stream will be transferred. The <see cref="Aspose::Slides::IPresentation">IPresentation</see> object will be responsible to 
    /// correctly dispose the stream when this object will be disposed itself. 
    /// This behavior is extremely useful when you need to serialize a large BLOB file (such as a large 
    /// video or audio -see <see cref="Aspose::Slides::IBlobManagementOptions">IBlobManagementOptions</see> description) and want to prevent loading 
    /// this file into memory or other performance issues. You may just open the <see cref="System::IO::FileStream"></see> 
    /// for this file and pass to a method, choosing <see cref="LoadingStreamBehavior::KeepLocked"></see> LoadingStreamBehavior.
    /// </summary>
    /// <example>
    /// <code>
    /// auto pres = MakeObject&lt;Presentation&gt;();
    /// auto fileStream = MakeObject&lt;IO::FileStream&gt;(u"Huge Monster Sized Video.avi", IO::FileMode::Open);
    /// pres->get_Videos()->AddVideo(fileStream, LoadingStreamBehavior::KeepLocked);
    /// // fileStream->Close(); // You should not close the stream or interact with it in any other way, it will lead to an error in Save method.
    /// // The fileStream will be used for saving, what will prevent high memory consumption
    /// pres->Save(u"My Presentation With Huge Monster Sized Video.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    KeepLocked
};

} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::LoadingStreamBehavior>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::LoadingStreamBehavior, const char_t*>, 2>& values();
};
/// @endcond



