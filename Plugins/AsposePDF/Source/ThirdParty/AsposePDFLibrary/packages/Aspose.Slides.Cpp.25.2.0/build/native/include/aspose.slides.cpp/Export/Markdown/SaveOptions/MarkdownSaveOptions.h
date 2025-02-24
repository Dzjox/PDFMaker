#pragma once

#include <system/string.h>

#include "Export/SaveOptions.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
enum class Flavor;
enum class MarkdownExportType;
enum class NewLineType;
} // namespace Export
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Represents options that control how presentation should be saved to markdown.
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
class ASPOSE_SLIDES_SHARED_CLASS MarkdownSaveOptions : public Aspose::Slides::Export::SaveOptions
{
    typedef MarkdownSaveOptions ThisType;
    typedef Aspose::Slides::Export::SaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Specifies markdown specification to convert presentation.
    /// Default is <c>TextOnly</c>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API MarkdownExportType get_ExportType() const;
    /// <summary>
    /// Specifies markdown specification to convert presentation.
    /// Default is <c>TextOnly</c>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ExportType(MarkdownExportType value);
    /// <summary>
    /// Specifies the base path where document with resources will be saved.
    /// Default is the current directory of the application.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_BasePath() const;
    /// <summary>
    /// Specifies the base path where document with resources will be saved.
    /// Default is the current directory of the application.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_BasePath(System::String value);
    /// <summary>
    /// Specifies folder name to save images.
    /// Default is <c>Images</c>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_ImagesSaveFolderName() const;
    /// <summary>
    /// Specifies folder name to save images.
    /// Default is <c>Images</c>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ImagesSaveFolderName(System::String value);
    /// <summary>
    /// Specifies whether the generated document should have new lines \\r(Macintosh) of \\n(Unix) or \\r\\n(Windows).
    /// Default is <c>Unix</c>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::Export::NewLineType get_NewLineType() const;
    /// <summary>
    /// Specifies whether the generated document should have new lines \\r(Macintosh) of \\n(Unix) or \\r\\n(Windows).
    /// Default is <c>Unix</c>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_NewLineType(Aspose::Slides::Export::NewLineType value);
    /// <summary>
    /// Specifies whether the generated document should show comments or not.
    /// Default is <c>false</c>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ShowComments() const;
    /// <summary>
    /// Specifies whether the generated document should show comments or not.
    /// Default is <c>false</c>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ShowComments(bool value);
    /// <summary>
    /// Specifies whether the generated document should include hidden slides or not.
    /// Default is <c>false</c>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ShowHiddenSlides() const;
    /// <summary>
    /// Specifies whether the generated document should include hidden slides or not.
    /// Default is <c>false</c>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ShowHiddenSlides(bool value);
    /// <summary>
    /// Specifies whether the generated document should show number of each slide or not.
    /// Default is <c>false</c>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ShowSlideNumber() const;
    /// <summary>
    /// Specifies whether the generated document should show number of each slide or not.
    /// Default is <c>false</c>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ShowSlideNumber(bool value);
    /// <summary>
    /// Specifies markdown specification to convert presentation.
    /// Default is <c>Multi-markdown</c>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::Export::Flavor get_Flavor() const;
    /// <summary>
    /// Specifies markdown specification to convert presentation.
    /// Default is <c>Multi-markdown</c>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Flavor(Aspose::Slides::Export::Flavor value);
    
    /// <summary>
    /// Ctor.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API MarkdownSaveOptions();
    
private:

    MarkdownExportType pr_ExportType;
    System::String pr_BasePath;
    System::String pr_ImagesSaveFolderName;
    Aspose::Slides::Export::NewLineType pr_NewLineType;
    bool pr_ShowComments;
    bool pr_ShowHiddenSlides;
    bool pr_ShowSlideNumber;
    Aspose::Slides::Export::Flavor pr_Flavor;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


