#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Effects/IAlphaInverse.h>
#include <cstdint>

#include "DOM/Effects/IVisualEffect.h"
#include "DOM/Effects/ImageTransformOperation.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ColorFormat;
namespace Effects
{
class AlphaInverseEffectiveData;
class IAlphaInverseEffectiveData;
class IEffectEffectiveData;
class ImageTransformOperationCollection;
class ImageTransformOperationFactory;
class TrueColorBitmap;
} // namespace Effects
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
/// @endcond

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Represents an Alpha Inverse effect.
/// Alpha (opacity) values are inverted by subtracting from 100%.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS AlphaInverse final : public Aspose::Slides::Effects::ImageTransformOperation, public Aspose::Slides::Effects::IAlphaInverse, public Aspose::Slides::Effects::IVisualEffect
{
    typedef AlphaInverse ThisType;
    typedef Aspose::Slides::Effects::ImageTransformOperation BaseType;
    typedef Aspose::Slides::Effects::IAlphaInverse BaseType1;
    typedef Aspose::Slides::Effects::IVisualEffect BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Effects::ImageTransformOperationCollection;
    friend class Aspose::Slides::Effects::ImageTransformOperationFactory;
    friend class Aspose::Slides::PptxSerialization::PartParser::ImageTransformOperationCollectionPPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Gets effective Alpha Inverse effect data with the inheritance applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::Effects::IAlphaInverseEffectiveData">IAlphaInverseEffectiveData</see>.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAlphaInverseEffectiveData> GetEffective() override;
    /// <summary>
    /// Determines whether the specified <see cref="Aspose::Slides::Effects::AlphaInverse">AlphaInverse</see> is equal to the current <see cref="Aspose::Slides::Effects::AlphaInverse">AlphaInverse</see>.
    /// </summary>
    /// <param name="obj">The <see cref="Aspose::Slides::Effects::AlphaInverse">AlphaInverse</see> to compare.</param>
    /// <returns>true if objects are equal; otherwise, false.</returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// Serves as a hash function for a particular type.
    /// </summary>
    /// <returns>A hash code for the current object.</returns>
    ASPOSE_SLIDES_SHARED_API int32_t GetHashCode() const override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ColorFormat> get_Color();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API AlphaInverse(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(AlphaInverse, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<AlphaInverseEffectiveData> GetEffectiveInternal();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<TrueColorBitmap> Apply(System::SharedPtr<TrueColorBitmap> img, System::SharedPtr<IBaseSlide> slide) override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ImageTransformOperation> Clone() override;
    ASPOSE_SLIDES_SHARED_API void SetParent(System::SharedPtr<IDOMObject> parentImmediate) override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~AlphaInverse();
    
private:

    System::SharedPtr<ColorFormat> m_colorFormat;
    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IEffectEffectiveData> GetEffective_() override;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


