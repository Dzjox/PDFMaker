#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IEffectFormatEffectiveData;
class IThreeDFormatEffectiveData;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Theme {

/// <summary>
/// Immutable object which contains effective effect style properties.
/// </summary>
/// <remarks>
/// This interface is used as a part of <see cref="Aspose::Slides::Theme::IEffectStyleCollectionEffectiveData">IEffectStyleCollectionEffectiveData</see>.
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IEffectStyleEffectiveData : public virtual System::Object
{
    typedef IEffectStyleEffectiveData ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns an effect format.
    /// Read-only <see cref="IEffectFormatEffectiveData"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IEffectFormatEffectiveData> get_EffectFormat() = 0;
    /// <summary>
    /// Returns a 3d format.
    /// Read-only <see cref="IThreeDFormatEffectiveData"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IThreeDFormatEffectiveData> get_ThreeDFormat() = 0;
    
};

} // namespace Theme
} // namespace Slides
} // namespace Aspose


