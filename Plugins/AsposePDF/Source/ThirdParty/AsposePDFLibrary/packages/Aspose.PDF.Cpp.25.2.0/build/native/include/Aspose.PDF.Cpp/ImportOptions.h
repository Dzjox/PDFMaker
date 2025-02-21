#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class CgmImportOptions;
enum class ImportFormat;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// ImportOptions type hold level of abstraction on individual import options.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ImportOptions : public System::Object
{
    typedef ImportOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::CgmImportOptions;
    
public:

    /// <summary>
    /// Import format.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::ImportFormat get_ImportFormat() const;
    
protected:

    /// <summary>
    /// Constructor
    /// </summary>
    /// <param name="importFormat">Import format.</param>
    ASPOSE_PDF_SHARED_API ImportOptions(Aspose::Pdf::ImportFormat importFormat);
    
private:

    Aspose::Pdf::ImportFormat importFormat;
    
};

} // namespace Pdf
} // namespace Aspose


