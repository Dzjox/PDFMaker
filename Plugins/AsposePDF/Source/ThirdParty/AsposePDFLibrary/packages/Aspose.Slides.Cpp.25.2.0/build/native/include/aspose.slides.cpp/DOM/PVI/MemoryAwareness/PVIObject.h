#pragma once
// Copyright (c) 2001-2021 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <DOM/ISlideComponent.h>
#include <cstdint>

#include "DOM/PVI/MemoryAwareness/PVIProperty.h"
#include "DOM/PVI/IPVIObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Foundation
{
namespace Portable
{
template <typename TArg,typename TResult> using Func1 = System::MulticastDelegate<TResult(TArg)>;
} // namespace Portable
} // namespace Foundation
namespace Slides
{
template <typename, typename> class AccessibleEffectiveData;
class Backdrop3DScene;
class Background;
class BackgroundEffectiveData;
class BasePortionFormat;
template <typename, typename> class BasePortionFormatEffectiveData;
class BaseSlide;
class BulletFormat;
class BulletFormatEffectiveData;
class Camera;
class CellFormat;
class CellFormatEffectiveData;
class ChartPortionFormatEffectiveData;
namespace Charts
{
class ChartPortionFormat;
class ChartSeriesRenderContext;
class DataLabel;
class DataLabelFormat;
class Format;
class PieSector;
class RenderingHelper;
} // namespace Charts
class ColorEffectiveData;
class ColorFormat;
class ColorFormatImpl;
class EffectFormat;
class EffectFormatEffectiveData;
namespace Effects
{
class ImageTransformOperation;
class ImageTransformOperationCollection;
} // namespace Effects
namespace Export
{
class ApsPptxCanvas;
} // namespace Export
class FillFormat;
class FillFormatEffectiveData;
class GradientFormat;
class GradientStop;
class GradientStopCollection;
namespace HtmlIO
{
class HtmlToPptxTextConverter;
} // namespace HtmlIO
class Hyperlink;
class IBaseSlide;
class IDOMObject;
class IPresentation;
class IPresentationComponent;
class LightRig;
class LineFillFormat;
class LineFillFormatEffectiveData;
class LineFormat;
class LineFormatEffectiveData;
namespace OdpSerialization
{
namespace PartParser
{
class FillFormatOdpSerialization;
class SlideOdpDeserialization;
class StylePartsOdpSerialization;
class StyleTextPropertiesOdpSerialization;
} // namespace PartParser
} // namespace OdpSerialization
class OleObjectFrame;
class Paragraph;
class ParagraphFormat;
class ParagraphFormatEffectiveData;
class PatternFormat;
class Picture;
class PictureFillFormat;
class PortionFormat;
class PortionFormatEffectiveData;
class PortionFormatImpl;
namespace PptSerialization
{
class FillFormatPPTSerialization;
class PictureFillFormatPPTSerialization;
class PptSerializator;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
namespace Chart
{
class DataLabelPPTXSerialization;
} // namespace Chart
class EffectFormatPPTXSerialization;
class PictureFillFormatPPTXSerialization;
class PortionFormatPPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
class Presentation;
class ShapeBevel;
class SketchFormat;
class Tab;
class TabCollection;
class Table;
class TextFrameFormat;
class TextFrameFormatEffectiveData;
namespace TextLayoutParts
{
class ParagraphEffective;
} // namespace TextLayoutParts
class TextStyle;
class TextStyleEffectiveData;
class ThreeDFormat;
class ThreeDFormatEffectiveData;
namespace UnsupportedProps
{
namespace PPTUnsupportedProps
{
class BulletFormatPPTUnsupportedProps;
class CameraPPTUnsupportedProps;
class ParagraphFormatPPTUnsupportedProps;
class PortionFormatPPTUnsupportedProps;
class TextFrameFormatPPTUnsupportedProps;
} // namespace PPTUnsupportedProps
namespace PPTXUnsupportedProps
{
class BulletFormatPPTXUnsupportedProps;
namespace Charts
{
class FormatPPTXUnsupportedProps;
} // namespace Charts
class ColorFormatPPTXUnsupportedProps;
class ParagraphFormatPPTXUnsupportedProps;
class PictureFillFormatPPTXUnsupportedProps;
class PicturePPTXUnsupportedProps;
class PortionFormatPPTXUnsupportedProps;
class PresetTextShape;
class TextFrameFormatPPTXUnsupportedProps;
class ThreeDFormatPPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Encapsulates basic service infrastructure for objects can be a subject of property value inheritance.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS PVIObject : public Aspose::Slides::IPVIObject, public virtual Aspose::Slides::ISlideComponent
{
    typedef PVIObject ThisType;
    typedef Aspose::Slides::IPVIObject BaseType;
    typedef Aspose::Slides::ISlideComponent BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    
    /// @cond
    friend class Aspose::Slides::BackgroundEffectiveData;
    template<typename FT0, typename FT1> friend class Aspose::Slides::AccessibleEffectiveData;
    template<typename FT0, typename FT1> friend class Aspose::Slides::BasePortionFormatEffectiveData;
    friend class Aspose::Slides::BulletFormatEffectiveData;
    friend class Aspose::Slides::SketchFormat;
    friend class Aspose::Slides::ChartPortionFormatEffectiveData;
    friend class Aspose::Slides::EffectFormatEffectiveData;
    friend class Aspose::Slides::FillFormatEffectiveData;
    friend class Aspose::Slides::LineFillFormatEffectiveData;
    friend class Aspose::Slides::LineFormatEffectiveData;
    friend class Aspose::Slides::ParagraphFormatEffectiveData;
    friend class Aspose::Slides::PortionFormatEffectiveData;
    friend class Aspose::Slides::CellFormatEffectiveData;
    friend class Aspose::Slides::TextFrameFormatEffectiveData;
    friend class Aspose::Slides::BasePortionFormat;
    friend class Aspose::Slides::Charts::DataLabelFormat;
    friend class Aspose::Slides::Charts::Format;
    friend class Aspose::Slides::ColorFormatImpl;
    friend class Aspose::Slides::LineFillFormat;
    friend class Aspose::Slides::PortionFormatImpl;
    friend class Aspose::Slides::TextFrameFormat;
    friend class Aspose::Slides::TextStyleEffectiveData;
    friend class Aspose::Slides::ThreeDFormatEffectiveData;
    friend class Aspose::Slides::CellFormat;
    friend class Aspose::Slides::Charts::ChartPortionFormat;
    friend class Aspose::Slides::Charts::DataLabel;
    friend class Aspose::Slides::HtmlIO::HtmlToPptxTextConverter;
    friend class Aspose::Slides::ColorEffectiveData;
    friend class Aspose::Slides::TextLayoutParts::ParagraphEffective;
    friend class Aspose::Slides::Table;
    friend class Aspose::Slides::Export::ApsPptxCanvas;
    friend class Aspose::Slides::Effects::ImageTransformOperation;
    friend class Aspose::Slides::Effects::ImageTransformOperationCollection;
    friend class Aspose::Slides::OdpSerialization::PartParser::FillFormatOdpSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::StylePartsOdpSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::StyleTextPropertiesOdpSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::SlideOdpDeserialization;
    friend class Aspose::Slides::UnsupportedProps::PPTUnsupportedProps::BulletFormatPPTUnsupportedProps;
    friend class Aspose::Slides::UnsupportedProps::PPTUnsupportedProps::PortionFormatPPTUnsupportedProps;
    friend class Aspose::Slides::Backdrop3DScene;
    friend class Aspose::Slides::Background;
    friend class Aspose::Slides::Camera;
    friend class Aspose::Slides::ColorFormat;
    friend class Aspose::Slides::EffectFormat;
    friend class Aspose::Slides::FillFormat;
    friend class Aspose::Slides::GradientFormat;
    friend class Aspose::Slides::GradientStop;
    friend class Aspose::Slides::GradientStopCollection;
    friend class Aspose::Slides::Hyperlink;
    friend class Aspose::Slides::LightRig;
    friend class Aspose::Slides::LineFormat;
    friend class Aspose::Slides::OleObjectFrame;
    friend class Aspose::Slides::Paragraph;
    friend class Aspose::Slides::ParagraphFormat;
    friend class Aspose::Slides::PatternFormat;
    friend class Aspose::Slides::Picture;
    friend class Aspose::Slides::PictureFillFormat;
    friend class Aspose::Slides::PortionFormat;
    friend class Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::PresetTextShape;
    friend class Aspose::Slides::ShapeBevel;
    friend class Aspose::Slides::Tab;
    friend class Aspose::Slides::TabCollection;
    friend class Aspose::Slides::TextStyle;
    friend class Aspose::Slides::ThreeDFormat;
    friend class Aspose::Slides::Charts::ChartSeriesRenderContext;
    friend class Aspose::Slides::Charts::PieSector;
    friend class Aspose::Slides::Charts::RenderingHelper;
    friend class Aspose::Slides::UnsupportedProps::PPTUnsupportedProps::CameraPPTUnsupportedProps;
    friend class Aspose::Slides::UnsupportedProps::PPTUnsupportedProps::ParagraphFormatPPTUnsupportedProps;
    friend class Aspose::Slides::UnsupportedProps::PPTUnsupportedProps::TextFrameFormatPPTUnsupportedProps;
    friend class Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::BulletFormatPPTXUnsupportedProps;
    friend class Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::Charts::FormatPPTXUnsupportedProps;
    friend class Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::ColorFormatPPTXUnsupportedProps;
    friend class Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::ParagraphFormatPPTXUnsupportedProps;
    friend class Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::PictureFillFormatPPTXUnsupportedProps;
    friend class Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::PicturePPTXUnsupportedProps;
    friend class Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::PortionFormatPPTXUnsupportedProps;
    friend class Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::TextFrameFormatPPTXUnsupportedProps;
    friend class Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::ThreeDFormatPPTXUnsupportedProps;
    friend class Aspose::Slides::PptSerialization::PptSerializator;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::DataLabelPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::EffectFormatPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::PictureFillFormatPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::PortionFormatPPTXSerialization;
    friend class Aspose::Slides::BulletFormat;
    friend class Aspose::Slides::PptSerialization::FillFormatPPTSerialization;
    friend class Aspose::Slides::PptSerialization::PictureFillFormatPPTSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Compares with specified object.
    /// </summary>
    /// <param name="obj">Object to compare.</param>
    /// <returns>True is objects are equal, otherwise false.</returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// Returns hash code.
    /// </summary>
    /// <returns>Hash code.</returns>
    ASPOSE_SLIDES_SHARED_API int32_t GetHashCode() const override;
    ASPOSE_SLIDES_LOCAL_API void WrapperLazyInitialization() const;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool get_IsLocalValueSet() const;
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Object> get_RealObjectInternal() const;
    ASPOSE_SLIDES_LOCAL_API void set_RealObjectInternal(System::SharedPtr<System::Object> value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    ASPOSE_SLIDES_LOCAL_API void set_Parent_Immediate(System::SharedPtr<IDOMObject> value);
    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPresentationComponent> get_Parent_IPresentationComponent() override;
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ISlideComponent> get_Parent_ISlideComponent();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BaseSlide> get_Slide_();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Presentation> get_Presentation_();
    
    ASPOSE_SLIDES_LOCAL_API PVIObject(System::SharedPtr<IDOMObject> parentImmediate);
    
    ASPOSE_SLIDES_LOCAL_API void RealLazyInitialization();
    template <typename P>
    void RealLazyInitializationIfNotEquals(P defaultValue, P settingValue)
    {
        if (!get_IsLocalValueSet() || !w_isParentWrapperInitialized)
        {
            if ((System::ObjectExt::UnknownIsNull(defaultValue) && !System::ObjectExt::UnknownIsNull(settingValue)) || (!System::ObjectExt::UnknownIsNull(defaultValue) && !System::ObjectExt::Equals(defaultValue, settingValue)))
            {
                RealLazyInitialization();
            }
        }
    }
    
    ASPOSE_SLIDES_LOCAL_API void Reset_Parent_IPresentationComponent();
    virtual ASPOSE_SLIDES_SHARED_API void CreateChildObjects();
    virtual ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Object> CreateRealObject() = 0;
    template <typename T, typename TRealObject>
    T Get(System::SharedPtr<PVIProperty<T, TRealObject>> property)
    {
        if (get_IsLocalValueSet())
        {
            return property->Get(System::ExplicitCast<TRealObject>(get_RealObjectInternal()));
        }
        else
        {
            return property->DefaultValue;
        }
    }
    
    template <typename T, typename TRealObject>
    bool Set(System::SharedPtr<PVIProperty<T, TRealObject>> property, T value)
    {
        RealLazyInitializationIfNotEquals<T>(property->DefaultValue, value);
        if (get_IsLocalValueSet())
        {
            property->Set(System::ExplicitCast<TRealObject>(get_RealObjectInternal()), value);
            return true;
        }
        
        return false;
    }
    
    /// @endcond
    virtual ASPOSE_SLIDES_SHARED_API ~PVIObject();
    
private:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBaseSlide> get_Slide() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentation> get_Presentation() override;
    
    System::WeakPtr<IDOMObject> w_realObjectParentImmediate;
    System::SharedPtr<System::Object> w_realObject;
    bool w_isChildWrappersCreated;
    bool w_isParentWrapperInitialized;
    System::WeakPtr<IDOMObject> m_parentImmediate;
    System::WeakPtr<IPresentationComponent> m_parentIPresentationComponent;
    System::WeakPtr<ISlideComponent> m_parentISlideComponent;
    
    /// @cond
    void WrapperLazyInitialization_NonConst();
    /// @endcond
    
};

} // namespace Slides
} // namespace Aspose


