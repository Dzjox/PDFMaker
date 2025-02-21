#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/Generator/Hyperlink.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
enum class ExtendedBoolean;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents file hyperlink object.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS FileHyperlink final : public Aspose::Pdf::Hyperlink
{
    typedef FileHyperlink ThisType;
    typedef Aspose::Pdf::Hyperlink BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets a flag specifying whether to open the destination document in a new window (affect PDF documents only).
    /// </summary>
    ASPOSE_PDF_SHARED_API ExtendedBoolean get_NewWindow() const;
    /// <summary>
    /// Sets a flag specifying whether to open the destination document in a new window (affect PDF documents only).
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_NewWindow(ExtendedBoolean value);
    /// <summary>
    /// Gets the path to file.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Path() const;
    /// <summary>
    /// Sets the path to file.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Path(System::String value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="FileHyperlink"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API FileHyperlink();
    /// <summary>
    /// Initializes a new instance of the <see cref="FileHyperlink"></see> class.
    /// </summary>
    /// <param name="path">Path to file.</param>
    ASPOSE_PDF_SHARED_API FileHyperlink(System::String path);
    
private:

    ExtendedBoolean pr_NewWindow;
    System::String path;
    
};

} // namespace Pdf
} // namespace Aspose


