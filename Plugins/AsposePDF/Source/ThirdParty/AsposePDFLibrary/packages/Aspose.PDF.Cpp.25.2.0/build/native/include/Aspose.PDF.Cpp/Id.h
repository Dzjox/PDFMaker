#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
namespace Engine
{
namespace Data
{
class IPdfArray;
} // namespace Data
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents file identifier structure.
/// </summary>
/// <example>
/// </example>
class ASPOSE_PDF_SHARED_CLASS Id : public System::Object
{
    typedef Id ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Document;
    
public:

    /// <summary>
    /// Permanent identifier based on the contents of the document at the time it was originally created.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Original() const;
    /// <summary>
    /// Changing identifier based on the document's contents at the time it was last updated.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Modified() const;
    
protected:

    Id(System::SharedPtr<Engine::Data::IPdfArray> pdfArray);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Id, CODEPORTING_ARGS(System::SharedPtr<Engine::Data::IPdfArray> pdfArray));
    
private:

    System::String _original;
    System::String _modified;
    
};

} // namespace Pdf
} // namespace Aspose


