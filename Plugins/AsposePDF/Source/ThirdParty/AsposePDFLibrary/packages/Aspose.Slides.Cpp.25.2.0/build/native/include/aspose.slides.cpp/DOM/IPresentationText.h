#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ISlideText;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents the text extracted from the slide
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IPresentationText : public virtual System::Object
{
    typedef IPresentationText ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// An array of <see cref="Aspose::Slides::ISlideText">ISlideText</see> contains a presentation's text.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<ISlideText>> get_SlidesText() = 0;
    
};

} // namespace Slides
} // namespace Aspose


