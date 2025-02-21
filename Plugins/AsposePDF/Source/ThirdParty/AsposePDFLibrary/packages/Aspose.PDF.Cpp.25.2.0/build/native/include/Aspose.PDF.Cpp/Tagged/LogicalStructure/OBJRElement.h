#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

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
class IPdfObject;
class IPdfPrimitive;
} // namespace Data
} // namespace Engine
namespace LogicalStructure
{
class AnnotationElement;
class MCRElement;
class StructureElement;
} // namespace LogicalStructure
namespace Operators
{
class BDC;
} // namespace Operators
namespace Tagged
{
class TaggedContent;
class TaggedContext;
} // namespace Tagged
class XForm;
class XImage;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

/// <summary>
///     Represents object reference entity in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS OBJRElement final : public Aspose::Pdf::LogicalStructure::Element
{
    typedef OBJRElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::Element BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::LogicalStructure::AnnotationElement;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
public:

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

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> get_Obj();
    /// <summary>
    /// Parent structure element.
    /// </summary>
    System::SharedPtr<StructureElement> get_ParentStructureElement();
    
    OBJRElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(OBJRElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    ASPOSE_PDF_SHARED_API bool CanBeAppended(System::SharedPtr<Element> element) override;
    
    virtual ASPOSE_PDF_SHARED_API ~OBJRElement();
    
private:

    System::String ToString_NonConst();
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


