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
class IPdfPrimitive;
} // namespace Data
} // namespace Engine
namespace LogicalStructure
{
class AttributeOwnerStandard;
class StructureAttributes;
class StructureElement;
} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

/// <summary>
///     Represents collection of attributes of structure elements.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS StructureAttributeCollection : public System::Object
{
    typedef StructureAttributeCollection ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::LogicalStructure::StructureElement;
    
public:

    /// <summary>
    ///     Return <see cref="Aspose::Pdf::LogicalStructure::StructureAttributes"></see> of structure element by standard attribute owner.
    /// </summary>
    /// <param name="ownerStandard">Standard attribute owner.</param>
    /// <returns><see cref="Aspose::Pdf::LogicalStructure::StructureAttributes"></see> of structure element. Return null if not found.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<StructureAttributes> GetAttributes(System::SharedPtr<AttributeOwnerStandard> ownerStandard);
    /// <summary>
    ///     Create and return <see cref="Aspose::Pdf::LogicalStructure::StructureAttributes"></see> of structure element by standard attribute owner.
    /// </summary>
    /// <param name="ownerStandard">Standard attribute owner.</param>
    /// <returns><see cref="Aspose::Pdf::LogicalStructure::StructureAttributes"></see> of structure element. Structure Attributes will be created if it needed.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<StructureAttributes> CreateAttributes(System::SharedPtr<AttributeOwnerStandard> ownerStandard);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> get_EngineAttributeCollection() const;
    void set_EngineAttributeCollection(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> value);
    
    StructureAttributeCollection(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> entityA, System::SharedPtr<StructureElement> structureElement);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(StructureAttributeCollection, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> entityA, System::SharedPtr<StructureElement> structureElement));
    
    StructureAttributeCollection(System::SharedPtr<StructureElement> structureElement);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(StructureAttributeCollection, CODEPORTING_ARGS(System::SharedPtr<StructureElement> structureElement));
    
private:

    System::WeakPtr<StructureElement> _structureElement;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> _engineAttributeCollection;
    
    System::SharedPtr<StructureAttributes> TakeAttributes(System::SharedPtr<AttributeOwnerStandard> ownerStandard, bool createIfNeed = false);
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


