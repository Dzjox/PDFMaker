#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class NullableBool : int8_t;
enum class TextAnchorType : int8_t;
enum class TextAutofitType : int8_t;
enum class TextVerticalType : int8_t;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Charts {

/// <summary>
/// Represents formatting properties for chart text elements.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IChartTextBlockFormat : public virtual System::Object
{
    typedef IChartTextBlockFormat ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

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
    /// Returns the left margin (points) in a TextFrame.
    /// Changing of this property can produce a certain influence only for these chart parts: 
    /// DataLabel and DataLabelFormat (full suport in PowerPoint 2013; in PowerPoint 2007 there is no effect for rendering).
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_MarginLeft() = 0;
    /// <summary>
    /// Sets the left margin (points) in a TextFrame.
    /// Changing of this property can produce a certain influence only for these chart parts: 
    /// DataLabel and DataLabelFormat (full suport in PowerPoint 2013; in PowerPoint 2007 there is no effect for rendering).
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_MarginLeft(double value) = 0;
    /// <summary>
    /// Returns the right margin (points) in a TextFrame.
    /// Changing of this property can produce a certain influence only for these chart parts: 
    /// DataLabel and DataLabelFormat (full suport in PowerPoint 2013; in PowerPoint 2007 there is no effect for rendering).
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_MarginRight() = 0;
    /// <summary>
    /// Sets the right margin (points) in a TextFrame.
    /// Changing of this property can produce a certain influence only for these chart parts: 
    /// DataLabel and DataLabelFormat (full suport in PowerPoint 2013; in PowerPoint 2007 there is no effect for rendering).
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_MarginRight(double value) = 0;
    /// <summary>
    /// Returns the top margin (points) in a TextFrame.
    /// Changing of this property can produce a certain influence only for these chart parts: 
    /// DataLabel and DataLabelFormat (full suport in PowerPoint 2013; in PowerPoint 2007 there is no effect for rendering).
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_MarginTop() = 0;
    /// <summary>
    /// Sets the top margin (points) in a TextFrame.
    /// Changing of this property can produce a certain influence only for these chart parts: 
    /// DataLabel and DataLabelFormat (full suport in PowerPoint 2013; in PowerPoint 2007 there is no effect for rendering).
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_MarginTop(double value) = 0;
    /// <summary>
    /// Returns the bottom margin (points) in a TextFrame.
    /// Changing of this property can produce a certain influence only for these chart parts: 
    /// DataLabel and DataLabelFormat (full suport in PowerPoint 2013; in PowerPoint 2007 there is no effect for rendering).
    /// Read <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API double get_MarginBottom() = 0;
    /// <summary>
    /// Sets the bottom margin (points) in a TextFrame.
    /// Changing of this property can produce a certain influence only for these chart parts: 
    /// DataLabel and DataLabelFormat (full suport in PowerPoint 2013; in PowerPoint 2007 there is no effect for rendering).
    /// Write <see cref="double"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_MarginBottom(double value) = 0;
    /// <summary>
    /// <b>True</b> if text is wrapped at TextFrame's margins.
    /// Changing of this property can produce a certain influence only for these chart parts: 
    /// DataLabel and DataLabelFormat (full suport in PowerPoint 2007/2013).
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API NullableBool get_WrapText() = 0;
    /// <summary>
    /// <b>True</b> if text is wrapped at TextFrame's margins.
    /// Changing of this property can produce a certain influence only for these chart parts: 
    /// DataLabel and DataLabelFormat (full suport in PowerPoint 2007/2013).
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_WrapText(NullableBool value) = 0;
    /// <summary>
    /// Returns text's autofit mode.
    /// Changing of this property can produce a certain influence only for these chart parts: 
    /// DataLabel and DataLabelFormat (full suport in PowerPoint 2013; in PowerPoint 2007 there is no effect for rendering).
    /// Read <see cref="TextAutofitType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API TextAutofitType get_AutofitType() = 0;
    /// <summary>
    /// Sets text's autofit mode.
    /// Changing of this property can produce a certain influence only for these chart parts: 
    /// DataLabel and DataLabelFormat (full suport in PowerPoint 2013; in PowerPoint 2007 there is no effect for rendering).
    /// Write <see cref="TextAutofitType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AutofitType(TextAutofitType value) = 0;
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
    
};

} // namespace Charts
} // namespace Slides
} // namespace Aspose


