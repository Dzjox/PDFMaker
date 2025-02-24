#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/ILayoutSlideCollection.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ILayoutSlide;
class IMasterSlide;
enum class SlideLayoutType : int8_t;
} // namespace Slides
} // namespace Aspose
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a collection of all layout slides in presentation.
/// Extends ILayoutSlideCollection interface with methods for adding/cloning 
/// layout slides in context of uniting of the individual collections of master's layout slides.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IGlobalLayoutSlideCollection : public virtual Aspose::Slides::ILayoutSlideCollection
{
    typedef IGlobalLayoutSlideCollection ThisType;
    typedef Aspose::Slides::ILayoutSlideCollection BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Adds a copy of a specified layout slide to the presentation.
    /// </summary>
    /// <param name="sourceLayout">Slide to clone.</param>
    /// <returns>Added slide.</returns>
    /// <remarks>
    /// When cloning a layout between different presentations layout's master can be cloned too
    /// to keep source formatting.
    /// Internal registry is used to track automatically cloned masters to prevent creation of 
    /// multiple clones of the same master slide.
    /// Manual cloning of master slides will be neither prevented nor registered.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILayoutSlide> AddClone(System::SharedPtr<ILayoutSlide> sourceLayout) = 0;
    /// <summary>
    /// Adds a copy of a specified layout slide to the presentation.
    /// </summary>
    /// <param name="sourceLayout">Slide to clone.</param>
    /// <param name="destMaster">Master slide for a new layout.</param>
    /// <returns>Added slide.</returns>
    /// <remarks>
    /// New layout will be linked with defined master in destination presentation.
    /// So this is analogue of copy/paste with "Use Destination Theme" option in PowerPoint.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILayoutSlide> AddClone(System::SharedPtr<ILayoutSlide> sourceLayout, System::SharedPtr<IMasterSlide> destMaster) = 0;
    /// <summary>
    /// Adds a new layout slide to the presentation.
    /// </summary>
    /// <param name="master">Master slide for a new layout.</param>
    /// <param name="layoutType">
    /// Layout type for a new layout.
    /// Supported layout types: Title, TitleOnly, Blank, TitleAndObject, VerticalText, VerticalTitleAndText, TwoObjects, SectionHeader, TwoTextAndTwoObjects, TitleObjectAndCaption, PictureAndCaption, Custom.
    /// Other layout types are not supported now: Text, TwoColumnText, Table, TextAndChart, ChartAndText, Diagram, Chart, TextAndClipArt, ClipArtAndText, TextAndObject, ObjectAndText, Object, TextAndMedia, MediaAndText, ObjectOverText, TextOverObject, TextAndTwoObjects, TwoObjectsAndText, TwoObjectsOverText, FourObjects, ClipArtAndVerticalText, VerticalTitleAndTextOverChart, ObjectAndTwoObject, TwoObjectsAndObject.
    /// </param>
    /// <param name="layoutName">
    /// Name for a new layout. If passed name is already in use the ArgumentException will be thrown.
    /// If null parameter is passed then name genarated atomatically in regards to passed layout type 
    /// (for example "Title Slide" or "1_Title Slide", "2_..", etc.).
    /// </param>
    /// <exception cref="System::NotImplementedException">
    /// Thrown if unsupported value of parameter <paramref name="layoutType"></paramref> is passed. Layout types that are not supported now: Text, TwoColumnText, Table, TextAndChart, ChartAndText, Diagram, Chart, TextAndClipArt, ClipArtAndText, TextAndObject, ObjectAndText, Object, TextAndMedia, MediaAndText, ObjectOverText, TextOverObject, TextAndTwoObjects, TwoObjectsAndText, TwoObjectsOverText, FourObjects, ClipArtAndVerticalText, VerticalTitleAndTextOverChart, ObjectAndTwoObject, TwoObjectsAndObject.
    /// </exception>
    /// <exception cref="System::ArgumentNullException">
    /// Thrown if <paramref name="master"></paramref> is null.
    /// </exception>
    /// <exception cref="System::ArgumentException">
    /// Thrown if <paramref name="master"></paramref> belongs to the other presentation.
    /// </exception>
    /// <exception cref="System::ArgumentException">
    /// Thrown if layout name value <paramref name="layoutName"></paramref> is already in use in 
    /// collection of the layouts of <paramref name="master"></paramref>.
    /// </exception>
    /// <remarks>
    /// 1) Added layout for value SlideLayoutType::Custom of <paramref name="layoutType"></paramref> 
    /// contains no placeholders and no shapes.
    /// 2) Analogue of this method is method <see cref="Aspose::Slides::IMasterLayoutSlideCollection::Add(SlideLayoutType, System::String)">IMasterLayoutSlideCollection::Add(SlideLayoutType, String)</see>
    /// accessed with <see cref="Aspose::Slides::IMasterSlide::get_LayoutSlides">IMasterSlide::get_LayoutSlides()</see> property.
    /// </remarks>
    /// <returns>Added slide.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILayoutSlide> Add(System::SharedPtr<IMasterSlide> master, SlideLayoutType layoutType, System::String layoutName) = 0;
    
};

} // namespace Slides
} // namespace Aspose


