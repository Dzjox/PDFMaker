#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/nullable.h>

#include "Aspose.PDF.Cpp/Tagged/LogicalStructure/Element.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class Annotation;
} // namespace Annotations
class Artifact;
namespace Engine
{
namespace Data
{
class IPdfPrimitive;
} // namespace Data
} // namespace Engine
class Hyperlink;
class Image;
namespace LogicalStructure
{
class BLSTextElement;
class ITextElement;
class LinkElement;
class OBJRElement;
class StructureElement;
class TableElement;
} // namespace LogicalStructure
namespace Operators
{
class BDC;
} // namespace Operators
class Page;
class Paragraphs;
namespace Tagged
{
namespace Helpers
{
class StructureElementUtil;
} // namespace Helpers
class TaggedContent;
class TaggedContext;
} // namespace Tagged
namespace Tests
{
class RegressionTests_v24_07;
} // namespace Tests
namespace Text
{
class TextFragment;
class TextSegment;
} // namespace Text
class XForm;
class XImage;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

/// <summary>
///     Represents marked-content reference object in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS MCRElement final : public Aspose::Pdf::LogicalStructure::Element
{
    typedef MCRElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::Element BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::Helpers::StructureElementUtil;
    friend class Aspose::Pdf::LogicalStructure::TableElement;
    friend class Aspose::Pdf::LogicalStructure::LinkElement;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    friend class Aspose::Pdf::Tagged::TaggedContext;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_07;
    
public:

    /// <summary>
    ///     <para>Gets image source for marked-content reference element.</para>
    ///     <para>For just created <see cref="Aspose::Pdf::LogicalStructure::IllustrationElement"></see>. Is null in other cases.</para>
    /// </summary>
    /// <value>Image source for marked-content reference element.</value>
    ASPOSE_PDF_SHARED_API System::String get_ImageSrc() const;
    /// <summary>
    ///     <para>Gets text content for marked-content reference element.</para>
    ///     <para>For just created object wich implement <see cref="Aspose::Pdf::LogicalStructure::ITextElement"></see>. Is null in other cases.</para>
    /// </summary>
    /// <value>Text content for marked-content reference element.</value>
    ASPOSE_PDF_SHARED_API System::String get_Content() const;
    /// <summary>
    ///     Gets MCID of marked-content reference object.
    /// </summary>
    /// <value>MCID of marked-content reference object.</value>
    ASPOSE_PDF_SHARED_API int32_t get_MCID();
    
    /// <summary>
    /// Bind a structure element to the content stream BDC operator.
    /// </summary>
    /// <param name="bdc">Content stream bdc operator.</param>
    /// <returns><see cref="T:/Aspose::Pdf::LogicalStructure::MCRElement"></see>Structure element.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<MCRElement> Tag(System::SharedPtr<Aspose::Pdf::Operators::BDC> bdc) override;
    /// <summary>
    /// Bind a structure element to the content stream XForm.
    /// </summary>
    /// <param name="form">Pdf form.</param>
    /// <returns><see cref="T:/Aspose::Pdf::LogicalStructure::OBJRElement"></see>Structure element.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<OBJRElement> Tag(System::SharedPtr<XForm> form) override;
    /// <summary>
    /// Bind a structure element to the XImage.
    /// </summary>
    /// <param name="image">Pdf image.</param>
    /// <returns><see cref="T:/Aspose::Pdf::LogicalStructure::OBJRElement"></see>Structure element.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<OBJRElement> Tag(System::SharedPtr<XImage> image) override;
    /// <summary>
    /// Bind a structure element to the Artifact.
    /// </summary>
    /// <param name="artifact">Pdf artifact.</param>
    /// <returns><see cref="T:/Aspose::Pdf::LogicalStructure::MCRElement"></see>Structure element.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<MCRElement> Tag(System::SharedPtr<Artifact> artifact) override;
    /// <summary>
    /// Bind a structure element to the Annotation.
    /// </summary>
    /// <param name="annotation">Pdf annotation.</param>
    /// <returns><see cref="T:/Aspose::Pdf::LogicalStructure::OBJRElement"></see>Structure element.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<OBJRElement> Tag(System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annotation) override;
    /// <summary>
    ///     Returns a string that represents the current object.
    /// </summary>
    /// <returns>String that represents the current object.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    bool get_IsCreatedElement();
    System::SharedPtr<Aspose::Pdf::Page> get_Page();
    void set_Page(System::SharedPtr<Aspose::Pdf::Page> value);
    System::SharedPtr<Aspose::Pdf::Text::TextFragment> get_TextFragment();
    void set_TextFragment(System::SharedPtr<Aspose::Pdf::Text::TextFragment> value);
    System::SharedPtr<StructureElement> get_ParentStructureElement();
    System::SharedPtr<ITextElement> get_ParentTextElement();
    System::SharedPtr<BLSTextElement> get_ParentBLSTextElement();
    System::SharedPtr<Paragraphs> get_ContextParagraphs();
    int32_t get_NewMCID() const;
    void set_NewMCID(int32_t value);
    System::SharedPtr<Operators::BDC> get_BdcOperator() const;
    void set_BdcOperator(System::SharedPtr<Operators::BDC> value);
    /// <summary>
    ///     <para>Gets image source for marked-content reference element.</para>
    ///     <para>For just created <see cref="Aspose::Pdf::LogicalStructure::IllustrationElement"></see>. Is null in other cases.</para>
    /// </summary>
    /// <value>Image source for marked-content reference element.</value>
    ASPOSE_PDF_SHARED_API void set_ImageSrc(System::String value);
    System::Nullable<double> get_ImageResolution() const;
    void set_ImageResolution(System::Nullable<double> value);
    System::Nullable<double> get_ImageWidth() const;
    void set_ImageWidth(System::Nullable<double> value);
    System::Nullable<double> get_ImageHeight() const;
    void set_ImageHeight(System::Nullable<double> value);
    /// <summary>
    ///     <para>Gets text content for marked-content reference element.</para>
    ///     <para>For just created object wich implement <see cref="Aspose::Pdf::LogicalStructure::ITextElement"></see>. Is null in other cases.</para>
    /// </summary>
    /// <value>Text content for marked-content reference element.</value>
    ASPOSE_PDF_SHARED_API void set_Content(System::String value);
    /// <summary>
    ///     Gets MCID of marked-content reference object.
    /// </summary>
    /// <value>MCID of marked-content reference object.</value>
    ASPOSE_PDF_SHARED_API void set_MCID(int32_t value);
    
    void SetHyperlink(System::SharedPtr<Hyperlink> hyperlink);
    
    MCRElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MCRElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    ASPOSE_PDF_SHARED_API void PreSave() override;
    ASPOSE_PDF_SHARED_API void Save() override;
    ASPOSE_PDF_SHARED_API bool CanBeAppended(System::SharedPtr<Element> element) override;
    
    virtual ASPOSE_PDF_SHARED_API ~MCRElement();
    
private:

    System::String _imageSrc;
    System::Nullable<double> _imageResolution;
    System::Nullable<double> _imageWidth;
    System::Nullable<double> _imageHeight;
    System::SharedPtr<Image> _image;
    System::String _content;
    System::SharedPtr<Aspose::Pdf::Text::TextSegment> _textSegment;
    System::SharedPtr<Aspose::Pdf::Text::TextFragment> _textFragment;
    System::SharedPtr<Aspose::Pdf::Page> _page;
    int32_t _newMcId;
    System::SharedPtr<Operators::BDC> _bdcOperator;
    
    System::String ToString_NonConst();
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


