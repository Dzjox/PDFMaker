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
class IColorReplaceEffectiveData;
} // namespace Effects
class IColorFormat;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Represents a Color Replacement effect.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IColorReplace : public virtual Aspose::Slides::Effects::IImageTransformOperation, public Aspose::Slides::IAccessiblePVIObject<System::SharedPtr<Aspose::Slides::Effects::IColorReplaceEffectiveData>>
{
    typedef IColorReplace ThisType;
    typedef Aspose::Slides::Effects::IImageTransformOperation BaseType;
    typedef Aspose::Slides::IAccessiblePVIObject<System::SharedPtr<Aspose::Slides::Effects::IColorReplaceEffectiveData>> BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns color format which will replace color of every pixel.
    /// Read-only <see cref="IColorFormat"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorFormat> get_Color() = 0;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


