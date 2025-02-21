#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class FileAttachmentAnnotation;
} // namespace Annotations
namespace Engine
{
namespace Data
{
class IPdfDictionary;
} // namespace Data
namespace IO
{
namespace ConvertStrategies
{
class PdfA3ConvertStrategy;
} // namespace ConvertStrategies
} // namespace IO
} // namespace Engine
class FileSpecification;
class FileSpecificationComparer;
namespace Tests
{
class RegressionTests_v23_07;
} // namespace Tests
} // namespace Pdf
} // namespace Aspose
namespace System
{
class DateTime;
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Defines an embedded file parameter dictionary that shall contain additional file-specific information.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS FileParams final : public System::Object
{
    typedef FileParams ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::FileSpecification;
    friend class Aspose::Pdf::Annotations::FileAttachmentAnnotation;
    friend class Aspose::Pdf::FileSpecificationComparer;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfA3ConvertStrategy;
    friend class Aspose::Pdf::Tests::RegressionTests_v23_07;
    
public:

    /// <summary>
    /// The size of the uncompressed embedded file, in bytes.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Size();
    /// <summary>
    /// The date and time when the embedded file was created.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::DateTime get_CreationDate();
    /// <summary>
    /// The date and time when the embedded file was created.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CreationDate(System::DateTime value);
    /// <summary>
    /// The date and time when the embedded file was last modified.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::DateTime get_ModDate();
    /// <summary>
    /// The date and time when the embedded file was last modified.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ModDate(System::DateTime value);
    /// <summary>
    /// A 16-byte string that is the checksum of the bytes of the uncompressed embedded file. 
    /// The checksum is calculated by applying the standard MD5 message-digest algorithm 
    /// to the bytes of the embedded file stream.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_CheckSum();
    
    /// <summary>
    /// Constructor for FileParams class.
    /// </summary>
    /// <param name="spec">File specification.</param>
    ASPOSE_PDF_SHARED_API FileParams(System::SharedPtr<FileSpecification> spec);
    
protected:

    System::SharedPtr<Engine::Data::IPdfDictionary> EngineDict;
    
    /// <summary>
    /// The size of the uncompressed embedded file, in bytes.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Size(int32_t value);
    
    FileParams(System::SharedPtr<Engine::Data::IPdfDictionary> parms);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FileParams, CODEPORTING_ARGS(System::SharedPtr<Engine::Data::IPdfDictionary> parms));
    
};

} // namespace Pdf
} // namespace Aspose


