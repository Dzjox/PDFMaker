#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/event.h>
#include <DOM/ISketchFormat.h>
#include <cstdint>

#include "DOM/PVI/MemoryAwareness/PVIObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class BaseSlide;
namespace EqualityComparers
{
class SketchFormatEqualityComparer;
} // namespace EqualityComparers
class GeometryShapeLayout;
class IDOMObject;
class ISketchFormatEffectiveData;
class LineFormat;
class LineFormatEffectiveData;
class LineFormatImpl;
enum class LineSketchType;
namespace PptxSerialization
{
namespace PartParser
{
class SketchFormatPPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
namespace PresentationML
{
class Geometry2D;
} // namespace PresentationML
class Shape;
class SketchFormatEffectiveData;
class SketchFormatImpl;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents properties for lines sketch format.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS SketchFormat final : public Aspose::Slides::PVIObject, public Aspose::Slides::ISketchFormat
{
    typedef SketchFormat ThisType;
    typedef Aspose::Slides::PVIObject BaseType;
    typedef Aspose::Slides::ISketchFormat BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::GeometryShapeLayout;
    friend class Aspose::Slides::Shape;
    friend class Aspose::Slides::EqualityComparers::SketchFormatEqualityComparer;
    friend class Aspose::Slides::SketchFormatEffectiveData;
    friend class Aspose::Slides::SketchFormatImpl;
    friend class Aspose::Slides::LineFormatEffectiveData;
    friend class Aspose::Slides::PptxSerialization::PartParser::SketchFormatPPTXSerialization;
    friend class Aspose::Slides::LineFormatImpl;
    friend class Aspose::Slides::BaseSlide;
    friend class Aspose::Slides::LineFormat;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the sketch type.
    /// Read <see cref="Slides::LineSketchType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API LineSketchType get_SketchType() override;
    /// <summary>
    /// Sets the sketch type.
    /// Write <see cref="Slides::LineSketchType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_SketchType(LineSketchType value) override;
    
protected:

    /// @cond
    static const ASPOSE_SLIDES_LOCAL_API uint32_t DefaultSeed;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<SketchFormatImpl> get_RealObject();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API uint32_t get_Seed();
    ASPOSE_SLIDES_LOCAL_API void set_Seed(uint32_t value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::PresentationML::Geometry2D> get_Geometry2D();
    ASPOSE_SLIDES_LOCAL_API void set_Geometry2D(System::SharedPtr<Aspose::Slides::PresentationML::Geometry2D> value);
    
    System::Event<void()> SketchFormatChanged;
    
    ASPOSE_SLIDES_LOCAL_API SketchFormat(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SketchFormat, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> CreateRealObject() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<SketchFormatEffectiveData> GetEffective();
    ASPOSE_SLIDES_LOCAL_API bool IsNotDefined();
    ASPOSE_SLIDES_LOCAL_API void Reset();
    ASPOSE_SLIDES_LOCAL_API void NoEventCopyDataFrom(System::SharedPtr<ISketchFormat> source);
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<ISketchFormatEffectiveData> source);
    ASPOSE_SLIDES_LOCAL_API void OnSketchFormatChanged();
    /// @endcond
    
private:

    System::SharedPtr<Aspose::Slides::PresentationML::Geometry2D> m_geometry;
    
};

} // namespace Slides
} // namespace Aspose


