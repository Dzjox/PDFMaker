#pragma once

#include <system/object_ext.h>
#include <DOM/Animation/IBehaviorProperty.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
} // namespace Generic
} // namespace Collections
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Animation {

/// <summary>
/// Represent property types for animation behavior.
/// Follows the list of properties from https://msdn.microsoft.com/en-us/library/dd949052(v=office.15).aspx
/// and https://msdn.microsoft.com/en-us/library/documentformat.openxml.presentation.attributename(v=office.15).aspx
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS BehaviorProperty : public Aspose::Slides::Animation::IBehaviorProperty
{
    typedef BehaviorProperty ThisType;
    typedef Aspose::Slides::Animation::IBehaviorProperty BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class System::ObjectExt;
    /// @endcond
    
public:

    /// <summary>
    /// Value of the property
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_Value() override;
    /// <summary>
    /// Shows if this property does not belong to the predefined properties list in the specification:
    /// https://msdn.microsoft.com/en-us/library/dd949052(v=office.15).aspx
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_IsCustom() override;
    /// <summary>
    /// Represents 'ppt_x' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_PptX();
    /// <summary>
    /// Represents 'ppt_y' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_PptY();
    /// <summary>
    /// Represents 'ppt_w' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_PptW();
    /// <summary>
    /// Represents 'ppt_h' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_PptH();
    /// <summary>
    /// Represents 'ppt_c' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_PptC();
    /// <summary>
    /// Represents 'ppt_r' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_PptR();
    /// <summary>
    /// Represents 'xshear' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_XShear();
    /// <summary>
    /// Represents 'yshear' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_YShear();
    /// <summary>
    /// Represents 'image' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_Image();
    /// <summary>
    /// Represents 'ScaleX' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ScaleX();
    /// <summary>
    /// Represents 'ScaleY' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ScaleY();
    /// <summary>
    /// Represents 'r' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_R();
    /// <summary>
    /// Represents 'fillcolor' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_FillColor();
    /// <summary>
    /// Represents 'style.opacity' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_StyleOpacity();
    /// <summary>
    /// Represents 'style.rotation' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_StyleRotation();
    /// <summary>
    /// Represents 'style.visibility' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_StyleVisibility();
    /// <summary>
    /// Represents 'style.color' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_StyleColor();
    /// <summary>
    /// Represents 'style.fontSize' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_StyleFontSize();
    /// <summary>
    /// Represents 'style.fontWeight' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_StyleFontWeight();
    /// <summary>
    /// Represents 'style.fontStyle' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_StyleFontStyle();
    /// <summary>
    /// Represents 'style.fontFamily' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_StyleFontFamily();
    /// <summary>
    /// Represents 'style.textEffectEmboss' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_StyleTextEffectEmboss();
    /// <summary>
    /// Represents 'style.textShadow' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_StyleTextShadow();
    /// <summary>
    /// Represents 'style.textTransform' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_StyleTextTransform();
    /// <summary>
    /// Represents 'style.textDecorationUnderline' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_StyleTextDecorationUnderline();
    /// <summary>
    /// Represents 'style.textEffectOutline' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_StyleTextEffectOutline();
    /// <summary>
    /// Represents 'style.textDecorationLineThrough' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_StyleTextDecorationLineThrough();
    /// <summary>
    /// Represents 'style.sRotation' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_StyleSRotation();
    /// <summary>
    /// Represents 'imageData.cropTop' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ImageDataCropTop();
    /// <summary>
    /// Represents 'imageData.cropBottom' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ImageDataCropBottom();
    /// <summary>
    /// Represents 'imageData.cropLeft' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ImageDataCropLeft();
    /// <summary>
    /// Represents 'imageData.cropRight' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ImageDataCropRight();
    /// <summary>
    /// Represents 'imageData.gain' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ImageDataGain();
    /// <summary>
    /// Represents 'imageData.blacklevel' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ImageDataBlacklevel();
    /// <summary>
    /// Represents 'imageData.gamma' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ImageDataGamma();
    /// <summary>
    /// Represents 'imageData.grayscale' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ImageDataGrayscale();
    /// <summary>
    /// Represents 'imageData.chromakey' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ImageDataChromakey();
    /// <summary>
    /// Represents 'fill.on' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_FillOn();
    /// <summary>
    /// Represents 'fill.type' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_FillType();
    /// <summary>
    /// Represents 'fill.color' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_Fill_Color();
    /// <summary>
    /// Represents 'fill.opacity' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_FillOpacity();
    /// <summary>
    /// Represents 'fill.color2' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_FillColor2();
    /// <summary>
    /// Represents 'fill.method' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_FillMethod();
    /// <summary>
    /// Represents 'fill.opacity2' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_FillOpacity2();
    /// <summary>
    /// Represents 'fill.angle' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_FillAngle();
    /// <summary>
    /// Represents 'fill.focus' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_FillFocus();
    /// <summary>
    /// Represents 'fill.focusposition.x' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_FillFocusPositionX();
    /// <summary>
    /// Represents 'fill.focusposition.y' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_FillFocusPositionY();
    /// <summary>
    /// Represents 'fill.focussize.x' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_FillFocusSizeX();
    /// <summary>
    /// Represents 'fill.focussize.y' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_FillFocusSizeY();
    /// <summary>
    /// Represents 'stroke.on' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_StrokeOn();
    /// <summary>
    /// Represents 'stroke.color' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_StrokeColor();
    /// <summary>
    /// Represents 'stroke.weight' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_StrokeWeight();
    /// <summary>
    /// Represents 'stroke.opacity' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_StrokeOpacity();
    /// <summary>
    /// Represents 'stroke.linestyle' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_StrokeLineStyle();
    /// <summary>
    /// Represents 'stroke.dashstyle' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_StrokeDashStyle();
    /// <summary>
    /// Represents 'stroke.filltype' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_StrokeFillType();
    /// <summary>
    /// Represents 'stroke.src' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_StrokeSrc();
    /// <summary>
    /// Represents 'stroke.color2' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_StrokeColor2();
    /// <summary>
    /// Represents 'stroke.imagesize.x' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_StrokeImageSizeX();
    /// <summary>
    /// Represents 'stroke.imagesize.y' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_StrokeImageSizeY();
    /// <summary>
    /// Represents 'stroke.startArrow' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_StrokeStartArrow();
    /// <summary>
    /// Represents 'stroke.endArrow' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_StrokeEndArrow();
    /// <summary>
    /// Represents 'stroke.startArrowWidth' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_StrokeStartArrowWidth();
    /// <summary>
    /// Represents 'stroke.startArrowLength' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_StrokeStartArrowLength();
    /// <summary>
    /// Represents 'stroke.endArrowWidth' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_StrokeEndArrowWidth();
    /// <summary>
    /// Represents 'stroke.endArrowLength' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_StrokeEndArrowLength();
    /// <summary>
    /// Represents 'shadow.on' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ShadowOn();
    /// <summary>
    /// Represents 'shadow.type' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ShadowType();
    /// <summary>
    /// Represents 'shadow.color' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ShadowColor();
    /// <summary>
    /// Represents 'shadow.color2' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ShadowColor2();
    /// <summary>
    /// Represents 'shadow.opacity' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ShadowOpacity();
    /// <summary>
    /// Represents 'shadow.offset.x' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ShadowOffsetX();
    /// <summary>
    /// Represents 'shadow.offset.y' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ShadowOffsetY();
    /// <summary>
    /// Represents 'shadow.offset2.x' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ShadowOffset2X();
    /// <summary>
    /// Represents 'shadow.offset2.y' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ShadowOffset2Y();
    /// <summary>
    /// Represents 'shadow.origin.x' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ShadowOriginX();
    /// <summary>
    /// Represents 'shadow.origin.y' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ShadowOriginY();
    /// <summary>
    /// Represents 'shadow.matrix.xtox' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ShadowMatrixXtoX();
    /// <summary>
    /// Represents 'shadow.matrix.xtoy' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ShadowMatrixXtoY();
    /// <summary>
    /// Represents 'shadow.matrix.ytox' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ShadowMatrixYtoX();
    /// <summary>
    /// Represents 'shadow.matrix.ytoy' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ShadowMatrixYtoY();
    /// <summary>
    /// Represents 'shadow.matrix.perspectiveX' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ShadowMatrixPerspectiveX();
    /// <summary>
    /// Represents 'shadow.matrix.perspectiveY' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ShadowMatrixPerspectiveY();
    /// <summary>
    /// Represents 'skew.on' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_SkewOn();
    /// <summary>
    /// Represents 'skew.offset.x' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_SkewOffsetX();
    /// <summary>
    /// Represents 'skew.offset.y' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_SkewOffsetY();
    /// <summary>
    /// Represents 'skew.origin.x' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_SkewOriginX();
    /// <summary>
    /// Represents 'skew.origin.y' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_SkewOriginY();
    /// <summary>
    /// Represents 'skew.matrix.xtox' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_SkewMatrixXtoX();
    /// <summary>
    /// Represents 'skew.matrix.xtoy' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_SkewMatrixXtoY();
    /// <summary>
    /// Represents 'skew.matrix.ytox' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_SkewMatrixYtoX();
    /// <summary>
    /// Represents 'skew.matrix.ytoy' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_SkewMatrixYtoY();
    /// <summary>
    /// Represents 'skew.matrix.perspectiveX' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_SkewMatrixPerspectiveX();
    /// <summary>
    /// Represents 'skew.matrix.perspectiveY' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_SkewMatrixPerspectiveY();
    /// <summary>
    /// Represents 'extrusion.on' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ExtrusionOn();
    /// <summary>
    /// Represents 'extrusion.type' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ExtrusionType();
    /// <summary>
    /// Represents 'extrusion.render' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ExtrusionRender();
    /// <summary>
    /// Represents 'extrusion.viewpointorigin.x' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ExtrusionViewPointOriginX();
    /// <summary>
    /// Represents 'extrusion.viewpointorigin.y' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ExtrusionViewPointOriginY();
    /// <summary>
    /// Represents 'extrusion.viewpoint.x' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ExtrusionViewPointX();
    /// <summary>
    /// Represents 'extrusion.viewpoint.y' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ExtrusionViewPointY();
    /// <summary>
    /// Represents 'extrusion.viewpoint.z' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ExtrusionViewPointZ();
    /// <summary>
    /// Represents 'extrusion.plane' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ExtrusionPlane();
    /// <summary>
    /// Represents 'extrusion.skewangle' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ExtrusionSkewAngle();
    /// <summary>
    /// Represents 'extrusion.skewamt' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ExtrusionSkewAmt();
    /// <summary>
    /// Represents 'extrusion.backdepth' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ExtrusionBackDepth();
    /// <summary>
    /// Represents 'extrusion.foredepth' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ExtrusionForeDepth();
    /// <summary>
    /// Represents 'extrusion.orientation.x' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ExtrusionOrientationX();
    /// <summary>
    /// Represents 'extrusion.orientation.y' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ExtrusionOrientationY();
    /// <summary>
    /// Represents 'extrusion.orientation.z' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ExtrusionOrientationZ();
    /// <summary>
    /// Represents 'extrusion.orientationangle' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ExtrusionOrientationAngle();
    /// <summary>
    /// Represents 'extrusion.color' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ExtrusionColor();
    /// <summary>
    /// Represents 'extrusion.rotationangle.x' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ExtrusionRotationAngleX();
    /// <summary>
    /// Represents 'extrusion.rotationangle.y' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ExtrusionRotationAngleY();
    /// <summary>
    /// Represents 'extrusion.lockrotationcenter' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ExtrusionLockRotationCenter();
    /// <summary>
    /// Represents 'extrusion.autorotationcenter' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ExtrusionAutoRotationCenter();
    /// <summary>
    /// Represents 'extrusion.rotationcenter.x' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ExtrusionRotationCenterX();
    /// <summary>
    /// Represents 'extrusion.rotationcenter.y' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ExtrusionRotationCenterY();
    /// <summary>
    /// Represents 'extrusion.rotationcenter.z' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ExtrusionRotationCenterZ();
    /// <summary>
    /// Represents 'extrusion.colormode' property
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> get_ExtrusionColorMode();
    
    /// <summary>
    /// Checks if this object is equal to another.
    /// </summary>
    /// <param name="obj">Object to compare.</param>
    /// <returns>True if objects are equal.</returns>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// Calculates and returns hach code based on the <see cref="BehaviorProperty::get_Value"></see> property
    /// </summary>
    /// <returns>Returns hash code for this object</returns>
    ASPOSE_SLIDES_SHARED_API int32_t GetHashCode() const override;
    /// <summary>
    /// Looks for existing behavior property by value or creates new custom one with the specified value
    /// </summary>
    /// <param name="propertyValue">value of the property</param>
    /// <returns>instance of BehaviorProperty</returns>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<BehaviorProperty> GetOrCreateByValue(System::String propertyValue);
    
protected:

    /// <summary>
    /// Checks if this Property is equal to another.
    /// </summary>
    /// <param name="other">Property to compare.</param>
    /// <returns>True if properties are equal.</returns>
    ASPOSE_SLIDES_SHARED_API bool Equals_(System::SharedPtr<BehaviorProperty> other);
    
    virtual ASPOSE_SLIDES_SHARED_API ~BehaviorProperty();
    
private:

    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<BehaviorProperty>>> s_listProperties;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Object> s_lockObj;
    System::String m_value;
    bool m_isCustom;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_pptX;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_pptY;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_pptW;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_pptH;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_pptC;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_pptR;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_xShear;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_yShear;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_image;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_scaleX;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_scaleY;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_r;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_fillColor;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_style_opacity;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_style_rotation;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_style_visibility;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_style_color;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_style_fontSize;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_style_fontWeight;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_style_fontStyle;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_style_fontFamily;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_style_textEffectEmboss;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_style_textShadow;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_style_textTransform;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_style_textDecorationUnderline;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_style_textEffectOutline;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_style_textDecorationLineThrough;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_style_sRotation;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_imageData_cropTop;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_imageData_cropBottom;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_imageData_cropLeft;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_imageData_cropRight;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_imageData_gain;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_imageData_blacklevel;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_imageData_gamma;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_imageData_grayscale;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_imageData_chromakey;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_fill_on;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_fill_type;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_fill_color;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_fill_opacity;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_fill_color2;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_fill_method;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_fill_opacity2;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_fill_angle;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_fill_focus;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_fill_focusPositionX;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_fill_focusPositionY;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_fill_focusSizeX;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_fill_focusSizeY;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_stroke_on;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_stroke_color;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_stroke_weight;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_stroke_opacity;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_stroke_lineStyle;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_stroke_dashStyle;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_stroke_fillType;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_stroke_src;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_stroke_color2;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_stroke_imageSizeX;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_stroke_imageSizeY;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_stroke_startArrow;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_stroke_endArrow;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_stroke_startArrowWidth;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_stroke_startArrowLength;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_stroke_endArrowWidth;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_stroke_endArrowLength;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_shadow_on;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_shadow_type;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_shadow_color;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_shadow_color2;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_shadow_opacity;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_shadow_offsetX;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_shadow_offsetY;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_shadow_offset2X;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_shadow_offset2Y;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_shadow_originX;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_shadow_originY;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_shadow_matrixXtoX;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_shadow_matrixXtoY;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_shadow_matrixYtoX;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_shadow_matrixYtoY;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_shadow_matrixPerspectiveX;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_shadow_matrixPerspectiveY;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_skew_on;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_skew_offsetX;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_skew_OffsetY;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_skew_OriginX;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_skew_OriginY;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_skew_MatrixXtoX;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_skew_MatrixXtoY;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_skew_MatrixYtoX;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_skew_MatrixYtoY;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_skew_MatrixPerspectiveX;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_skew_MatrixPerspectiveY;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_extrusion_on;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_extrusion_type;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_extrusion_render;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_extrusion_viewPointOriginX;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_extrusion_viewPointOriginY;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_extrusion_viewPointX;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_extrusion_viewPointY;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_extrusion_viewPointZ;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_extrusion_plane;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_extrusion_skewAngle;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_extrusion_skewAmt;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_extrusion_backDepth;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_extrusion_foreDepth;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_extrusion_orientationX;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_extrusion_orientationY;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_extrusion_orientationZ;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_extrusion_orientationAngle;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_extrusion_Color;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_extrusion_rotationAngleX;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_extrusion_rotationAngleY;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_extrusion_lockRotationCenter;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_extrusion_autoRotationCenter;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_extrusion_rotationCenterX;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_extrusion_rotationCenterY;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_extrusion_rotationCenterZ;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BehaviorProperty> s_extrusion_colorMode;
    
    static ASPOSE_SLIDES_LOCAL_API struct __StaticConstructor__ { ASPOSE_SLIDES_LOCAL_API __StaticConstructor__(); } s_constructor__;
    ASPOSE_SLIDES_LOCAL_API BehaviorProperty(System::String value);
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(BehaviorProperty, CODEPORTING_ARGS(System::String value));
    
    ASPOSE_SLIDES_LOCAL_API BehaviorProperty(System::String value, bool isCustom);
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(BehaviorProperty, CODEPORTING_ARGS(System::String value, bool isCustom));
    
};

} // namespace Animation
} // namespace Slides
} // namespace Aspose


