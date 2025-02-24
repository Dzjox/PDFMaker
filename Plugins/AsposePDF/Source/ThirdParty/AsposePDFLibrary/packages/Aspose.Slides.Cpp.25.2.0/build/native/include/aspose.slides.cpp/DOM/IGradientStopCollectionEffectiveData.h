#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IGenericCollection.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IGradientStopEffectiveData;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a collection of GradientStopDataEx objects.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IGradientStopCollectionEffectiveData : public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::IGradientStopEffectiveData>>
{
    typedef IGradientStopCollectionEffectiveData ThisType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::IGradientStopEffectiveData>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the gradient stop by index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IGradientStopEffectiveData> idx_get(int32_t index) = 0;
    
};

} // namespace Slides
} // namespace Aspose


