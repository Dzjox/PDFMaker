#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/Effects/IColorChange.h>
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
class ColorChangeEffectiveData;
class IColorChangeEffectiveData;
class IEffectEffectiveData;
class ImageTransformOperationCollection;
class ImageTransformOperationFactory;
class TrueColorBitmap;
} // namespace Effects
namespace Export
{
class ApsPptxCanvas;
} // namespace Export
class FloatColor;
class IBaseSlide;
class IColorFormat;
class IDOMObject;
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
enum class SchemeColor;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Color;
} // namespace Drawing
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Effects {

/// <summary>
/// Represents a Color Change effect.
/// Instances of FromColor are replaced with instances of ToColor.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS ColorChange final : public Aspose::Slides::Effects::ImageTransformOperation, public Aspose::Slides::Effects::IColorChange, public Aspose::Slides::Effects::IVisualEffect
{
    typedef ColorChange ThisType;
    typedef Aspose::Slides::Effects::ImageTransformOperation BaseType;
    typedef Aspose::Slides::Effects::IColorChange BaseType1;
    typedef Aspose::Slides::Effects::IVisualEffect BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Effects::ColorChangeEffectiveData;
    friend class Aspose::Slides::Export::ApsPptxCanvas;
    friend class Aspose::Slides::Effects::ImageTransformOperationCollection;
    friend class Aspose::Slides::PptSerialization::ImageTransformOperationCollectionPPTSerialization;
    friend class Aspose::Slides::Effects::ImageTransformOperationFactory;
    friend class Aspose::Slides::PptxSerialization::PartParser::ImageTransformOperationCollectionPPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Color which will be replaced.
    /// Read-only <see cref="IColorFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_FromColor() override;
    /// <summary>
    /// Color which will replace.
    /// Read-only <see cref="IColorFormat"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_ToColor() override;
    
    /// <summary>
    /// Gets effective Color Change effect data with the inheritance applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::Effects::IColorChangeEffectiveData">IColorChangeEffectiveData</see>.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorChangeEffectiveData> GetEffective() override;
    /// <summary>
    /// Determines whether the specified <see cref="Aspose::Slides::Effects::ColorChange">ColorChange</see> is equal to the current <see cref="Aspose::Slides::Effects::ColorChange">ColorChange</see>.
    /// </summary>
    /// <param name="obj">The <see cref="Aspose::Slides::Effects::ColorChange">ColorChange</see> to compare.</param>
    /// <returns>true if objects are equal; otherwise, false.</returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// Serves as a hash function for a particular type.
    /// </summary>
    /// <returns>A hash code for the current object.</returns>
    ASPOSE_SLIDES_SHARED_API int32_t GetHashCode() const override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool get_UseAlpha();
    ASPOSE_SLIDES_LOCAL_API void set_UseAlpha(bool value);
    /// @endcond
    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API ColorChange(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ColorChange, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API ColorChange(System::SharedPtr<ColorFormat> colorFrom, System::SharedPtr<ColorFormat> colorTo, bool useAlpha, System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ColorChange, CODEPORTING_ARGS(System::SharedPtr<ColorFormat> colorFrom, System::SharedPtr<ColorFormat> colorTo, bool useAlpha, System::SharedPtr<IDOMObject> parentImmediate));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API ColorChange(System::Drawing::Color colorFrom, System::Drawing::Color colorTo, bool useAlpha, System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ColorChange, CODEPORTING_ARGS(System::Drawing::Color colorFrom, System::Drawing::Color colorTo, bool useAlpha, System::SharedPtr<IDOMObject> parentImmediate));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API ColorChange(System::Drawing::Color colorFrom, SchemeColor colorTo, bool useAlpha, System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ColorChange, CODEPORTING_ARGS(System::Drawing::Color colorFrom, SchemeColor colorTo, bool useAlpha, System::SharedPtr<IDOMObject> parentImmediate));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ColorChangeEffectiveData> GetEffectiveInternal();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<TrueColorBitmap> Apply(System::SharedPtr<TrueColorBitmap> img, System::SharedPtr<IBaseSlide> slide) override;
    ASPOSE_SLIDES_SHARED_API System::String GetStringData(System::SharedPtr<IBaseSlide> slide, System::SharedPtr<FloatColor> styleColor) override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ImageTransformOperation> Clone() override;
    
    virtual ASPOSE_SLIDES_SHARED_API ~ColorChange();
    
private:

    System::SharedPtr<ColorFormat> m_from;
    System::SharedPtr<ColorFormat> m_to;
    bool m_useAlpha;
    System::SharedPtr<ColorChangeEffectiveData> m_effective;
    
    ASPOSE_SLIDES_LOCAL_API void Init();
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IEffectEffectiveData> GetEffective_() override;
    
};

} // namespace Effects
} // namespace Slides
} // namespace Aspose


