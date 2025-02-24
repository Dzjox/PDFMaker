#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/event.h>
#include <DOM/Effects/IImageTransformOperation.h>

#include "DOM/PVI/MemoryAwareness/PVIObject.h"
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
class AlphaBiLevel;
class AlphaCeiling;
class AlphaFloor;
class AlphaInverse;
class AlphaModulate;
class AlphaModulateFixed;
class AlphaReplace;
class BiLevel;
class Blur;
class ColorChange;
class ColorReplace;
class Duotone;
class FillOverlay;
class GrayScale;
class HSL;
class ImageTransformOperationCollection;
class ImageTransformOperationCollectionImpl;
class Luminance;
class Tint;
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
/// Represents abstract image transformation effect.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ImageTransformOperation : public Aspose::Slides::PVIObject, public virtual Aspose::Slides::Effects::IImageTransformOperation
{
    typedef ImageTransformOperation ThisType;
    typedef Aspose::Slides::PVIObject BaseType;
    typedef Aspose::Slides::Effects::IImageTransformOperation BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    
    /// @cond
    friend class Aspose::Slides::Effects::ImageTransformOperationCollectionImpl;
    friend class Aspose::Slides::EffectFormatImpl;
    friend class Aspose::Slides::Effects::AlphaBiLevel;
    friend class Aspose::Slides::Effects::AlphaCeiling;
    friend class Aspose::Slides::Effects::AlphaFloor;
    friend class Aspose::Slides::Effects::AlphaInverse;
    friend class Aspose::Slides::Effects::AlphaModulate;
    friend class Aspose::Slides::Effects::AlphaModulateFixed;
    friend class Aspose::Slides::Effects::AlphaReplace;
    friend class Aspose::Slides::Effects::BiLevel;
    friend class Aspose::Slides::Effects::Blur;
    friend class Aspose::Slides::Effects::ColorChange;
    friend class Aspose::Slides::Effects::ColorReplace;
    friend class Aspose::Slides::Effects::Duotone;
    friend class Aspose::Slides::Effects::FillOverlay;
    friend class Aspose::Slides::Effects::GrayScale;
    friend class Aspose::Slides::Effects::HSL;
    friend class Aspose::Slides::Effects::ImageTransformOperationCollection;
    friend class Aspose::Slides::Effects::Luminance;
    friend class Aspose::Slides::Effects::Tint;
    friend class Aspose::Slides::EffectFormat;
    /// @endcond
    
protected:

    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    
    /// @cond
    System::Event<void()> ImageTransformOperationChanged;
    
    ASPOSE_SLIDES_LOCAL_API ImageTransformOperation(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> CreateRealObject() override;
    /// @cond
    virtual ASPOSE_SLIDES_LOCAL_API System::SharedPtr<TrueColorBitmap> Apply(System::SharedPtr<TrueColorBitmap> img, System::SharedPtr<IBaseSlide> slide) = 0;
    virtual ASPOSE_SLIDES_SHARED_API void SetParent(System::SharedPtr<IDOMObject> parentImmediate);
    virtual ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ImageTransformOperation> Clone() = 0;
    virtual ASPOSE_SLIDES_SHARED_API System::String GetStringData(System::SharedPtr<IBaseSlide> slide, System::SharedPtr<FloatColor> styleColor);
    ASPOSE_SLIDES_LOCAL_API void Changed();
    ASPOSE_SLIDES_LOCAL_API void OnImageTransformOperationChanged();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~ImageTransformOperation();
    
private:

    uint32_t m_version;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


