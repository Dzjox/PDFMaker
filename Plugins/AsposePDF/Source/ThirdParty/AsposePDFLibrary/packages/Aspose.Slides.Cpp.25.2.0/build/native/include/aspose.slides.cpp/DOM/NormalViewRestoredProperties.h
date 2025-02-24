#pragma once
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/INormalViewRestoredProperties.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class NormalViewProperties;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Specifies the sizing of the slide region ((width when a child of restoredTop, height when a
/// child of restoredLeft) of the normal view, when the region is of a variable restored size(neither minimized nor maximized).
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS NormalViewRestoredProperties : public Aspose::Slides::INormalViewRestoredProperties
{
    typedef NormalViewRestoredProperties ThisType;
    typedef Aspose::Slides::INormalViewRestoredProperties BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::NormalViewProperties;
    /// @endcond
    
public:

    /// <summary>
    /// Specifies the size of the slide region (width when a child of RestoredTop, height when a
    /// child of RestoredLeft).
    /// Read <see cref="float"></see>.
    /// </summary>
    /// <exception cref="System::ArgumentOutOfRangeException">Throws when value less than 0 ar greater than 100.</exception>
    ASPOSE_SLIDES_SHARED_API float get_DimensionSize() override;
    /// <summary>
    /// Specifies the size of the slide region (width when a child of RestoredTop, height when a
    /// child of RestoredLeft).
    /// Write <see cref="float"></see>.
    /// </summary>
    /// <exception cref="System::ArgumentOutOfRangeException">Throws when value less than 0 ar greater than 100.</exception>
    ASPOSE_SLIDES_SHARED_API void set_DimensionSize(float value) override;
    /// <summary>
    /// Specifies whether the size of the side content region should compensate for the new size
    /// when resizing the window containing the view within the application
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_AutoAdjust() override;
    /// <summary>
    /// Specifies whether the size of the side content region should compensate for the new size
    /// when resizing the window containing the view within the application
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_AutoAdjust(bool value) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API NormalViewRestoredProperties();
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(NormalViewRestoredProperties, CODEPORTING_ARGS());
    
private:

    float m_sz;
    bool m_autoAdjust;
    
};

} // namespace Slides
} // namespace Aspose


