#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <DOM/IPortion.h>
#include <cstdint>

#include "DOM/IDOMObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class AutoShape;
class BaseHeaderFooterManager;
template <typename, typename> class BasePortionFormatEffectiveData;
class BulletFormat;
class BulletFormatEffectiveData;
class BulletFormatImpl;
namespace Charts
{
class DataLabelRenderContext;
} // namespace Charts
namespace Drawing
{
class SVGCanvas;
} // namespace Drawing
class EffectFormatEffectiveData;
namespace Export
{
class DrawingMLExporter;
class ExportNotesSlides;
} // namespace Export
class Field;
class FillFormatEffectiveData;
namespace HtmlIO
{
class HtmlToPptxTextConverter;
class PptxToHtmlConverter;
} // namespace HtmlIO
class Hyperlink;
class HyperlinkQueries;
class IBaseSlide;
class IField;
class IFieldType;
class IPortionFormat;
class IPresentation;
class IPresentationComponent;
class ISlideComponent;
namespace Layout
{
namespace Interfaces
{
class IPortionLayout;
} // namespace Interfaces
namespace MathMixed
{
class BulletBlock;
class MathBlocksSplitter;
} // namespace MathMixed
class PortionLayout;
} // namespace Layout
class LayoutPlaceholderManager;
class LayoutTemplates;
class LayoutTemplatesContext;
class MasterSlideTemplate;
class NotesTemplate;
namespace OdpSerialization
{
namespace PartParser
{
class BulletFormatOdpDeserialization;
class ParagraphOdpDeserialization;
class ParagraphOdpSerialization;
class PortionOdpDeserialization;
class PortionOdpSerialization;
class SlideOdpDeserialization;
} // namespace PartParser
} // namespace OdpSerialization
class Paragraph;
class ParagraphCollection;
class ParagraphFormatEffectiveData;
class PortionAsIPortionData;
class PortionCollection;
class PortionFormat;
class PortionFormatEffectiveData;
namespace PptSerialization
{
class GroupShapeMetroBlobSerialization;
class TextFramePPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class DrsShapePartParser;
class ParagraphCollectionPPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
class PresentationHeaderFooterManager;
namespace SmartArt
{
class DiagramPoint;
} // namespace SmartArt
class StyleColorGetter;
class Table;
class TextFrame;
class TextLayout;
namespace TextLayoutParts
{
class ParagraphEffective;
} // namespace TextLayoutParts
namespace Util
{
class PresentationInfoProc;
} // namespace Util
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class PointF;
class RectangleF;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a portion of text inside a text paragraph.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS Portion : public Aspose::Slides::IPortion, public Aspose::Slides::IDOMObject
{
    typedef Portion ThisType;
    typedef Aspose::Slides::IPortion BaseType;
    typedef Aspose::Slides::IDOMObject BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::LayoutPlaceholderManager;
    friend class Aspose::Slides::PortionAsIPortionData;
    friend class Aspose::Slides::Layout::MathMixed::BulletBlock;
    friend class Aspose::Slides::Layout::MathMixed::MathBlocksSplitter;
    friend class Aspose::Slides::BaseHeaderFooterManager;
    template<typename FT0, typename FT1> friend class Aspose::Slides::BasePortionFormatEffectiveData;
    friend class Aspose::Slides::BulletFormatEffectiveData;
    friend class Aspose::Slides::EffectFormatEffectiveData;
    friend class Aspose::Slides::FillFormatEffectiveData;
    friend class Aspose::Slides::ParagraphFormatEffectiveData;
    friend class Aspose::Slides::PortionFormatEffectiveData;
    friend class Aspose::Slides::Layout::PortionLayout;
    friend class Aspose::Slides::BulletFormatImpl;
    friend class Aspose::Slides::PresentationHeaderFooterManager;
    friend class Aspose::Slides::HtmlIO::HtmlToPptxTextConverter;
    friend class Aspose::Slides::HtmlIO::PptxToHtmlConverter;
    friend class Aspose::Slides::TextLayoutParts::ParagraphEffective;
    friend class Aspose::Slides::TextLayout;
    friend class Aspose::Slides::StyleColorGetter;
    friend class Aspose::Slides::Table;
    friend class Aspose::Slides::LayoutTemplatesContext;
    friend class Aspose::Slides::Drawing::SVGCanvas;
    friend class Aspose::Slides::Export::DrawingMLExporter;
    friend class Aspose::Slides::Export::ExportNotesSlides;
    friend class Aspose::Slides::HyperlinkQueries;
    friend class Aspose::Slides::PptxSerialization::PartParser::DrsShapePartParser;
    friend class Aspose::Slides::OdpSerialization::PartParser::BulletFormatOdpDeserialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::PortionOdpSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::ParagraphOdpSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::ParagraphOdpDeserialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::PortionOdpDeserialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::SlideOdpDeserialization;
    friend class Aspose::Slides::PptSerialization::GroupShapeMetroBlobSerialization;
    friend class Aspose::Slides::Util::PresentationInfoProc;
    friend class Aspose::Slides::AutoShape;
    friend class Aspose::Slides::Hyperlink;
    friend class Aspose::Slides::Paragraph;
    friend class Aspose::Slides::ParagraphCollection;
    friend class Aspose::Slides::PortionCollection;
    friend class Aspose::Slides::TextFrame;
    friend class Aspose::Slides::Charts::DataLabelRenderContext;
    friend class Aspose::Slides::PptxSerialization::PartParser::ParagraphCollectionPPTXSerialization;
    friend class Aspose::Slides::BulletFormat;
    friend class Aspose::Slides::PptSerialization::TextFramePPTSerialization;
    friend class Aspose::Slides::PptSerialization::TextFramePPTSerialization;
    friend class Aspose::Slides::SmartArt::DiagramPoint;
    friend class Aspose::Slides::NotesTemplate;
    friend class Aspose::Slides::MasterSlideTemplate;
    friend class Aspose::Slides::LayoutTemplates;
    /// @endcond
    
public:

    /// <summary>
    /// Returns oformatting bject which contains explicitly set formatting properties of the text portion with no inheritance applied.
    /// Read-only <see cref="Aspose::Slides::IPortionFormat">IPortionFormat</see>.
    /// </summary>
    /// <remarks><para>The formatting object contains the formatting parameters defined for the current portion only, inherited data is not applied.</para>
    /// <para>In order to get the effective values including inherited ones use the <see cref="PortionFormat::GetEffective"></see> method.</para>
    /// </remarks>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPortionFormat> get_PortionFormat() override;
    /// <summary>
    /// Gets the plain text of a portion.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    /// <value>
    /// The text.
    /// </value>
    ASPOSE_SLIDES_SHARED_API System::String get_Text() override;
    /// <summary>
    /// Sets the plain text of a portion.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    /// <value>
    /// The text.
    /// </value>
    ASPOSE_SLIDES_SHARED_API void set_Text(System::String value) override;
    /// <summary>
    /// Returns a field of this portion.
    /// Read-only <see cref="Aspose::Slides::IField">IField</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IField> get_Field() override;
    
    /// <summary>
    /// Initializes a new instance of the Portion class.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Portion();
    /// <summary>
    /// Initializes a new instance of the Portion class.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Portion(System::String str);
    /// <summary>
    /// Initializes a new instance of the Portion class.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Portion(System::SharedPtr<Portion> portion);
    
    /// <summary>
    /// Converts this portion to the automaticaly updated field.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void AddField(System::SharedPtr<IFieldType> fieldType) override;
    /// <summary>
    /// Converts this portion to the automaticaly updated field.
    /// </summary>
    /// <param name="internalString">
    /// Internal name of FieldType.
    /// </param>
    ASPOSE_SLIDES_SHARED_API void AddField(System::String internalString) override;
    /// <summary>
    /// Converts this field portion to the simple portion.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void RemoveField() override;
    /// <summary>
    /// Get coordinates of rect that bounds portion. The rect includes all the lines of
    /// text in portion, including empty ones.
    /// </summary>
    /// <example>Example:
    /// <code>
    /// auto pres = System::MakeObject<Presentation>();
    /// auto slide = pres->get_Slides()->idx_get(0);
    /// auto shape = slide->get_Shapes()->AddAutoShape(Aspose::Slides::ShapeType::Rectangle, 50.0f, 50.0f, 200.0f, 50.0f);
    /// 
    /// shape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_Portions()->Clear();
    /// auto portion0 = System::MakeObject<Portion>(u"Some text");
    /// auto portion1 = System::MakeObject<Portion>(u"GetRect text");
    /// 
    /// shape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_Portions()->Add(portion0);
    /// shape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_Portions()->Add(portion1);
    /// 
    /// auto rect = shape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_Portions()->idx_get(1)->GetRect();
    /// // ...
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::Drawing::RectangleF GetRect() override;
    /// <summary>
    /// Get coordinates of the beginning of the portion. The X coordinate of point represents the 
    /// portion beginning from the first character including left side bearing. The Y coordinate 
    /// includes top side bearing.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::Drawing::PointF GetCoordinates() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::PortionFormat> get_PortionFormatInternal();
    ASPOSE_SLIDES_LOCAL_API bool get_IsField();
    ASPOSE_SLIDES_LOCAL_API System::String get_TextInternal();
    ASPOSE_SLIDES_LOCAL_API void set_TextInternal(System::String value);
    ASPOSE_SLIDES_LOCAL_API bool get_IsNonEmpty();
    ASPOSE_SLIDES_LOCAL_API bool get_MetroBlobRequired();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPresentationComponent> get_Parent_IPresentationComponent();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ISlideComponent> get_Parent_ISlideComponent();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Paragraph> get_ParentParagraph();
    
    System::SharedPtr<Layout::Interfaces::IPortionLayout> Layout;
    
    ASPOSE_SLIDES_LOCAL_API Portion(System::SharedPtr<Aspose::Slides::PortionFormat> portionProps);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Portion, CODEPORTING_ARGS(System::SharedPtr<Aspose::Slides::PortionFormat> portionProps));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API Portion(System::SharedPtr<Aspose::Slides::PortionFormat> portionProps, System::SharedPtr<PortionCollection> container);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Portion, CODEPORTING_ARGS(System::SharedPtr<Aspose::Slides::PortionFormat> portionProps, System::SharedPtr<PortionCollection> container));
    /// @cond
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Portion> CreateWithReferencedPortionFormat(System::SharedPtr<Aspose::Slides::PortionFormat> portionFormatRef);
    ASPOSE_SLIDES_LOCAL_API void CopyFormattingFrom(System::SharedPtr<Portion> source);
    ASPOSE_SLIDES_LOCAL_API System::String GetTextWithFields(int32_t slideNumber);
    ASPOSE_SLIDES_LOCAL_API bool TryGetTextWithFields(int32_t slideNumber, System::String& text);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Portion> CreateCombinedWith(System::SharedPtr<Aspose::Slides::PortionFormat> props);
    ASPOSE_SLIDES_LOCAL_API void TextInternalChanged();
    ASPOSE_SLIDES_LOCAL_API void SetParent(System::SharedPtr<PortionCollection> parentImmediate);
    ASPOSE_SLIDES_LOCAL_API void ClearFormatEffectiveDataCache();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~Portion();
    
private:

    /// <summary>
    /// Returns the parent slide of a text.
    /// Read-only <see cref="Aspose::Slides::BaseSlide">BaseSlide</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBaseSlide> get_Slide() override;
    /// <summary>
    /// Returns the parent presentation of a text.
    /// Read-only <see cref="Aspose::Slides::IPresentation">IPresentation</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentation> get_Presentation() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IDOMObject> get_Parent_Immediate() override;
    ASPOSE_SLIDES_LOCAL_API System::String get_TextInternalValue();
    ASPOSE_SLIDES_LOCAL_API void set_TextInternalValue(System::String value);
    
    System::String m_text;
    System::SharedPtr<Aspose::Slides::Field> m_field;
    System::SharedPtr<Aspose::Slides::PortionFormat> m_portionFormat;
    System::WeakPtr<PortionCollection> m_parentImmediate;
    System::WeakPtr<IPresentationComponent> m_parentIPresentationComponent;
    System::WeakPtr<ISlideComponent> m_parentISlideComponent;
    
};

} // namespace Slides
} // namespace Aspose


