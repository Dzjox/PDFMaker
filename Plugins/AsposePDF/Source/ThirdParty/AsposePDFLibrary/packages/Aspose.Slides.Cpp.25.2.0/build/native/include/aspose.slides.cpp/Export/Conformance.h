#pragma once

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Specifies the conformance class to which the PresentationML document conforms.
/// </summary>
enum class Conformance
{
    /// <summary>
    /// Specifies that the document conforms to the ECMA376:2006.
    /// </summary>
    Ecma376_2006 = 0,
    /// <summary>
    /// Specifies that the document conforms to the ISO/IEC 29500:2008 Transitional conformance class.
    /// </summary>
    Iso29500_2008_Transitional = 1,
    /// <summary>
    /// Specifies that the document conforms to the ISO/IEC 29500:2008 Strict conformance class.
    /// </summary>
    Iso29500_2008_Strict = 2
};

} // namespace Export
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Export::Conformance>
{
    static const ASPOSE_SLIDES_API_SHARED_API std::array<std::pair<Aspose::Slides::Export::Conformance, const char_t*>, 3>& values();
};
/// @endcond



