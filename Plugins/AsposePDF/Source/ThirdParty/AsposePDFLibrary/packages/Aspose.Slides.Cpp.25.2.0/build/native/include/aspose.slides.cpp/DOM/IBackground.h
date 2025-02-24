#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/ISlideComponent.h"
#include "DOM/IFillParamSource.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class BackgroundType : int8_t;
class IBackgroundEffectiveData;
class IColorFormat;
class IEffectFormat;
class IFillFormat;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents background of a slide.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IBackground : public virtual Aspose::Slides::ISlideComponent, public Aspose::Slides::IFillParamSource
{
    typedef IBackground ThisType;
    typedef Aspose::Slides::ISlideComponent BaseType;
    typedef Aspose::Slides::IFillParamSource BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns a type of background fill.
    /// Read <see cref="BackgroundType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API BackgroundType get_Type() = 0;
    /// <summary>
    /// Returns a type of background fill.
    /// Write <see cref="BackgroundType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Type(BackgroundType value) = 0;
    /// <summary>
    /// Returns a FillFormat for BackgroundType::OwnBackground fill.
    /// Read-only <see cref="Aspose::Slides::IFillFormat">IFillFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFillFormat> get_FillFormat() = 0;
    /// <summary>
    /// Returns a EffectFormat for BackgroundType::OwnBackground fill.
    /// Read-only <see cref="Aspose::Slides::IEffectFormat">IEffectFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IEffectFormat> get_EffectFormat() = 0;
    /// <summary>
    /// Returns a ColorFormat for a BackgroundType::Themed fill.
    /// Read-only <see cref="Aspose::Slides::IColorFormat">IColorFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorFormat> get_StyleColor() = 0;
    /// <summary>
    /// Returns an index of BackgroundType::Themed fill in background theme collection.
    /// 0 means no fill.
    /// 1..999 - index.
    /// Read <see cref="uint16_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint16_t get_StyleIndex() = 0;
    /// <summary>
    /// Returns an index of BackgroundType::Themed fill in background theme collection.
    /// 0 means no fill.
    /// 1..999 - index.
    /// Write <see cref="uint16_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_StyleIndex(uint16_t value) = 0;
    
    /// <summary>
    /// Gets effective background data with the inheritance applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::IBackgroundEffectiveData">IBackgroundEffectiveData</see>.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IBackgroundEffectiveData> GetEffective() = 0;
    
};

} // namespace Slides
} // namespace Aspose


