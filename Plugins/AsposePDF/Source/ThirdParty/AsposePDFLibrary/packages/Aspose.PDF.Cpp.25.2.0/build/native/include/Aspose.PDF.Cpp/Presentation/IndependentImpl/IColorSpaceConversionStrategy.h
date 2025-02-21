#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Page;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// Interface for color space conversion strategies.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS IColorSpaceConversionStrategy : public virtual System::Object
{
    typedef IColorSpaceConversionStrategy ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Converts the page of document.
    /// </summary>
    /// <param name="page">The page of document.</param>
    virtual void Convert(System::SharedPtr<Page> page) = 0;
    
};

} // namespace Pdf
} // namespace Aspose


