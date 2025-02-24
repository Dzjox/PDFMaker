#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include "Export/ISvgShapeFormattingController.h"
#include "Export/ILinkEmbedController.h"
#include "Export/IHtmlFormattingController.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// This class allows export of video and audio files into a HTML
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IVideoPlayerHtmlController : public Aspose::Slides::Export::IHtmlFormattingController, public Aspose::Slides::Export::ISvgShapeFormattingController, public Aspose::Slides::Export::ILinkEmbedController
{
    typedef IVideoPlayerHtmlController ThisType;
    typedef Aspose::Slides::Export::IHtmlFormattingController BaseType;
    typedef Aspose::Slides::Export::ISvgShapeFormattingController BaseType1;
    typedef Aspose::Slides::Export::ILinkEmbedController BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


