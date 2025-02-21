#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Engine
{
namespace Data
{
class IPdfDictionary;
} // namespace Data
} // namespace Engine
namespace LogicalStructure
{
class AttributeKey;
class AttributeOwnerStandard;
class StructureAttribute;
class StructureAttributeCollection;
class StructureElement;
class TableCellElement;
} // namespace LogicalStructure
namespace Tests
{
namespace TaggedPdf
{
class TaggedPdfTextTests;
} // namespace TaggedPdf
} // namespace Tests
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

/// <summary>
///     Represents attributes of structure element for standard attribute owners.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS StructureAttributes : public System::Object
{
    typedef StructureAttributes ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::LogicalStructure::TableCellElement;
    friend class Aspose::Pdf::LogicalStructure::StructureAttributeCollection;
    friend class Aspose::Pdf::Tests::TaggedPdf::TaggedPdfTextTests;
    
public:

    /// <summary>
    ///     Gets standard attribute owner.
    /// </summary>
    /// <value>Standard attribute owner.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<AttributeOwnerStandard> get_Owner();
    
    /// <summary>
    ///     Gets StructureAttribute by AttributeKey.
    /// </summary>
    /// <param name="key">AttributeKey.</param>
    /// <returns>StructureAttribute</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<StructureAttribute> GetAttribute(System::SharedPtr<AttributeKey> key);
    /// <summary>
    ///     Sets StructureAttribute into StructureAttributes.
    /// </summary>
    /// <param name="attribute">StructureAttribute.</param>
    ASPOSE_PDF_SHARED_API void SetAttribute(System::SharedPtr<StructureAttribute> attribute);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_EngineAttributes() const;
    void set_EngineAttributes(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> value);
    
    StructureAttributes(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dictA, System::SharedPtr<StructureElement> structureElement);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(StructureAttributes, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dictA, System::SharedPtr<StructureElement> structureElement));
    
    StructureAttributes(System::SharedPtr<StructureElement> structureElement);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(StructureAttributes, CODEPORTING_ARGS(System::SharedPtr<StructureElement> structureElement));
    bool HasAttribute(System::SharedPtr<AttributeKey> key);
    
private:

    System::SharedPtr<StructureElement> _structureElement;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> _engineAttributes;
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


