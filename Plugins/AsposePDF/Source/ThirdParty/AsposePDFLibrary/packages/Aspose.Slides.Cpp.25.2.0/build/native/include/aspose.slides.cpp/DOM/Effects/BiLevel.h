#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Effects/IBiLevel.h>
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
class BiLevelEffectiveData;
class IBiLevelEffectiveData;
class IEffectEffectiveData;
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
/// Represents a Bi-Level (black/white) effect.
/// Input colors whose luminance is less than the specified threshold value are changed to black.
/// Input colors whose luminance are greater than or equal the specified value are set to white.
/// The alpha effect values are unaffected by this effect.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS BiLevel final : public Aspose::Slides::Effects::ImageTransformOperation, public Aspose::Slides::Effects::IBiLevel, public Aspose::Slides::Effects::IVisualEffect
{
    typedef BiLevel ThisType;
    typedef Aspose::Slides::Effects::ImageTransformOperation BaseType;
    typedef Aspose::Slides::Effects::IBiLevel BaseType1;
    typedef Aspose::Slides::Effects::IVisualEffect BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Effects::BiLevelEffectiveData;
    friend class Aspose::Slides::Effects::ImageTransformOperationCollection;
    friend class Aspose::Slides::Effects::ImageTransformOperationFactory;
    friend class Aspose::Slides::PptxSerialization::PartParser::ImageTransformOperationCollectionPPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Gets effective Bi-Level effect data with the inheritance applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::Effects::IBiLevelEffectiveData">IBiLevelEffectiveData</see>.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBiLevelEffectiveData> GetEffective() override;
    /// <summary>
    /// Determines whether the specified <see cref="Aspose::Slides::Effects::BiLevel">BiLevel</see> is equal to the current <see cref="Aspose::Slides::Effects::BiLevel">BiLevel</see>.
    /// </summary>
    /// <param name="obj">The <see cref="Aspose::Slides::Effects::BiLevel">BiLevel</see> to compare.</param>
    /// <returns>true if objects are equal; otherwise, false.</returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// Serves as a hash function for a particular type.
    /// </summary>
    /// <returns>A hash code for the current object.</returns>
    ASPOSE_SLIDES_SHARED_API int32_t GetHashCode() const override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API float get_Threshold();
    ASPOSE_SLIDES_LOCAL_API void set_Threshold(float value);
    
    ASPOSE_SLIDES_LOCAL_API BiLevel(float threshold, System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(BiLevel, CODEPORTING_ARGS(float threshold, System::SharedPtr<IDOMObject> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BiLevelEffectiveData> GetEffectiveInternal();
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<TrueColorBitmap> ApplyStatic(System::SharedPtr<TrueColorBitmap> img, float thresholdValue);
    /// @endcond
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<TrueColorBitmap> Apply(System::SharedPtr<TrueColorBitmap> img, System::SharedPtr<IBaseSlide> slide) override;
    ASPOSE_SLIDES_SHARED_API System::String GetStringData(System::SharedPtr<IBaseSlide> slide, System::SharedPtr<FloatColor> styleColor) override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ImageTransformOperation> Clone() override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~BiLevel();
    
private:

    float m_threshold;
    System::SharedPtr<BiLevelEffectiveData> m_effective;
    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IEffectEffectiveData> GetEffective_() override;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


