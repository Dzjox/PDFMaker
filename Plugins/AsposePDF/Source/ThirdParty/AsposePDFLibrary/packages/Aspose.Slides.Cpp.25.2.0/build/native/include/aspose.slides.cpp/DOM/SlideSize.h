#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/ISlideSize.h>

#include "DOM/Presentation.h"
#include "DOM/DomObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace PptSerialization
{
class PptConverter;
class PptDeserializator;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class SlideSizePPTXSerialization;
} // namespace PartParser
class PptxDeserializator;
} // namespace PptxSerialization
enum class SlideOrientation;
enum class SlideSizeScaleType;
enum class SlideSizeType;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class SizeF;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a size of slide.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS SlideSize : public Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Presentation>>, public Aspose::Slides::ISlideSize
{
    typedef SlideSize ThisType;
    typedef Aspose::Slides::DomObject<System::SharedPtr<Aspose::Slides::Presentation>> BaseType;
    typedef Aspose::Slides::ISlideSize BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::PptSerialization::PptConverter;
    friend class Aspose::Slides::Presentation;
    friend class Aspose::Slides::PptSerialization::PptDeserializator;
    friend class Aspose::Slides::PptxSerialization::PartParser::SlideSizePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PptxDeserializator;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the size in points.
    /// <remarks></remarks>
    /// Read <see cref="System::Drawing::SizeF"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::Drawing::SizeF get_Size() override;
    /// <summary>
    /// Returns the type of slide size.
    /// <remarks></remarks>
    /// Read <see cref="SlideSizeType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API SlideSizeType get_Type() override;
    /// <summary>
    /// Returns the slide orientation.
    /// <remarks>Changing this value will swap slide's dimensions.</remarks>
    /// Read <see cref="SlideOrientation"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API SlideOrientation get_Orientation() override;
    /// <summary>
    /// Sets the slide orientation.
    /// <remarks>Changing this value will swap slide's dimensions.</remarks>
    /// Write <see cref="SlideOrientation"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Orientation(SlideOrientation value) override;
    
    /// <summary>
    /// Sets the type of slide size and scales content using scale type.
    /// <remarks>Assigning any value except <see cref="SlideSizeType::Custom"></see> will change <see cref="SlideSize::get_Size"></see> accordingly, but will keep <see cref="SlideSize::get_Orientation"></see> intact.</remarks>
    /// </summary>
    /// <param name="type">Slide size type.</param>
    /// <param name="scaleType">Scale type of slide content.</param>
    ASPOSE_SLIDES_SHARED_API void SetSize(SlideSizeType type, SlideSizeScaleType scaleType) override;
    /// <summary>
    /// Sets the size in points and scales content using scale type.
    /// <remarks>Assigning any value will reset <see cref="SlideSize::get_Type">Type</see> property to <see cref="SlideSizeType::Custom"></see> and set <see cref="SlideSize::get_Orientation">SlideSize::get_Orientation()</see>.</remarks>
    /// </summary>
    /// <param name="width">Width.</param>
    /// <param name="height">Height.</param>
    /// <param name="scaleType">Scale type of slide content.</param>
    ASPOSE_SLIDES_SHARED_API void SetSize(float width, float height, SlideSizeScaleType scaleType) override;
    ASPOSE_SLIDES_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    /// @cond
    int64_t m_width, m_height;
    SlideSizeType m_sizeType;
    static ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<int64_t> standardSizes;
    
    ASPOSE_SLIDES_LOCAL_API bool IsSizeMapToType(SlideSizeType type);
    
    ASPOSE_SLIDES_LOCAL_API SlideSize(System::SharedPtr<Presentation> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SlideSize, CODEPORTING_ARGS(System::SharedPtr<Presentation> parentImmediate));
    
private:

    static ASPOSE_SLIDES_LOCAL_API float GetScalingCoefficient(float scalingCoefX, float scalingCoefY, SlideSizeScaleType scaleType);
    ASPOSE_SLIDES_LOCAL_API void ScaleGeometry(System::Drawing::SizeF oldSize, SlideSizeScaleType scaleType);
    
    static ASPOSE_SLIDES_LOCAL_API struct __StaticConstructor__ { ASPOSE_SLIDES_LOCAL_API __StaticConstructor__(); } s_constructor__;
    
};

} // namespace Slides
} // namespace Aspose


