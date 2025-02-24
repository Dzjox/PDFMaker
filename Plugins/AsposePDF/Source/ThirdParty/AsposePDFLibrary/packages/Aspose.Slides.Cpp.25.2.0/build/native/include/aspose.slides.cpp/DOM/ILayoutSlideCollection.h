#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include "DOM/IGenericCollection.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ILayoutSlide;
enum class SlideLayoutType : int8_t;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a base class for collection of a layout slides.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ILayoutSlideCollection : public Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::ILayoutSlide>>
{
    typedef ILayoutSlideCollection ThisType;
    typedef Aspose::Slides::IGenericCollection<System::SharedPtr<Aspose::Slides::ILayoutSlide>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the layout slide by index.
    /// Read-only <see cref="Aspose::Slides::ILayoutSlide">ILayoutSlide</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILayoutSlide> idx_get(int32_t index) = 0;
    
    /// <summary>
    /// Returns the first layout slide of specified type.
    /// </summary>
    /// <param name="type">A type of layout slide to find.</param>
    /// <returns><see cref="Aspose::Slides::ILayoutSlide">ILayoutSlide</see> with specified type or null if no layouts found.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILayoutSlide> GetByType(SlideLayoutType type) = 0;
    /// <summary>
    /// Removes a layout from the collection.
    /// </summary>
    /// <param name="value">The layout slide to remove from the collection.</param>
    /// <exception cref="Aspose::Slides::PptxEditException">
    /// Thrown if layout is used in presentation (its HasDependingSlides property is true).
    /// </exception>
    /// <remarks>
    /// 1) To avoid throwing of the PptxEditException check layout's HasDependingSlides property before.
    /// 2) You can use also <see cref="ILayoutSlide::Remove"></see> method to simplify code.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Remove(System::SharedPtr<ILayoutSlide> value) = 0;
    /// <summary>
    /// Removes unused layout slides (layout slides whose HasDependingSlides is false).
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveUnused() = 0;
    
};

} // namespace Slides
} // namespace Aspose


