#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/ISlideComponent.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IParagraphFormat;
class IPortion;
class IPortionCollection;
class IPortionFormat;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class RectangleF;
} // namespace Drawing
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a paragraph of a text.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IParagraph : public Aspose::Slides::ISlideComponent
{
    typedef IParagraph ThisType;
    typedef Aspose::Slides::ISlideComponent BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the collection of a text portions.
    /// Read-only <see cref="Aspose::Slides::IPortionCollection">IPortionCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPortionCollection> get_Portions() = 0;
    /// <summary>
    /// Returns the formatting object for this paragraph.
    /// Read-only <see cref="Aspose::Slides::IParagraphFormat">IParagraphFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IParagraphFormat> get_ParagraphFormat() = 0;
    /// <summary>
    /// Gets the the plain text of a paragraph.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    /// <value>
    /// The text.
    /// </value>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Text() = 0;
    /// <summary>
    /// Sets the the plain text of a paragraph.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    /// <value>
    /// The text.
    /// </value>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Text(System::String value) = 0;
    /// <summary>
    /// Specifies the portion properties that are to be used if another portion is inserted after 
    /// the last one.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPortionFormat> get_EndParagraphPortionFormat() = 0;
    /// <summary>
    /// Specifies the portion properties that are to be used if another portion is inserted after 
    /// the last one.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_EndParagraphPortionFormat(System::SharedPtr<IPortionFormat> value) = 0;
    
    /// <summary>
    /// Joins runs with same formatting.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void JoinPortionsWithSameFormatting() = 0;
    /// <summary>
    /// Get coordinates of rect that bounds paragraph. The rect includes all the lines of
    /// text in paragraph, including empty ones.
    /// </summary>
    /// <returns>Rectangle that bounds paragraph <see cref="System::Drawing::RectangleF"></see></returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::RectangleF GetRect() = 0;
    /// <summary>
    /// Get number of lines in a paragraph.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    /// 
    /// System::SharedPtr<ISlide> sld = pres->get_Slide(0);
    /// System::SharedPtr<IAutoShape> ashp = sld->get_Shapes()->AddAutoShape(ShapeType::Rectangle, 150.0f, 75.0f, 150.0f, 50.0f);
    /// System::SharedPtr<IParagraph> para = ashp->get_TextFrame()->get_Paragraph(0);
    /// System::SharedPtr<IPortion> portion = para->get_Portion(0);
    /// portion->set_Text(u"Aspose Paragraph GetLinesCount() Example");
    /// System::Console::WriteLine(u"Lines Count = {0}", para->GetLinesCount());
    /// </code>
    /// </example>
    /// <returns>Lines count in a paragraph</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t GetLinesCount() = 0;
    /// <summary>
    /// Returns a text portion at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPortion> get_Portion(int32_t index) = 0;
    
};

} // namespace Slides
} // namespace Aspose


