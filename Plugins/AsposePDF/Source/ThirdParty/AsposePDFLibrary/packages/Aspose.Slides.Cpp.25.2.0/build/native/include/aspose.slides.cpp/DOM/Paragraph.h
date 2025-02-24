#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <DOM/IParagraph.h>
#include <cstdint>

#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Animation
{
class Sequence;
} // namespace Animation
class AutoShape;
class AutoShapeLayout;
template <typename, typename> class BasePortionFormatEffectiveData;
class BulletFormatEffectiveData;
class BulletFormatImpl;
namespace Drawing
{
class SVGCanvas;
} // namespace Drawing
class EffectFormatEffectiveData;
class FontsManager;
namespace HtmlIO
{
class HtmlToPptxTextConverter;
class PptxToHtmlConverter;
} // namespace HtmlIO
class Hyperlink;
class HyperlinkManager;
class IBaseSlide;
class IHyperlink;
class IParagraphFormat;
class IPortion;
class IPortionCollection;
class IPortionFormat;
class IPresentation;
class IPresentationComponent;
class ISlideComponent;
namespace Layout
{
class ParagraphLayout;
class PortionLayout;
} // namespace Layout
class LayoutTemplates;
namespace OdpSerialization
{
namespace PartParser
{
namespace Animation
{
class AnimBehaviorTargetOdpDeserialization;
} // namespace Animation
class ParagraphOdpSerialization;
class TextFrameOdpDeserialization;
class TextFrameOdpSerialization;
} // namespace PartParser
} // namespace OdpSerialization
class ParagraphAsIParagraphData;
class ParagraphCollection;
class ParagraphFormat;
class ParagraphFormatEffectiveData;
class Portion;
class PortionCollection;
class PortionFormat;
class PortionFormatEffectiveData;
namespace PptSerialization
{
class TextFramePPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class AnimationTimeLinePPTXSerialization;
class DrsShapePartParser;
class ParagraphCollectionPPTXSerialization;
class SequencePPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
class StyleColorGetter;
class Table;
class TextFrame;
class TextLayout;
namespace TextLayoutParts
{
class CharIterator_PPT;
class ParagraphEffective;
} // namespace TextLayoutParts
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class RectangleF;
} // namespace Drawing
class String;
class Uri;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a paragraph of text.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Paragraph final : public Aspose::Slides::IParagraph, public Aspose::Slides::IDOMObject
{
    typedef Paragraph ThisType;
    typedef Aspose::Slides::IParagraph BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::ParagraphAsIParagraphData;
    friend class Aspose::Slides::AutoShapeLayout;
    template<typename FT0, typename FT1> friend class Aspose::Slides::BasePortionFormatEffectiveData;
    friend class Aspose::Slides::BulletFormatEffectiveData;
    friend class Aspose::Slides::EffectFormatEffectiveData;
    friend class Aspose::Slides::Portion;
    friend class Aspose::Slides::ParagraphFormatEffectiveData;
    friend class Aspose::Slides::PortionFormatEffectiveData;
    friend class Aspose::Slides::Layout::ParagraphLayout;
    friend class Aspose::Slides::Layout::PortionLayout;
    friend class Aspose::Slides::BulletFormatImpl;
    friend class Aspose::Slides::HtmlIO::HtmlToPptxTextConverter;
    friend class Aspose::Slides::HtmlIO::PptxToHtmlConverter;
    friend class Aspose::Slides::TextLayoutParts::ParagraphEffective;
    friend class Aspose::Slides::TextLayoutParts::CharIterator_PPT;
    friend class Aspose::Slides::TextLayout;
    friend class Aspose::Slides::StyleColorGetter;
    friend class Aspose::Slides::FontsManager;
    friend class Aspose::Slides::Table;
    friend class Aspose::Slides::Drawing::SVGCanvas;
    friend class Aspose::Slides::OdpSerialization::PartParser::Animation::AnimBehaviorTargetOdpDeserialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::DrsShapePartParser;
    friend class Aspose::Slides::OdpSerialization::PartParser::ParagraphOdpSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::TextFrameOdpDeserialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::TextFrameOdpSerialization;
    friend class Aspose::Slides::Animation::Sequence;
    friend class Aspose::Slides::AutoShape;
    friend class Aspose::Slides::ParagraphCollection;
    friend class Aspose::Slides::PortionCollection;
    friend class Aspose::Slides::TextFrame;
    friend class Aspose::Slides::PptxSerialization::PartParser::ParagraphCollectionPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::AnimationTimeLinePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::SequencePPTXSerialization;
    friend class Aspose::Slides::PptSerialization::TextFramePPTSerialization;
    friend class Aspose::Slides::LayoutTemplates;
    friend class Aspose::Slides::HyperlinkManager;
    /// @endcond
    
public:

    /// <summary>
    /// Returns the collection of a text portions.
    /// Read-only <see cref="Aspose::Slides::IPortionCollection">IPortionCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPortionCollection> get_Portions() override;
    /// <summary>
    /// Returns the formatting object for this paragraph.
    /// Read-only <see cref="Aspose::Slides::IParagraphFormat">IParagraphFormat</see>.
    /// </summary>
    /// <remarks><para>The formatting object contains the formatting parameters defined for the current paragraph only, inherited data is not applied.</para>
    /// <para>In order to get the effective values including inherited ones use the <see cref="ParagraphFormat::GetEffective"></see> method.</para>
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IParagraphFormat> get_ParagraphFormat() override;
    /// <summary>
    /// Gets the the plain text of a paragraph.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    /// <value>
    /// The text.
    /// </value>
    ASPOSE_SLIDES_SHARED_API System::String get_Text() override;
    /// <summary>
    /// Sets the the plain text of a paragraph.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    /// <value>
    /// The text.
    /// </value>
    ASPOSE_SLIDES_SHARED_API void set_Text(System::String value) override;
    /// <summary>
    /// Specifies the portion properties that are to be used if another portion is inserted after 
    /// the last one.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPortionFormat> get_EndParagraphPortionFormat() override;
    /// <summary>
    /// Specifies the portion properties that are to be used if another portion is inserted after 
    /// the last one.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_EndParagraphPortionFormat(System::SharedPtr<IPortionFormat> value) override;
    
    /// <summary>
    /// Initializes a new instance of the Paragraph class with default properties.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Paragraph();
    /// <summary>
    /// Copy constructor that initializes a new instance of a Paragraph class.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Paragraph(System::SharedPtr<Paragraph> para);
    
    /// <summary>
    /// Joins runs with same formatting.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void JoinPortionsWithSameFormatting() override;
    /// <summary>
    /// Get coordinates of rect that bounds paragraph. The rect includes all the lines of
    /// text in paragraph, including empty ones.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::Drawing::RectangleF GetRect() override;
    /// <summary>
    /// Get number of lines in a paragraph.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    /// 
    /// System::SharedPtr<ISlide> sld = pres->get_Slide(0);
    /// System::SharedPtr<IAutoShape> ashp = sld->get_Shapes()->AddAutoShape(ShapeType::Rectangle, 150.0f, 75.0f, 150.0f, 50.0f);
    /// System::SharedPtr<IParagraph> para = ashp->get_TextFrame()->get_Paragraph(0);
    /// System::SharedPtr<IPortion> portion = para->get_Portion(0);
    /// portion->set_Text(u"Aspose Paragraph GetLinesCount() Example");
    /// System::Console::WriteLine(u"Lines Count = {0}", para->GetLinesCount());
    /// </code>
    /// </example>
    /// <returns>Lines count in a paragraph</returns>
    ASPOSE_SLIDES_SHARED_API int32_t GetLinesCount() override;
    /// <summary>
    /// Returns a text portion at the specified index.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPortion> get_Portion(int32_t index) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::ParagraphFormat> get_ParagraphFormatInternal();
    ASPOSE_SLIDES_LOCAL_API System::String get_TextInternal();
    ASPOSE_SLIDES_LOCAL_API bool get_SoftParagraph();
    ASPOSE_SLIDES_LOCAL_API void set_SoftParagraph(bool value);
    
    System::SharedPtr<Layout::ParagraphLayout> Layout;
    
    ASPOSE_SLIDES_LOCAL_API bool get_MetroBlobRequired();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ParagraphCollection> get_ParentParagraphCollection();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPresentationComponent> get_Parent_IPresentationComponent();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ISlideComponent> get_Parent_ISlideComponent();
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPortionFormat> GetEndParagraphRunPropertiesRawRef();
    
    ASPOSE_SLIDES_LOCAL_API Paragraph(System::SharedPtr<Aspose::Slides::ParagraphFormat> paraFormat);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Paragraph, CODEPORTING_ARGS(System::SharedPtr<Aspose::Slides::ParagraphFormat> paraFormat));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API Paragraph(System::SharedPtr<ParagraphFormatEffectiveData> paraFormat);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Paragraph, CODEPORTING_ARGS(System::SharedPtr<ParagraphFormatEffectiveData> paraFormat));
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<Paragraph> source);
    ASPOSE_SLIDES_LOCAL_API void CopyFormattingFrom(System::SharedPtr<Paragraph> source);
    ASPOSE_SLIDES_LOCAL_API void ParagraphChanged();
    ASPOSE_SLIDES_LOCAL_API void PortionChanged(System::SharedPtr<IPortionFormat> props);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Paragraph> CreateCombinedWith(System::SharedPtr<IParagraphFormat> props);
    ASPOSE_SLIDES_LOCAL_API int32_t GetParagraphIndex();
    ASPOSE_SLIDES_LOCAL_API void CorrectHyperlinkedText();
    ASPOSE_SLIDES_LOCAL_API void EnsureBelongsToTextFrame();
    ASPOSE_SLIDES_LOCAL_API void SetParent(System::SharedPtr<ParagraphCollection> parentImmediate);
    ASPOSE_SLIDES_LOCAL_API void ClearEffective();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~Paragraph();
    
private:

    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    /// <summary>
    /// Returns the parent slide of a paragraph.
    /// Read-only <see cref="Aspose::Slides::BaseSlide">BaseSlide</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBaseSlide> get_Slide() override;
    /// <summary>
    /// Returns the parent presentation of a paragraph.
    /// Read-only <see cref="Aspose::Slides::IPresentation">IPresentation</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentation> get_Presentation() override;
    
    System::SharedPtr<Aspose::Slides::ParagraphFormat> m_paragraphFormat;
    System::SharedPtr<PortionFormat> m_endParagraphRunProperties;
    bool m_softParagraph;
    System::WeakPtr<ParagraphCollection> m_parentImmediate;
    System::SharedPtr<PortionCollection> m_portions;
    System::WeakPtr<IPresentationComponent> m_parentIPresentationComponent;
    System::WeakPtr<ISlideComponent> m_parentISlideComponent;
    System::SharedPtr<Portion> m_endParagraphRunPropertiesParentPortion;
    
    ASPOSE_SLIDES_LOCAL_API void NotifyParent();
    ASPOSE_SLIDES_LOCAL_API void ReplaceHyperlinkText(int32_t startPortionIndex, int32_t lastPortionIndex, System::SharedPtr<System::Uri> uri, System::SharedPtr<Hyperlink> hyperlink);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IHyperlink> GetHyperlinkForPortionsRange(int32_t startPortionIndex, int32_t lastPortionIndex);
    ASPOSE_SLIDES_LOCAL_API void GetNextHyperlink(int32_t portionIndex, int32_t& startPortionIndex, int32_t& lastPortionIndex, System::SharedPtr<System::Uri>& uri);
    ASPOSE_SLIDES_LOCAL_API void SetupEndParagraphRunPropertiesParent();
    
};

} // namespace Slides
} // namespace Aspose


