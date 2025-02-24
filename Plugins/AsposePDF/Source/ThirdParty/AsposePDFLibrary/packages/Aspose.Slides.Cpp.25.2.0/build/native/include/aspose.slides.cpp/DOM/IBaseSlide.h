#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <cstdint>

#include "DOM/Theme/IThemeable.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IAnimationTimeLine;
class IBackground;
class IControl;
class IControlCollection;
class ICustomData;
class IHyperlinkQueries;
class IShape;
class IShapeCollection;
class ISlideShowTransition;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents common data for all slide types.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IBaseSlide : public virtual Aspose::Slides::Theme::IThemeable
{
    typedef IBaseSlide ThisType;
    typedef Aspose::Slides::Theme::IThemeable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
    /// @cond
    friend class System::ObjectExt;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the shapes of a slide.
    /// Read-only <see cref="Aspose::Slides::IShapeCollection">IShapeCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IShapeCollection> get_Shapes() = 0;
    /// <summary>
    /// Returns the collection of ActiveX controls on a slide.
    /// Read-only <see cref="Aspose::Slides::IControlCollection">IControlCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IControlCollection> get_Controls() = 0;
    /// <summary>
    /// Returns the name of a slide.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Name() = 0;
    /// <summary>
    /// Sets the name of a slide.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Name(System::String value) = 0;
    /// <summary>
    /// Returns the ID of a slide.
    /// Read-only <see cref="uint32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint32_t get_SlideId() = 0;
    /// <summary>
    /// Returns the slide's custom data.
    /// Read-only <see cref="Aspose::Slides::ICustomData">ICustomData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ICustomData> get_CustomData() = 0;
    /// <summary>
    /// Returns animation timeline object.
    /// Read-only <see cref="Aspose::Slides::IAnimationTimeLine">IAnimationTimeLine</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IAnimationTimeLine> get_Timeline() = 0;
    /// <summary>
    /// Returns the TransitionEx object which contains information about
    /// how the specified slide advances during a slide show.
    /// Read-only <see cref="Aspose::Slides::ISlideShowTransition">ISlideShowTransition</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ISlideShowTransition> get_SlideShowTransition() = 0;
    /// <summary>
    /// Returns slide's background.
    /// Read-only <see cref="Aspose::Slides::IBackground">IBackground</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IBackground> get_Background() = 0;
    /// <summary>
    /// Provides easy access to contained hyperlinks.
    /// Read-only <see cref="Aspose::Slides::IHyperlinkQueries">IHyperlinkQueries</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IHyperlinkQueries> get_HyperlinkQueries() = 0;
    /// <summary>
    /// Specifies if shapes on the master slide should be shown on slides or not.
    /// For master slide itself this property always returns <c>false</c>.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <exception cref="System::NotSupportedException">Thrown if set <c>true</c> for master slide.</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_ShowMasterShapes() = 0;
    /// <summary>
    /// Specifies if shapes on the master slide should be shown on slides or not.
    /// For master slide itself this property always returns <c>false</c>.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <exception cref="System::NotSupportedException">Thrown if set <c>true</c> for master slide.</exception>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ShowMasterShapes(bool value) = 0;
    
    /// <summary>
    /// Finds first occurrence of a shape with the specified alternative text.
    /// </summary>
    /// <param name="altText">Alternative text.</param>
    /// <returns>ShapeEx object or null.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IShape> FindShapeByAltText(System::String altText) = 0;
    /// <summary>
    /// Joins runs with same formatting in all paragraphs in all acceptable shapes.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void JoinPortionsWithSameFormatting() = 0;
    /// <summary>
    /// Determines whether the two IBaseSlide instances are equal.
    /// Returning value is calculated based on slide's structure and static content.
    /// Two slides are equal if all shapes, styles, texts, animation and other settings. etc. are equal. The comparison doesn't take into account unique identifier values, e.g. SlideId and dynamic content, e.g. current date value in Date Placeholder.
    /// </summary>
    /// <param name="slide">The IBaseSlide to compare with the current IBaseSlide.</param>
    /// <returns>
    /// <b>true</b> if the specified IBaseSlide is equal to the current IBaseSlide; 
    /// otherwise, <b>false</b>.
    /// </returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool Equals(System::SharedPtr<IBaseSlide> slide) = 0;
    /// <summary>
    /// Returns the shape at the specified index.
    /// Read-only <see cref="Aspose::Slides::IShape"></see>
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IShape> get_Shape(int32_t index) = 0;
    /// <summary>
    /// Returns the ActiveX control at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IControl> get_Control(int32_t index) = 0;
    
};

} // namespace Slides
} // namespace Aspose


