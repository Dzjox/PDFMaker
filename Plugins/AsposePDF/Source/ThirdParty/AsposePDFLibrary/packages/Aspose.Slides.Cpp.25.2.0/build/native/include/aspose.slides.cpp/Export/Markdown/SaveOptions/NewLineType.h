#pragma once

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Type of new line that will be used in generated document.
/// </summary>
/// <example>Example
/// <code>
/// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
/// System::SharedPtr<System::IO::Stream> stream = System::MakeObject<System::IO::FileStream>(u"doc.md", System::IO::FileMode::OpenOrCreate);
/// 
/// System::SharedPtr<MarkdownSaveOptions> markdownSaveOptions = System::MakeObject<MarkdownSaveOptions>();
/// markdownSaveOptions->set_ShowHiddenSlides(true);
/// markdownSaveOptions->set_ShowSlideNumber(true);
/// markdownSaveOptions->set_Flavor(Flavor::Github);
/// markdownSaveOptions->set_ExportType(MarkdownExportType::Sequential);
/// markdownSaveOptions->set_NewLineType(NewLineType::Windows);
/// 
/// System::ArrayPtr<int32_t> slideIndices = System::MakeArray<int32_t>({1, 2, 3, 4, 5, 6, 7, 8, 9});
/// 
/// pres->Save(stream, slideIndices, SaveFormat::Md, markdownSaveOptions);
/// </code>
/// </example>
enum class NewLineType
{
    /// <summary>
    /// DOS & Windows OS new line - \\r\\n
    /// </summary>
    Windows,
    /// <summary>
    /// Unix & Mac OS X new line - \\n
    /// </summary>
    Unix,
    /// <summary>
    /// Mac (OS 9) new line - \\r
    /// </summary>
    Mac
};

} // namespace Export
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Export::NewLineType>
{
    static const ASPOSE_SLIDES_SHARED_API std::array<std::pair<Aspose::Slides::Export::NewLineType, const char_t*>, 3>& values();
};
/// @endcond



