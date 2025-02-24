#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/event.h>
#include <DOM/IThreeDFormat.h>

#include "DOM/PVI/MemoryAwareness/PVIObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class AutoShape;
enum class BevelPresetType;
class Camera;
enum class CameraPresetType;
namespace Charts
{
class ChartDataPointDefaultStyle;
class Format;
class FormatImpl;
} // namespace Charts
class ColorFormat;
namespace Drawing
{
namespace ThreeD
{
class CameraSettingsManager;
class OneSceneGroupShapeRenderer;
class Shape3DBaseSettingsManager;
} // namespace ThreeD
} // namespace Drawing
namespace Export
{
class DrawingMLExporter;
} // namespace Export
class ICamera;
class IColorFormat;
class IDOMObject;
class ILightRig;
class IShapeBevel;
class IThreeDFormatEffectiveData;
class LightRig;
enum class LightRigPresetType;
enum class MaterialPresetType;
namespace PptSerialization
{
class GroupShapeMetroBlobSerialization;
class PortionFormatPPTSerialization;
class PptGroupShapeSerializationContext;
class ThreeDFormatPPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class TextFramePPTXSerialization;
class ThreeDFormatPPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
class Shape;
class ShapeBevel;
namespace SmartArt
{
class DiagramPoint;
class SmartArt;
class SmartArtShape;
} // namespace SmartArt
class TextFrameFormat;
class TextFrameFormatImpl;
namespace Theme
{
class EffectStyle;
} // namespace Theme
class ThreeDFormatEffectiveData;
class ThreeDFormatImpl;
namespace UnsupportedProps
{
namespace PPTXUnsupportedProps
{
class ThreeDFormatPPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents 3-D properties.
/// </summary>
/// <example>
/// The following example shows how to add 3D shape in PowerPoint Presentation.
/// <code>
/// // Create an instance of Presentation class.
/// auto pres = System::MakeObject<Presentation>();
/// auto slide = pres->get_Slides()->idx_get(0);
/// 
/// // Add a shape using AddAutoShape method
/// auto shape = slide->get_Shapes()->AddAutoShape(ShapeType::Rectangle, 200.0f, 150.0f, 200.0f, 200.0f);
/// 
/// // Define TextFrame and its properties
/// shape->get_TextFrame()->set_Text(u"3D");
/// shape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_ParagraphFormat()->get_DefaultPortionFormat()->set_FontHeight(64.0f);
/// 
/// // Define ThreeDFormat Properties
/// auto threeDFormat = shape->get_ThreeDFormat();
/// threeDFormat->get_Camera()->set_CameraType(CameraPresetType::OrthographicFront);
/// threeDFormat->get_Camera()->SetRotation(20.0f, 30.0f, 40.0f);
/// threeDFormat->get_LightRig()->set_LightType(LightRigPresetType::Flat);
/// threeDFormat->get_LightRig()->set_Direction(LightingDirection::Top);
/// threeDFormat->set_Material(MaterialPresetType::Flat);
/// threeDFormat->set_ExtrusionHeight(100);
/// threeDFormat->get_ExtrusionColor()->set_Color(System::Drawing::Color::get_Blue());
/// slide->GetThumbnail(2.0f, 2.0f)->Save(u"sample_3d.png");
/// 
/// // Save the Presentation file
/// pres->Save(u"sandbox_3d.pptx", SaveFormat::Pptx);
/// </code>
/// The following example shows how to apply Gradient affect to 3D shape in PowerPoint Presentation.
/// <code>
/// // Create an instance of Presentation class.
/// auto pres = System::MakeObject<Presentation>();
/// auto slide = pres->get_Slides()->idx_get(0);
/// 
/// // Add a shape using AddAutoShape method
/// auto shape = slide->get_Shapes()->AddAutoShape(ShapeType::Rectangle, 200.0f, 150.0f, 250.0f, 250.0f);
/// 
/// // Define TextFrame and its properties
/// shape->get_TextFrame()->set_Text(u"3D Gradient");
/// shape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_ParagraphFormat()->get_DefaultPortionFormat()->set_FontHeight(64.0f);
/// 
/// // Configure FillFormat.FillType as FillType.Gradient and define gradient properties
/// shape->get_FillFormat()->set_FillType(FillType::Gradient);
/// shape->get_FillFormat()->get_GradientFormat()->get_GradientStops()->Add(0.0f, System::Drawing::Color::get_Blue());
/// shape->get_FillFormat()->get_GradientFormat()->get_GradientStops()->Add(100.0f, System::Drawing::Color::get_Orange());
/// 
/// // Define ThreeDFormat Properties
/// auto threeDFormat = shape->get_ThreeDFormat();
/// threeDFormat->get_Camera()->set_CameraType(CameraPresetType::OrthographicFront);
/// threeDFormat->get_Camera()->SetRotation(20.0f, 30.0f, 40.0f);
/// threeDFormat->get_LightRig()->set_LightType(LightRigPresetType::Flat);
/// threeDFormat->get_LightRig()->set_Direction(LightingDirection::Top);
/// threeDFormat->set_Material(MaterialPresetType::Flat);
/// threeDFormat->set_ExtrusionHeight(100);
/// threeDFormat->get_ExtrusionColor()->set_Color(System::Drawing::Color::get_Blue());
/// slide->GetThumbnail(2.0f, 2.0f)->Save(u"sample_3d.png");
/// 
/// // Save the Presentation file
/// pres->Save(u"sandbox_3d.pptx", SaveFormat::Pptx);
/// </code>
/// The following example shows how to apply 3D effect on text. For creating a 3D text its possible to use WordArt transform effect.
/// <code>
/// // Create an instance of Presentation class.
/// auto pres = System::MakeObject<Presentation>();
/// auto slide = pres->get_Slides()->idx_get(0);
/// 
/// // Add a shape using AddAutoShape method
/// auto shape = slide->get_Shapes()->AddAutoShape(ShapeType::Rectangle, 200.0f, 150.0f, 250.0f, 250.0f);
/// 
/// // Define TextFrame and its properties
/// shape->get_TextFrame()->set_Text(u"3D Text");
/// 
/// // Configure FillFormat.FillType as FillType.NoFill
/// shape->get_FillFormat()->set_FillType(FillType::NoFill);
/// shape->get_LineFormat()->get_FillFormat()->set_FillType(FillType::NoFill);
/// 
/// // Configure Portion of TextFrame and configure properties of PortionFormat
/// System::SharedPtr<Portion> portion = System::ExplicitCast<Portion>(shape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_Portions()->idx_get(0));
/// portion->get_PortionFormat()->get_FillFormat()->set_FillType(FillType::Pattern);
/// portion->get_PortionFormat()->get_FillFormat()->get_PatternFormat()->get_ForeColor()->set_Color(System::Drawing::Color::get_DarkOrange());
/// portion->get_PortionFormat()->get_FillFormat()->get_PatternFormat()->get_BackColor()->set_Color(System::Drawing::Color::get_White());
/// portion->get_PortionFormat()->get_FillFormat()->get_PatternFormat()->set_PatternStyle(PatternStyle::LargeGrid);
/// shape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_ParagraphFormat()->get_DefaultPortionFormat()->set_FontHeight(128.0f);
/// System::SharedPtr<ITextFrame> textFrame = shape->get_TextFrame();
/// 
/// // setup "Arch Up" WordArt transform effect
/// textFrame->get_TextFrameFormat()->set_Transform(TextShapeType::ArchUp);
/// 
/// // Define ThreeDFormat Properties of ITextFrame
/// auto threeDFormat = textFrame->get_TextFrameFormat()->get_ThreeDFormat();
/// threeDFormat->set_ExtrusionHeight(3.5f);
/// threeDFormat->set_Depth(3);
/// threeDFormat->set_Material(MaterialPresetType::Plastic);
/// threeDFormat->get_LightRig()->set_Direction(LightingDirection::Top);
/// threeDFormat->get_LightRig()->set_LightType(LightRigPresetType::Balanced);
/// threeDFormat->get_LightRig()->SetRotation(0.0f, 0.0f, 40.0f);
/// threeDFormat->get_Camera()->set_CameraType(CameraPresetType::PerspectiveContrastingRightFacing);
/// slide->GetThumbnail(2.0f, 2.0f)->Save(u"text3d.png");
/// 
/// // Save the Presentation file
/// pres->Save(u"text3d.pptx", SaveFormat::Pptx);
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS ThreeDFormat final : public Aspose::Slides::PVIObject, public Aspose::Slides::IThreeDFormat
{
    typedef ThreeDFormat ThisType;
    typedef Aspose::Slides::PVIObject BaseType;
    typedef Aspose::Slides::IThreeDFormat BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Drawing::ThreeD::CameraSettingsManager;
    friend class Aspose::Slides::Drawing::ThreeD::OneSceneGroupShapeRenderer;
    friend class Aspose::Slides::Drawing::ThreeD::Shape3DBaseSettingsManager;
    friend class Aspose::Slides::Shape;
    friend class Aspose::Slides::Charts::ChartDataPointDefaultStyle;
    friend class Aspose::Slides::Charts::Format;
    friend class Aspose::Slides::TextFrameFormat;
    friend class Aspose::Slides::ThreeDFormatEffectiveData;
    friend class Aspose::Slides::ThreeDFormatImpl;
    friend class Aspose::Slides::Charts::FormatImpl;
    friend class Aspose::Slides::Theme::EffectStyle;
    friend class Aspose::Slides::Export::DrawingMLExporter;
    friend class Aspose::Slides::PptSerialization::PptGroupShapeSerializationContext;
    friend class Aspose::Slides::PptSerialization::GroupShapeMetroBlobSerialization;
    friend class Aspose::Slides::PptSerialization::PortionFormatPPTSerialization;
    friend class Aspose::Slides::AutoShape;
    friend class Aspose::Slides::SmartArt::SmartArt;
    friend class Aspose::Slides::SmartArt::SmartArtShape;
    friend class Aspose::Slides::TextFrameFormatImpl;
    friend class Aspose::Slides::PptSerialization::ThreeDFormatPPTSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::TextFramePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::ThreeDFormatPPTXSerialization;
    friend class Aspose::Slides::SmartArt::DiagramPoint;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the width of a 3D contour.
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_ContourWidth() override;
    /// <summary>
    /// Sets the width of a 3D contour.
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ContourWidth(double value) override;
    /// <summary>
    /// Returns the height of an extrusion effect.
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_ExtrusionHeight() override;
    /// <summary>
    /// Sets the height of an extrusion effect.
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_ExtrusionHeight(double value) override;
    /// <summary>
    /// Returns the depth of a 3D shape.
    /// Read <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API double get_Depth() override;
    /// <summary>
    /// Sets the depth of a 3D shape.
    /// Write <see cref="double"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Depth(double value) override;
    /// <summary>
    /// Returns the type of a top 3D bevel.
    /// Read-only <see cref="Aspose::Slides::IShapeBevel">IShapeBevel</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IShapeBevel> get_BevelTop() override;
    /// <summary>
    /// Returns the type of a bottom 3D bevel.
    /// Read-only <see cref="Aspose::Slides::IShapeBevel">IShapeBevel</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IShapeBevel> get_BevelBottom() override;
    /// <summary>
    /// Returns the color of a contour.
    /// Read-only <see cref="Aspose::Slides::IColorFormat">IColorFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_ContourColor() override;
    /// <summary>
    /// Returns the color of an extrusion.
    /// Read-only <see cref="Aspose::Slides::IColorFormat">IColorFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IColorFormat> get_ExtrusionColor() override;
    /// <summary>
    /// Returns the settings of a camera.
    /// Read-only <see cref="Aspose::Slides::ICamera">ICamera</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ICamera> get_Camera() override;
    /// <summary>
    /// Returns the type of a light.
    /// Read-only <see cref="Aspose::Slides::ILightRig">ILightRig</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ILightRig> get_LightRig() override;
    /// <summary>
    /// Returns the type of a material.
    /// Read <see cref="MaterialPresetType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API MaterialPresetType get_Material() override;
    /// <summary>
    /// Sets the type of a material.
    /// Write <see cref="MaterialPresetType"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Material(MaterialPresetType value) override;
    
    /// <summary>
    /// Gets effective 3-D formatting data with the inheritance applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::IThreeDFormatEffectiveData">IThreeDFormatEffectiveData</see>.</returns>
    /// <example>
    /// This example demonstrates how to get effective properties for camera, light rig and shape's top bevel.
    /// <code>
    /// auto pres = MakeObject<Presentation>(u"MyPresentation.pptx");
    /// auto threeDEffectiveData = pres->get_Slides()->idx_get(0)->get_Shapes()->idx_get(0)->get_ThreeDFormat()->GetEffective();
    /// 
    /// Console::WriteLine(u"= Effective camera properties =");
    /// Console::WriteLine(String(u"Type: ") + ObjectExt::ToString(threeDEffectiveData->get_Camera()->get_CameraType()));
    /// Console::WriteLine(String(u"Field of view: ") + threeDEffectiveData->get_Camera()->get_FieldOfViewAngle());
    /// Console::WriteLine(String(u"Zoom: ") + threeDEffectiveData->get_Camera()->get_Zoom());
    /// 
    /// Console::WriteLine(u"= Effective light rig properties =");
    /// Console::WriteLine(String(u"Type: ") + ObjectExt::ToString(threeDEffectiveData->get_LightRig()->get_LightType()));
    /// Console::WriteLine(String(u"Direction: ") + ObjectExt::ToString(threeDEffectiveData->get_LightRig()->get_Direction()));
    /// 
    /// Console::WriteLine(u"= Effective shape's top face relief properties =");
    /// Console::WriteLine(String(u"Type: ") + ObjectExt::ToString(threeDEffectiveData->get_BevelTop()->get_BevelType()));
    /// Console::WriteLine(String(u"Width: ") + threeDEffectiveData->get_BevelTop()->get_Width());
    /// Console::WriteLine(String(u"Height: ") + threeDEffectiveData->get_BevelTop()->get_Height());
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IThreeDFormatEffectiveData> GetEffective() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ThreeDFormatImpl> get_RealObject();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::ThreeDFormatPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API bool get_MetroBlobRequired();
    ASPOSE_SLIDES_LOCAL_API bool get_KeepTextFlat();
    ASPOSE_SLIDES_LOCAL_API void set_KeepTextFlat(bool value);
    ASPOSE_SLIDES_LOCAL_API CameraPresetType get_CameraType();
    ASPOSE_SLIDES_LOCAL_API LightRigPresetType get_LightType();
    ASPOSE_SLIDES_LOCAL_API BevelPresetType get_BevelTopBevelType();
    ASPOSE_SLIDES_LOCAL_API BevelPresetType get_BevelBottomBevelType();
    
    System::Event<void()> ThreeDFormatChanged;
    
    ASPOSE_SLIDES_LOCAL_API ThreeDFormat(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ThreeDFormat, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    ASPOSE_SLIDES_SHARED_API void CreateChildObjects() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> CreateRealObject() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API bool IsNeedSave(bool shape3d);
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<IThreeDFormat> source);
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<IThreeDFormatEffectiveData> source);
    ASPOSE_SLIDES_LOCAL_API void Reset();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ThreeDFormatEffectiveData> GetEffectiveInternal();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~ThreeDFormat();
    
private:

    System::SharedPtr<ShapeBevel> m_bevelTop;
    System::SharedPtr<ShapeBevel> m_bevelBottom;
    System::SharedPtr<ColorFormat> m_contourColor;
    System::SharedPtr<ColorFormat> m_extrusionColor;
    System::SharedPtr<Aspose::Slides::Camera> m_camera;
    System::SharedPtr<Aspose::Slides::LightRig> m_lightRig;
    System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::ThreeDFormatPPTXUnsupportedProps> m_pptxUnsupportedProps;
    System::SharedPtr<ThreeDFormatEffectiveData> m_effective;
    
    ASPOSE_SLIDES_LOCAL_API void OnThreeDFormatChanged();
    
};

} // namespace Slides
} // namespace Aspose


