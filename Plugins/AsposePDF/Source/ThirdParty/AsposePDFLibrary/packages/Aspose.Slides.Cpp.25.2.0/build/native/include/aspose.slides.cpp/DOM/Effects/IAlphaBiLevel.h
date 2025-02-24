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
class IAlphaBiLevelEffectiveData;
} // namespace Effects
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Represents an Alpha Bi-Level effect.
/// Alpha (Opacity) values less than the threshold are changed to 0 (fully transparent) and
/// alpha values greater than or equal to the threshold are changed to 100% (fully opaque).
/// </summary>
/// <remarks>
/// Use ImageTransformOperationFactory to create instaces in COM.
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IAlphaBiLevel : public virtual Aspose::Slides::Effects::IImageTransformOperation, public Aspose::Slides::IAccessiblePVIObject<System::SharedPtr<Aspose::Slides::Effects::IAlphaBiLevelEffectiveData>>
{
    typedef IAlphaBiLevel ThisType;
    typedef Aspose::Slides::Effects::IImageTransformOperation BaseType;
    typedef Aspose::Slides::IAccessiblePVIObject<System::SharedPtr<Aspose::Slides::Effects::IAlphaBiLevelEffectiveData>> BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns effect threshold.
    /// Read <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_Threshold() = 0;
    /// <summary>
    /// Returns effect threshold.
    /// Write <see cref="float"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Threshold(float value) = 0;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


