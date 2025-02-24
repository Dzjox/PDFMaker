#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <Export/IXpsOptions.h>

#include "Export/SaveOptions.h"
#include "aspose_slides_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Provides options that control how a presentation is saved in XPS format.
/// </summary>
/// <example>
/// The following example shows how to converting presentations to XPS using default settings.
/// <code>
/// // Instantiate a Presentation object that represents a presentation file
/// auto pres = System::MakeObject<Presentation>(u"Convert_XPS.pptx");
/// 
/// // Saving the presentation to XPS document
/// pres->Save(u"XPS_Output_Without_XPSOption_out.xps", SaveFormat::Xps);
/// </code>
/// The following example shows how to converting presentations to XPS using custom settings.
/// <code>
/// // Instantiate a Presentation object that represents a presentation file
/// auto pres = System::MakeObject<Presentation>(u"Convert_XPS_Options.pptx");
/// 
/// // Instantiate the TiffOptions class
/// System::SharedPtr<XpsOptions> options = System::MakeObject<XpsOptions>();
/// // Save MetaFiles as PNG
/// options->set_SaveMetafilesAsPng(true);
/// // Save the presentation to XPS document
/// pres->Save(u"XPS_With_Options_out.xps", SaveFormat::Xps, options);
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS XpsOptions : public Aspose::Slides::Export::SaveOptions, public Aspose::Slides::Export::IXpsOptions
{
    typedef XpsOptions ThisType;
    typedef Aspose::Slides::Export::SaveOptions BaseType;
    typedef Aspose::Slides::Export::IXpsOptions BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Specifies whether the generated document should include hidden slides or not.
    /// Default is <c>false</c>. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_ShowHiddenSlides() override;
    /// <summary>
    /// Specifies whether the generated document should include hidden slides or not.
    /// Default is <c>false</c>. 
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ShowHiddenSlides(bool value) override;
    /// <summary>
    /// True to convert all metafiles used in a presentation to the PNG images.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <b>true</b>.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API bool get_SaveMetafilesAsPng() override;
    /// <summary>
    /// True to convert all metafiles used in a presentation to the PNG images.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <b>true</b>.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void set_SaveMetafilesAsPng(bool value) override;
    /// <summary>
    /// True to draw black frame around each slide.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <b>false</b>.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API bool get_DrawSlidesFrame() override;
    /// <summary>
    /// True to draw black frame around each slide.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <b>false</b>.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void set_DrawSlidesFrame(bool value) override;
    
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API XpsOptions();
    
private:

    bool saveMetafilesAsPng;
    bool m_drawSlidesFrame;
    bool m_showHiddenSlides;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


