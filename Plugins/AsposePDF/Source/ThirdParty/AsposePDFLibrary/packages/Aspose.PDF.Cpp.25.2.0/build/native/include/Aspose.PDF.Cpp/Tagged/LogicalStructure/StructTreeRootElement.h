#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

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
namespace CommonData
{
class NamesTreeNode;
class NumsTreeNode;
} // namespace CommonData
namespace Data
{
class IPdfArray;
class IPdfDictionary;
class IPdfNumber;
class IPdfObject;
class IPdfPrimitive;
} // namespace Data
} // namespace Engine
class ImageStamp;
namespace LogicalStructure
{
class AnnotationElement;
class MCRElement;
class OBJRElement;
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
namespace Tests
{
class RegressionTests_v23_07;
class RegressionTests_v24_06;
namespace TaggedPdf
{
class TaggedPdfNoteTests;
} // namespace TaggedPdf
} // namespace Tests
class XForm;
class XImage;
} // namespace Pdf
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
} // namespace System

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

/// <summary>
/// Represents StructTreeRoot object in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS StructTreeRootElement final : public Aspose::Pdf::LogicalStructure::Element
{
    typedef StructTreeRootElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::Element BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::LogicalStructure::StructureElement;
    friend class Aspose::Pdf::LogicalStructure::Element;
    friend class Aspose::Pdf::LogicalStructure::AnnotationElement;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    friend class Aspose::Pdf::Tagged::TaggedContext;
    friend class Aspose::Pdf::ImageStamp;
    friend class Aspose::Pdf::Tests::RegressionTests_v23_07;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_06;
    friend class Aspose::Pdf::Tests::TaggedPdf::TaggedPdfNoteTests;
    
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
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::CommonData::NamesTreeNode> get_IDTree() const;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::NumsTreeNode> get_ParentTree() const;
    int32_t get_ParentTreeNextKey();
    void set_ParentTreeNextKey(int32_t value);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_RoleMap() const;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Element>>> get_AllElements();
    
    StructTreeRootElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(StructTreeRootElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    ASPOSE_PDF_SHARED_API bool CanBeAppended(System::SharedPtr<Element> element) override;
    void DoPreSave();
    void DoSave();
    void Init();
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfNumber> CreateStructParents();
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> GetStructParentsArray(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfNumber> structParents);
    int32_t RegistrationObjectInParentTree(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> pdfObject);
    
    virtual ASPOSE_PDF_SHARED_API ~StructTreeRootElement();
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::CommonData::NamesTreeNode> _idTree;
    System::SharedPtr<Aspose::Pdf::Engine::CommonData::NumsTreeNode> _parentTree;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfNumber> _parentTreeNextKey;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> _roleMap;
    bool _initialized;
    
    int32_t CalcParentTreeNextKey();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Element>>> GetAllElements(System::SharedPtr<Element> element);
    static void StructAddChildrenToElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> context, System::SharedPtr<Element> element);
    static void StructAddChildrenToElementForArray(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> context, System::SharedPtr<Element> element, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> K);
    static void StructAddChildrenToElementForDictionary(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> context, System::SharedPtr<Element> element, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> K);
    static void StructAddChildrenToElementForNumber(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> context, System::SharedPtr<Element> element, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> K);
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


