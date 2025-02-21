#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <drawing/size_f.h>

#include "Aspose.PDF.Cpp/LoadOptions.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class MarginInfo;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// Contains options for loading/importing EPUB file into pdf document.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS EpubLoadOptions final : public Aspose::Pdf::LoadOptions
{
    typedef EpubLoadOptions ThisType;
    typedef Aspose::Pdf::LoadOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets output page size for import.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::Drawing::SizeF get_PageSize() const;
    
    /// <summary>
    /// Represents mode of usage of margins area - defines treatement 
    ///  of instructions (if any) of CSS of imported document
    ///  related to usage of margins.
    /// </summary>
    LoadOptions::MarginsAreaUsageModes MarginsAreaUsageMode;
    /// <summary>
    ///  ATTENTION! The feature implemented but did not put yet to public API since blocker issue in 
    ///  OSHARED layer revealed for sample document.
    ///  
    /// 
    ///  Represents mode of usage of page size during conversion.
    /// Formats (like HTML, EPUB etc), usually have float design, so, it allows to fit required
    /// pagesize. But sometimes content has specified horizontal positions or size that 
    /// does not allow put content into required page size.
    ///   In such case we can define what should be done in this case (i.e when size of content does not fit 
    /// required initial page size of result PDF document).
    /// </summary>
    LoadOptions::PageSizeAdjustmentModes PageSizeAdjustmentMode;
    
    /// <summary>
    /// Gets reference on object that represent marging info.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<MarginInfo> get_Margin() const;
    /// <summary>
    /// Gets reference on object that represent marging info.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Margin(System::SharedPtr<MarginInfo> value);
    /// <summary>
    /// Gets the custom Css to apply when opening the Epub document.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_CustomCss() const;
    /// <summary>
    /// Sets the custom Css to apply when opening the Epub document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CustomCss(System::String value);
    
    /// <summary>
    /// Creates default load options for converting EPUB file into pdf document. 
    /// Default pdf page size - A4 300dpi 2480 X 3508.
    /// </summary>
    ASPOSE_PDF_SHARED_API EpubLoadOptions();
    /// <summary>
    /// Creates load options with specified page size.
    /// </summary>
    /// <param name="pageSize">
    /// Defines pdf page width and height.
    /// </param>
    ASPOSE_PDF_SHARED_API EpubLoadOptions(System::Drawing::SizeF pageSize);
    
private:

    System::Drawing::SizeF _pageSize;
    System::SharedPtr<MarginInfo> _marginInfo;
    System::String pr_CustomCss;
    
};

} // namespace Pdf
} // namespace Aspose


