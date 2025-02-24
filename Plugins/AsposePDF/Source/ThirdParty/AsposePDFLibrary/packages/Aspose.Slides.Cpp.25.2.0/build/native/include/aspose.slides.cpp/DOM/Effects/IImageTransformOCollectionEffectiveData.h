#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IGenericCollection.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Effects
{
class IEffectEffectiveData;
} // namespace Effects
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Immutable object that represents a readonly collection of effective image transform effects.
/// </summary>
/// <remarks>
/// Name IImageTransformOperationCollectionEffectiveData truncuted to IImageTransformOCollectionEffectiveData because of COM names length cannot be more then 39.
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IImageTransformOCollectionEffectiveData : public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::Effects::IEffectEffectiveData>>
{
    typedef IImageTransformOCollectionEffectiveData ThisType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::Effects::IEffectEffectiveData>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns element by index.
    /// </summary>
    /// <param name="index"></param>
    /// <returns></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IEffectEffectiveData> idx_get(int32_t index) = 0;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


