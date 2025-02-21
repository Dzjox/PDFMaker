#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Engine
{
namespace Data
{
class IPdfDictionary;
} // namespace Data
} // namespace Engine
class FileSpecification;
} // namespace Pdf
} // namespace Aspose
namespace System
{
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents encrypted payload in file specification.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS EncryptedPayload final : public System::Object
{
    typedef EncryptedPayload ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets type.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Type();
    /// <summary>
    /// Gets subtype.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Subtype();
    /// <summary>
    /// Gets version number.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Version();
    
    /// <summary>
    /// Initialize Encrypted payload instance.
    /// </summary>
    /// <param name="fileSpecification">The file specification used for initialization.</param>
    ASPOSE_PDF_SHARED_API EncryptedPayload(System::SharedPtr<FileSpecification> fileSpecification);
    
private:

    System::SharedPtr<Engine::Data::IPdfDictionary> _dict;
    
};

} // namespace Pdf
} // namespace Aspose


