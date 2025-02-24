#pragma once

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Type of rendering document.
/// </summary>
/// <example>Example:
/// <code>
/// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"pres.pptx");
/// System::SharedPtr<MarkdownSaveOptions> markdownSaveOptions = System::MakeObject<MarkdownSaveOptions>();
/// markdownSaveOptions->set_ShowHiddenSlides(true);
/// markdownSaveOptions->set_ShowSlideNumber(true);
/// markdownSaveOptions->set_Flavor(Flavor::Github);
/// markdownSaveOptions->set_ExportType(MarkdownExportType::Sequential);
/// markdownSaveOptions->set_NewLineType(NewLineType::Windows);
/// 
/// System::ArrayPtr<int32_t> slideIndices = System::MakeArray<int32_t>({1, 2, 3, 4, 5, 6, 7, 8, 9});
/// 
/// pres->Save(u"doc.md", slideIndices, SaveFormat::Md, markdownSaveOptions);
/// </code>
/// </example>
enum class MarkdownExportType
{
    /// <summary>
    /// Render all items separately. One by one.
    /// </summary>
    Sequential,
    /// <summary>
    /// Render only text.
    /// </summary>
    TextOnly,
    /// <summary>
    /// Render all items, items that are grouped - render together.
    /// </summary>
    Visual
};

} // namespace Export
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Export::MarkdownExportType>
{
    static const ASPOSE_SLIDES_SHARED_API std::array<std::pair<Aspose::Slides::Export::MarkdownExportType, const char_t*>, 3>& values();
};
/// @endcond



