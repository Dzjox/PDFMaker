#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/event.h>
#include <DOM/IGradientFormat.h>

#include "Drawing/Rect32f.h"
#include "DOM/PVI/MemoryAwareness/PVIObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class FillFormat;
class FillFormatImpl;
class FormatSchemeTemplate;
enum class GradientDirection;
class GradientFillParam;
class GradientFormatEffectiveData;
class GradientFormatImpl;
enum class GradientShape : int8_t;
class GradientStopCollection;
namespace HtmlIO
{
class TextPropertiesConverter;
} // namespace HtmlIO
class IBaseSlide;
class IDOMObject;
class IGradientFormatEffectiveData;
class IGradientStop;
class IGradientStopCollection;
class LineFillFormat;
class LineFillFormatImpl;
class MasterThemeTemplate;
enum class NullableBool : int8_t;
namespace OdpSerialization
{
namespace PartParser
{
class GradientFillFormatOdpDeserialization;
} // namespace PartParser
} // namespace OdpSerialization
namespace PptSerialization
{
class GradientFormatPPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class FillFormatVmlSerialization;
class GradientFormatPPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
enum class TileFlip;
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class RelativeRectangle;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class SortedList;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
class Color;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represent a gradient format.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS GradientFormat final : public Aspose::Slides::PVIObject, public Aspose::Slides::IGradientFormat
{
    typedef GradientFormat ThisType;
    typedef Aspose::Slides::PVIObject BaseType;
    typedef Aspose::Slides::IGradientFormat BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::GradientFillParam;
    friend class Aspose::Slides::GradientFormatEffectiveData;
    friend class Aspose::Slides::FillFormatImpl;
    friend class Aspose::Slides::GradientFormatImpl;
    friend class Aspose::Slides::LineFillFormat;
    friend class Aspose::Slides::HtmlIO::TextPropertiesConverter;
    friend class Aspose::Slides::PptxSerialization::PartParser::FillFormatVmlSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::GradientFillFormatOdpDeserialization;
    friend class Aspose::Slides::FillFormat;
    friend class Aspose::Slides::GradientStopCollection;
    friend class Aspose::Slides::LineFillFormatImpl;
    friend class Aspose::Slides::PptxSerialization::PartParser::GradientFormatPPTXSerialization;
    friend class Aspose::Slides::PptSerialization::GradientFormatPPTSerialization;
    friend class Aspose::Slides::FormatSchemeTemplate;
    friend class Aspose::Slides::MasterThemeTemplate;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the flipping mode for a gradient.
    /// Read <see cref="Slides::TileFlip"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::TileFlip get_TileFlip() override;
    /// <summary>
    /// Sets the flipping mode for a gradient.
    /// Write <see cref="Slides::TileFlip"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_TileFlip(Aspose::Slides::TileFlip value) override;
    /// <summary>
    /// Returns the style of a gradient.
    /// Read <see cref="Slides::GradientDirection"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::GradientDirection get_GradientDirection() override;
    /// <summary>
    /// Sets the style of a gradient.
    /// Write <see cref="Slides::GradientDirection"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_GradientDirection(Aspose::Slides::GradientDirection value) override;
    /// <summary>
    /// Returns the angle of a gradient.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_LinearGradientAngle() override;
    /// <summary>
    /// Sets the angle of a gradient.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_LinearGradientAngle(float value) override;
    /// <summary>
    /// Determines whether a gradient is scaled.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API NullableBool get_LinearGradientScaled() override;
    /// <summary>
    /// Determines whether a gradient is scaled.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_LinearGradientScaled(NullableBool value) override;
    /// <summary>
    /// Returns the shape of a gradient.
    /// Read <see cref="Slides::GradientShape"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::GradientShape get_GradientShape() override;
    /// <summary>
    /// Sets the shape of a gradient.
    /// Write <see cref="Slides::GradientShape"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_GradientShape(Aspose::Slides::GradientShape value) override;
    /// <summary>
    /// Returns the collection of gradient stops.
    /// Read-only <see cref="Aspose::Slides::IGradientStopCollection">IGradientStopCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IGradientStopCollection> get_GradientStops() override;
    
    /// <summary>
    /// Returns a gradient stop at the specified index.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IGradientStop> get_GradientStop(int32_t index) override;
    
protected:

    /// @cond
    static ASPOSE_SLIDES_LOCAL_API Drawing::Rect32f OneRect;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<GradientFormatImpl> get_RealObject();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    /// @cond
    /// <summary>
    /// Returns the collection of gradient stops.
    /// Read-only <see cref="Aspose::Slides::IGradientStopCollection">IGradientStopCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_GradientStops(System::SharedPtr<IGradientStopCollection> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::RelativeRectangle> get_TileRectangle();
    ASPOSE_SLIDES_LOCAL_API Drawing::Rect32f get_FillToRect();
    
    System::Event<void()> GradientFormatChanged;
    
    ASPOSE_SLIDES_LOCAL_API GradientFormat(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(GradientFormat, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    ASPOSE_SLIDES_SHARED_API void CreateChildObjects() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> CreateRealObject() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<GradientFormatEffectiveData> GetEffective();
    ASPOSE_SLIDES_LOCAL_API void Reset(bool notifyChanged = true);
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<GradientFormat> source);
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<IGradientFormatEffectiveData> source);
    ASPOSE_SLIDES_LOCAL_API void NoEventCopyDataFrom(System::SharedPtr<GradientFormat> source);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::SortedList<float, System::Drawing::Color>> CreateEffectiveStops(System::SharedPtr<IBaseSlide> slide);
    ASPOSE_SLIDES_LOCAL_API void SetFillToRect(float x, float y, float width, float height);
    ASPOSE_SLIDES_LOCAL_API void OnGradientFormatChanged();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~GradientFormat();
    
private:

    System::SharedPtr<GradientStopCollection> m_gradientStops;
    System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::RelativeRectangle> m_tileRect;
    
};

} // namespace Slides
} // namespace Aspose


