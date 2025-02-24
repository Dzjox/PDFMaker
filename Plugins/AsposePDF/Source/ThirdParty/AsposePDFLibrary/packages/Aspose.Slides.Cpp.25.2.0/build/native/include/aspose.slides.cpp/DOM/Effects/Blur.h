#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Effects/IBlur.h>
#include <cstdint>

#include "DOM/Effects/IVisualEffect.h"
#include "DOM/Effects/ImageTransformOperation.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class EffectFormat;
class EffectFormatImpl;
namespace Effects
{
class BlurEffectiveData;
class IBlurEffectiveData;
class IEffectEffectiveData;
class ImageTransformOperationCollection;
class ImageTransformOperationFactory;
class TrueColorBitmap;
} // namespace Effects
class FloatColor;
class IBaseSlide;
class IDOMObject;
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
/// Represents a Blur effect that is applied to the entire shape, including its fill.
/// All color channels, including alpha, are affected.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Blur final : public Aspose::Slides::Effects::ImageTransformOperation, public Aspose::Slides::Effects::IBlur, public Aspose::Slides::Effects::IVisualEffect
{
    typedef Blur ThisType;
    typedef Aspose::Slides::Effects::ImageTransformOperation BaseType;
    typedef Aspose::Slides::Effects::IBlur BaseType1;
    typedef Aspose::Slides::Effects::IVisualEffect BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::EffectFormatImpl;
    friend class Aspose::Slides::Effects::ImageTransformOperationCollection;
    friend class Aspose::Slides::EffectFormat;
    friend class Aspose::Slides::Effects::ImageTransformOperationFactory;
    /// @endcond
    
public:

    /// <summary>
    /// Returns blur radius.
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_Radius() override;
    /// <summary>
    /// Sets blur radius.
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Radius(double value) override;
    /// <summary>
    /// Determines whether the bounds of the object should be grown as a result of the blurring.
    /// True indicates the bounds are grown while false indicates that they are not.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_Grow() override;
    /// <summary>
    /// Determines whether the bounds of the object should be grown as a result of the blurring.
    /// True indicates the bounds are grown while false indicates that they are not.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Grow(bool value) override;
    
    /// <summary>
    /// Gets effective Blur effect data with the inheritance applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::Effects::IBlurEffectiveData">IBlurEffectiveData</see>.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBlurEffectiveData> GetEffective() override;
    /// <summary>
    /// Determines whether the specified <see cref="Aspose::Slides::Effects::Blur">Blur</see> is equal to the current <see cref="Aspose::Slides::Effects::Blur">Blur</see>.
    /// </summary>
    /// <param name="obj">The <see cref="Aspose::Slides::Effects::Blur">Blur</see> to compare.</param>
    /// <returns>true if objects are equal; otherwise, false.</returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// Serves as a hash function for a particular type.
    /// </summary>
    /// <returns>A hash code for the current object.</returns>
    ASPOSE_SLIDES_SHARED_API int32_t GetHashCode() const override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API Blur(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Blur, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API Blur(double radius, bool grow, System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Blur, CODEPORTING_ARGS(double radius, bool grow, System::SharedPtr<IDOMObject> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BlurEffectiveData> GetEffectiveInternal();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<TrueColorBitmap> Apply(System::SharedPtr<TrueColorBitmap> img, System::SharedPtr<IBaseSlide> slide) override;
    ASPOSE_SLIDES_SHARED_API System::String GetStringData(System::SharedPtr<IBaseSlide> slide, System::SharedPtr<FloatColor> styleColor) override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ImageTransformOperation> Clone() override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~Blur();
    
private:

    double m_radius;
    bool m_grow;
    System::SharedPtr<BlurEffectiveData> m_effective;
    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IEffectEffectiveData> GetEffective_() override;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


