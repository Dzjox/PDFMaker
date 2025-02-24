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
class IFillOverlayEffectiveData;
} // namespace Effects
enum class FillBlendMode;
class IFillFormat;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Represents a Fill Overlay effect. A fill overlay may be used to specify
/// an additional fill for an object and blend the two fills together.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IFillOverlay : public virtual Aspose::Slides::Effects::IImageTransformOperation, public Aspose::Slides::IAccessiblePVIObject<System::SharedPtr<Aspose::Slides::Effects::IFillOverlayEffectiveData>>
{
    typedef IFillOverlay ThisType;
    typedef Aspose::Slides::Effects::IImageTransformOperation BaseType;
    typedef Aspose::Slides::IAccessiblePVIObject<System::SharedPtr<Aspose::Slides::Effects::IFillOverlayEffectiveData>> BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// FillBlendMode.
    /// Read <see cref="FillBlendMode"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API FillBlendMode get_Blend() = 0;
    /// <summary>
    /// FillBlendMode.
    /// Write <see cref="FillBlendMode"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Blend(FillBlendMode value) = 0;
    /// <summary>
    /// Fill format.
    /// Read-only <see cref="IFillFormat"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFillFormat> get_FillFormat() = 0;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


