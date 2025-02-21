#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/Tagged/LogicalStructure/StructureElement.h"
#include "Aspose.PDF.Cpp/Tagged/LogicalStructure/ITextElement.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class Annotation;
} // namespace Annotations
namespace Engine
{
namespace Data
{
class IPdfPrimitive;
} // namespace Data
} // namespace Engine
class Hyperlink;
namespace LogicalStructure
{
class AnnotationElement;
class AnnotElement;
class BibEntryElement;
class CodeElement;
class Element;
class ILSTextElement;
class LinkElement;
class MCRElement;
class NoteElement;
class QuoteElement;
class ReferenceElement;
class RubyElement;
class RubyRBElement;
class RubyRPElement;
class RubyRTElement;
class SpanElement;
class StructureTextState;
class StructureTypeStandard;
class WarichuElement;
class WarichuWPElement;
class WarichuWTElement;
} // namespace LogicalStructure
class PageGenerator;
namespace Tagged
{
class TaggedContent;
class TaggedContext;
} // namespace Tagged
namespace Tests
{
namespace LogicalStructure
{
class AnnotElementTests;
class BibEntryElementTests;
class CodeElementTests;
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
} // namespace Tests
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

// Structure Element Category
/// <summary>
///     Represents a base class for inline-level structure elements in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ILSElement : public Aspose::Pdf::LogicalStructure::StructureElement
{
    typedef ILSElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::StructureElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::LogicalStructure::ILSTextElement;
    friend class Aspose::Pdf::LogicalStructure::AnnotationElement;
    friend class Aspose::Pdf::LogicalStructure::ReferenceElement;
    friend class Aspose::Pdf::LogicalStructure::BibEntryElement;
    friend class Aspose::Pdf::LogicalStructure::RubyElement;
    friend class Aspose::Pdf::LogicalStructure::WarichuElement;
    
protected:

    ILSElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<StructureTypeStandard> structureType, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents a base class for inline-level text structure elements in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ILSTextElement : public Aspose::Pdf::LogicalStructure::ILSElement, public Aspose::Pdf::LogicalStructure::ITextElement
{
    typedef ILSTextElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::ILSElement BaseType;
    typedef Aspose::Pdf::LogicalStructure::ITextElement BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::LogicalStructure::SpanElement;
    friend class Aspose::Pdf::LogicalStructure::QuoteElement;
    friend class Aspose::Pdf::LogicalStructure::NoteElement;
    friend class Aspose::Pdf::LogicalStructure::CodeElement;
    
public:

    /// <summary>
    ///     Gets <see cref="T:/Aspose::Pdf::LogicalStructure::StructureTextState"></see> object for current element.
    /// </summary>
    /// <value><see cref="T:/Aspose::Pdf::LogicalStructure::StructureTextState"></see> object for current element.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::LogicalStructure::StructureTextState> get_StructureTextState() override;
    
    /// <summary>
    ///     Appends text content to current text element.
    /// </summary>
    /// <param name="text">Text content.</param>
    ASPOSE_PDF_SHARED_API void SetText(System::String text) override;
    
protected:

    ILSTextElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<StructureTypeStandard> structureType, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    virtual ASPOSE_PDF_SHARED_API ~ILSTextElement();
    
private:

    System::SharedPtr<Aspose::Pdf::LogicalStructure::StructureTextState> _structureTextState;
    
};

/// <summary>
///     Represents a base class for annotation structure elements in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS AnnotationElement : public Aspose::Pdf::LogicalStructure::ILSElement
{
    typedef AnnotationElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::ILSElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::LogicalStructure::LinkElement;
    friend class Aspose::Pdf::LogicalStructure::AnnotElement;
    friend class Aspose::Pdf::PageGenerator;
    
public:

    /// <summary>
    ///     Gets or Sets the Alternate Descriptions for annotation.
    ///     Text that shall be displayed for the annotation or, if this type of annotation does not display text, an alternate description of the annotation's contents in human-readable form.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_AlternateDescriptions() const;
    /// <summary>
    ///     Gets or Sets the Alternate Descriptions for annotation.
    ///     Text that shall be displayed for the annotation or, if this type of annotation does not display text, an alternate description of the annotation's contents in human-readable form.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AlternateDescriptions(System::String value);
    
protected:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Annotations::Annotation>>> get_Annotations() const;
    
    AnnotationElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<StructureTypeStandard> structureType, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    ASPOSE_PDF_SHARED_API void Save() override;
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Annotations::Annotation>>> _annotations;
    System::String _alternateDescriptions;
    
};

// ILSE's Children
/// <summary>
///     Represents Span structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SpanElement final : public Aspose::Pdf::LogicalStructure::ILSTextElement
{
    typedef SpanElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::ILSTextElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    SpanElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SpanElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

/// <summary>
///     Represents Quote structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS QuoteElement final : public Aspose::Pdf::LogicalStructure::ILSTextElement
{
    typedef QuoteElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::ILSTextElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    friend class Aspose::Pdf::Tests::LogicalStructure::QuoteElementTests;
    
protected:

    QuoteElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(QuoteElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

/// <summary>
///     Represents Note structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS NoteElement final : public Aspose::Pdf::LogicalStructure::ILSTextElement
{
    typedef NoteElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::ILSTextElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    NoteElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(NoteElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

/// <summary>
///     Represents Reference structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ReferenceElement final : public Aspose::Pdf::LogicalStructure::ILSElement
{
    typedef ReferenceElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::ILSElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    friend class Aspose::Pdf::Tests::LogicalStructure::ReferenceElementTests;
    
protected:

    ReferenceElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ReferenceElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

/// <summary>
///     Represents BibEntry structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS BibEntryElement final : public Aspose::Pdf::LogicalStructure::ILSElement
{
    typedef BibEntryElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::ILSElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    friend class Aspose::Pdf::Tests::LogicalStructure::BibEntryElementTests;
    
protected:

    BibEntryElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(BibEntryElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

/// <summary>
///     Represents Code structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS CodeElement final : public Aspose::Pdf::LogicalStructure::ILSTextElement
{
    typedef CodeElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::ILSTextElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    friend class Aspose::Pdf::Tests::LogicalStructure::CodeElementTests;
    
protected:

    CodeElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CodeElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

/// <summary>
///     Represents Link structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS LinkElement final : public Aspose::Pdf::LogicalStructure::AnnotationElement, public Aspose::Pdf::LogicalStructure::ITextElement
{
    typedef LinkElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::AnnotationElement BaseType;
    typedef Aspose::Pdf::LogicalStructure::ITextElement BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
public:

    /// <summary>
    ///     Gets or Sets Hyperlink for Link Element.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Hyperlink> get_Hyperlink() const;
    /// <summary>
    ///     Gets or Sets Hyperlink for Link Element.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Hyperlink(System::SharedPtr<Aspose::Pdf::Hyperlink> value);
    /// <summary>
    ///     Gets <see cref="T:/Aspose::Pdf::LogicalStructure::StructureTextState"></see> object for current element.
    /// </summary>
    /// <value><see cref="T:/Aspose::Pdf::LogicalStructure::StructureTextState"></see> object for current element.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::LogicalStructure::StructureTextState> get_StructureTextState() override;
    
    /// <summary>
    ///     Appends text content to current text element.
    /// </summary>
    /// <param name="text">Text content.</param>
    ASPOSE_PDF_SHARED_API void SetText(System::String text) override;
    
protected:

    LinkElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(LinkElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    ASPOSE_PDF_SHARED_API void PreSave() override;
    
    virtual ASPOSE_PDF_SHARED_API ~LinkElement();
    
private:

    System::SharedPtr<Aspose::Pdf::LogicalStructure::StructureTextState> _structureTextState;
    System::SharedPtr<Aspose::Pdf::Hyperlink> _hyperlink;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<MCRElement>>> _mcrElementList;
    
    void collectMcrElementList(System::SharedPtr<Element> parentElement = nullptr);
    
};

/// <summary>
///     Represents Annot structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS AnnotElement final : public Aspose::Pdf::LogicalStructure::AnnotationElement
{
    typedef AnnotElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::AnnotationElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    friend class Aspose::Pdf::Tests::LogicalStructure::AnnotElementTests;
    
protected:

    AnnotElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(AnnotElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

/// <summary>
///     Represents Ruby structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS RubyElement final : public Aspose::Pdf::LogicalStructure::ILSElement
{
    typedef RubyElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::ILSElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    friend class Aspose::Pdf::Tests::LogicalStructure::RubyElementTests;
    
protected:

    RubyElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(RubyElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

/// <summary>
///     Represents Warichu structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS WarichuElement final : public Aspose::Pdf::LogicalStructure::ILSElement
{
    typedef WarichuElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::ILSElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    friend class Aspose::Pdf::Tests::LogicalStructure::WarichuElementTests;
    
protected:

    WarichuElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(WarichuElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

// Ruby and Warichu child Elements DRAFT
/// <summary>
///     Represents a base class for children elements of the Ruby in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS RubyChildElement : public Aspose::Pdf::LogicalStructure::StructureElement
{
    typedef RubyChildElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::StructureElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::LogicalStructure::RubyRBElement;
    friend class Aspose::Pdf::LogicalStructure::RubyRTElement;
    friend class Aspose::Pdf::LogicalStructure::RubyRPElement;
    
protected:

    RubyChildElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<StructureTypeStandard> structureType, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents a base class for children elements of the Warichu in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS WarichuChildElement : public Aspose::Pdf::LogicalStructure::StructureElement
{
    typedef WarichuChildElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::StructureElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::LogicalStructure::WarichuWTElement;
    friend class Aspose::Pdf::LogicalStructure::WarichuWPElement;
    
protected:

    WarichuChildElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<StructureTypeStandard> structureType, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents RB structure element in logical structure of the Ruby.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS RubyRBElement final : public Aspose::Pdf::LogicalStructure::RubyChildElement
{
    typedef RubyRBElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::RubyChildElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    friend class Aspose::Pdf::Tests::LogicalStructure::RubyRBElementTests;
    
protected:

    RubyRBElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(RubyRBElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

/// <summary>
///     Represents RT structure element in logical structure of the Ruby.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS RubyRTElement final : public Aspose::Pdf::LogicalStructure::RubyChildElement
{
    typedef RubyRTElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::RubyChildElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    friend class Aspose::Pdf::Tests::LogicalStructure::RubyRTElementTests;
    
protected:

    RubyRTElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(RubyRTElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

/// <summary>
///     Represents RP structure element in logical structure of the Ruby.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS RubyRPElement final : public Aspose::Pdf::LogicalStructure::RubyChildElement
{
    typedef RubyRPElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::RubyChildElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    friend class Aspose::Pdf::Tests::LogicalStructure::RubyRPElementTests;
    
protected:

    RubyRPElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(RubyRPElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

/// <summary>
///     Represents WT structure element in logical structure of the Warichu.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS WarichuWTElement final : public Aspose::Pdf::LogicalStructure::WarichuChildElement
{
    typedef WarichuWTElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::WarichuChildElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    friend class Aspose::Pdf::Tests::LogicalStructure::WarichuWTElementTests;
    
protected:

    WarichuWTElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(WarichuWTElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

/// <summary>
///     Represents WP structure element in logical structure of the Warichu.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS WarichuWPElement final : public Aspose::Pdf::LogicalStructure::WarichuChildElement
{
    typedef WarichuWPElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::WarichuChildElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Tagged::TaggedContent;
    friend class Aspose::Pdf::Tests::LogicalStructure::WarichuWPElementTests;
    
protected:

    WarichuWPElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(WarichuWPElement, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity));
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


