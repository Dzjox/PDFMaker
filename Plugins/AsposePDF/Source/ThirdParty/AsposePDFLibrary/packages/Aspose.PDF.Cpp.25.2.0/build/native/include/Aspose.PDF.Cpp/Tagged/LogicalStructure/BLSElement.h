#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/Tagged/LogicalStructure/StructureElement.h"
#include "Aspose.PDF.Cpp/Tagged/LogicalStructure/ITextElement.h"
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
class BLSTextElement;
class HeaderElement;
class ListElement;
class ListLblElement;
class ListLBodyElement;
class ListLIElement;
class MCRElement;
class ParagraphElement;
class StructureTextState;
class StructureTypeStandard;
class TableElement;
} // namespace LogicalStructure
namespace Tagged
{
class TaggedContent;
class TaggedContext;
} // namespace Tagged
namespace Text
{
class TextFragment;
} // namespace Text
} // namespace Pdf
} // namespace Aspose
namespace System
{
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

// Structure Element Category
/// <summary>
///     Represents a base class for block-level structure elements in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS BLSElement : public Aspose::Pdf::LogicalStructure::StructureElement
{
    typedef BLSElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::StructureElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::LogicalStructure::BLSTextElement;
    friend class Aspose::Pdf::LogicalStructure::ListElement;
    friend class Aspose::Pdf::LogicalStructure::TableElement;
    
protected:

    BLSElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<StructureTypeStandard> structureType, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity, System::SharedPtr<AttributeOwnerStandard> attributeOwner = nullptr);
    
};

/// <summary>
///     Represents a base class for block-level text structure elements in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS BLSTextElement : public Aspose::Pdf::LogicalStructure::BLSElement, public Aspose::Pdf::LogicalStructure::ITextElement
{
    typedef BLSTextElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::BLSElement BaseType;
    typedef Aspose::Pdf::LogicalStructure::ITextElement BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::LogicalStructure::ParagraphElement;
    friend class Aspose::Pdf::LogicalStructure::HeaderElement;
    friend class Aspose::Pdf::LogicalStructure::MCRElement;
    
public:

    /// <summary>
    ///     Gets <see cref="T:/Aspose::Pdf::LogicalStructure::StructureTextState"></see> object for current element.
    /// </summary>
    /// <value><see cref="T:/Aspose::Pdf::LogicalStructure::StructureTextState"></see> object for current element.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::LogicalStructure::StructureTextState> get_StructureTextState() override;
    
    /// <summary>
    ///     Appends text content to current text element.
    /// </summary>
    /// <param name="text">Text content</param>
    ASPOSE_PDF_SHARED_API void SetText(System::String text) override;
    
protected:

    System::SharedPtr<Aspose::Pdf::Text::TextFragment> get_TextFragment() const;
    
    BLSTextElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<StructureTypeStandard> structureType, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    virtual ASPOSE_PDF_SHARED_API ~BLSTextElement();
    
private:

    System::SharedPtr<Aspose::Pdf::LogicalStructure::StructureTextState> _structureTextState;
    System::SharedPtr<Aspose::Pdf::Text::TextFragment> _textFragment;
    
};

// BLSE's Children
/// <summary>
///     Represents Paragraph structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ParagraphElement final : public Aspose::Pdf::LogicalStructure::BLSTextElement
{
    typedef ParagraphElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::BLSTextElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    ParagraphElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ParagraphElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

/// <summary>
///     Represents Header structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS HeaderElement final : public Aspose::Pdf::LogicalStructure::BLSTextElement
{
    typedef HeaderElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::BLSTextElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    HeaderElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(HeaderElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
    HeaderElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, int32_t level, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(HeaderElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, int32_t level, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

/// <summary>
///     Represents List structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ListElement final : public Aspose::Pdf::LogicalStructure::BLSElement
{
    typedef ListElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::BLSElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    ListElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ListElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

// List child Elements DRAFT
/// <summary>
///     Represents a base class for children elements of the List in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ListChildElement : public Aspose::Pdf::LogicalStructure::StructureElement
{
    typedef ListChildElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::StructureElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::LogicalStructure::ListLIElement;
    friend class Aspose::Pdf::LogicalStructure::ListLblElement;
    friend class Aspose::Pdf::LogicalStructure::ListLBodyElement;
    
protected:

    ListChildElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<StructureTypeStandard> structureType, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents LI structure element in logical structure of the list.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ListLIElement final : public Aspose::Pdf::LogicalStructure::ListChildElement
{
    typedef ListLIElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::ListChildElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    ListLIElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ListLIElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

/// <summary>
///     Represents Lbl structure element in logical structure of the list.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ListLblElement final : public Aspose::Pdf::LogicalStructure::ListChildElement
{
    typedef ListLblElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::ListChildElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    ListLblElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ListLblElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

/// <summary>
///     Represents LBody structure element in logical structure of the list.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ListLBodyElement final : public Aspose::Pdf::LogicalStructure::ListChildElement
{
    typedef ListLBodyElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::ListChildElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    ListLBodyElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ListLBodyElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


