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
/// Represents a collections of all layout slides of defined master slide.
/// Extends ILayoutSlideCollection interface with methods for adding/inserting/removing/cloning 
/// layout slides in context of the individual collections of master's layout slides.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IMasterLayoutSlideCollection : public virtual Aspose::Slides::ILayoutSlideCollection
{
    typedef IMasterLayoutSlideCollection ThisType;
    typedef Aspose::Slides::ILayoutSlideCollection BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Adds a copy of a specified layout slide to the end of the collection.
    /// </summary>
    /// <param name="sourceLayout">Slide to clone.</param>
    /// <returns>Added slide.</returns>
    /// <remarks>
    /// 1) New layout will be linked with parent master slide for this layout slides collection.
    /// So this is analogue of copy/paste with "Use Destination Theme" option in PowerPoint.
    /// 2) Analogue of this method is method <see cref="Aspose::Slides::IGlobalLayoutSlideCollection::AddClone(System::SharedPtr<ILayoutSlide>, System::SharedPtr<IMasterSlide>)">IGlobalLayoutSlideCollection::AddClone(SharedPtr<ILayoutSlide>, SharedPtr<IMasterSlide>)</see>
    /// accessed with <see cref="Aspose::Slides::IPresentation::get_LayoutSlides">IPresentation::get_LayoutSlides()</see> property.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILayoutSlide> AddClone(System::SharedPtr<ILayoutSlide> sourceLayout) = 0;
    /// <summary>
    /// Inserts a copy of a specified layout slide to specified position of the collection.
    /// </summary>
    /// <param name="index">Index of new slide.</param>
    /// <param name="sourceLayout">Slide to clone.</param>
    /// <remarks>
    /// New layout will be linked with parent master slide for this layout slides collection.
    /// So this is analogue of copy/paste with "Use Destination Theme" option in PowerPoint.
    /// </remarks>
    /// <returns>Inserted slide.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILayoutSlide> InsertClone(int32_t index, System::SharedPtr<ILayoutSlide> sourceLayout) = 0;
    /// <summary>
    /// Adds a new layout slide to the end of the collection.
    /// </summary>
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
    /// <exception cref="System::ArgumentException">
    /// Thrown if layout name value <paramref name="layoutName"></paramref> is already in use in 
    /// this collection of the layouts.
    /// </exception>
    /// <remarks>
    /// 1) Added layout for value SlideLayoutType::Custom of <paramref name="layoutType"></paramref> 
    /// contains no placeholders and no shapes.
    /// 2) Analogue of this method is 
    /// method <see cref="Aspose::Slides::IGlobalLayoutSlideCollection::Add(System::SharedPtr<IMasterSlide>, SlideLayoutType, System::String)">IGlobalLayoutSlideCollection::Add(SharedPtr<IMasterSlide>, SlideLayoutType, String)</see>
    /// accessed with <see cref="Aspose::Slides::IPresentation::get_LayoutSlides">IPresentation::get_LayoutSlides()</see> property.
    /// </remarks>
    /// <returns>Added slide.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILayoutSlide> Add(SlideLayoutType layoutType, System::String layoutName) = 0;
    /// <summary>
    /// Inserts a new layout slide to specified position of the collection.
    /// </summary>
    /// <param name="index">Index of new slide.</param>
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
    /// <exception cref="System::ArgumentException">
    /// Thrown if layout name value <paramref name="layoutName"></paramref> is already in use in 
    /// this collection of the layouts.
    /// </exception>
    /// <remarks>
    /// Inserted layout for value SlideLayoutType::Custom of <paramref name="layoutType"></paramref> 
    /// contains no placeholders and no shapes.
    /// </remarks>
    /// <returns>Inserted slide.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILayoutSlide> Insert(int32_t index, SlideLayoutType layoutType, System::String layoutName) = 0;
    /// <summary>
    /// Removes the element at the specified index of the collection.
    /// </summary>
    /// <param name="index">The zero-based index of the element to remove.</param>
    /// <exception cref="Aspose::Slides::PptxEditException">
    /// Thrown if layout is used in presentation (its HasDependingSlides property is true).
    /// </exception>
    /// <remarks>
    /// 1) To avoid throwing of the PptxEditException check layout's HasDependingSlides property before.
    /// 2) You can use also <see cref="ILayoutSlide::Remove"></see> method to simplify code.
    /// </remarks>
    virtual ASPOSE_SLIDES_API_LOCAL_API void RemoveAt(int32_t index) = 0;
    /// <summary>
    /// Moves layout slide from the collection to the specified position.
    /// </summary>
    /// <param name="index">Target index.</param>
    /// <param name="layoutSlide">Slide to move.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void Reorder(int32_t index, System::SharedPtr<ILayoutSlide> layoutSlide) = 0;
    
};

} // namespace Slides
} // namespace Aspose


