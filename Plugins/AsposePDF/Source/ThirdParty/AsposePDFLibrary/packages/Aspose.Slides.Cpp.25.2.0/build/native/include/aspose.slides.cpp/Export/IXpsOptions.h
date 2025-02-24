#pragma once
//Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "Export/ISaveOptions.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Provides options that control how a presentation is saved in XPS format.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IXpsOptions : public virtual Aspose::Slides::Export::ISaveOptions
{
    typedef IXpsOptions ThisType;
    typedef Aspose::Slides::Export::ISaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// True to convert all metafiles used in a presentation to the PNG images.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <b>true</b>.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_SaveMetafilesAsPng() = 0;
    /// <summary>
    /// True to convert all metafiles used in a presentation to the PNG images.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <b>true</b>.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_SaveMetafilesAsPng(bool value) = 0;
    /// <summary>
    /// True to draw black frame around each slide.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <b>false</b>.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_DrawSlidesFrame() = 0;
    /// <summary>
    /// True to draw black frame around each slide.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <remarks>
    /// Default is <b>false</b>.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_DrawSlidesFrame(bool value) = 0;
    /// <summary>
    /// Specifies whether the generated document should include hidden slides or not.
    /// Default is <c>false</c>. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ShowHiddenSlides() = 0;
    /// <summary>
    /// Specifies whether the generated document should include hidden slides or not.
    /// Default is <c>false</c>. 
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ShowHiddenSlides(bool value) = 0;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


