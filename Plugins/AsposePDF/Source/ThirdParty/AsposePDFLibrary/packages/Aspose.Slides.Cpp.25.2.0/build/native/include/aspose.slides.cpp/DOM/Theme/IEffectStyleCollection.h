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
class IEffectStyle;
} // namespace Theme
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Theme {

/// <summary>
/// Represents a collection of effect styles.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IEffectStyleCollection : public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::Theme::IEffectStyle>>
{
    typedef IEffectStyleCollection ThisType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::Theme::IEffectStyle>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns an element at specified position.
    /// Read-only <see cref="Aspose::Slides::Theme::IEffectStyle">IEffectStyle</see>.
    /// </summary>
    /// <param name="index">Position of element.</param>
    /// <returns>Element at specified position.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IEffectStyle> idx_get(int32_t index) = 0;
    
};

} // namespace Theme
} // namespace Slides
} // namespace Aspose


