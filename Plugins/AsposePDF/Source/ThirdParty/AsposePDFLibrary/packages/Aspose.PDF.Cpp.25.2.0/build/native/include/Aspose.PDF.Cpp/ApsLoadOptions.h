#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/LoadOptions.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class ApsConverter;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class describes aps load options.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ApsLoadOptions : public Aspose::Pdf::LoadOptions
{
    typedef ApsLoadOptions ThisType;
    typedef Aspose::Pdf::LoadOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::ApsConverter;
    
public:

    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_PDF_SHARED_API ApsLoadOptions();
    
protected:

    bool UseClassicMode;
    
};

} // namespace Pdf
} // namespace Aspose


