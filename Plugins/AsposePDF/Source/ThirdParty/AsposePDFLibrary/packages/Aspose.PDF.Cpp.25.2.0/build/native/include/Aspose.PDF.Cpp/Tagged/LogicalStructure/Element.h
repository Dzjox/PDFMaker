#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enumerator_adapter.h>
#include <system/constraints.h>
#include <system/collections/list.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/Tagged/LogicalStructure/ElementList.h"
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
class IPdfName;
class IPdfPrimitive;
class ITrailerable;
} // namespace Data
} // namespace Engine
class ImageStamp;
namespace LogicalStructure
{
class AnnotationElement;
class ElementListImplementation;
class ElementPdfEngine;
class LinkElement;
class MCRElement;
class OBJRElement;
class StructTreeRootElement;
class StructureAttributeCollection;
class StructureAttributes;
class StructureElement;
class TableCellElement;
class TableElement;
class TableTRElement;
} // namespace LogicalStructure
namespace Operators
{
class BDC;
} // namespace Operators
namespace Tagged
{
namespace Helpers
{
class StructureElementUtil;
class StructureTextStateFactory;
} // namespace Helpers
class ITaggedContent;
class TaggedContext;
} // namespace Tagged
namespace Tests
{
namespace LogicalStructure
{
class AnnotElementTests;
class BibEntryElementTests;
class BlockQuoteElementTests;
class CaptionElementTests;
class CodeElementTests;
class FormulaElementTests;
class IndexElementTests;
class NonStructElementTests;
class PrivateElementTests;
class QuoteElementTests;
class ReferenceElementTests;
class RubyElementTests;
class RubyRBElementTests;
class RubyRPElementTests;
class RubyRTElementTests;
class WarichuElementTests;
class WarichuWPElementTests;
class WarichuWTElementTests;
} // namespace LogicalStructure
class RegressionTests_v19_4;
class RegressionTests_v24_06;
namespace TaggedPdf
{
class TaggedPdfStructureTests;
} // namespace TaggedPdf
} // namespace Tests
class XForm;
class XImage;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {


// C# preprocessor directive: #if !DOCUMENTIZE

/// <summary>
/// The <b>Aspose.Pdf.Tagged.LogicalStructure </b> is a namespace for PDF Logical Structure classes.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};


// C# preprocessor directive: #endif

/// <summary>
///     Represents a base class for element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Element : public virtual System::Object
{
    typedef Element ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::Helpers::StructureTextStateFactory;
    friend class Aspose::Pdf::Tagged::Helpers::StructureElementUtil;
    friend class Aspose::Pdf::LogicalStructure::StructureElement;
    friend class Aspose::Pdf::LogicalStructure::TableElement;
    friend class Aspose::Pdf::LogicalStructure::TableTRElement;
    friend class Aspose::Pdf::LogicalStructure::TableCellElement;
    friend class Aspose::Pdf::LogicalStructure::ElementListImplementation;
    friend class Aspose::Pdf::LogicalStructure::AnnotationElement;
    friend class Aspose::Pdf::LogicalStructure::LinkElement;
    friend class Aspose::Pdf::LogicalStructure::MCRElement;
    friend class Aspose::Pdf::LogicalStructure::OBJRElement;
    friend class Aspose::Pdf::LogicalStructure::StructTreeRootElement;
    friend class Aspose::Pdf::LogicalStructure::StructureAttributeCollection;
    friend class Aspose::Pdf::LogicalStructure::StructureAttributes;
    friend class Aspose::Pdf::Tagged::TaggedContext;
    friend class Aspose::Pdf::ImageStamp;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_06;
    friend class Aspose::Pdf::Tests::TaggedPdf::TaggedPdfStructureTests;
    friend class Aspose::Pdf::Tests::LogicalStructure::AnnotElementTests;
    friend class Aspose::Pdf::Tests::LogicalStructure::BlockQuoteElementTests;
    friend class Aspose::Pdf::Tests::LogicalStructure::BibEntryElementTests;
    friend class Aspose::Pdf::Tests::LogicalStructure::CaptionElementTests;
    friend class Aspose::Pdf::Tests::LogicalStructure::CodeElementTests;
    friend class Aspose::Pdf::Tests::LogicalStructure::FormulaElementTests;
    friend class Aspose::Pdf::Tests::LogicalStructure::IndexElementTests;
    friend class Aspose::Pdf::Tests::LogicalStructure::NonStructElementTests;
    friend class Aspose::Pdf::Tests::LogicalStructure::PrivateElementTests;
    friend class Aspose::Pdf::Tests::LogicalStructure::ReferenceElementTests;
    friend class Aspose::Pdf::Tests::LogicalStructure::RubyElementTests;
    friend class Aspose::Pdf::Tests::LogicalStructure::RubyRBElementTests;
    friend class Aspose::Pdf::Tests::LogicalStructure::RubyRPElementTests;
    friend class Aspose::Pdf::Tests::LogicalStructure::RubyRTElementTests;
    friend class Aspose::Pdf::Tests::LogicalStructure::QuoteElementTests;
    friend class Aspose::Pdf::Tests::LogicalStructure::WarichuElementTests;
    friend class Aspose::Pdf::Tests::LogicalStructure::WarichuWPElementTests;
    friend class Aspose::Pdf::Tests::LogicalStructure::WarichuWTElementTests;
    
public:

    /// <summary>
    ///     Get parent element.
    /// </summary>
    /// <value>Parent element.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Element> get_ParentElement() const;
    /// <summary>
    ///     Gets children collection of <see cref="T:/Aspose::Pdf::LogicalStructure::Element"></see> objects.
    /// </summary>
    /// <value>
    ///     Children collection of <see cref="T:/Aspose::Pdf::LogicalStructure::Element"></see> objects.
    /// </value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<ElementList> get_ChildElements();
    
    /// <summary>
    ///     Find Elements of a given type
    /// </summary>
    /// <typeparam name="T">Type of Structure Element for search</typeparam>
    /// <param name="recursiveSearch">(Optional) Recursive Search (default false, search only from direct children)</param>
    /// <returns>List of found Elements</returns>
    template <typename T>
    System::SharedPtr<System::Collections::Generic::List<T>> FindElements(bool recursiveSearch = false)
    {
        typedef Element BaseT_Element;
        assert_is_base_of(BaseT_Element, T);
        
        auto elements = System::MakeObject<System::Collections::Generic::List<T>>();
        
        for (auto&& element : System::IterateOver(get_ChildElements()))
        {
            if (System::ObjectExt::Is<T>(element))
            {
                elements->Add(System::AsCast<T>(element));
            }
            
            if (recursiveSearch)
            {
                elements->AddRange(element->template FindElements<T>(recursiveSearch));
            }
        }
        
        return elements;
    }
    
    /// <summary>
    /// Append <see cref="T:/Aspose::Pdf::LogicalStructure::Element"></see> to collection of children.
    /// </summary>
    /// <param name="element"><see cref="T:/Aspose::Pdf::LogicalStructure::Element"></see> object to add.</param>
    /// <param name="checkIfCanBeAppended">Check if can be appended.</param>
    /// <returns><see cref="T:/Aspose::Pdf::LogicalStructure::Element"></see> which has been added.</returns>
    /// <exception cref="TaggedException"></exception>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Element> AppendChild(System::SharedPtr<Element> element, bool checkIfCanBeAppended = true);
    /// <summary>
    /// Insert <see cref="T:/Aspose::Pdf::LogicalStructure::Element"></see> to collection of children at specified index.
    /// </summary>
    /// <param name="element"><see cref="T:/Aspose::Pdf::LogicalStructure::Element"></see> object to add.</param>
    /// <param name="index">Element index.</param>
    /// <param name="checkIfCanBeInserted">Check if can be inserted.</param>
    /// <returns><see cref="T:/Aspose::Pdf::LogicalStructure::Element"></see> which has been added.</returns>
    /// <exception cref="TaggedException"></exception>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Element> InsertChild(System::SharedPtr<Element> element, int32_t index, bool checkIfCanBeInserted = true);
    /// <summary>
    /// Remove child at.
    /// </summary>
    /// <param name="index">Child element index.</param>
    ASPOSE_PDF_SHARED_API void RemoveChild(int32_t index);
    /// <summary>
    /// Clear all childs.
    /// </summary>
    ASPOSE_PDF_SHARED_API void ClearChilds();
    /// <summary>
    /// Bind a structure element to the content stream BDC operator.
    /// </summary>
    /// <param name="bdc">Content stream bdc operator.</param>
    /// <returns><see cref="T:/Aspose::Pdf::LogicalStructure::MCRElement"></see>Structure element.</returns>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<MCRElement> Tag(System::SharedPtr<Aspose::Pdf::Operators::BDC> bdc) = 0;
    /// <summary>
    /// Bind a structure element to the content stream XForm.
    /// </summary>
    /// <param name="form">Pdf form.</param>
    /// <returns><see cref="T:/Aspose::Pdf::LogicalStructure::OBJRElement"></see>Structure element.</returns>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<OBJRElement> Tag(System::SharedPtr<XForm> form) = 0;
    /// <summary>
    /// Bind a structure element to the XImage.
    /// </summary>
    /// <param name="image">Pdf image.</param>
    /// <returns><see cref="T:/Aspose::Pdf::LogicalStructure::OBJRElement"></see>Structure element.</returns>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<OBJRElement> Tag(System::SharedPtr<XImage> image) = 0;
    /// <summary>
    /// Bind a structure element to the Artifact.
    /// </summary>
    /// <param name="artifact">Pdf artifact.</param>
    /// <returns><see cref="T:/Aspose::Pdf::LogicalStructure::MCRElement"></see>Structure element.</returns>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<MCRElement> Tag(System::SharedPtr<Artifact> artifact) = 0;
    /// <summary>
    /// Bind a structure element to the Annotation.
    /// </summary>
    /// <param name="annotation">Pdf annotation.</param>
    /// <returns><see cref="T:/Aspose::Pdf::LogicalStructure::OBJRElement"></see>Structure element.</returns>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<OBJRElement> Tag(System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annotation) = 0;
    /// <summary>
    ///     Returns a string that represents the current object.
    /// </summary>
    /// <returns>String that represents the current object.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    System::SharedPtr<ElementPdfEngine> get_ElementEngine() const;
    System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> get_Trailer();
    System::SharedPtr<Aspose::Pdf::Tagged::ITaggedContent> get_TaggedContent();
    
    Element(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfName> pdfObjectType, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    virtual ASPOSE_PDF_SHARED_API void PreSave();
    virtual ASPOSE_PDF_SHARED_API void Save();
    virtual ASPOSE_PDF_SHARED_API void SetParentElement(System::SharedPtr<Element> parentElement);
    virtual bool CanBeAppended(System::SharedPtr<Element> element) = 0;
    
    virtual ASPOSE_PDF_SHARED_API ~Element();
    
private:

    System::SharedPtr<ElementPdfEngine> _elementEngine;
    System::WeakPtr<Element> _parentElement;
    System::SharedPtr<ElementList> _childElements;
    
    System::String ToString_NonConst();
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


