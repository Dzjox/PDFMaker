#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/Effects/IAlphaModulate.h>
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
class IAlphaModulateEffectiveData;
class IEffectEffectiveData;
class ImageTransformOperationCollection;
class ImageTransformOperationFactory;
class TrueColorBitmap;
} // namespace Effects
class IBaseSlide;
class IDOMObject;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Represents an Alpha Modulate effect.
/// Effect alpha (opacity) values are multiplied by a fixed percentage.
/// The effect container specifies an effect containing alpha values to modulate.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS AlphaModulate final : public Aspose::Slides::Effects::ImageTransformOperation, public Aspose::Slides::Effects::IAlphaModulate, public Aspose::Slides::Effects::IVisualEffect
{
    typedef AlphaModulate ThisType;
    typedef Aspose::Slides::Effects::ImageTransformOperation BaseType;
    typedef Aspose::Slides::Effects::IAlphaModulate BaseType1;
    typedef Aspose::Slides::Effects::IVisualEffect BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Effects::ImageTransformOperationCollection;
    friend class Aspose::Slides::Effects::ImageTransformOperationFactory;
    /// @endcond
    
public:

    /// <summary>
    /// Gets effective Alpha Modulate effect data with the inheritance applied.
    /// </summary>
    /// <returns>A <see cref="IAlphaModulateEffectiveData "></see>.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAlphaModulateEffectiveData> GetEffective() override;
    /// <summary>
    /// Determines whether the specified <see cref="Aspose::Slides::Effects::AlphaModulate">AlphaModulate</see> is equal to the current <see cref="Aspose::Slides::Effects::AlphaModulate">AlphaModulate</see>.
    /// </summary>
    /// <param name="obj">The <see cref="Aspose::Slides::Effects::AlphaModulate">AlphaModulate</see> to compare.</param>
    /// <returns>true if objects are equal; otherwise, false.</returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// Serves as a hash function for a particular type.
    /// </summary>
    /// <returns>A hash code for the current object.</returns>
    ASPOSE_SLIDES_SHARED_API int32_t GetHashCode() const override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API AlphaModulate(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(AlphaModulate, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<TrueColorBitmap> Apply(System::SharedPtr<TrueColorBitmap> img, System::SharedPtr<IBaseSlide> slide) override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ImageTransformOperation> Clone() override;
    
private:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IEffectEffectiveData> GetEffective_() override;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


