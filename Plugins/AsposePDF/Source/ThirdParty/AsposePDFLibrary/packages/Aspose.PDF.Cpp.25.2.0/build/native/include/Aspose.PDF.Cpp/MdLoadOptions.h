#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/LoadOptions.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class PageInfo;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// Load options for Markdown format conversion.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS MdLoadOptions : public Aspose::Pdf::LoadOptions
{
    typedef MdLoadOptions ThisType;
    typedef Aspose::Pdf::LoadOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets document page info
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Aspose::Pdf::PageInfo>& get_PageInfo() const;
    /// <summary>
    /// Sets document page info
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PageInfo(System::SharedPtr<Aspose::Pdf::PageInfo> value);
    /// <summary>
    /// Gets the flag that specifies that @page rules defined in css will override values defined in PageInfo.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsPriorityCssPageRule() const;
    /// <summary>
    /// Sets the flag that specifies that @page rules defined in css will override values defined in PageInfo.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsPriorityCssPageRule(bool value);
    
    /// <summary>
    /// Creates load options for converting markdown into pdf document.
    /// </summary>
    ASPOSE_PDF_SHARED_API MdLoadOptions();
    
private:

    System::SharedPtr<Aspose::Pdf::PageInfo> pr_PageInfo;
    bool pr_IsPriorityCssPageRule;
    
};

} // namespace Pdf
} // namespace Aspose


