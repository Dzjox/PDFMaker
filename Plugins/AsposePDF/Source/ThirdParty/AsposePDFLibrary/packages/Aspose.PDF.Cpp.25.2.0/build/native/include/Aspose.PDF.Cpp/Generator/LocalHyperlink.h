#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/Generator/Hyperlink.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class BaseParagraph;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents local hyperlink object.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS LocalHyperlink final : public Aspose::Pdf::Hyperlink
{
    typedef LocalHyperlink ThisType;
    typedef Aspose::Pdf::Hyperlink BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the target paragraph.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<BaseParagraph> get_Target() const;
    /// <summary>
    /// Sets the target paragraph.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Target(System::SharedPtr<BaseParagraph> value);
    /// <summary>
    /// Gets the target page number.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_TargetPageNumber() const;
    /// <summary>
    /// Sets the target page number.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TargetPageNumber(int32_t value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="LocalHyperlink"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API LocalHyperlink();
    /// <summary>
    /// Initializes a new instance of the <see cref="LocalHyperlink"></see> class.
    /// </summary>
    /// <param name="target">Target paragraph.</param>
    ASPOSE_PDF_SHARED_API LocalHyperlink(System::SharedPtr<BaseParagraph> target);
    
private:

    System::SharedPtr<BaseParagraph> target;
    int32_t targetPageNumber;
    
};

} // namespace Pdf
} // namespace Aspose


