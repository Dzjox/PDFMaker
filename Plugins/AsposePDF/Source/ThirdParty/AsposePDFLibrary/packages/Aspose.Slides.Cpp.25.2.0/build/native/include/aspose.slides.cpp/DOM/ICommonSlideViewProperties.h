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
class IDrawingGuide;
class IDrawingGuidesCollection;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents common slide view properties.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ICommonSlideViewProperties : public virtual System::Object
{
    typedef ICommonSlideViewProperties ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Specifies the view scaling ratio in percentages.
    /// Read <see cref="int32_t"></see>.
    /// </summary>
    /// <exception cref="System::ArgumentOutOfRangeException">Throws when value less than zero.</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API int32_t get_Scale() = 0;
    /// <summary>
    /// Specifies the view scaling ratio in percentages.
    /// Write <see cref="int32_t"></see>.
    /// </summary>
    /// <exception cref="System::ArgumentOutOfRangeException">Throws when value less than zero.</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Scale(int32_t value) = 0;
    /// <summary>
    /// Specifies that the view content should automatically scale to best fit the current window size.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_VariableScale() = 0;
    /// <summary>
    /// Specifies that the view content should automatically scale to best fit the current window size.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_VariableScale(bool value) = 0;
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
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IDrawingGuidesCollection> get_DrawingGuides() = 0;
    
    /// <summary>
    /// Returns drawing guide at the specified index.
    /// Read-only <see cref="Aspose::Slides::IDrawingGuide"></see>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IDrawingGuide> get_DrawingGuide(int32_t index) = 0;
    
};

} // namespace Slides
} // namespace Aspose


