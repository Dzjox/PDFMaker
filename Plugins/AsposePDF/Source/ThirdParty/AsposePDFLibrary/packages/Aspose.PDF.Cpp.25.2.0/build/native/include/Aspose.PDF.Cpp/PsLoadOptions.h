#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.PDF.Cpp/LoadOptions.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents options for loading/importing of .mht-file into pdf document.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PsLoadOptions final : public Aspose::Pdf::LoadOptions
{
    typedef PsLoadOptions ThisType;
    typedef Aspose::Pdf::LoadOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets fonts folders paths.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::String> get_FontsFolders() const;
    /// <summary>
    /// Sets fonts folders paths.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FontsFolders(System::ArrayPtr<System::String> value);
    
    /// <summary>
    /// Creates load options for converting PostScript into pdf document with empty base path.
    /// </summary>
    ASPOSE_PDF_SHARED_API PsLoadOptions();
    
private:

    System::ArrayPtr<System::String> _fontsFolders;
    
};

} // namespace Pdf
} // namespace Aspose


