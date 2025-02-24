#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Effects/IFillOverlay.h>
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
class FillOverlayEffectiveData;
class IEffectEffectiveData;
class IFillOverlayEffectiveData;
class ImageTransformOperationCollection;
class ImageTransformOperationFactory;
class TrueColorBitmap;
} // namespace Effects
enum class FillBlendMode;
class FillFormat;
class IBaseSlide;
class IDOMObject;
class IFillFormat;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Color;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Represents a Fill Overlay effect. A fill overlay may be used to specify
/// an additional fill for an object and blend the two fills together.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS FillOverlay final : public Aspose::Slides::Effects::ImageTransformOperation, public Aspose::Slides::Effects::IFillOverlay, public Aspose::Slides::Effects::IVisualEffect
{
    typedef FillOverlay ThisType;
    typedef Aspose::Slides::Effects::ImageTransformOperation BaseType;
    typedef Aspose::Slides::Effects::IFillOverlay BaseType1;
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
    /// Fill format.
    /// Read-only <see cref="IFillFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFillFormat> get_FillFormat() override;
    /// <summary>
    /// FillBlendMode.
    /// Read <see cref="FillBlendMode"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API FillBlendMode get_Blend() override;
    /// <summary>
    /// FillBlendMode.
    /// Write <see cref="FillBlendMode"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Blend(FillBlendMode value) override;
    
    /// <summary>
    /// Gets effective Fill Overlay effect data with the inheritance applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::Effects::IFillOverlayEffectiveData">IFillOverlayEffectiveData</see>.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IFillOverlayEffectiveData> GetEffective() override;
    /// <summary>
    /// Determines whether the specified <see cref="Aspose::Slides::Effects::FillOverlay">FillOverlay</see> is equal to the current <see cref="Aspose::Slides::Effects::FillOverlay">FillOverlay</see>.
    /// </summary>
    /// <param name="obj">The <see cref="Aspose::Slides::Effects::FillOverlay">FillOverlay</see> to compare.</param>
    /// <returns>true if objects are equal; otherwise, false.</returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// Serves as a hash function for a particular type.
    /// </summary>
    /// <returns>A hash code for the current object.</returns>
    ASPOSE_SLIDES_SHARED_API int32_t GetHashCode() const override;
    
protected:

    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API FillOverlay(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FillOverlay, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<FillOverlayEffectiveData> GetEffectiveInternal();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<TrueColorBitmap> Apply(System::SharedPtr<TrueColorBitmap> img, System::SharedPtr<IBaseSlide> slide) override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ImageTransformOperation> Clone() override;
    ASPOSE_SLIDES_SHARED_API void SetParent(System::SharedPtr<IDOMObject> parentImmediate) override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~FillOverlay();
    
private:

    System::SharedPtr<Aspose::Slides::FillFormat> m_fillFormat;
    FillBlendMode m_blendMode;
    System::SharedPtr<FillOverlayEffectiveData> m_effective;
    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IEffectEffectiveData> GetEffective_() override;
    ASPOSE_SLIDES_LOCAL_API System::Drawing::Color GetColorWithAppliedOverlayEffect(int32_t sourceA, int32_t sourceR, int32_t sourceG, int32_t sourceB, int32_t overlayA, int32_t overlayR, int32_t overlayG, int32_t overlayB);
    ASPOSE_SLIDES_LOCAL_API int32_t GetOverlayOverColor(int32_t sourceComponent, int32_t overlayComponent);
    ASPOSE_SLIDES_LOCAL_API int32_t GetOverlayScreenColor(int32_t sourceComponent, int32_t overlayComponent);
    ASPOSE_SLIDES_LOCAL_API void ApplyOverlayEffectToSourceBitmap(System::SharedPtr<TrueColorBitmap> sourceTrueColorBitmap, System::SharedPtr<TrueColorBitmap> overlayTrueColorBitmap);
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


