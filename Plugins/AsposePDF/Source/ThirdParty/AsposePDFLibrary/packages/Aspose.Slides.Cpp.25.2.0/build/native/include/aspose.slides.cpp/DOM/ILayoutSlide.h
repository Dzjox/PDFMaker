#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "DOM/Theme/IOverrideThemeable.h"
#include "DOM/IBaseSlide.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ILayoutPlaceholderManager;
class ILayoutSlideHeaderFooterManager;
class IMasterSlide;
class ISlide;
enum class SlideLayoutType : int8_t;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a layout slide.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ILayoutSlide : public virtual Aspose::Slides::IBaseSlide, public Aspose::Slides::Theme::IOverrideThemeable
{
    typedef ILayoutSlide ThisType;
    typedef Aspose::Slides::IBaseSlide BaseType;
    typedef Aspose::Slides::Theme::IOverrideThemeable BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns HeaderFooter manager of the layout slide.
    /// Read-only <see cref="Aspose::Slides::ILayoutSlideHeaderFooterManager">ILayoutSlideHeaderFooterManager</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILayoutSlideHeaderFooterManager> get_HeaderFooterManager() = 0;
    /// <summary>
    /// Returns the placeholder manager of the layout slide.
    /// Read-only <see cref="Aspose::Slides::ILayoutPlaceholderManager">ILayoutPlaceholderManager</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILayoutPlaceholderManager> get_PlaceholderManager() = 0;
    /// <summary>
    /// Returns the master slide for a layout.
    /// Read <see cref="Aspose::Slides::IMasterSlide">IMasterSlide</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IMasterSlide> get_MasterSlide() = 0;
    /// <summary>
    /// Sets the master slide for a layout.
    /// Write <see cref="Aspose::Slides::IMasterSlide">IMasterSlide</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_MasterSlide(System::SharedPtr<IMasterSlide> value) = 0;
    /// <summary>
    /// Returns layout type of this layout slide.
    /// Read-only <see cref="SlideLayoutType"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API SlideLayoutType get_LayoutType() = 0;
    /// <summary>
    /// Returns true if there exists at least one slide that depends on this layout slide.
    /// Read-only <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_HasDependingSlides() = 0;
    
    /// <summary>
    /// Returns an array with all slides, which depend on this layout slide.
    /// </summary>
    /// <returns>Array with all slides, which depend on this layout slide</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<System::SharedPtr<ISlide>> GetDependingSlides() = 0;
    /// <summary>
    /// Removes layout from presentation.
    /// </summary>
    /// <exception cref="Aspose::Slides::PptxEditException">
    /// Thrown if layout is already removed from presentation or if layout is used in presentation (its 
    /// HasDependingSlides property is true).
    /// </exception>
    /// <remarks>
    /// To avoid throwing of the PptxEditException check layout's HasDependingSlides property before.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Remove() = 0;
    
};

} // namespace Slides
} // namespace Aspose


