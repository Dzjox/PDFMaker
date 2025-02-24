#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Chart/IFormattedTextContainer.h"
#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents legend properties of a chart.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ILegendEntryProperties : public Aspose::Slides::Charts::IFormattedTextContainer
{
    typedef ILegendEntryProperties ThisType;
    typedef Aspose::Slides::Charts::IFormattedTextContainer BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the hide flag of legend entry.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_Hide() = 0;
    /// <summary>
    /// Sets the hide flag of legend entry.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Hide(bool value) = 0;
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


