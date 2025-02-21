#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <drawing/size_f.h>

#include "Aspose.PDF.Cpp/LoadOptions.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
namespace Tests
{
namespace CGM
{
class CgmImportTests;
} // namespace CGM
} // namespace Tests
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// Contains options for loading/importing CGM file into pdf document.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS CgmLoadOptions final : public Aspose::Pdf::LoadOptions
{
    typedef CgmLoadOptions ThisType;
    typedef Aspose::Pdf::LoadOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Tests::CGM::CgmImportTests;
    
public:

    /// <summary>
    /// Gets output page size for import.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::Drawing::SizeF get_PageSize() const;
    
    /// <summary>
    /// Creates default load options for converting CGM file into pdf document. 
    /// Default pdf page size - A4 300dpi 2480 X 3508.
    /// </summary>
    ASPOSE_PDF_SHARED_API CgmLoadOptions();
    /// <summary>
    /// Creates load options with defined <see cref="pageSize"></see>.
    /// </summary>
    /// <param name="pageSize">
    /// Defines pdf page width and height.
    /// </param>
    ASPOSE_PDF_SHARED_API CgmLoadOptions(System::Drawing::SizeF pageSize);
    
protected:

    bool UseExternalPdfRenderer;
    
private:

    System::Drawing::SizeF _pageSize;
    
};

} // namespace Pdf
} // namespace Aspose


