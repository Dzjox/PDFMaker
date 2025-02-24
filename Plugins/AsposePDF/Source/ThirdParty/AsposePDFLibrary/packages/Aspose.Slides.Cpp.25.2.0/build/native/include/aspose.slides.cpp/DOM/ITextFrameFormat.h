#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ITextFrameFormatEffectiveData;
class ITextStyle;
class IThreeDFormat;
enum class NullableBool : int8_t;
enum class TextAnchorType : int8_t;
enum class TextAutofitType : int8_t;
enum class TextShapeType : int8_t;
enum class TextVerticalType : int8_t;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Contains the TextFrame's formatting properties.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ITextFrameFormat : public virtual System::Object
{
    typedef ITextFrameFormat ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns text's style.
    /// Read-only <see cref="Aspose::Slides::ITextStyle">ITextStyle</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITextStyle> get_TextStyle() = 0;
    /// <summary>
    /// Returns the left margin (points) in a TextFrame.
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_MarginLeft() = 0;
    /// <summary>
    /// Sets the left margin (points) in a TextFrame.
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_MarginLeft(double value) = 0;
    /// <summary>
    /// Returns the right margin (points) in a TextFrame.
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_MarginRight() = 0;
    /// <summary>
    /// Sets the right margin (points) in a TextFrame.
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_MarginRight(double value) = 0;
    /// <summary>
    /// Returns the top margin (points) in a TextFrame.
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_MarginTop() = 0;
    /// <summary>
    /// Sets the top margin (points) in a TextFrame.
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_MarginTop(double value) = 0;
    /// <summary>
    /// Returns the bottom margin (points) in a TextFrame.
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_MarginBottom() = 0;
    /// <summary>
    /// Sets the bottom margin (points) in a TextFrame.
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_MarginBottom(double value) = 0;
    /// <summary>
    /// <b>True</b> if text is wrapped at TextFrame's margins.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API NullableBool get_WrapText() = 0;
    /// <summary>
    /// <b>True</b> if text is wrapped at TextFrame's margins.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_WrapText(NullableBool value) = 0;
    /// <summary>
    /// Returns vertical anchor text in a TextFrame.
    /// Read <see cref="TextAnchorType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API TextAnchorType get_AnchoringType() = 0;
    /// <summary>
    /// Sets vertical anchor text in a TextFrame.
    /// Write <see cref="TextAnchorType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AnchoringType(TextAnchorType value) = 0;
    /// <summary>
    /// If NullableBool::True then text should be centered in box horizontally.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API NullableBool get_CenterText() = 0;
    /// <summary>
    /// If NullableBool::True then text should be centered in box horizontally.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_CenterText(NullableBool value) = 0;
    /// <summary>
    /// Determines text orientation.
    /// The resulted value of visual text rotation summarized from this property and custom angle
    /// in property RotationAngle.
    /// Read <see cref="Slides::TextVerticalType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::TextVerticalType get_TextVerticalType() = 0;
    /// <summary>
    /// Determines text orientation.
    /// The resulted value of visual text rotation summarized from this property and custom angle
    /// in property RotationAngle.
    /// Write <see cref="Slides::TextVerticalType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_TextVerticalType(Aspose::Slides::TextVerticalType value) = 0;
    /// <summary>
    /// Returns text's autofit mode.
    /// Read <see cref="TextAutofitType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API TextAutofitType get_AutofitType() = 0;
    /// <summary>
    /// Sets text's autofit mode.
    /// Write <see cref="TextAutofitType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AutofitType(TextAutofitType value) = 0;
    /// <summary>
    /// Returns number of columns in the text area.
    /// This value must be a positive number. Otherwise, the value will be set to zero. 
    /// Value 0 means undefined value.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_ColumnCount() = 0;
    /// <summary>
    /// Sets number of columns in the text area.
    /// This value must be a positive number. Otherwise, the value will be set to zero. 
    /// Value 0 means undefined value.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ColumnCount(int32_t value) = 0;
    /// <summary>
    /// Returns the space between text columns in the text area (in points). This should only apply 
    /// when there is more than 1 column present.
    /// This value must be a positive number. Otherwise, the value will be set to zero. 
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_ColumnSpacing() = 0;
    /// <summary>
    /// Sets the space between text columns in the text area (in points). This should only apply 
    /// when there is more than 1 column present.
    /// This value must be a positive number. Otherwise, the value will be set to zero. 
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ColumnSpacing(double value) = 0;
    /// <summary>
    /// Returns the ThreeDFormat object that represents 3d effect properties for a text.
    /// Read-only <see cref="Aspose::Slides::IThreeDFormat">IThreeDFormat</see>.
    /// </summary>
    /// <example>
    /// <code>
    /// using namespace Aspose::Slides;
    /// 
    /// auto pres = System::MakeObject<Presentation>();
    /// auto autoShape = pres->get_Slides()->idx_get(0)->get_Shapes()->AddAutoShape(ShapeType::Rectangle, 10.0f, 20.0f, 400.0f, 300.0f);
    /// auto textFrame = autoShape->get_TextFrame();
    /// 
    /// textFrame->set_Text(u"Aspose.Slide Test Text");
    /// 
    /// // Set text transformation
    /// textFrame->get_TextFrameFormat()->set_Transform(TextShapeType::ArchUpPour);
    /// 
    /// // Set Extrusion
    /// textFrame->get_TextFrameFormat()->get_ThreeDFormat()->get_ExtrusionColor()->set_Color(System::Drawing::Color::get_Orange());
    /// textFrame->get_TextFrameFormat()->get_ThreeDFormat()->set_ExtrusionHeight(6);
    /// 
    /// // Set Contour
    /// textFrame->get_TextFrameFormat()->get_ThreeDFormat()->get_ContourColor()->set_Color(System::Drawing::Color::get_DarkRed());
    /// textFrame->get_TextFrameFormat()->get_ThreeDFormat()->set_ContourWidth(1.5);
    /// 
    /// // Set Depth
    /// textFrame->get_TextFrameFormat()->get_ThreeDFormat()->set_Depth(3);
    /// 
    /// // Set Material
    /// textFrame->get_TextFrameFormat()->get_ThreeDFormat()->set_Material(MaterialPresetType::Plastic);
    /// 
    /// // Set Lighting
    /// textFrame->get_TextFrameFormat()->get_ThreeDFormat()->get_LightRig()->set_Direction(LightingDirection::Top);
    /// textFrame->get_TextFrameFormat()->get_ThreeDFormat()->get_LightRig()->set_LightType(LightRigPresetType::Balanced);
    /// textFrame->get_TextFrameFormat()->get_ThreeDFormat()->get_LightRig()->SetRotation(0.0f, 0.0f, 40.0f);
    /// 
    /// // Set camera type
    /// textFrame->get_TextFrameFormat()->get_ThreeDFormat()->get_Camera()->set_CameraType(CameraPresetType::PerspectiveContrastingRightFacing);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IThreeDFormat> get_ThreeDFormat() = 0;
    /// <summary>
    /// Returns or set keeping text out of 3D scene entirely.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_KeepTextFlat() = 0;
    /// <summary>
    /// Returns or set keeping text out of 3D scene entirely.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_KeepTextFlat(bool value) = 0;
    /// <summary>
    /// Specifies the custom rotation that is being applied to the text within the bounding box. If it not
    /// specified, the rotation of the accompanying shape is used. If it is specified, then this is
    /// applied independently from the shape. That is the shape can have a rotation applied in
    /// addition to the text itself having a rotation applied to it.
    /// The resulted value of visual text rotation summarized from this property and predefined
    /// vertical type in property TextVerticalType.
    /// Read <see cref="float"></see>.
    /// </summary>
    /// <example>
    /// Consider the case where a shape has a rotation of 90 degrees clockwise applied to it. 
    /// In addition to this, the text body itself has a rotation of -90 degrees 
    /// counter-clockwise applied to it. Then the resulting shape would appear to
    /// be rotated but the text within it would appear as though it had not been rotated at all.
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API float get_RotationAngle() = 0;
    /// <summary>
    /// Specifies the custom rotation that is being applied to the text within the bounding box. If it not
    /// specified, the rotation of the accompanying shape is used. If it is specified, then this is
    /// applied independently from the shape. That is the shape can have a rotation applied in
    /// addition to the text itself having a rotation applied to it.
    /// The resulted value of visual text rotation summarized from this property and predefined
    /// vertical type in property TextVerticalType.
    /// Write <see cref="float"></see>.
    /// </summary>
    /// <example>
    /// Consider the case where a shape has a rotation of 90 degrees clockwise applied to it. 
    /// In addition to this, the text body itself has a rotation of -90 degrees 
    /// counter-clockwise applied to it. Then the resulting shape would appear to
    /// be rotated but the text within it would appear as though it had not been rotated at all.
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_RotationAngle(float value) = 0;
    /// <summary>
    /// Gets text wrapping shape.
    /// Read <see cref="TextShapeType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API TextShapeType get_Transform() = 0;
    /// <summary>
    /// Sets text wrapping shape.
    /// Write <see cref="TextShapeType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Transform(TextShapeType value) = 0;
    
    /// <summary>
    /// Gets effective text frame formatting data with the inheritance applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::ITextFrameFormatEffectiveData">ITextFrameFormatEffectiveData</see>.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITextFrameFormatEffectiveData> GetEffective() = 0;
    
};

} // namespace Slides
} // namespace Aspose


