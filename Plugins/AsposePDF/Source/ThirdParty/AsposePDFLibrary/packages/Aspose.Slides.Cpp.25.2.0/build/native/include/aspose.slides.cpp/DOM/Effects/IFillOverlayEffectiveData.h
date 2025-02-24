#pragma once
// Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/Effects/IEffectEffectiveData.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class FillBlendMode;
class IFillFormatEffectiveData;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Immutable object which represents a Fill Overlay effect. A fill overlay may be used to specify
/// an additional fill for an object and blend the two fills together.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IFillOverlayEffectiveData : public virtual Aspose::Slides::Effects::IEffectEffectiveData
{
    typedef IFillOverlayEffectiveData ThisType;
    typedef Aspose::Slides::Effects::IEffectEffectiveData BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// FillBlendMode.
    /// Read-only <see cref="FillBlendMode"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API FillBlendMode get_Blend() = 0;
    /// <summary>
    /// Fill format.
    /// Read-only <see cref="IFillFormatEffectiveData"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFillFormatEffectiveData> get_FillFormat() = 0;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


