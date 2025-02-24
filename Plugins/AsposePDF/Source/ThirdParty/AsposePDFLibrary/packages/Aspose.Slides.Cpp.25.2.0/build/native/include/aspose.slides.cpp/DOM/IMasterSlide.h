#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "DOM/Theme/IMasterThemeable.h"
#include "DOM/IBaseSlide.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IMasterLayoutSlideCollection;
class IMasterSlideHeaderFooterManager;
class ISlide;
class ITextStyle;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a master slide in a presentation.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IMasterSlide : public virtual Aspose::Slides::IBaseSlide, public Aspose::Slides::Theme::IMasterThemeable
{
    typedef IMasterSlide ThisType;
    typedef Aspose::Slides::IBaseSlide BaseType;
    typedef Aspose::Slides::Theme::IMasterThemeable BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns HeaderFooter manager of the master slide.
    /// Read-only <see cref="Aspose::Slides::IMasterSlideHeaderFooterManager">IMasterSlideHeaderFooterManager</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMasterSlideHeaderFooterManager> get_HeaderFooterManager() = 0;
    /// <summary>
    /// Returns the style of a title text.
    /// Read-only <see cref="Aspose::Slides::ITextStyle">ITextStyle</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITextStyle> get_TitleStyle() = 0;
    /// <summary>
    /// Returns the style of a body text.
    /// Read-only <see cref="Aspose::Slides::ITextStyle">ITextStyle</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITextStyle> get_BodyStyle() = 0;
    /// <summary>
    /// Returns the style of an other text.
    /// Read-only <see cref="Aspose::Slides::ITextStyle">ITextStyle</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITextStyle> get_OtherStyle() = 0;
    /// <summary>
    /// Returns the collection of child layout slides for this master slide.
    /// Read-only <see cref="Aspose::Slides::IMasterLayoutSlideCollection">IMasterLayoutSlideCollection</see>.
    /// </summary>
    /// <remarks>
    /// You can access to alternative API for adding/inserting/removing/cloning layout slides 
    /// by using <see cref="Aspose::Slides::IPresentation::get_LayoutSlides">IPresentation::get_LayoutSlides()</see> property.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMasterLayoutSlideCollection> get_LayoutSlides() = 0;
    /// <summary>
    /// Determines whether the corresponding master is deleted when all 
    /// the slides that follow that master are deleted.
    /// Note: Aspose.Slides will never remove any unused master by itself, 
    /// to actually remove unused masters call <see cref="IMasterSlideCollection::RemoveUnused"></see>
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_Preserve() = 0;
    /// <summary>
    /// Determines whether the corresponding master is deleted when all 
    /// the slides that follow that master are deleted.
    /// Note: Aspose.Slides will never remove any unused master by itself, 
    /// to actually remove unused masters call <see cref="IMasterSlideCollection::RemoveUnused"></see>
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Preserve(bool value) = 0;
    /// <summary>
    /// Returns true if there exists at least one slide that depends on this master slide.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_HasDependingSlides() = 0;
    
    /// <summary>
    /// Creates a new master slide based on the current one, applying an external theme to it 
    /// and applies the created master slide to all dependent slides.
    /// </summary>
    /// <param name="fname">Path to the external theme file (.thmx).</param>
    /// <exception cref="Aspose::Slides::PptxReadException">When external theme cannot be applied.</exception>
    /// <returns>New themed MasterSlide.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMasterSlide> ApplyExternalThemeToDependingSlides(System::String fname) = 0;
    /// <summary>
    /// Returns an array with all slides, which depend on this master slide.
    /// </summary>
    /// <returns>Array of <see cref="Aspose::Slides::ISlide">ISlide</see>, which depend on this master slide</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<ISlide>> GetDependingSlides() = 0;
    
};

} // namespace Slides
} // namespace Aspose


