#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
} // namespace Generic
} // namespace Collections
} // namespace System

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

/// <summary>
///     Represents Categories of Standard Structure Types.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS StructureTypeCategory final : public System::Object
{
    typedef StructureTypeCategory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    ///     Grouping elements group other elements into sequences or hierarchies but hold no content directly and have no direct effect on layout.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeCategory>& GroupingElements();
    /// <summary>
    ///     Block-level structure elements (BLSEs) describe the overall layout of content on the page, proceeding in the block-progression direction.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeCategory>& BLSEs();
    /// <summary>
    ///     Inline-level structure elements (ILSEs) describe the layout of content within a BLSE, proceeding in the inline-progression direction.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeCategory>& ILSEs();
    /// <summary>
    ///     Illustration elements are compact sequences of content, in page content order, that are considered to be unitary objects with respect to page layout. An illustration can be treated as either a BLSE or an ILSE.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeCategory>& IllustrationElements();
    
    static ASPOSE_PDF_SHARED_API System::SharedPtr<StructureTypeCategory> to_StructureTypeCategory(System::String name);
    
    /// <summary>
    ///     Returns a string that represents the current object.
    /// </summary>
    /// <returns>String that represents the current object.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    virtual ASPOSE_PDF_SHARED_API ~StructureTypeCategory();
    
private:

    System::String _name;
    System::String _fullName;
    
    static System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<StructureTypeCategory>>>& _instance();
    
    StructureTypeCategory(System::String name, System::String fullName);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(StructureTypeCategory, CODEPORTING_ARGS(System::String name, System::String fullName));
    System::String ToString_NonConst();
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


