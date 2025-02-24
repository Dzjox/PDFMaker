#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IAutoShape;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents manager that allows you to add placeholders to the layout slide.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ILayoutPlaceholderManager : public virtual System::Object
{
    typedef ILayoutPlaceholderManager ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Adds a new placeholder shape to the layout slide to hold content, such as a picture, table, media or text.
    /// </summary>
    /// <returns>Created <see cref="Aspose::Slides::IAutoShape">IAutoShape</see> with a Content placeholder.</returns>
    /// <param name="x">The X coordinate of the new placeholder shape.</param>
    /// <param name="y">The Y coordinate of the new placeholder shape.</param>
    /// <param name="width">The width of the new placeholder shape.</param>
    /// <param name="height">The height of the new placeholder shape.</param>
    /// <example>
    /// The following example shows how to add the Content placeholder shape to the layout slide.
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    /// 
    /// System::SharedPtr<ILayoutSlide> layout = pres->get_LayoutSlides()->GetByType(SlideLayoutType::Blank);
    /// System::SharedPtr<IAutoShape> placeholder = layout->get_PlaceholderManager()->AddContentPlaceholder(20.0f, 20.0f, 500.0f, 300.0f);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAutoShape> AddContentPlaceholder(float x, float y, float width, float height) = 0;
    /// <summary>
    /// Adds a new placeholder shape to the layout slide to hold content, such as a picture, table, media 
    /// or text in a vertical direction.
    /// </summary>
    /// <returns>Created <see cref="Aspose::Slides::IAutoShape">IAutoShape</see> with a Content (Vertical) placeholder.</returns>
    /// <param name="x">The X coordinate of the new placeholder shape.</param>
    /// <param name="y">The Y coordinate of the new placeholder shape.</param>
    /// <param name="width">The width of the new placeholder shape.</param>
    /// <param name="height">The height of the new placeholder shape.</param>
    /// <example>
    /// The following example shows how to add the Content (Vertical) placeholder shape to the layout slide.
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    /// 
    /// System::SharedPtr<ILayoutSlide> layout = pres->get_LayoutSlides()->GetByType(SlideLayoutType::Blank);
    /// System::SharedPtr<IAutoShape> placeholder = layout->get_PlaceholderManager()->AddVerticalContentPlaceholder(20.0f, 20.0f, 300.0f, 500.0f);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAutoShape> AddVerticalContentPlaceholder(float x, float y, float width, float height) = 0;
    /// <summary>
    /// Adds a new placeholder shape to the layout slide to hold text content.
    /// </summary>
    /// <returns>Created <see cref="Aspose::Slides::IAutoShape">IAutoShape</see> with a Text placeholder.</returns>
    /// <param name="x">The X coordinate of the new placeholder shape.</param>
    /// <param name="y">The Y coordinate of the new placeholder shape.</param>
    /// <param name="width">The width of the new placeholder shape.</param>
    /// <param name="height">The height of the new placeholder shape.</param>
    /// <example>
    /// The following example shows how to add the Text placeholder shape to the layout slide.
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    /// 
    /// System::SharedPtr<ILayoutSlide> layout = pres->get_LayoutSlides()->GetByType(SlideLayoutType::Blank);
    /// System::SharedPtr<IAutoShape> placeholder = layout->get_PlaceholderManager()->AddTextPlaceholder(20.0f, 20.0f, 500.0f, 300.0f);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAutoShape> AddTextPlaceholder(float x, float y, float width, float height) = 0;
    /// <summary>
    /// Adds a new placeholder shape to the layout slide to hold text content in a vertical direction.
    /// </summary>
    /// <returns>Created <see cref="Aspose::Slides::IAutoShape">IAutoShape</see> with a Text (Vertical) placeholder.</returns>
    /// <param name="x">The X coordinate of the new placeholder shape.</param>
    /// <param name="y">The Y coordinate of the new placeholder shape.</param>
    /// <param name="width">The width of the new placeholder shape.</param>
    /// <param name="height">The height of the new placeholder shape.</param>
    /// <example>
    /// The following example shows how to add the Text (Vertical) placeholder shape to the layout slide.
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    /// 
    /// System::SharedPtr<ILayoutSlide> layout = pres->get_LayoutSlides()->GetByType(SlideLayoutType::Blank);
    /// System::SharedPtr<IAutoShape> placeholder = layout->get_PlaceholderManager()->AddVerticalTextPlaceholder(20.0f, 20.0f, 300.0f, 500.0f);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAutoShape> AddVerticalTextPlaceholder(float x, float y, float width, float height) = 0;
    /// <summary>
    /// Adds a new placeholder shape to the layout slide to hold a picture.
    /// </summary>
    /// <returns>Created <see cref="Aspose::Slides::IAutoShape">IAutoShape</see> with a Picture placeholder.</returns>
    /// <param name="x">The X coordinate of the new placeholder shape.</param>
    /// <param name="y">The Y coordinate of the new placeholder shape.</param>
    /// <param name="width">The width of the new placeholder shape.</param>
    /// <param name="height">The height of the new placeholder shape.</param>
    /// <example>
    /// The following example shows how to add the Picture placeholder shape to the layout slide.
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    /// 
    /// System::SharedPtr<ILayoutSlide> layout = pres->get_LayoutSlides()->GetByType(SlideLayoutType::Blank);
    /// System::SharedPtr<IAutoShape> placeholder = layout->get_PlaceholderManager()->AddPicturePlaceholder(20.0f, 20.0f, 200.0f, 200.0f);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAutoShape> AddPicturePlaceholder(float x, float y, float width, float height) = 0;
    /// <summary>
    /// Adds a new placeholder shape to the layout slide to hold a chart.
    /// </summary>
    /// <returns>Created <see cref="Aspose::Slides::IAutoShape">IAutoShape</see> with a Chart placeholder.</returns>
    /// <param name="x">The X coordinate of the new placeholder shape.</param>
    /// <param name="y">The Y coordinate of the new placeholder shape.</param>
    /// <param name="width">The width of the new placeholder shape.</param>
    /// <param name="height">The height of the new placeholder shape.</param>
    /// <example>
    /// The following example shows how to add the Chart placeholder shape to the layout slide.
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    /// 
    /// System::SharedPtr<ILayoutSlide> layout = pres->get_LayoutSlides()->GetByType(SlideLayoutType::Blank);
    /// System::SharedPtr<IAutoShape> placeholder = layout->get_PlaceholderManager()->AddChartPlaceholder(20.0f, 20.0f, 200.0f, 200.0f);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAutoShape> AddChartPlaceholder(float x, float y, float width, float height) = 0;
    /// <summary>
    /// Adds a new placeholder shape to the layout slide to hold a table.
    /// </summary>
    /// <returns>Created <see cref="Aspose::Slides::IAutoShape">IAutoShape</see> with a Table placeholder.</returns>
    /// <param name="x">The X coordinate of the new placeholder shape.</param>
    /// <param name="y">The Y coordinate of the new placeholder shape.</param>
    /// <param name="width">The width of the new placeholder shape.</param>
    /// <param name="height">The height of the new placeholder shape.</param>
    /// <example>
    /// The following example shows how to add the Table placeholder shape to the layout slide.
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    /// 
    /// System::SharedPtr<ILayoutSlide> layout = pres->get_LayoutSlides()->GetByType(SlideLayoutType::Blank);
    /// System::SharedPtr<IAutoShape> placeholder = layout->get_PlaceholderManager()->AddTablePlaceholder(20.0f, 20.0f, 500.0f, 200.0f);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAutoShape> AddTablePlaceholder(float x, float y, float width, float height) = 0;
    /// <summary>
    /// Adds a new placeholder shape to the layout slide to hold a SmartArt diagram.
    /// </summary>
    /// <returns>Created <see cref="Aspose::Slides::IAutoShape">IAutoShape</see> with a SmartArt placeholder.</returns>
    /// <param name="x">The X coordinate of the new placeholder shape.</param>
    /// <param name="y">The Y coordinate of the new placeholder shape.</param>
    /// <param name="width">The width of the new placeholder shape.</param>
    /// <param name="height">The height of the new placeholder shape.</param>
    /// <example>
    /// The following example shows how to add the SmartArt placeholder shape to the layout slide.
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    /// 
    /// System::SharedPtr<ILayoutSlide> layout = pres->get_LayoutSlides()->GetByType(SlideLayoutType::Blank);
    /// System::SharedPtr<IAutoShape> placeholder = layout->get_PlaceholderManager()->AddSmartArtPlaceholder(20.0f, 20.0f, 200.0f, 200.0f);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAutoShape> AddSmartArtPlaceholder(float x, float y, float width, float height) = 0;
    /// <summary>
    /// Adds a new placeholder shape to the layout slide to hold a media object.
    /// </summary>
    /// <returns>Created <see cref="Aspose::Slides::IAutoShape">IAutoShape</see> with a Media placeholder.</returns>
    /// <param name="x">The X coordinate of the new placeholder shape.</param>
    /// <param name="y">The Y coordinate of the new placeholder shape.</param>
    /// <param name="width">The width of the new placeholder shape.</param>
    /// <param name="height">The height of the new placeholder shape.</param>
    /// <example>
    /// The following example shows how to add the Media placeholder shape to the layout slide.
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    /// 
    /// System::SharedPtr<ILayoutSlide> layout = pres->get_LayoutSlides()->GetByType(SlideLayoutType::Blank);
    /// System::SharedPtr<IAutoShape> placeholder = layout->get_PlaceholderManager()->AddMediaPlaceholder(20.0f, 20.0f, 200.0f, 200.0f);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAutoShape> AddMediaPlaceholder(float x, float y, float width, float height) = 0;
    /// <summary>
    /// Adds a new placeholder shape to the layout slide to hold an online image.
    /// </summary>
    /// <returns>Created <see cref="Aspose::Slides::IAutoShape">IAutoShape</see> with an Online Image placeholder.</returns>
    /// <param name="x">The X coordinate of the new placeholder shape.</param>
    /// <param name="y">The Y coordinate of the new placeholder shape.</param>
    /// <param name="width">The width of the new placeholder shape.</param>
    /// <param name="height">The height of the new placeholder shape.</param>
    /// <example>
    /// The following example shows how to add the Online Image placeholder shape to the layout slide.
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    /// 
    /// System::SharedPtr<ILayoutSlide> layout = pres->get_LayoutSlides()->GetByType(SlideLayoutType::Blank);
    /// System::SharedPtr<IAutoShape> placeholder = layout->get_PlaceholderManager()->AddOnlineImagePlaceholder(20.0f, 20.0f, 200.0f, 200.0f);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAutoShape> AddOnlineImagePlaceholder(float x, float y, float width, float height) = 0;
    
};

} // namespace Slides
} // namespace Aspose


