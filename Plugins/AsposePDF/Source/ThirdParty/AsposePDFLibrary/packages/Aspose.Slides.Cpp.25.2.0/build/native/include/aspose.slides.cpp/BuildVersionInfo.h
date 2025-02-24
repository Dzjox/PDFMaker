#pragma once

#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace System
{
class DateTime;
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Contains information about version of Aspose.Slides.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS BuildVersionInfo
{
    typedef BuildVersionInfo ThisType;
    
public:

    /// <summary>
    /// Version of Aspose.Slides assembly.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API const System::String& AssemblyVersion();
    /// <summary>
    /// Version of assembly file.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API const System::String& FileVersion();
    /// <summary>
    /// Product name of Aspose.Slides
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API const System::String& Product();
    
    /// <summary>
    /// Major version number.
    /// </summary>
    static const ASPOSE_SLIDES_SHARED_API int32_t ProductMajor;
    /// <summary>
    /// Minor version number.
    /// </summary>
    static const ASPOSE_SLIDES_SHARED_API int32_t ProductMinor;
    
    /// <summary>
    /// Release date of the assembly.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::DateTime& ReleaseDate();
    
public:
    BuildVersionInfo() = delete;
};

} // namespace Slides
} // namespace Aspose


