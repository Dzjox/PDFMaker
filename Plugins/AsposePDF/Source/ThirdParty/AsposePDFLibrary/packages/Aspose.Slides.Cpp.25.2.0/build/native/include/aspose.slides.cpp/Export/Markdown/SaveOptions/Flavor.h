#pragma once

#include <system/object_ext.h>
#include <system/enum.h>

#include "aspose_slides_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// All markdown specifications used in program.
/// </summary>
/// <example>Example:
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
enum class Flavor
{
    /// <summary>
    /// Github flavor.
    /// </summary>
    Github,
    /// <summary>
    /// Gruber flavor.
    /// </summary>
    Gruber,
    /// <summary>
    /// Multi markdown flavor.
    /// </summary>
    MultiMarkdown,
    /// <summary>
    /// Common mark flavor.
    /// </summary>
    CommonMark,
    /// <summary>
    /// Markdown extra flavor.
    /// </summary>
    MarkdownExtra,
    /// <summary>
    /// Pandoc flavor.
    /// </summary>
    Pandoc,
    /// <summary>
    /// Kramdown flavor.
    /// </summary>
    Kramdown,
    /// <summary>
    /// Markua flavor.
    /// </summary>
    Markua,
    /// <summary>
    /// Maruku flavor.
    /// </summary>
    Maruku,
    /// <summary>
    /// Markdown2 flavor.
    /// </summary>
    Markdown2,
    /// <summary>
    /// Remarkable flavor
    /// </summary>
    Remarkable,
    /// <summary>
    /// Showdown flavor.
    /// </summary>
    Showdown,
    /// <summary>
    /// Ghost flavor.
    /// </summary>
    Ghost,
    /// <summary>
    /// Gitlab flavor.
    /// </summary>
    GitLab,
    /// <summary>
    /// Haroopad flavor.
    /// </summary>
    Haroopad,
    /// <summary>
    /// IAWriter flavor.
    /// </summary>
    IaWriter,
    /// <summary>
    /// Redcarpet flavor.
    /// </summary>
    Redcarpet,
    /// <summary>
    /// Scholarly markdown flavor.
    /// </summary>
    ScholarlyMarkdown,
    /// <summary>
    /// Taiga flavor.
    /// </summary>
    Taiga,
    /// <summary>
    /// Trello flavor.
    /// </summary>
    Trello,
    /// <summary>
    /// S9E text formatter flavor.
    /// </summary>
    S9ETextFormatter,
    /// <summary>
    /// XWiki flavor.
    /// </summary>
    XWiki,
    /// <summary>
    /// Stack overflow flavor.
    /// </summary>
    StackOverflow,
    /// <summary>
    /// Default markdown flavor.
    /// </summary>
    Default
};

} // namespace Export
} // namespace Slides
} // namespace Aspose

/// @cond
template<>
struct EnumMetaInfo<Aspose::Slides::Export::Flavor>
{
    static const ASPOSE_SLIDES_SHARED_API std::array<std::pair<Aspose::Slides::Export::Flavor, const char_t*>, 24>& values();
};
/// @endcond



