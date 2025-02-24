#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Effects/IHSL.h>
#include <cstdint>

#include "DOM/Effects/IVisualEffect.h"
#include "DOM/Effects/ImageTransformOperation.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Effects
{
class HSLEffectiveData;
class IEffectEffectiveData;
class IHSLEffectiveData;
class ImageTransformOperationCollection;
class ImageTransformOperationFactory;
class TrueColorBitmap;
} // namespace Effects
class FloatColor;
class IBaseSlide;
class IDOMObject;
namespace PptxSerialization
{
namespace PartParser
{
class ImageTransformOperationCollectionPPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Represents a Hue/Saturation/Luminance effect.
/// The hue, saturation, and luminance may each be adjusted relative to its current value.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS HSL final : public Aspose::Slides::Effects::ImageTransformOperation, public Aspose::Slides::Effects::IHSL, public Aspose::Slides::Effects::IVisualEffect
{
    typedef HSL ThisType;
    typedef Aspose::Slides::Effects::ImageTransformOperation BaseType;
    typedef Aspose::Slides::Effects::IHSL BaseType1;
    typedef Aspose::Slides::Effects::IVisualEffect BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Effects::HSLEffectiveData;
    friend class Aspose::Slides::Effects::ImageTransformOperationCollection;
    friend class Aspose::Slides::Effects::ImageTransformOperationFactory;
    friend class Aspose::Slides::PptxSerialization::PartParser::ImageTransformOperationCollectionPPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Gets effective Hue/Saturation/Luminance effect data with the inheritance applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::Effects::IHSLEffectiveData">IHSLEffectiveData</see>.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IHSLEffectiveData> GetEffective() override;
    /// <summary>
    /// Determines whether the specified <see cref="Aspose::Slides::Effects::HSL">HSL</see> is equal to the current <see cref="Aspose::Slides::Effects::HSL">HSL</see>.
    /// </summary>
    /// <param name="obj">The <see cref="Aspose::Slides::Effects::HSL">HSL</see> to compare.</param>
    /// <returns>true if objects are equal; otherwise, false.</returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// Serves as a hash function for a particular type.
    /// </summary>
    /// <returns>A hash code for the current object.</returns>
    ASPOSE_SLIDES_SHARED_API int32_t GetHashCode() const override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API float get_Hue();
    ASPOSE_SLIDES_LOCAL_API void set_Hue(float value);
    ASPOSE_SLIDES_LOCAL_API float get_Saturation();
    ASPOSE_SLIDES_LOCAL_API void set_Saturation(float value);
    ASPOSE_SLIDES_LOCAL_API float get_Luminance();
    ASPOSE_SLIDES_LOCAL_API void set_Luminance(float value);
    
    ASPOSE_SLIDES_LOCAL_API HSL(float hue, float saturation, float luminance, System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(HSL, CODEPORTING_ARGS(float hue, float saturation, float luminance, System::SharedPtr<IDOMObject> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<HSLEffectiveData> GetEffectiveInternal();
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<TrueColorBitmap> ApplyStatic(System::SharedPtr<TrueColorBitmap> img, float hueValue, float satValue, float lumValue);
    /// @endcond
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<TrueColorBitmap> Apply(System::SharedPtr<TrueColorBitmap> img, System::SharedPtr<IBaseSlide> slide) override;
    ASPOSE_SLIDES_SHARED_API System::String GetStringData(System::SharedPtr<IBaseSlide> slide, System::SharedPtr<FloatColor> styleColor) override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ImageTransformOperation> Clone() override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~HSL();
    
private:

    float m_hue;
    float m_saturation;
    float m_luminance;
    System::SharedPtr<HSLEffectiveData> m_effective;
    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IEffectEffectiveData> GetEffective_() override;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


