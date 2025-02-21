#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/Tagged/LogicalStructure/StructureElement.h"
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
class ArtElement;
class BlockQuoteElement;
class CaptionElement;
class DivElement;
class DocumentElement;
class IndexElement;
class NonStructElement;
class PartElement;
class PrivateElement;
class SectElement;
class StructureTypeStandard;
class TOCElement;
class TOCIElement;
} // namespace LogicalStructure
namespace Tagged
{
class TaggedContent;
class TaggedContext;
} // namespace Tagged
namespace Tests
{
namespace LogicalStructure
{
class BlockQuoteElementTests;
class CaptionElementTests;
class IndexElementTests;
class NonStructElementTests;
class PrivateElementTests;
} // namespace LogicalStructure
} // namespace Tests
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

// Structure Element Category
/// <summary>
///     Represents a base class for grouping structure elements in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS GroupingElement : public Aspose::Pdf::LogicalStructure::StructureElement
{
    typedef GroupingElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::StructureElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::LogicalStructure::DocumentElement;
    friend class Aspose::Pdf::LogicalStructure::PartElement;
    friend class Aspose::Pdf::LogicalStructure::ArtElement;
    friend class Aspose::Pdf::LogicalStructure::SectElement;
    friend class Aspose::Pdf::LogicalStructure::DivElement;
    friend class Aspose::Pdf::LogicalStructure::BlockQuoteElement;
    friend class Aspose::Pdf::LogicalStructure::CaptionElement;
    friend class Aspose::Pdf::LogicalStructure::TOCElement;
    friend class Aspose::Pdf::LogicalStructure::TOCIElement;
    friend class Aspose::Pdf::LogicalStructure::IndexElement;
    friend class Aspose::Pdf::LogicalStructure::NonStructElement;
    friend class Aspose::Pdf::LogicalStructure::PrivateElement;
    
protected:

    GroupingElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<StructureTypeStandard> structureType, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

// Grouping Element's Children
/// <summary>
///     Represents Document structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS DocumentElement final : public Aspose::Pdf::LogicalStructure::GroupingElement
{
    typedef DocumentElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::GroupingElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    DocumentElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(DocumentElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

/// <summary>
///     Represents Part structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PartElement final : public Aspose::Pdf::LogicalStructure::GroupingElement
{
    typedef PartElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::GroupingElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    PartElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PartElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

/// <summary>
///     Represents Art structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ArtElement final : public Aspose::Pdf::LogicalStructure::GroupingElement
{
    typedef ArtElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::GroupingElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    ArtElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ArtElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

/// <summary>
///     Represents Sect structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SectElement final : public Aspose::Pdf::LogicalStructure::GroupingElement
{
    typedef SectElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::GroupingElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    SectElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SectElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

/// <summary>
///     Represents Div structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS DivElement final : public Aspose::Pdf::LogicalStructure::GroupingElement
{
    typedef DivElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::GroupingElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    DivElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(DivElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

/// <summary>
///     Represents BlockQuote structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS BlockQuoteElement final : public Aspose::Pdf::LogicalStructure::GroupingElement
{
    typedef BlockQuoteElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::GroupingElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    friend class Aspose::Pdf::Tests::LogicalStructure::BlockQuoteElementTests;
    
protected:

    BlockQuoteElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(BlockQuoteElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

/// <summary>
/// Represents Caption structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS CaptionElement final : public Aspose::Pdf::LogicalStructure::GroupingElement
{
    typedef CaptionElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::GroupingElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    friend class Aspose::Pdf::Tests::LogicalStructure::CaptionElementTests;
    
protected:

    CaptionElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CaptionElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

/// <summary>
///     Represents TOC structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TOCElement final : public Aspose::Pdf::LogicalStructure::GroupingElement
{
    typedef TOCElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::GroupingElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    TOCElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TOCElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

/// <summary>
///     Represents TOCI structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TOCIElement final : public Aspose::Pdf::LogicalStructure::GroupingElement
{
    typedef TOCIElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::GroupingElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    TOCIElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TOCIElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

/// <summary>
///     Represents Index structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS IndexElement final : public Aspose::Pdf::LogicalStructure::GroupingElement
{
    typedef IndexElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::GroupingElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    friend class Aspose::Pdf::Tests::LogicalStructure::IndexElementTests;
    
protected:

    IndexElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(IndexElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

/// <summary>
///     Represents NonStruct structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS NonStructElement final : public Aspose::Pdf::LogicalStructure::GroupingElement
{
    typedef NonStructElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::GroupingElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    friend class Aspose::Pdf::Tests::LogicalStructure::NonStructElementTests;
    
protected:

    NonStructElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(NonStructElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

/// <summary>
///     Represents Private structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PrivateElement final : public Aspose::Pdf::LogicalStructure::GroupingElement
{
    typedef PrivateElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::GroupingElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    friend class Aspose::Pdf::Tests::LogicalStructure::PrivateElementTests;
    
protected:

    PrivateElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PrivateElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


