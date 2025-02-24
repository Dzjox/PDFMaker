#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Effects/IAlphaModulateFixed.h>
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
class AlphaModulateFixedEffectiveData;
class IAlphaModulateFixedEffectiveData;
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
/// Represents an Alpha Modulate Fixed effect.
/// Effect alpha (opacity) values are multiplied by a fixed percentage.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS AlphaModulateFixed final : public Aspose::Slides::Effects::ImageTransformOperation, public Aspose::Slides::Effects::IAlphaModulateFixed, public Aspose::Slides::Effects::IVisualEffect
{
    typedef AlphaModulateFixed ThisType;
    typedef Aspose::Slides::Effects::ImageTransformOperation BaseType;
    typedef Aspose::Slides::Effects::IAlphaModulateFixed BaseType1;
    typedef Aspose::Slides::Effects::IVisualEffect BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Effects::AlphaModulateFixedEffectiveData;
    friend class Aspose::Slides::Effects::ImageTransformOperationCollection;
    friend class Aspose::Slides::Effects::ImageTransformOperationFactory;
    /// @endcond
    
public:

    /// <summary>
    /// Returns an amount of effect in percents.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Amount() override;
    /// <summary>
    /// Returns an amount of effect in percents.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Amount(float value) override;
    
    /// <summary>
    /// Gets effective Alpha Modulate Fixed effect data with the inheritance applied.
    /// </summary>
    /// <returns>A <see cref="IAlphaModulateFixedEffectiveData "></see>.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAlphaModulateFixedEffectiveData> GetEffective() override;
    /// <summary>
    /// Determines whether the specified <see cref="Aspose::Slides::Effects::AlphaModulateFixed">AlphaModulateFixed</see> is equal to the current <see cref="Aspose::Slides::Effects::AlphaModulateFixed">AlphaModulateFixed</see>.
    /// </summary>
    /// <param name="obj">The <see cref="Aspose::Slides::Effects::AlphaModulateFixed">AlphaModulateFixed</see> to compare.</param>
    /// <returns>true if objects are equal; otherwise, false.</returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// Serves as a hash function for a particular type.
    /// </summary>
    /// <returns>A hash code for the current object.</returns>
    ASPOSE_SLIDES_SHARED_API int32_t GetHashCode() const override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API AlphaModulateFixed(float amount, System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(AlphaModulateFixed, CODEPORTING_ARGS(float amount, System::SharedPtr<IDOMObject> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<AlphaModulateFixedEffectiveData> GetEffectiveInternal();
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<TrueColorBitmap> ApplyStatic(System::SharedPtr<TrueColorBitmap> img, float amount);
    /// @endcond
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<TrueColorBitmap> Apply(System::SharedPtr<TrueColorBitmap> img, System::SharedPtr<IBaseSlide> slide) override;
    ASPOSE_SLIDES_SHARED_API System::String GetStringData(System::SharedPtr<IBaseSlide> slide, System::SharedPtr<FloatColor> styleColor) override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ImageTransformOperation> Clone() override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~AlphaModulateFixed();
    
private:

    float m_amount;
    System::SharedPtr<AlphaModulateFixedEffectiveData> m_effective;
    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IEffectEffectiveData> GetEffective_() override;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


