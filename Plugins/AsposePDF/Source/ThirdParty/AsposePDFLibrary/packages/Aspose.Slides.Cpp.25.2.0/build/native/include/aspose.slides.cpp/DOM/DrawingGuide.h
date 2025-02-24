#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/IDrawingGuide.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class DrawingGuidesCollection;
enum class Orientation : int8_t;
namespace PptxSerialization
{
namespace PartParser
{
class CommonSlideViewPropertiesPPTSerialization;
class CommonSlideViewPropertiesPPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents an adjustable drawing guide.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS DrawingGuide final : public Aspose::Slides::IDrawingGuide
{
    typedef DrawingGuide ThisType;
    typedef Aspose::Slides::IDrawingGuide BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::DrawingGuidesCollection;
    friend class Aspose::Slides::PptxSerialization::PartParser::CommonSlideViewPropertiesPPTSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::CommonSlideViewPropertiesPPTXSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns orientation of the drawing guide.
    /// Read <see cref="Slides::Orientation"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::Orientation get_Orientation() override;
    /// <summary>
    /// Sets orientation of the drawing guide.
    /// Write <see cref="Slides::Orientation"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Orientation(Aspose::Slides::Orientation value) override;
    /// <summary>
    /// Returns position of the drawing guide in points from the top, left corner of the slide.
    /// Read <see cref="float"></see>.
    /// </summary>
    /// <remarks>
    /// The typical value range is from zero to slide height for a horizontal guide and from zero to slide width for a vertical guide.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API float get_Position() override;
    /// <summary>
    /// Sets position of the drawing guide in points from the top, left corner of the slide.
    /// Write <see cref="float"></see>.
    /// </summary>
    /// <remarks>
    /// The typical value range is from zero to slide height for a horizontal guide and from zero to slide width for a vertical guide.
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API void set_Position(float value) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API DrawingGuide(Aspose::Slides::Orientation orientation, float position);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(DrawingGuide, CODEPORTING_ARGS(Aspose::Slides::Orientation orientation, float position));
    
private:

    Aspose::Slides::Orientation pr_Orientation;
    float m_position;
    
};

} // namespace Slides
} // namespace Aspose


