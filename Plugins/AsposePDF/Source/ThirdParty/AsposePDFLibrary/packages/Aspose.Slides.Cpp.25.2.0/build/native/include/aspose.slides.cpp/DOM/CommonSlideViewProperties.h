#pragma once
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/ICommonSlideViewProperties.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class DrawingGuidesCollection;
class IDrawingGuide;
class IDrawingGuidesCollection;
class ViewProperties;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents common slide view properties.
/// </summary>
/// <example>
/// The following example shows how to set the zoom value for slide of PowerPoint Presentation.
/// <code>
/// // Instantiate a Presentation object that represents a presentation file
/// auto presentation = System::MakeObject<Presentation>(u"demo.pptx");
/// 
/// // Setting View Properties of Presentation
/// presentation->get_ViewProperties()->get_SlideViewProperties()->set_Scale(100);
/// // Zoom value in percentages for slide view
/// presentation->get_ViewProperties()->get_NotesViewProperties()->set_Scale(100);
/// // Zoom value in percentages for notes view
/// presentation->Save(u"Zoom_out.pptx", SaveFormat::Pptx);
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS CommonSlideViewProperties : public Aspose::Slides::ICommonSlideViewProperties
{
    typedef CommonSlideViewProperties ThisType;
    typedef Aspose::Slides::ICommonSlideViewProperties BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::ViewProperties;
    /// @endcond
    
public:

    /// <summary>
    /// Specifies the view scaling ratio in percentages.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    /// <exception cref="System::ArgumentOutOfRangeException">Throws when value less than zero.</exception>
    ASPOSE_SLIDES_SHARED_API int32_t get_Scale() override;
    /// <summary>
    /// Specifies the view scaling ratio in percentages.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    /// <exception cref="System::ArgumentOutOfRangeException">Throws when value less than zero.</exception>
    ASPOSE_SLIDES_SHARED_API void set_Scale(int32_t value) override;
    /// <summary>
    /// Specifies that the view content should automatically scale to best fit the current window size.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_VariableScale() override;
    /// <summary>
    /// Specifies that the view content should automatically scale to best fit the current window size.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_VariableScale(bool value) override;
    /// <summary>
    /// Returns the collection of the drawing guides.
    /// Read-only <see cref="Aspose::Slides::IDrawingGuidesCollection">IDrawingGuidesCollection</see>
    /// </summary>
    /// <example>
    /// The following sample code shows how to add the new drawing guides in a PowerPoint presentation.
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    /// System::Drawing::SizeF slideSize = pres->get_SlideSize()->get_Size();
    /// 
    /// System::SharedPtr<IDrawingGuidesCollection> guides = pres->get_ViewProperties()->get_SlideViewProperties()->get_DrawingGuides();
    /// // Adding the new vertical drawing guide to the right of the slide center
    /// guides->Add(Orientation::Vertical, slideSize.get_Width() / 2 + 12.5f);
    /// // Adding the new horizontal drawing guide below the slide center
    /// guides->Add(Orientation::Horizontal, slideSize.get_Height() / 2 + 12.5f);
    /// 
    /// pres->Save(u"DrawingGuides_out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDrawingGuidesCollection> get_DrawingGuides() override;
    
    /// <summary>
    /// Returns drawing guide at the specified index.
    /// Read-only <see cref="Aspose::Slides::IDrawingGuide"></see>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDrawingGuide> get_DrawingGuide(int32_t index) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API CommonSlideViewProperties();
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CommonSlideViewProperties, CODEPORTING_ARGS());
    
private:

    int32_t m_scale;
    bool m_variableScale;
    System::SharedPtr<DrawingGuidesCollection> m_guides;
    
};

} // namespace Slides
} // namespace Aspose


