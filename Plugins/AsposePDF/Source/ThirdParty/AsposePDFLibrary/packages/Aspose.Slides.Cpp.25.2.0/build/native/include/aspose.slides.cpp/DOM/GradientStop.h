#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/IGradientStop.h>

#include "DOM/PVI/MemoryAwareness/PVIObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ColorFormat;
class GradientFormatImpl;
class GradientStopCollection;
class GradientStopCollectionImpl;
class GradientStopEffectiveData;
class GradientStopImpl;
class IColorFormat;
class IDOMObject;
class IGradientStopEffectiveData;
enum class PresetColor;
enum class SchemeColor;
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

/// <summary>
/// Represents a gradient format.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS GradientStop final : public Aspose::Slides::PVIObject, public Aspose::Slides::IGradientStop
{
    typedef GradientStop ThisType;
    typedef Aspose::Slides::PVIObject BaseType;
    typedef Aspose::Slides::IGradientStop BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::GradientFormatImpl;
    friend class Aspose::Slides::GradientStopCollectionImpl;
    friend class Aspose::Slides::GradientStopCollection;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the position (0..1) of a gradient stop.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Position() override;
    /// <summary>
    /// Sets the position (0..1) of a gradient stop.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Position(float value) override;
    /// <summary>
    /// Returns the color of a gradient stop.
    /// Read-only <see cref="Aspose::Slides::IColorFormat">IColorFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_Color() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<GradientStopImpl> get_RealObject();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API GradientStop(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(GradientStop, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API GradientStop(System::SharedPtr<IDOMObject> parentImmediate, float position, System::Drawing::Color color);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(GradientStop, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate, float position, System::Drawing::Color color));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API GradientStop(System::SharedPtr<IDOMObject> parentImmediate, float position, PresetColor presetColor);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(GradientStop, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate, float position, PresetColor presetColor));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API GradientStop(System::SharedPtr<IDOMObject> parentImmediate, float position, SchemeColor schemeColor);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(GradientStop, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate, float position, SchemeColor schemeColor));
    ASPOSE_SLIDES_SHARED_API void CreateChildObjects() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> CreateRealObject() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<GradientStopEffectiveData> GetEffective();
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<IGradientStopEffectiveData> source);
    ASPOSE_SLIDES_LOCAL_API void NoEventCopyDataFrom(System::SharedPtr<GradientStop> source);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~GradientStop();
    
private:

    System::SharedPtr<ColorFormat> m_color;
    
};

} // namespace Slides
} // namespace Aspose


