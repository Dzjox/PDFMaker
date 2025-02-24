#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IFillParamSource.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IEffectFormatEffectiveData;
class IFillFormatEffectiveData;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Immutable object which contains effective background properties.
/// </summary>
/// <remarks>
/// This interface is used together with the <see cref="Aspose::Slides::IBackground">IBackground</see> interface to return effective formatting values with inheritance applied.
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IBackgroundEffectiveData : public Aspose::Slides::IFillParamSource
{
    typedef IBackgroundEffectiveData ThisType;
    typedef Aspose::Slides::IFillParamSource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns effective fill format.
    /// Read-only <see cref="Aspose::Slides::IFillFormatEffectiveData">IFillFormatEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFillFormatEffectiveData> get_FillFormat() = 0;
    /// <summary>
    /// Returns effective effect format.
    /// Read-only <see cref="Aspose::Slides::IEffectFormatEffectiveData">IEffectFormatEffectiveData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IEffectFormatEffectiveData> get_EffectFormat() = 0;
    
};

} // namespace Slides
} // namespace Aspose


