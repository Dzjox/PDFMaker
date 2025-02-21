#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.PDF.Cpp/Exceptions/PdfException.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace LogicalStructure
{
class Element;
class MCRElement;
class OBJRElement;
class StructTreeRootElement;
class StructureAttribute;
class StructureAttributeCollection;
class StructureAttributes;
class StructureElement;
} // namespace LogicalStructure
namespace Tagged
{
class TaggedPdfExceptionCode;
} // namespace Tagged
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Tagged {

class Details_TaggedException;
using TaggedException = System::ExceptionWrapper<Details_TaggedException>;

/// <summary>
///     Represents exception for TaggedPDF content of document.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Details_TaggedException : public Aspose::Pdf::Details_PdfException
{
    typedef Details_TaggedException ThisType;
    typedef Aspose::Pdf::Details_PdfException BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::LogicalStructure::StructureElement;
    friend class Aspose::Pdf::LogicalStructure::Element;
    friend class Aspose::Pdf::LogicalStructure::MCRElement;
    friend class Aspose::Pdf::LogicalStructure::OBJRElement;
    friend class Aspose::Pdf::LogicalStructure::StructTreeRootElement;
    friend class Aspose::Pdf::LogicalStructure::StructureAttribute;
    friend class Aspose::Pdf::LogicalStructure::StructureAttributeCollection;
    friend class Aspose::Pdf::LogicalStructure::StructureAttributes;
    friend class System::ExceptionWrapperHelper;
    template <typename T> friend class System::ExceptionWrapper;
    
protected:

    [[noreturn]] void DoThrow(const System::ExceptionPtr& self) const override;
    
    /// <summary>
    ///     Initializes a new instance of the <see cref="TaggedException"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API Details_TaggedException();
    
    ASPOSE_PDF_SHARED_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_TaggedException, CODEPORTING_ARGS());
    
    /// <summary>
    ///     Initializes a new instance of the <see cref="TaggedException"></see> class.
    /// </summary>
    /// <param name="taggedExeptionCode">The TaggedException Code</param>
    /// <param name="list">The params list</param>
    Details_TaggedException(System::SharedPtr<TaggedPdfExceptionCode> taggedExeptionCode, const System::ArrayPtr<System::String>& list);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_TaggedException, CODEPORTING_ARGS(System::SharedPtr<TaggedPdfExceptionCode> taggedExeptionCode, const System::ArrayPtr<System::String>& list));
    
    Details_TaggedException(System::String message);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Details_TaggedException, CODEPORTING_ARGS(System::String message));
    
};

class TaggedPdfExceptionCode final : public System::Object
{
    typedef TaggedPdfExceptionCode ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::SharedPtr<TaggedPdfExceptionCode> Element_AppendingImpossible;
    static System::SharedPtr<TaggedPdfExceptionCode> Element_ElementAlreadyAppended;
    static System::SharedPtr<TaggedPdfExceptionCode> RoleMap_StandardStructureTypeCanNotBeRemapped;
    static System::SharedPtr<TaggedPdfExceptionCode> RoleMap_NonStandardStructureTypeAlreadyMapped;
    static System::SharedPtr<TaggedPdfExceptionCode> Element_CouldNotBeMapped;
    static System::SharedPtr<TaggedPdfExceptionCode> StructureAttribute_AttributeCollectionIsAbsent;
    static System::SharedPtr<TaggedPdfExceptionCode> StructureAttribute_AttributeOwnerMustBe;
    static System::SharedPtr<TaggedPdfExceptionCode> StructureAttribute_DoesntAllowValue;
    static System::SharedPtr<TaggedPdfExceptionCode> StructureAttribute_ArrayMustContainXElements;
    static System::SharedPtr<TaggedPdfExceptionCode> StructureAttribute_ValueWasNotInitialized;
    static System::SharedPtr<TaggedPdfExceptionCode> StructureElement_StructureElementIdCanNotBeNullOrEmpty;
    static System::SharedPtr<TaggedPdfExceptionCode> StructureElement_StructureElementWithIdAlreadyExists;
    
    System::String GetMessage(const System::ArrayPtr<System::String>& list);
    System::String ToString() const override;
    
private:

    System::String _message;
    
    TaggedPdfExceptionCode(System::String message);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(TaggedPdfExceptionCode, CODEPORTING_ARGS(System::String message));
    System::String ToString_NonConst();
    
};

} // namespace Tagged
} // namespace Pdf
} // namespace Aspose


