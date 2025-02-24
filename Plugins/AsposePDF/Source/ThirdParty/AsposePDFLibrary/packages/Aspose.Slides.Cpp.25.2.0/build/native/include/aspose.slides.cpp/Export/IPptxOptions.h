#pragma once

#include "Export/ISaveOptions.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
enum class Conformance;
enum class Zip64Mode;
} // namespace Export
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Represents options for saving OpenXml presentations (PPTX, PPSX, POTX, PPTM, PPSM, POTM).
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IPptxOptions : public virtual Aspose::Slides::Export::ISaveOptions
{
    typedef IPptxOptions ThisType;
    typedef Aspose::Slides::Export::ISaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Specifies the conformance class to which the Presentation document conforms.
    /// Default value is <see cref="Aspose::Slides::Export::Conformance::Ecma376_2006"></see>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::Export::Conformance get_Conformance() = 0;
    /// <summary>
    /// Specifies the conformance class to which the Presentation document conforms.
    /// Default value is <see cref="Aspose::Slides::Export::Conformance::Ecma376_2006"></see>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Conformance(Aspose::Slides::Export::Conformance value) = 0;
    /// <summary>
    /// Specifies whether the ZIP64 format is used for the Presentation document. 
    /// The default value is <see cref="Zip64Mode::IfNecessary"></see>
    /// </summary>
    /// <example>
    /// Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"demo.pptx");
    /// 
    /// System::SharedPtr<PptxOptions> pptxOptions = System::MakeObject<PptxOptions>();
    /// pptxOptions->set_Zip64Mode(Zip64Mode::Always);
    /// pres->Save(u"demo-zip64.pptx", SaveFormat::Pptx, pptxOptions);
    /// </code>
    /// </example>  
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::Export::Zip64Mode get_Zip64Mode() = 0;
    /// <summary>
    /// Specifies whether the ZIP64 format is used for the Presentation document. 
    /// The default value is <see cref="Zip64Mode::IfNecessary"></see>
    /// </summary>
    /// <example>
    /// Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"demo.pptx");
    /// 
    /// System::SharedPtr<PptxOptions> pptxOptions = System::MakeObject<PptxOptions>();
    /// pptxOptions->set_Zip64Mode(Zip64Mode::Always);
    /// pres->Save(u"demo-zip64.pptx", SaveFormat::Pptx, pptxOptions);
    /// </code>
    /// </example>  
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Zip64Mode(Aspose::Slides::Export::Zip64Mode value) = 0;
    /// <summary>
    /// Specifies whether the presentation thumbnail will be refreshed. 
    /// Read <see cref="bool"></see>.
    /// Default value is <b>true</b>. 
    /// </summary>
    /// <remarks>
    /// <para>When the option value is <b>true</b>, the new thumbnail will be generated.</para>
    /// <para>When the option value is <b>false</b>, the current thumbnail will be saved as is.</para> 
    /// </remarks>
    /// <example> Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"demo.pptx");
    /// System::SharedPtr<PptxOptions> pptxOptions = System::MakeObject<PptxOptions>();
    /// pptxOptions->set_RefreshThumbnail(false);
    /// pres->Save(u"result_with_old_thumbnail.pptx", SaveFormat::Pptx, pptxOptions);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_RefreshThumbnail() = 0;
    /// <summary>
    /// Specifies whether the presentation thumbnail will be refreshed. 
    /// Write <see cref="bool"></see>.
    /// Default value is <b>true</b>. 
    /// </summary>
    /// <remarks>
    /// <para>When the option value is <b>true</b>, the new thumbnail will be generated.</para>
    /// <para>When the option value is <b>false</b>, the current thumbnail will be saved as is.</para> 
    /// </remarks>
    /// <example> Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>(u"demo.pptx");
    /// System::SharedPtr<PptxOptions> pptxOptions = System::MakeObject<PptxOptions>();
    /// pptxOptions->set_RefreshThumbnail(false);
    /// pres->Save(u"result_with_old_thumbnail.pptx", SaveFormat::Pptx, pptxOptions);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_RefreshThumbnail(bool value) = 0;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


