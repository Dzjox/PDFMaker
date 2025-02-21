#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

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
/// Represents options for loading/importing of .mht-file into pdf document.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS MhtLoadOptions final : public Aspose::Pdf::LoadOptions
{
    typedef MhtLoadOptions ThisType;
    typedef Aspose::Pdf::LoadOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets document page info
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Aspose::Pdf::PageInfo>& get_PageInfo() const;
    
    /// <summary>
    /// Creates load options for converting html into pdf document with empty base path.
    /// </summary>
    ASPOSE_PDF_SHARED_API MhtLoadOptions();
    
protected:

    /// <summary>
    /// Gets the flag that controls visibility of fields borders (button, text, combobox).
    /// </summary>
    bool get_ShowFieldsBorders() const;
    /// <summary>
    /// Sets the flag that controls visibility of fields borders (button, text, combobox).
    /// </summary>
    void set_ShowFieldsBorders(bool value);
    
    /// <summary>
    /// if it's necessary to save parts into some folder for testing
    /// </summary>
    System::String TargetFolderIfAny;
    
private:

    /// <summary>
    /// Stores the value of flag that controls visibility of fields borders (button, text, combobox).
    /// </summary>
    bool _showFieldsBorders;
    System::SharedPtr<Aspose::Pdf::PageInfo> pr_PageInfo;
    
};

} // namespace Pdf
} // namespace Aspose


