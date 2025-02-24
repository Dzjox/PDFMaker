﻿#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IGenericCollection.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Theme
{
class IEffectStyleEffectiveData;
} // namespace Theme
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Theme {

/// <summary>
/// Immutable object that represents a readonly collection of effective effect styles.
/// </summary>
/// <remarks>
/// This interface is used as a part of <see cref="Aspose::Slides::Theme::IFormatSchemeEffectiveData">IFormatSchemeEffectiveData</see>.
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IEffectStyleCollectionEffectiveData : public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::Theme::IEffectStyleEffectiveData>>
{
    typedef IEffectStyleCollectionEffectiveData ThisType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::Theme::IEffectStyleEffectiveData>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the element at the specified index.
    /// Read-only <see cref="Aspose::Slides::Theme::IEffectStyleEffectiveData">IEffectStyleEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IEffectStyleEffectiveData> idx_get(int32_t index) = 0;
    
};

} // namespace Theme
} // namespace Slides
} // namespace Aspose


