#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <Export/IPptxOptions.h>

#include "Export/SaveOptions.h"
#include "aspose_slides_api_defs.h"

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
namespace Xlsx
{
namespace PresentationML
{
class PptxSaveContext;
} // namespace PresentationML
} // namespace Xlsx
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Represents options for saving OpenXml presentations (PPTX, PPSX, POTX, PPTM, PPSM, POTM).
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS PptxOptions final : public Aspose::Slides::Export::SaveOptions, public Aspose::Slides::Export::IPptxOptions
{
    typedef PptxOptions ThisType;
    typedef Aspose::Slides::Export::SaveOptions BaseType;
    typedef Aspose::Slides::Export::IPptxOptions BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Xlsx::PresentationML::PptxSaveContext;
    /// @endcond
    
public:

    /// <summary>
    /// Specifies the conformance class to which the Presentation document conforms.
    /// Default value is <see cref="Aspose::Slides::Export::Conformance::Ecma376_2006"></see>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::Export::Conformance get_Conformance() override;
    /// <summary>
    /// Specifies the conformance class to which the Presentation document conforms.
    /// Default value is <see cref="Aspose::Slides::Export::Conformance::Ecma376_2006"></see>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Conformance(Aspose::Slides::Export::Conformance value) override;
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
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::Export::Zip64Mode get_Zip64Mode() override;
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
    ASPOSE_SLIDES_SHARED_API void set_Zip64Mode(Aspose::Slides::Export::Zip64Mode value) override;
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
    ASPOSE_SLIDES_SHARED_API bool get_RefreshThumbnail() override;
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
    ASPOSE_SLIDES_SHARED_API void set_RefreshThumbnail(bool value) override;
    
    /// <summary>
    /// Creates new instance of PptxOptions
    /// </summary>
    ASPOSE_SLIDES_SHARED_API PptxOptions();
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PptxOptions> Clone();
    /// @endcond
    
private:

    Aspose::Slides::Export::Conformance pr_Conformance;
    Aspose::Slides::Export::Zip64Mode pr_Zip64Mode;
    bool pr_RefreshThumbnail;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


