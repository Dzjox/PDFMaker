#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/ISlideComponent.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IField;
class IFieldType;
class IPortionFormat;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class PointF;
class RectangleF;
} // namespace Drawing
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a portion of text inside a text paragraph.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IPortion : public Aspose::Slides::ISlideComponent
{
    typedef IPortion ThisType;
    typedef Aspose::Slides::ISlideComponent BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns formatting object which contains explicitly set formatting properties of the text portion with no inheritance applied.
    /// Read-only <see cref="Aspose::Slides::IPortionFormat">IPortionFormat</see>.
    /// </summary>
    /// <remarks><para>The formatting object contains the formatting parameters defined for the current portion only, inherited data is not applied.</para>
    /// <para>In order to get the effective values including inherited ones use <see cref="IPortionFormat::GetEffective"></see> method.</para>
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPortionFormat> get_PortionFormat() = 0;
    /// <summary>
    /// Gets the plain text of a portion.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    /// <value>
    /// The text.
    /// </value>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Text() = 0;
    /// <summary>
    /// Sets the plain text of a portion.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    /// <value>
    /// The text.
    /// </value>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Text(System::String value) = 0;
    /// <summary>
    /// Returns a field of this portion.
    /// Read-only <see cref="Aspose::Slides::IField">IField</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IField> get_Field() = 0;
    
    /// <summary>
    /// Converts this portion to the automaticaly updated field.
    /// </summary>
    /// <param name="fieldType">Type of field <see cref="Aspose::Slides::IFieldType">IFieldType</see></param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void AddField(System::SharedPtr<IFieldType> fieldType) = 0;
    /// <summary>
    /// Converts this portion to the automaticaly updated field.
    /// </summary>
    /// <param name="internalString">Internal name of FieldTypeEx  <see cref="System::String"></see></param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void AddField(System::String internalString) = 0;
    /// <summary>
    /// Converts this field portion to the simple portion.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveField() = 0;
    /// <summary>
    /// Get coordinates of rect that bounds portion. The rect includes all the lines of
    /// text in portion, including empty ones.
    /// </summary>
    /// <returns>Rectangle that bounds portion <see cref="System::Drawing::RectangleF"></see></returns>
    /// <example>Example:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// 
    /// auto slide = pres->get_Slides()->idx_get(0);
    /// auto shape = slide->get_Shapes()->AddAutoShape(Aspose::Slides::ShapeType::Rectangle, 50.0f, 50.0f, 200.0f, 50.0f);
    /// 
    /// shape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_Portions()->Clear();
    /// auto portion0 = System::MakeObject<Portion>(u"Some text");
    /// auto portion1 = System::MakeObject<Portion>(u"GetRect text");
    /// 
    /// shape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_Portions()->Add(portion0);
    /// shape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_Portions()->Add(portion1);
    /// 
    /// auto rect = shape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_Portions()->idx_get(1)->GetRect();
    /// // ...
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::RectangleF GetRect() = 0;
    /// <summary>
    /// Get coordinates of the beginning of the portion. The X coordinate of point represents the 
    /// portion beginning from the first character including left side bearing. The Y coordinate 
    /// includes top side bearing.
    /// </summary>
    /// <returns>Coordinates of the beginning of the portion <see cref="System::Drawing::PointF"></see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::PointF GetCoordinates() = 0;
    
};

} // namespace Slides
} // namespace Aspose


