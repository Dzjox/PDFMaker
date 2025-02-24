#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IGenericCollection.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Theme
{
class IExtraColorScheme;
} // namespace Theme
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Theme {

/// <summary>
/// Represents a collection of additional color schemes.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IExtraColorSchemeCollection : public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::Theme::IExtraColorScheme>>
{
    typedef IExtraColorSchemeCollection ThisType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::Theme::IExtraColorScheme>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns an color scheme by index.
    /// Read-only <see cref="Aspose::Slides::Theme::IExtraColorScheme">IExtraColorScheme</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IExtraColorScheme> idx_get(int32_t index) = 0;
    
};

} // namespace Theme
} // namespace Slides
} // namespace Aspose


