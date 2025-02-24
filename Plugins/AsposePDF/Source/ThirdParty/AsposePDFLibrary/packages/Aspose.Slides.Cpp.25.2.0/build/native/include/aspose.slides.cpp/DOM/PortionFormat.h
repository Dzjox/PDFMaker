#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <DOM/IPortionFormat.h>

#include "DOM/BasePortionFormat.h"
#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class AutoShape;
class BasePortionFormatImpl;
class BulletFormatImpl;
namespace DOM
{
namespace Serialization
{
namespace PptxSerialization
{
namespace PartParsers
{
namespace DOMObjectsSerialization
{
namespace Omml
{
namespace Mappers
{
class RunElementMapper;
} // namespace Mappers
} // namespace Omml
} // namespace DOMObjectsSerialization
} // namespace PartParsers
} // namespace PptxSerialization
} // namespace Serialization
} // namespace DOM
namespace Export
{
class ExportNotesSlides;
} // namespace Export
class IDOMObject;
class IHyperlink;
class IHyperlinkManager;
class IPortionFormatEffectiveData;
namespace OdpSerialization
{
namespace PartParser
{
class BulletFormatOdpDeserialization;
class ParagraphOdpSerialization;
class PortionOdpSerialization;
class SlideOdpDeserialization;
class StyleTextPropertiesOdpSerialization;
class TableOdpDeserialization;
} // namespace PartParser
} // namespace OdpSerialization
class Paragraph;
class ParagraphFormat;
class ParagraphFormatImpl;
class Portion;
class PortionFormatEffectiveData;
class PortionFormatImpl;
namespace PptSerialization
{
class PortionFormatPPTSerialization;
class TextFormatPPTSerialization;
class TextFramePPTSerialization;
} // namespace PptSerialization
namespace PptxSerialization
{
namespace PartParser
{
class DrsShapePartParser;
class ParagraphCollectionPPTXSerialization;
class ParagraphFormatPPTXSerialization;
class PortionFormatPPTXSerialization;
} // namespace PartParser
class PptxCloner;
} // namespace PptxSerialization
class Table;
class TextLayout;
namespace TextLayoutParts
{
class ParagraphEffective;
} // namespace TextLayoutParts
namespace UnsupportedProps
{
namespace PPTUnsupportedProps
{
class PortionFormatPPTUnsupportedProps;
} // namespace PPTUnsupportedProps
} // namespace UnsupportedProps
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
/// This class contains the text portion formatting properties. Unlike <see cref="Aspose::Slides::IPortionFormatEffectiveData">IPortionFormatEffectiveData</see>, all properties of this class are writeable.
/// </summary>
/// <remarks><para>This class is used to return and manipulate text portion formatting properties defined for the particular portion. This means that
/// no inheritance is applied when getting values so for the majority of cases you will get values meaning "undefined".</para>
/// <para>In order to get the effective formatting parameter values including inherited you need to use <see cref="PortionFormat::GetEffective"></see> method 
/// which returns a <see cref="Aspose::Slides::IPortionFormatEffectiveData">IPortionFormatEffectiveData</see> instance.</para></remarks>
/// <example>
/// The following examples shows you how to assign the Latin font to a Paragraph's portion of PowerPoint Presentation.
/// <code>
/// auto pres = System::MakeObject<Presentation>(u"demo.pptx");
/// auto shape = pres->get_Slides()->idx_get(0)->get_Shapes()->AddAutoShape(ShapeType::Rectangle, 10.0f, 10.0f, 100.0f, 100.0f);
/// 
/// System::SharedPtr<Paragraph> paragraph = System::MakeObject<Paragraph>();
/// System::SharedPtr<Portion> portion = System::MakeObject<Portion>(u"Theme text format");
/// paragraph->get_Portions()->Add(portion);
/// shape->get_TextFrame()->get_Paragraphs()->Add(paragraph);
/// // Aspose.Slides uses these special identifiers (similar to those used in PowerPoint):
/// // +mn-lt - Body Font Latin (Minor Latin Font)
/// // +mj-lt -Heading Font Latin (Major Latin Font)
/// // +mn-ea - Body Font East Asian (Minor East Asian Font)
/// // +mj-ea - Body Font East Asian (Minor East Asian Font)
/// portion->get_PortionFormat()->set_LatinFont(System::MakeObject<FontData>(u"+mn-lt"));
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS PortionFormat final : public Aspose::Slides::BasePortionFormat, public Aspose::Slides::IPortionFormat
{
    typedef PortionFormat ThisType;
    typedef Aspose::Slides::BasePortionFormat BaseType;
    typedef Aspose::Slides::IPortionFormat BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Portion;
    friend class Aspose::Slides::PortionFormatEffectiveData;
    friend class Aspose::Slides::BasePortionFormatImpl;
    friend class Aspose::Slides::BulletFormatImpl;
    friend class Aspose::Slides::ParagraphFormatImpl;
    friend class Aspose::Slides::PortionFormatImpl;
    friend class Aspose::Slides::TextLayoutParts::ParagraphEffective;
    friend class Aspose::Slides::TextLayout;
    friend class Aspose::Slides::Table;
    friend class Aspose::Slides::Export::ExportNotesSlides;
    friend class Aspose::Slides::DOM::Serialization::PptxSerialization::PartParsers::DOMObjectsSerialization::Omml::Mappers::RunElementMapper;
    friend class Aspose::Slides::PptxSerialization::PartParser::DrsShapePartParser;
    friend class Aspose::Slides::OdpSerialization::PartParser::BulletFormatOdpDeserialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::PortionOdpSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::StyleTextPropertiesOdpSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::ParagraphOdpSerialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::TableOdpDeserialization;
    friend class Aspose::Slides::OdpSerialization::PartParser::SlideOdpDeserialization;
    friend class Aspose::Slides::PptSerialization::PortionFormatPPTSerialization;
    friend class Aspose::Slides::AutoShape;
    friend class Aspose::Slides::Paragraph;
    friend class Aspose::Slides::ParagraphFormat;
    friend class Aspose::Slides::PptSerialization::TextFormatPPTSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::ParagraphCollectionPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::ParagraphFormatPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PartParser::PortionFormatPPTXSerialization;
    friend class Aspose::Slides::PptxSerialization::PptxCloner;
    friend class Aspose::Slides::PptSerialization::TextFramePPTSerialization;
    /// @endcond
    
public:

    /// <summary>
    /// Returns bookmark identifier.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_BookmarkId() override;
    /// <summary>
    /// Sets bookmark identifier.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_BookmarkId(System::String value) override;
    /// <summary>
    /// Determines whether the smart tag should be cleaned. No inheritance applied.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_SmartTagClean() override;
    /// <summary>
    /// Determines whether the smart tag should be cleaned. No inheritance applied.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_SmartTagClean(bool value) override;
    /// <summary>
    /// Returns the hyperlink defined for mouse click.
    /// Read <see cref="Aspose::Slides::IHyperlink">IHyperlink</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IHyperlink> get_HyperlinkClick() override;
    /// <summary>
    /// Sets the hyperlink defined for mouse click.
    /// Write <see cref="Aspose::Slides::IHyperlink">IHyperlink</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_HyperlinkClick(System::SharedPtr<IHyperlink> value) override;
    /// <summary>
    /// Returns the hyperlink defined for mouse over.
    /// Read <see cref="Aspose::Slides::IHyperlink">IHyperlink</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IHyperlink> get_HyperlinkMouseOver() override;
    /// <summary>
    /// Sets the hyperlink defined for mouse over.
    /// Write <see cref="Aspose::Slides::IHyperlink">IHyperlink</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_HyperlinkMouseOver(System::SharedPtr<IHyperlink> value) override;
    /// <summary>
    /// Hyperlinks manager.
    /// Read-only <see cref="Aspose::Slides::IHyperlinkManager">IHyperlinkManager</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IHyperlinkManager> get_HyperlinkManager() override;
    
    /// <summary>
    /// Initializes a new instance of <see cref="Aspose::Slides::PortionFormat">PortionFormat</see> class.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API PortionFormat();
    
    /// <summary>
    /// Gets effective portion formatting data with the inheritance applied.
    /// </summary>
    /// <returns>A <see cref="Aspose::Slides::IPortionFormatEffectiveData">IPortionFormatEffectiveData</see>.</returns>
    /// <example>
    /// This example demonstrates getting some effective portion format properties.
    /// <code>
    /// auto pres = MakeObject<Presentation>(u"MyPresentation.pptx");
    /// auto shape = AsCast<IAutoShape>(pres->get_Slides()->idx_get(0)->get_Shapes()->idx_get(0));
    /// auto effectivePortionFormat = shape->get_TextFrame()->get_Paragraphs()->idx_get(0)->get_Portions()->idx_get(0)->get_PortionFormat()->GetEffective();
    /// 
    /// Console::WriteLine(String(u"Latin font: ") + effectivePortionFormat->get_LatinFont()->get_FontName());
    /// Console::WriteLine(String(u"Font height: ") + effectivePortionFormat->get_FontHeight());
    /// Console::WriteLine(String(u"Fill type: ") + ObjectExt::ToString(effectivePortionFormat->get_FillFormat()->get_FillType()));
    /// </code>
    /// </example>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPortionFormatEffectiveData> GetEffective() override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PortionFormatImpl> get_RealObject();
    ASPOSE_SLIDES_LOCAL_API bool get_ManualStretch();
    ASPOSE_SLIDES_LOCAL_API void set_ManualStretch(bool value);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ParagraphFormat> get_ParentParagraphFormat();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::PortionFormatPPTUnsupportedProps> get_PPTUnsupportedProps();
    
    ASPOSE_SLIDES_LOCAL_API PortionFormat(System::SharedPtr<IDOMObject> parentImmediate);
    /// @endcond
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PortionFormat, CODEPORTING_ARGS(System::SharedPtr<IDOMObject> parentImmediate));
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::Object> CreateRealObject() override;
    /// @cond
    ASPOSE_SLIDES_LOCAL_API void CopyDataFrom(System::SharedPtr<PortionFormatEffectiveData> source);
    ASPOSE_SLIDES_LOCAL_API void CopyTextDataFrom(System::SharedPtr<PortionFormatEffectiveData> source);
    ASPOSE_SLIDES_LOCAL_API void ScaleSizes(float scalingCoef);
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PortionFormat> Clone();
    ASPOSE_SLIDES_LOCAL_API void Reset();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PortionFormatEffectiveData> GetEffectiveInternal();
    ASPOSE_SLIDES_LOCAL_API void ClearEffective();
    ASPOSE_SLIDES_LOCAL_API void SetParent(System::SharedPtr<Portion> parentImmediate);
    static ASPOSE_SLIDES_LOCAL_API bool IsNotDefined(System::SharedPtr<PortionFormat> format);
    ASPOSE_SLIDES_LOCAL_API bool IsDefault();
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~PortionFormat();
    
private:

    System::SharedPtr<UnsupportedProps::PPTUnsupportedProps::PortionFormatPPTUnsupportedProps> m_pptUnsupportedProps;
    System::SharedPtr<PortionFormatEffectiveData> m_effective;
    
};

} // namespace Slides
} // namespace Aspose


