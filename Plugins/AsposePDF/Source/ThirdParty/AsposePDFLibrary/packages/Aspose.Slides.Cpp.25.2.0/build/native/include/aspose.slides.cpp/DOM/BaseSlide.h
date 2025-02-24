#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/array.h>
#include <DOM/IBaseSlide.h>
#include <cstdint>

#include "DOM/IStyleColorOwner.h"
#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Animation
{
class AnimationTimeLine;
class Sequence;
class TextAnimation;
} // namespace Animation
class AutoShapeLayout;
class Background;
class BackgroundEffectiveData;
class BaseHeaderFooterManager;
class BaseSlideHeaderFooterManager;
namespace Charts
{
class Chart;
class RenderingHelper;
} // namespace Charts
class ColorEffectiveData;
class ColorFormat;
class ColorFormatImpl;
class ControlCollection;
class CustomData;
namespace Effects
{
class Glow;
} // namespace Effects
namespace Export
{
class PptxExporter;
} // namespace Export
class GlobalLayoutSlideCollection;
class GroupShape;
class HandoutSlideView;
class HandoutsView;
class HyperlinkQueries;
class IAnimationTimeLine;
class IBackground;
class IControl;
class IControlCollection;
class ICustomData;
class IHyperlinkQueries;
class IPlaceholder;
class IPresentation;
class IPresentationComponent;
class IShape;
class IShapeCollection;
class ISlideShowTransition;
class ITextStyle;
class LayoutPlaceholderManager;
class LayoutSlide;
class LayoutTemplatesContext;
class MasterHandoutSlide;
class MasterHandoutSlideManager;
class MasterNotesSlide;
class MasterNotesSlideHeaderFooterManager;
class MasterNotesSlideManager;
class MasterSlide;
class MasterSlideCollection;
class MasterSlideTemplate;
class NotesSlide;
class NotesSlideManager;
class NotesTemplate;
namespace OdpSerialization
{
class OdpStylesDeserializationCurrentSlideInfo;
namespace PartParser
{
namespace Animation
{
class AnimParGroupOdpDeserialization;
} // namespace Animation
class OdpStylesPartParser;
class PortionOdpSerialization;
} // namespace PartParser
} // namespace OdpSerialization
class PictureFrame;
class PlaceholderCollection;
enum class PlaceholderType : int8_t;
namespace PptSerialization
{
class BackgroundPPTSerialization;
class BaseSlidePPTSerialization;
class LayoutSlidePPTSerialization;
class PlaceholderCollectionPPTSerialization;
class PlaceholderPPTSerialization;
class PptDeserializator;
class PptGroupShapeDeserializationContext;
class PptGroupShapeSerializationContext;
class PptSerializationContext;
class PptSerializator;
class PptSlideDeserializationContext;
class PptTextFrameDeserializationContext;
class TimeNodeAnimateBehaviorPPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class BackgroundPPTXSerialization;
class BaseSlidePartParser;
class BaseSlidePPTXSerialization;
class MediaSequencePptxSerialization;
class ModernCommentListPartParser;
class SequencePPTXSerialization;
} // namespace PartParser
class PptxCloner;
class PptxDeserializator;
class SlidePptxSerializationContext;
} // namespace PptxSerialization
class Presentation;
class PresentationHeaderFooterManager;
class PresentationTemplate;
enum class SchemeColor;
class Shape;
class ShapeCollection;
class ShapeFrame;
class Slide;
class SlideCollection;
namespace SlideShow
{
class SlideShowTransition;
} // namespace SlideShow
class SlideTemplateCreator;
namespace SmartArt
{
class SmartArt;
} // namespace SmartArt
class Table;
class TextFrame;
class TextFrameFormat;
class TextLayout;
class TextParam;
class TextStyleEffectiveData;
namespace Theme
{
class IThemeEffectiveData;
class IThemeManager;
class ThemeEffectiveData;
} // namespace Theme
namespace ThmxSerialization
{
class ThmxDeserializator;
} // namespace ThmxSerialization
namespace UnsupportedProps
{
namespace PPTUnsupportedProps
{
class BaseSlidePPTUnsupportedProps;
} // namespace PPTUnsupportedProps
namespace PPTXUnsupportedProps
{
class BaseSlidePPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
class VideoFrame;
namespace View
{
class BaseSlideView;
class NotesSlideView;
class SlideView;
} // namespace View
class ZoomObject;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class List;
} // namespace Generic
} // namespace Collections
class Random;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents common data for all slide types.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS BaseSlide : public virtual Aspose::Slides::IBaseSlide, public Aspose::Slides::IDOMObject, public Aspose::Slides::IStyleColorOwner
{
    typedef BaseSlide ThisType;
    typedef Aspose::Slides::IBaseSlide BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    typedef Aspose::Slides::IStyleColorOwner BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    
    /// @cond
    friend class System::ObjectExt;
    friend class Aspose::Slides::HandoutSlideView;
    friend class Aspose::Slides::HandoutsView;
    friend class Aspose::Slides::LayoutPlaceholderManager;
    friend class Aspose::Slides::ZoomObject;
    friend class Aspose::Slides::AutoShapeLayout;
    friend class Aspose::Slides::BackgroundEffectiveData;
    friend class Aspose::Slides::BaseSlideHeaderFooterManager;
    friend class Aspose::Slides::BaseHeaderFooterManager;
    friend class Aspose::Slides::Shape;
    friend class Aspose::Slides::View::NotesSlideView;
    friend class Aspose::Slides::View::SlideView;
    friend class Aspose::Slides::PptxSerialization::PartParser::ModernCommentListPartParser;
    friend class Aspose::Slides::ColorFormatImpl;
    friend class Aspose::Slides::MasterNotesSlideHeaderFooterManager;
    friend class Aspose::Slides::PresentationHeaderFooterManager;
    friend class Aspose::Slides::TextFrameFormat;
    friend class Aspose::Slides::TextStyleEffectiveData;
    friend class Aspose::Slides::Theme::ThemeEffectiveData;
    friend class Aspose::Slides::Charts::Chart;
    friend class Aspose::Slides::NotesSlideManager;
    friend class Aspose::Slides::ColorEffectiveData;
    friend class Aspose::Slides::TextLayout;
    friend class Aspose::Slides::GlobalLayoutSlideCollection;
    friend class Aspose::Slides::Table;
    friend class Aspose::Slides::LayoutTemplatesContext;
    friend class Aspose::Slides::TextParam;
    friend class Aspose::Slides::Effects::Glow;
    friend class Aspose::Slides::Export::PptxExporter;
    friend class Aspose::Slides::OdpSerialization::OdpStylesDeserializationCurrentSlideInfo;
    friend class Aspose::Slides::OdpSerialization::PartParser::Animation::AnimParGroupOdpDeserialization;
    friend class Aspose::Slides::PptSerialization::PptGroupShapeDeserializationContext;
    friend class Aspose::Slides::PptSerialization::PptGroupShapeSerializationContext;
    friend class Aspose::Slides::PptSerialization::PptSlideDeserializationContext;
    friend class Aspose::Slides::PptSerialization::PptTextFrameDeserializationContext;
    friend class Aspose::Slides::PptxSerialization::PartParser::MediaSequencePptxSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::PortionOdpSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::OdpStylesPartParser;
    friend class Aspose::Slides::PptSerialization::TimeNodeAnimateBehaviorPPTSerialization;
    friend class Aspose::Slides::ThmxSerialization::ThmxDeserializator;
    friend class Aspose::Slides::Animation::Sequence;
    friend class Aspose::Slides::Animation::TextAnimation;
    friend class Aspose::Slides::PictureFrame;
    friend class Aspose::Slides::LayoutSlide;
    friend class Aspose::Slides::MasterHandoutSlide;
    friend class Aspose::Slides::MasterNotesSlide;
    friend class Aspose::Slides::MasterSlide;
    friend class Aspose::Slides::MasterSlideCollection;
    friend class Aspose::Slides::NotesSlide;
    friend class Aspose::Slides::PlaceholderCollection;
    friend class Aspose::Slides::Presentation;
    friend class Aspose::Slides::ShapeCollection;
    friend class Aspose::Slides::Slide;
    friend class Aspose::Slides::SlideCollection;
    friend class Aspose::Slides::SmartArt::SmartArt;
    friend class Aspose::Slides::TextFrame;
    friend class Aspose::Slides::VideoFrame;
    friend class Aspose::Slides::Charts::RenderingHelper;
    friend class Aspose::Slides::PptSerialization::PptSerializationContext;
    friend class Aspose::Slides::UnsupportedProps::PPTUnsupportedProps::BaseSlidePPTUnsupportedProps;
    friend class Aspose::Slides::PptSerialization::PptDeserializator;
    friend class Aspose::Slides::PptSerialization::PptSerializator;
    friend class Aspose::Slides::PptxSerialization::PartParser::BaseSlidePartParser;
    friend class Aspose::Slides::PptxSerialization::PartParser::BackgroundPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::BaseSlidePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::SequencePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PptxCloner;
    friend class Aspose::Slides::PptxSerialization::PptxDeserializator;
    friend class Aspose::Slides::PptxSerialization::SlidePptxSerializationContext;
    friend class Aspose::Slides::PptSerialization::BackgroundPPTSerialization;
    friend class Aspose::Slides::PptSerialization::BaseSlidePPTSerialization;
    friend class Aspose::Slides::PptSerialization::LayoutSlidePPTSerialization;
    friend class Aspose::Slides::PptSerialization::PlaceholderPPTSerialization;
    friend class Aspose::Slides::PptSerialization::PlaceholderCollectionPPTSerialization;
    friend class Aspose::Slides::MasterHandoutSlideManager;
    friend class Aspose::Slides::MasterNotesSlideManager;
    friend class Aspose::Slides::NotesTemplate;
    friend class Aspose::Slides::PresentationTemplate;
    friend class Aspose::Slides::MasterSlideTemplate;
    friend class Aspose::Slides::SlideTemplateCreator;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the shapes of a slide.
    /// Read-only <see cref="Aspose::Slides::IShapeCollection">IShapeCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IShapeCollection> get_Shapes() override;
    /// <summary>
    /// Returns the collection of ActiveX controls on a slide.
    /// Read-only <see cref="Aspose::Slides::IControlCollection">IControlCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IControlCollection> get_Controls() override;
    /// <summary>
    /// Returns the name of a slide.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_Name() override;
    /// <summary>
    /// Sets the name of a slide.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Name(System::String value) override;
    /// <summary>
    /// Returns the ID of a slide.
    /// Read-only <see cref="uint32_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API uint32_t get_SlideId() override;
    /// <summary>
    /// Returns the slide's custom data.
    /// Read-only <see cref="Aspose::Slides::ICustomData">ICustomData</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ICustomData> get_CustomData() override;
    /// <summary>
    /// Returns animation timeline object.
    /// Read-only <see cref="Aspose::Slides::IAnimationTimeLine">IAnimationTimeLine</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IAnimationTimeLine> get_Timeline() override;
    /// <summary>
    /// Returns the Transition object which contains information about
    /// how the specified slide advances during a slide show.
    /// Read-only <see cref="Aspose::Slides::ISlideShowTransition">ISlideShowTransition</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ISlideShowTransition> get_SlideShowTransition() override;
    /// <summary>
    /// Returns slide's background.
    /// Read-only <see cref="Aspose::Slides::IBackground">IBackground</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBackground> get_Background() override;
    /// <summary>
    /// Provides easy access to contained hyperlinks.
    /// Read-only <see cref="Aspose::Slides::IHyperlinkQueries">IHyperlinkQueries</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IHyperlinkQueries> get_HyperlinkQueries() override;
    /// <summary>
    /// Specifies if shapes on the master slide should be shown on slides or not.
    /// For master slide itself this property always returns <c>false</c>.
    /// Read <see cref="bool"></see>.
    /// </summary>
    /// <exception cref="System::NotSupportedException">Thrown if set <c>true</c> for master slide.</exception>
    ASPOSE_SLIDES_SHARED_API bool get_ShowMasterShapes() override = 0;
    /// <summary>
    /// Specifies if shapes on the master slide should be shown on slides or not.
    /// For master slide itself this property always returns <c>false</c>.
    /// Write <see cref="bool"></see>.
    /// </summary>
    /// <exception cref="System::NotSupportedException">Thrown if set <c>true</c> for master slide.</exception>
    ASPOSE_SLIDES_SHARED_API void set_ShowMasterShapes(bool value) override = 0;
    /// <summary>
    /// Returns IPresentation interface.
    /// Read-only <see cref="Aspose::Slides::IPresentation">IPresentation</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentation> get_Presentation() override;
    
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
    /// <example>
    /// The following example shows how to compare two slides.
    /// <code>
    /// auto presentation1 = System::MakeObject<Presentation>(u"AccessSlides.pptx");
    /// auto presentation2 = System::MakeObject<Presentation>(u"HelloWorld.pptx");
    /// for (int32_t i = 0; i < presentation1->get_Masters()->get_Count(); i++)
    /// {
    ///     auto master1 = presentation1->get_Masters()->idx_get(i);
    ///     for (int32_t j = 0; j < presentation2->get_Masters()->get_Count(); j++)
    ///     {
    ///         auto master2 = presentation2->get_Masters()->idx_get(j);
    ///         if (System::ObjectExt::Equals(master1, master2))
    ///         {
    ///             System::Console::WriteLine(System::String::Format(u"SomePresentation1 MasterSlide#{0} is equal to SomePresentation2 MasterSlide#{1}", i, j));
    ///         }
    ///     }
    /// }
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API bool Equals(System::SharedPtr<IBaseSlide> slide) override;
    /// <summary>
    /// Joins runs with same formatting in all paragraphs all acceptable shapes.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void JoinPortionsWithSameFormatting() override;
    /// <summary>
    /// Joins runs with same formatting in all paragraphs in all acceptable shapes.
    /// </summary>
    virtual ASPOSE_SLIDES_SHARED_API void JoinPortionsWithSameFormatting(System::SharedPtr<IShapeCollection> collection);
    /// <summary>
    /// Returns an effective theme for this slide.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Theme::IThemeEffectiveData> CreateThemeEffective() override;
    /// <summary>
    /// Finds first occurrence of a shape with the specified alternative text.
    /// </summary>
    /// <param name="altText">Alternative text.</param>
    /// <returns>Shape object or null.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IShape> FindShapeByAltText(System::String altText) override;
    /// <summary>
    /// Returns the shape at the specified index.
    /// Read-only <see cref="Aspose::Slides::IShape"></see>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IShape> get_Shape(int32_t index) override;
    /// <summary>
    /// Returns the ActiveX control at the specified index.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IControl> get_Control(int32_t index) override;
    
protected:

    /// @cond
    System::SharedPtr<Aspose::Slides::SlideShow::SlideShowTransition> m_slideShowTransition;
    static const ASPOSE_SLIDES_LOCAL_API float SCALING_MIN_COEF;
    System::SharedPtr<PlaceholderCollection> m_pholders;
    System::SharedPtr<GroupShape> m_shapesRoot;
    
    ASPOSE_SLIDES_LOCAL_API uint32_t get_CreationId() const;
    ASPOSE_SLIDES_LOCAL_API void set_CreationId(uint32_t value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<View::BaseSlideView> get_BaseView() const;
    virtual ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTXUnsupportedProps::BaseSlidePPTXUnsupportedProps> get_BaseSlidePPTXUnsupportedProps() = 0;
    virtual ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::UnsupportedProps::PPTUnsupportedProps::BaseSlidePPTUnsupportedProps> get_BaseSlidePPTUnsupportedProps() = 0;
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Random> get_Rnd();
    ASPOSE_SLIDES_LOCAL_API uint64_t get_SlideInternalId();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Theme::IThemeManager> get_ThemeManagerInternal();
    ASPOSE_SLIDES_LOCAL_API uint32_t get_NextShapeId();
    
    static ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<System::SharedPtr<BaseSlide>> emptySlides;
    
    virtual ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<IBaseSlide>> get_BaseSlides();
    
    static ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<System::SharedPtr<Shape>> emptyShapes;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPresentationComponent> get_Parent_IPresentationComponent();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Presentation> get_PresentationInternal();
    
    ASPOSE_SLIDES_LOCAL_API BaseSlide(System::SharedPtr<IDOMObject> parentImmediate);
    
    ASPOSE_SLIDES_LOCAL_API void OnConstruct(System::SharedPtr<View::BaseSlideView> view);
    ASPOSE_SLIDES_LOCAL_API void UpdateNextVmlSpId(System::String spid);
    ASPOSE_SLIDES_LOCAL_API System::String GenerateSpId();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ColorFormat> GetSchemeColor(SchemeColor color);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Shape>>> GetAllShapes();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Shape> FindShapeByPlaceholderType(PlaceholderType placeholderType);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Shape> FindShapeByPlaceholderIndex(uint32_t index);
    ASPOSE_SLIDES_LOCAL_API void ApplyDefaultTextStyle(System::SharedPtr<ITextStyle> style);
    ASPOSE_SLIDES_LOCAL_API void PptxAfterInit();
    ASPOSE_SLIDES_LOCAL_API uint32_t CreateShapeId();
    ASPOSE_SLIDES_LOCAL_API void UpdateNextShapeId(uint32_t newNextId, bool check);
    ASPOSE_SLIDES_LOCAL_API int32_t GetNextEffectTimelineId();
    virtual ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::SharedPtr<Shape>> GetPlaceholders(System::SharedPtr<IPlaceholder> placeholder);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ShapeFrame> GetEntireSlideFrame();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<MasterSlide> GetMasterSlideInternal();
    static ASPOSE_SLIDES_LOCAL_API bool CheckScaleCoefficient(float scalingCoef);
    static ASPOSE_SLIDES_LOCAL_API bool CheckScaleCoefficients(float scalingCoefX, float scalingCoefY);
    ASPOSE_SLIDES_LOCAL_API void ScaleGeometry(float scalingCoefX, float scalingCoefY);
    virtual ASPOSE_SLIDES_SHARED_API void ScaleGeometry(float scalingCoefX, float scalingCoefY, float scalingContentCoef);
    virtual ASPOSE_SLIDES_SHARED_API void LocateGeometry(float locatingCoefX, float locatingCoefY);
    ASPOSE_SLIDES_LOCAL_API void SetParent(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~BaseSlide();
    
private:

    System::WeakPtr<IDOMObject> m_parentImmediate;
    System::WeakPtr<IPresentationComponent> m_parentIPresentationComponent;
    uint32_t m_nextShapeId;
    uint32_t m_nextVmlSpId;
    int32_t m_effectTimelineId;
    System::String m_name;
    System::SharedPtr<Aspose::Slides::Background> m_background;
    System::SharedPtr<Aspose::Slides::CustomData> m_customData;
    System::SharedPtr<ControlCollection> m_controls;
    System::SharedPtr<Animation::AnimationTimeLine> m_animTimeline;
    uint64_t m_internalId;
    System::SharedPtr<Aspose::Slides::HyperlinkQueries> m_hyperlinkQueries;
    System::SharedPtr<System::Random> m_rnd;
    uint32_t pr_CreationId;
    System::SharedPtr<View::BaseSlideView> pr_BaseView;
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void set_BaseView(System::SharedPtr<View::BaseSlideView> value);
    /// @endcond
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBaseSlide> get_Slide() override;
    
    ASPOSE_SLIDES_LOCAL_API System::String GetHashCode_(bool unique);
    ASPOSE_SLIDES_LOCAL_API void GetAllShapes(System::SharedPtr<IShapeCollection> shapes, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Shape>>> shapeList);
    ASPOSE_SLIDES_LOCAL_API System::String PrepareXmlForHash(System::String slideXmlContent, bool removeUnimportantElements);
    
    static ASPOSE_SLIDES_LOCAL_API struct __StaticConstructor__ { ASPOSE_SLIDES_LOCAL_API __StaticConstructor__(); } s_constructor__;
    
};

} // namespace Slides
} // namespace Aspose


