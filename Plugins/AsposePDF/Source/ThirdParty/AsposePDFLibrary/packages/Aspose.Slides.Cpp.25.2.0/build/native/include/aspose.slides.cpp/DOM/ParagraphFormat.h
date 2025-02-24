#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/event.h>
#include <DOM/IParagraphFormat.h>
#include <DOM/Chart/IChartParagraphFormat.h>

#include "DOM/PVI/MemoryAwareness/PVIObject.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class AutoShape;
class BaseHeaderFooterManager;
class BulletFormat;
class BulletFormatEffectiveData;
class BulletFormatImpl;
class Cell;
namespace Charts
{
class ChartTextFormat;
} // namespace Charts
class Column;
namespace Drawing
{
class SVGCanvas;
} // namespace Drawing
class EffectFormatEffectiveData;
class Field;
enum class FontAlignment;
class FontsManager;
namespace HtmlIO
{
class HtmlToPptxTextConverter;
class TextPropertiesConverter;
} // namespace HtmlIO
class IBulletFormat;
class IDOMObject;
class IParagraphFormatEffectiveData;
class IPortionFormat;
class ITab;
class ITabCollection;
class LayoutTemplatesContext;
class MasterNotesSlideManager;
enum class NullableBool : int8_t;
namespace OdpSerialization
{
namespace PartParser
{
class ParagraphOdpSerialization;
class SlideOdpDeserialization;
class TextFrameOdpSerialization;
} // namespace PartParser
} // namespace OdpSerialization
class Paragraph;
class ParagraphCollection;
class ParagraphFormatAsIParagraphFormatData;
class ParagraphFormatEffectiveData;
class ParagraphFormatImpl;
class PortionFormat;
class PortionFormatEffectiveData;
namespace PptSerialization
{
class TextFormatPPTSerialization;
class TextFramePPTSerialization;
class TextStylePPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
namespace Chart
{
class ChartTextFormatPPTXSerialization;
class ChartTitlePPTXSerialization;
class DataLabelPPTXSerialization;
} // namespace Chart
class DrsShapePartParser;
class ParagraphCollectionPPTXSerialization;
class ParagraphFormatPPTXSerialization;
} // namespace PartParser
} // namespace PptxSerialization
class Presentation;
class Row;
class TabCollection;
class Table;
enum class TextAlignment;
class TextFrame;
namespace TextLayoutParts
{
class ParagraphEffective;
} // namespace TextLayoutParts
class TextStyle;
class TextStyleImpl;
namespace ThmxSerialization
{
class ThmxDeserializator;
} // namespace ThmxSerialization
namespace UnsupportedProps
{
namespace PPTUnsupportedProps
{
class ParagraphFormatPPTUnsupportedProps;
} // namespace PPTUnsupportedProps
namespace PPTXUnsupportedProps
{
class ParagraphFormatPPTXUnsupportedProps;
} // namespace PPTXUnsupportedProps
} // namespace UnsupportedProps
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// This class contains the paragraph formatting properties. Unlike <see cref="Aspose::Slides::IParagraphFormatEffectiveData">IParagraphFormatEffectiveData</see>, all properties of this class are writeable.
/// </summary>
/// <remarks><para>This class is used to return and manipulate paragraph formatting properties defined for the particular paragraph. This means that
/// no inheritance is applied when getting values so for the majority of cases you will get values meaning "undefined".</para>
/// <para>In order to get the effective formatting parameter values including inherited you need to use <see cref="ParagraphFormat::GetEffective"></see> method 
/// which returns a <see cref="Aspose::Slides::IParagraphFormatEffectiveData">IParagraphFormatEffectiveData</see> instance.</para></remarks>
class ASPOSE_SLIDES_SHARED_CLASS ParagraphFormat final : public Aspose::Slides::PVIObject, public Aspose::Slides::IParagraphFormat, public Aspose::Slides::Charts::IChartParagraphFormat
{
    typedef ParagraphFormat ThisType;
    typedef Aspose::Slides::PVIObject BaseType;
    typedef Aspose::Slides::IParagraphFormat BaseType1;
    typedef Aspose::Slides::Charts::IChartParagraphFormat BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::ParagraphFormatAsIParagraphFormatData;
    friend class Aspose::Slides::BaseHeaderFooterManager;
    friend class Aspose::Slides::BulletFormatEffectiveData;
    friend class Aspose::Slides::EffectFormatEffectiveData;
    friend class Aspose::Slides::ParagraphFormatEffectiveData;
    friend class Aspose::Slides::PortionFormatEffectiveData;
    friend class Aspose::Slides::BulletFormatImpl;
    friend class Aspose::Slides::ParagraphFormatImpl;
    friend class Aspose::Slides::TextStyleImpl;
    friend class Aspose::Slides::Charts::ChartTextFormat;
    friend class Aspose::Slides::HtmlIO::HtmlToPptxTextConverter;
    friend class Aspose::Slides::HtmlIO::HtmlToPptxTextConverter;
    friend class Aspose::Slides::HtmlIO::TextPropertiesConverter;
    friend class Aspose::Slides::TextLayoutParts::ParagraphEffective;
    friend class Aspose::Slides::FontsManager;
    friend class Aspose::Slides::Column;
    friend class Aspose::Slides::Row;
    friend class Aspose::Slides::Table;
    friend class Aspose::Slides::LayoutTemplatesContext;
    friend class Aspose::Slides::Drawing::SVGCanvas;
    friend class Aspose::Slides::PptxSerialization::PartParser::DrsShapePartParser;
    friend class Aspose::Slides::OdpSerialization::PartParser::ParagraphOdpSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::SlideOdpDeserialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::TextFrameOdpSerialization;
    friend class Aspose::Slides::ThmxSerialization::ThmxDeserializator;
    friend class Aspose::Slides::AutoShape;
    friend class Aspose::Slides::Field;
    friend class Aspose::Slides::Paragraph;
    friend class Aspose::Slides::ParagraphCollection;
    friend class Aspose::Slides::Presentation;
    friend class Aspose::Slides::TextFrame;
    friend class Aspose::Slides::TextStyle;
    friend class Aspose::Slides::PptSerialization::TextFormatPPTSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartTitlePPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::ChartTextFormatPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::Chart::DataLabelPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::ParagraphCollectionPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::ParagraphFormatPPTXSerialization;
    friend class Aspose::Slides::PptSerialization::TextFramePPTSerialization;
    friend class Aspose::Slides::PptSerialization::TextFramePPTSerialization;
    friend class Aspose::Slides::PptSerialization::TextStylePPTSerialization;
    friend class Aspose::Slides::MasterNotesSlideManager;
    /// @endcond
    
protected:

    /// @cond
    using ParagraphChangedDelegate_OldMode = System::MulticastDelegate<void(System::SharedPtr<ParagraphFormat>)>;
    
    /// @endcond
    
public:

    /// <summary>
    /// Returns the text alignment in a paragraph with no inheritance.
    /// Read <see cref="TextAlignment"></see>.
    /// </summary>
    /// <example>
    /// The following sample code shows how to Align Text Paragraphs in PowerPoint Presentation.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"ParagraphsAlignment.pptx");
    /// 
    /// // Accessing first slide
    /// auto slide = pres->get_Slides()->idx_get(0);
    /// // Accessing the first and second placeholder in the slide and typecasting it as AutoShape
    /// System::SharedPtr<ITextFrame> tf1 = (System::ExplicitCast<IAutoShape>(slide->get_Shapes()->idx_get(0)))->get_TextFrame();
    /// System::SharedPtr<ITextFrame> tf2 = (System::ExplicitCast<IAutoShape>(slide->get_Shapes()->idx_get(1)))->get_TextFrame();
    /// // Change the text in both placeholders
    /// tf1->set_Text(u"Center Align by Aspose");
    /// tf2->set_Text(u"Center Align by Aspose");
    /// // Getting the first paragraph of the placeholders
    /// System::SharedPtr<IParagraph> para1 = tf1->get_Paragraphs()->idx_get(0);
    /// System::SharedPtr<IParagraph> para2 = tf2->get_Paragraphs()->idx_get(0);
    /// // Aligning the text paragraph to center
    /// para1->get_ParagraphFormat()->set_Alignment(TextAlignment::Center);
    /// para2->get_ParagraphFormat()->set_Alignment(TextAlignment::Center);
    /// //Writing the presentation as a PPTX file
    /// pres->Save(u"Centeralign_out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API TextAlignment get_Alignment() override;
    /// <summary>
    /// Sets the text alignment in a paragraph with no inheritance.
    /// Write <see cref="TextAlignment"></see>.
    /// </summary>
    /// <example>
    /// The following sample code shows how to Align Text Paragraphs in PowerPoint Presentation.
    /// <code>
    /// auto pres = System::MakeObject<Presentation>(u"ParagraphsAlignment.pptx");
    /// 
    /// // Accessing first slide
    /// auto slide = pres->get_Slides()->idx_get(0);
    /// // Accessing the first and second placeholder in the slide and typecasting it as AutoShape
    /// System::SharedPtr<ITextFrame> tf1 = (System::ExplicitCast<IAutoShape>(slide->get_Shapes()->idx_get(0)))->get_TextFrame();
    /// System::SharedPtr<ITextFrame> tf2 = (System::ExplicitCast<IAutoShape>(slide->get_Shapes()->idx_get(1)))->get_TextFrame();
    /// // Change the text in both placeholders
    /// tf1->set_Text(u"Center Align by Aspose");
    /// tf2->set_Text(u"Center Align by Aspose");
    /// // Getting the first paragraph of the placeholders
    /// System::SharedPtr<IParagraph> para1 = tf1->get_Paragraphs()->idx_get(0);
    /// System::SharedPtr<IParagraph> para2 = tf2->get_Paragraphs()->idx_get(0);
    /// // Aligning the text paragraph to center
    /// para1->get_ParagraphFormat()->set_Alignment(TextAlignment::Center);
    /// para2->get_ParagraphFormat()->set_Alignment(TextAlignment::Center);
    /// //Writing the presentation as a PPTX file
    /// pres->Save(u"Centeralign_out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API void set_Alignment(TextAlignment value) override;
    /// <summary>
    /// Returns the amount of space between base lines in a paragraph. Positive value means percentage, negative - size in points. No inheritance applied.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_SpaceWithin() override;
    /// <summary>
    /// Sets the amount of space between base lines in a paragraph. Positive value means percentage, negative - size in points. No inheritance applied.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_SpaceWithin(float value) override;
    /// <summary>
    /// Returns the amount of space before the first line in a paragraph with no inheritance.
    /// A positive value specifies the percentage of the font size that the white space should be.
    /// A negative value specifies the size of the white space in point size.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_SpaceBefore() override;
    /// <summary>
    /// Sets the amount of space before the first line in a paragraph with no inheritance.
    /// A positive value specifies the percentage of the font size that the white space should be.
    /// A negative value specifies the size of the white space in point size.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_SpaceBefore(float value) override;
    /// <summary>
    /// Returns the amount of space after the last line in a paragraph with no inheritance.
    /// A positive value specifies the percentage of the font size that the white space should be.
    /// A negative value specifies the size of the white space in point size.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_SpaceAfter() override;
    /// <summary>
    /// Sets the amount of space after the last line in a paragraph with no inheritance.
    /// A positive value specifies the percentage of the font size that the white space should be.
    /// A negative value specifies the size of the white space in point size.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_SpaceAfter(float value) override;
    /// <summary>
    /// Determines whether the East Asian line break is used in a paragraph. No inheritance applied.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API NullableBool get_EastAsianLineBreak() override;
    /// <summary>
    /// Determines whether the East Asian line break is used in a paragraph. No inheritance applied.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_EastAsianLineBreak(NullableBool value) override;
    /// <summary>
    /// Determines whether the Right to Left writing is used in a paragraph. No inheritance applied.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API NullableBool get_RightToLeft() override;
    /// <summary>
    /// Determines whether the Right to Left writing is used in a paragraph. No inheritance applied.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_RightToLeft(NullableBool value) override;
    /// <summary>
    /// Determines whether the Latin line break is used in a paragraph. No inheritance applied.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API NullableBool get_LatinLineBreak() override;
    /// <summary>
    /// Determines whether the Latin line break is used in a paragraph. No inheritance applied.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_LatinLineBreak(NullableBool value) override;
    /// <summary>
    /// Determines whether the hanging punctuation is used in a paragraph. No inheritance applied.
    /// Read <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API NullableBool get_HangingPunctuation() override;
    /// <summary>
    /// Determines whether the hanging punctuation is used in a paragraph. No inheritance applied.
    /// Write <see cref="NullableBool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_HangingPunctuation(NullableBool value) override;
    /// <summary>
    /// Returns the left margin in a paragraph with no inheritance.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_MarginLeft() override;
    /// <summary>
    /// Sets the left margin in a paragraph with no inheritance.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_MarginLeft(float value) override;
    /// <summary>
    /// Returns the right margin in a paragraph with no inheritance.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_MarginRight() override;
    /// <summary>
    /// Sets the right margin in a paragraph with no inheritance.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_MarginRight(float value) override;
    /// <summary>
    /// Returns paragraph First Line Indent/Hanging Indent with no inheritance. Hanging Indent can be defined with negative values.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_Indent() override;
    /// <summary>
    /// Sets paragraph First Line Indent/Hanging Indent with no inheritance. Hanging Indent can be defined with negative values.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Indent(float value) override;
    /// <summary>
    /// Returns default tabulation size with no inheritance.
    /// Read <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API float get_DefaultTabSize() override;
    /// <summary>
    /// Sets default tabulation size with no inheritance.
    /// Write <see cref="float"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_DefaultTabSize(float value) override;
    /// <summary>
    /// Returns tabulations of a paragraph. No inheritance applied.
    /// Read-only <see cref="Aspose::Slides::ITabCollection">ITabCollection</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITabCollection> get_Tabs() override;
    /// <summary>
    /// Returns a font alignment in a paragraph with no inheritance.
    /// Read <see cref="Slides::FontAlignment"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::FontAlignment get_FontAlignment() override;
    /// <summary>
    /// Sets a font alignment in a paragraph with no inheritance.
    /// Write <see cref="Slides::FontAlignment"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_FontAlignment(Aspose::Slides::FontAlignment value) override;
    
    /// <summary>
    /// Initializes a new instance of <see cref="Aspose::Slides::ParagraphFormat">ParagraphFormat</see> class.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API ParagraphFormat();
    
    /// <summary>
    /// Gets effective paragraph formatting data with the inheritance applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::IParagraphFormatEffectiveData">IParagraphFormatEffectiveData</see>.</returns>
    /// <example>
    /// This example demonstrates getting some effective paragraph format properties.
    /// <code>
    /// auto pres = MakeObject<Presentation>(u"MyPresentation.pptx");
    /// auto shape = AsCast<IAutoShape>(pres->get_Slides()->idx_get(0)->get_Shapes()->idx_get(0));
    /// auto effectiveParagraphFormat = shape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_ParagraphFormat()->GetEffective();
    /// 
    /// Console::WriteLine(String(u"Text alignment: ") + ObjectExt::ToString(effectiveParagraphFormat->get_Alignment()));
    /// Console::WriteLine(String(u"Indent: ") + effectiveParagraphFormat->get_Indent());
    /// Console::WriteLine(String(u"Bullet type: ") + ObjectExt::ToString(effectiveParagraphFormat->get_Bullet()->get_Type()));
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IParagraphFormatEffectiveData> GetEffective() override;
    /// <summary>
    /// Returns the tabulation of a paragraph at the specified index. No inheritance applied.
    /// Read-only <see cref="Aspose::Slides::ITab"></see>
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<ITab> get_Tab(int32_t index) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<BulletFormat> get_BulletInternal();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PortionFormat> get_DefaultPortionFormatInternal();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<TabCollection> get_TabsInternal();
    ASPOSE_SLIDES_LOCAL_API int16_t get_DepthInternal();
    ASPOSE_SLIDES_LOCAL_API void set_DepthInternal(int16_t value);
    ASPOSE_SLIDES_LOCAL_API bool get_MetroBlobRequired();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::ParagraphFormatPPTUnsupportedProps> get_PPTUnsupportedProps();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::ParagraphFormatPPTXUnsupportedProps> get_PPTXUnsupportedProps();
    /// @endcond
    ASPOSE_SLIDES_SHARED_API uint32_t get_Version() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API int32_t get_TabsCount();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Cell> get_ParentCell();
    
    static const ASPOSE_SLIDES_LOCAL_API float DEFAULT_TAB_SIZE_VALUE;
    
    System::Event<void(System::SharedPtr<ParagraphFormat>)> ParagraphFormatChanged_OldMode;
    
    ASPOSE_SLIDES_LOCAL_API ParagraphFormat(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ParagraphFormat, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    
    /// @cond
    ASPOSE_SLIDES_LOCAL_API ParagraphFormat(System::SharedPtr<ParagraphFormat> paraprop, System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ParagraphFormat, CODEPORTING_ARGS(System::SharedPtr<ParagraphFormat> paraprop, System::SharedPtr<IDOMObject> parentImmediate));
    ASPOSE_SLIDES_SHARED_API void CreateChildObjects() override;
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> CreateRealObject() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<ParagraphFormat> source);
    ASPOSE_SLIDES_LOCAL_API void CopyDefinedDataFrom(System::SharedPtr<IParagraphFormat> source);
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<ParagraphFormatEffectiveData> source);
    ASPOSE_SLIDES_LOCAL_API bool EqualFormatting(System::SharedPtr<IParagraphFormat> para);
    ASPOSE_SLIDES_LOCAL_API bool IsDefault();
    ASPOSE_SLIDES_LOCAL_API void CombineTo(System::SharedPtr<ParagraphFormat> props);
    ASPOSE_SLIDES_LOCAL_API void CombineFrom(System::SharedPtr<ParagraphFormat> props);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ParagraphFormat> CreateCombinedWith(System::SharedPtr<ParagraphFormat> props);
    ASPOSE_SLIDES_LOCAL_API void ScaleSizes(float scalingCoef);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ParagraphFormat> Clone();
    ASPOSE_SLIDES_LOCAL_API void Reset();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ParagraphFormatEffectiveData> GetEffectiveInternal();
    ASPOSE_SLIDES_LOCAL_API void ClearEffective();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~ParagraphFormat();
    
private:

    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ParagraphFormatImpl> get_RealObject();
    /// <summary>
    /// Returns bullet format of the paragraph.
    /// Read-only <see cref="Aspose::Slides::IBulletFormat">IBulletFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IBulletFormat> get_Bullet() override;
    /// <summary>
    /// Returns depth of the paragraph.
    /// Value 0 means undefined value.
    /// Read <see cref="int16_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API int16_t get_Depth() override;
    /// <summary>
    /// Sets depth of the paragraph.
    /// Value 0 means undefined value.
    /// Write <see cref="int16_t"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_Depth(int16_t value) override;
    /// <summary>
    /// Returns default portion format of a paragraph. No inheritance applied.
    /// Read-only <see cref="Aspose::Slides::IPortionFormat">IPortionFormat</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPortionFormat> get_DefaultPortionFormat() override;
    
    bool m_parentCellResolved;
    System::WeakPtr<Cell> m_parentCell;
    System::SharedPtr<BulletFormat> m_bulletFormat;
    System::SharedPtr<PortionFormat> m_defaultPortionFormat;
    System::SharedPtr<TabCollection> m_tabs;
    System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::ParagraphFormatPPTUnsupportedProps> m_pptUnsupportedProps;
    System::SharedPtr<UnsupportedProps::PPTXUnsupportedProps::ParagraphFormatPPTXUnsupportedProps> m_pptxUnsupportedProps;
    System::SharedPtr<ParagraphFormatEffectiveData> m_effective;
    
};

} // namespace Slides
} // namespace Aspose


