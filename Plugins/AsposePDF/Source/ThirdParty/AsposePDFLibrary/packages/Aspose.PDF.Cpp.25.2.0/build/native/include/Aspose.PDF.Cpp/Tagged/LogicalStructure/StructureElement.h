#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if NETCORE && (NETSTANDARD2_1 || NET5_0 || NET6_0 || NET7_0 || NET8_0)

// C# INACTIVE CODE:
// using KeyValuePair = Aspose.Pdf.Engine.CommonData.KeyValuePair;

// C# preprocessor directive: #endif


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
class IPdfName;
class IPdfObject;
class IPdfPrimitive;
} // namespace Data
} // namespace Engine
class ImageStamp;
namespace LogicalStructure
{
class AttributeOwnerStandard;
class BLSElement;
class GroupingElement;
class IllustrationElement;
class ILSElement;
class ListChildElement;
class MCRElement;
class OBJRElement;
class RubyChildElement;
class StructureAttributeCollection;
class StructureTypeStandard;
class TableChildElement;
class TableElement;
class WarichuChildElement;
} // namespace LogicalStructure
class OperatorCollection;
namespace Operators
{
class BDC;
} // namespace Operators
class Page;
namespace Tagged
{
namespace Helpers
{
class StructureElementUtil;
} // namespace Helpers
class TaggedContext;
} // namespace Tagged
namespace Tests
{
class RegressionTests_v24_06;
} // namespace Tests
class XForm;
class XImage;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

/// <summary>
///     Represents a base class for structure elements in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS StructureElement : public Aspose::Pdf::LogicalStructure::Element
{
    typedef StructureElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::Element BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::Helpers::StructureElementUtil;
    friend class Aspose::Pdf::LogicalStructure::BLSElement;
    friend class Aspose::Pdf::LogicalStructure::ListChildElement;
    friend class Aspose::Pdf::LogicalStructure::TableElement;
    friend class Aspose::Pdf::LogicalStructure::TableChildElement;
    friend class Aspose::Pdf::LogicalStructure::GroupingElement;
    friend class Aspose::Pdf::LogicalStructure::IllustrationElement;
    friend class Aspose::Pdf::LogicalStructure::ILSElement;
    friend class Aspose::Pdf::LogicalStructure::RubyChildElement;
    friend class Aspose::Pdf::LogicalStructure::WarichuChildElement;
    friend class Aspose::Pdf::LogicalStructure::MCRElement;
    friend class Aspose::Pdf::ImageStamp;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_06;
    
public:

    /// <summary>
    ///     Gets <see cref="T:/Aspose::Pdf::LogicalStructure::AttributeOwnerStandard"></see> object.
    /// </summary>
    /// <value><see cref="T:/Aspose::Pdf::LogicalStructure::AttributeOwnerStandard"></see> object.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeOwnerStandard> get_DefaultAttributeOwner() const;
    /// <summary>
    ///     Gets <see cref="T:/Aspose::Pdf::LogicalStructure::StructureAttributeCollection"></see> object.
    /// </summary>
    /// <value><see cref="T:/Aspose::Pdf::LogicalStructure::StructureAttributeCollection"></see> object.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<StructureAttributeCollection> get_Attributes() const;
    /// <summary>
    ///     Gets type of structure element.
    /// </summary>
    /// <value><see cref="T:/Aspose::Pdf::LogicalStructure::StructureTypeStandard"></see> object of structure element.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeStandard> get_StructureType() const;
    /// <summary>
    ///     Gets the ID for structure element.
    /// </summary>
    /// <value>ID of the structure element.</value>
    ASPOSE_PDF_SHARED_API System::String get_ID();
    /// <summary>
    ///     Gets the title for structure element.
    /// </summary>
    /// <value>Title of the structure element.</value>
    ASPOSE_PDF_SHARED_API System::String get_Title();
    /// <summary>
    ///     Sets the title for structure element.
    /// </summary>
    /// <value>Title of the structure element.</value>
    ASPOSE_PDF_SHARED_API void set_Title(System::String value);
    /// <summary>
    ///     Gets the language for structure element.
    /// </summary>
    /// <value>Language of the structure element.</value>
    ASPOSE_PDF_SHARED_API System::String get_Language();
    /// <summary>
    ///     Sets the language for structure element.
    /// </summary>
    /// <value>Language of the structure element.</value>
    ASPOSE_PDF_SHARED_API void set_Language(System::String value);
    /// <summary>
    ///     Gets the alternative text for structure element.
    /// </summary>
    /// <value>Alternative text of the structure element.</value>
    ASPOSE_PDF_SHARED_API System::String get_AlternativeText();
    /// <summary>
    ///     Sets the alternative text for structure element.
    /// </summary>
    /// <value>Alternative text of the structure element.</value>
    ASPOSE_PDF_SHARED_API void set_AlternativeText(System::String value);
    /// <summary>
    ///     Gets the expansion text for structure element.
    /// </summary>
    /// <value>Expansion text of the structure element.</value>
    ASPOSE_PDF_SHARED_API System::String get_ExpansionText();
    /// <summary>
    ///     Sets the expansion text for structure element.
    /// </summary>
    /// <value>Expansion text of the structure element.</value>
    ASPOSE_PDF_SHARED_API void set_ExpansionText(System::String value);
    /// <summary>
    ///     Gets the actual text for structure element.
    /// </summary>
    /// <value>Actual text of the structure element.</value>
    ASPOSE_PDF_SHARED_API System::String get_ActualText();
    /// <summary>
    ///     Sets the actual text for structure element.
    /// </summary>
    /// <value>Actual text of the structure element.</value>
    ASPOSE_PDF_SHARED_API void set_ActualText(System::String value);
    /// <summary>
    /// Gets the page on which some or all child elements will be rendered.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Page> get_Page();
    
    /// <summary>
    ///     Change parent element for current structure element
    /// </summary>
    /// <param name="newParentElement">New parent structure element</param>
    /// <param name="checkIfParentCanBeChanged">Check if parent be changed.</param>
    ASPOSE_PDF_SHARED_API void ChangeParentElement(System::SharedPtr<StructureElement> newParentElement, bool checkIfParentCanBeChanged = true);
    /// <summary>
    /// Removes: an element from the structure, a reference to it from the parent object, references to it from child objects, 
    /// the corresponding object from the document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Remove();
    /// <summary>
    /// Removes an element from the structure, a reference to it from the parent object, references to it from child objects,
    /// and the corresponding object from the document. Inserts child objects of the removed object into its former parent child objects collection starting at the index of the removed object.
    /// </summary>
    /// <param name="checkIfChildObjectsCanBeMovedToParent">Check if child objects of removed object can be inserted into its parent child objects collection.</param>
    ASPOSE_PDF_SHARED_API void RemoveAndMoveItsChildObjectsToItsParent(bool checkIfChildObjectsCanBeMovedToParent = true);
    /// <summary>
    ///     Generate ID for structure element.
    /// </summary>
    ASPOSE_PDF_SHARED_API void GenerateId();
    /// <summary>
    ///     Sets ID for structure element.
    /// </summary>
    /// <param name="id">ID value for structure element</param>
    ASPOSE_PDF_SHARED_API void SetId(System::String id);
    /// <summary>
    ///     Clear ID for structure element.
    /// </summary>
    ASPOSE_PDF_SHARED_API void ClearId();
    /// <summary>
    ///     Sets custom tag for structure element.
    /// </summary>
    /// <param name="newTag">Tag name</param>
    ASPOSE_PDF_SHARED_API void SetTag(System::String newTag);
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

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfName> get_S();
    void set_S(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfName> value);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> get_Pg();
    void set_Pg(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> value);
    
    StructureElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<StructureTypeStandard> structureType, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity, System::SharedPtr<AttributeOwnerStandard> attributeOwner = nullptr);
    
    ASPOSE_PDF_SHARED_API void SetParentElement(System::SharedPtr<Element> parentElement) override;
    ASPOSE_PDF_SHARED_API bool CanBeAppended(System::SharedPtr<Element> element) override;
    
    virtual ASPOSE_PDF_SHARED_API ~StructureElement();
    
private:

    System::SharedPtr<StructureTypeStandard> _structureType;
    System::SharedPtr<StructureAttributeCollection> _attributes;
    System::SharedPtr<AttributeOwnerStandard> _defaultAttributeOwner;
    
    /// <summary>
    /// Removes an element from the structure, a reference to it from the parent object, references to it from child objects,
    /// and the corresponding object from the document. Appends child objects of the removed object to its parent (if corresponding parameter is set).
    /// </summary>
    /// <param name="moveChildNodesOfRemovedElementToParent">Move child objects of removed object to it's former parent.</param>
    /// <param name="checkIfChildObjectsCanBeMovedToParent">Check if child objects of removed object can be inserted into its parent child objects collection.</param>
    void RemoveInternal(bool moveChildNodesOfRemovedElementToParent, bool checkIfChildObjectsCanBeMovedToParent = true);
    void UpdateBDC(System::SharedPtr<OperatorCollection> contents, System::SharedPtr<Aspose::Pdf::Operators::BDC> bdc, int32_t mcid);
    System::String ToString_NonConst();
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


