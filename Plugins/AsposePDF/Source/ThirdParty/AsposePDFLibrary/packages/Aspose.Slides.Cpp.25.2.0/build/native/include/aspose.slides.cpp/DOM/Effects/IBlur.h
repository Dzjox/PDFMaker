#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IAccessiblePVIObject.h"
#include "DOM/Effects/IImageTransformOperation.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Effects
{
class IBlurEffectiveData;
} // namespace Effects
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Represents a Blur effect that is applied to the entire shape, including its fill.
/// All color channels, including alpha, are affected.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IBlur : public virtual Aspose::Slides::Effects::IImageTransformOperation, public Aspose::Slides::IAccessiblePVIObject<System::SharedPtr<Aspose::Slides::Effects::IBlurEffectiveData>>
{
    typedef IBlur ThisType;
    typedef Aspose::Slides::Effects::IImageTransformOperation BaseType;
    typedef Aspose::Slides::IAccessiblePVIObject<System::SharedPtr<Aspose::Slides::Effects::IBlurEffectiveData>> BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns blur radius.
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_Radius() = 0;
    /// <summary>
    /// Sets blur radius.
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Radius(double value) = 0;
    /// <summary>
    /// Determines whether the bounds of the object should be grown as a result of the blurring.
    /// True indicates the bounds are grown while false indicates that they are not.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_Grow() = 0;
    /// <summary>
    /// Determines whether the bounds of the object should be grown as a result of the blurring.
    /// True indicates the bounds are grown while false indicates that they are not.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Grow(bool value) = 0;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


