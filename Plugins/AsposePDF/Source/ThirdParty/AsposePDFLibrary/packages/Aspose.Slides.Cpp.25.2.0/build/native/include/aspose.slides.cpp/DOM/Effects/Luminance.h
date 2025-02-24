#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Effects/ILuminance.h>

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
class IEffectEffectiveData;
class ILuminanceEffectiveData;
class ImageTransformOperationCollection;
class ImageTransformOperationFactory;
class LuminanceEffectiveData;
class TrueColorBitmap;
} // namespace Effects
class FloatColor;
class IBaseSlide;
class IDOMObject;
class PictureImpl;
namespace PptSerialization
{
class ImageTransformOperationCollectionPPTSerialization;
} // namespace PptSerialization
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
/// Represents a Luminance effect.
/// Brightness linearly shifts all colors closer to white or black.
/// Contrast scales all colors to be either closer or further apart.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Luminance final : public Aspose::Slides::Effects::ImageTransformOperation, public Aspose::Slides::Effects::ILuminance, public Aspose::Slides::Effects::IVisualEffect
{
    typedef Luminance ThisType;
    typedef Aspose::Slides::Effects::ImageTransformOperation BaseType;
    typedef Aspose::Slides::Effects::ILuminance BaseType1;
    typedef Aspose::Slides::Effects::IVisualEffect BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Effects::LuminanceEffectiveData;
    friend class Aspose::Slides::PictureImpl;
    friend class Aspose::Slides::Effects::ImageTransformOperationCollection;
    friend class Aspose::Slides::PptSerialization::ImageTransformOperationCollectionPPTSerialization;
    friend class Aspose::Slides::Effects::ImageTransformOperationFactory;
    friend class Aspose::Slides::PptxSerialization::PartParser::ImageTransformOperationCollectionPPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Gets effective Luminance effect data with the inheritance applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::Effects::ILuminanceEffectiveData">ILuminanceEffectiveData</see>.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ILuminanceEffectiveData> GetEffective() override;
    /// <summary>
    /// Determines whether the specified <see cref="Aspose::Slides::Effects::Luminance">Luminance</see> is equal to the current <see cref="Aspose::Slides::Effects::Luminance">Luminance</see>.
    /// </summary>
    /// <param name="obj">The <see cref="Aspose::Slides::Effects::Luminance">Luminance</see> to compare.</param>
    /// <returns>true if objects are equal; otherwise, false.</returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// Serves as a hash function for a particular type.
    /// </summary>
    /// <returns>A hash code for the current object.</returns>
    ASPOSE_SLIDES_SHARED_API int32_t GetHashCode() const override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API float get_Brightness();
    ASPOSE_SLIDES_LOCAL_API void set_Brightness(float value);
    ASPOSE_SLIDES_LOCAL_API float get_Contrast();
    ASPOSE_SLIDES_LOCAL_API void set_Contrast(float value);
    
    ASPOSE_SLIDES_LOCAL_API Luminance(float brightness, float contrast, System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Luminance, CODEPORTING_ARGS(float brightness, float contrast, System::SharedPtr<IDOMObject> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<LuminanceEffectiveData> GetEffectiveInternal();
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<TrueColorBitmap> ApplyStatic(System::SharedPtr<TrueColorBitmap> img, float brightness, float contrastValue);
    /// @endcond
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<TrueColorBitmap> Apply(System::SharedPtr<TrueColorBitmap> img, System::SharedPtr<IBaseSlide> slide) override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ImageTransformOperation> Clone() override;
    ASPOSE_SLIDES_SHARED_API System::String GetStringData(System::SharedPtr<IBaseSlide> slide, System::SharedPtr<FloatColor> styleColor) override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~Luminance();
    
private:

    float m_brightness;
    float m_contrast;
    System::SharedPtr<LuminanceEffectiveData> m_effective;
    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IEffectEffectiveData> GetEffective_() override;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


