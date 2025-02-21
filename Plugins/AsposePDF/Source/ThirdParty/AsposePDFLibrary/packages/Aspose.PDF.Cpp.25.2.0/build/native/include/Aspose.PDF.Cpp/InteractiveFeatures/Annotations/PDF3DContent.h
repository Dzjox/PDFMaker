#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class PDF3DStream;
} // namespace Annotations
namespace Engine
{
namespace Data
{
class PdfStream;
} // namespace Data
} // namespace Engine
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace IO
{
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class PDF3DContent.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PDF3DContent : public System::Object
{
    typedef PDF3DContent ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::PDF3DStream;
    
public:

    /// <summary>
    /// Gets the extension .
    /// </summary>
    /// <value>The extension.</value>
    ASPOSE_PDF_SHARED_API System::String get_Extension() const;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PDF3DContent"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API PDF3DContent();
    /// <summary>
    /// Initializes a new instance of the <see cref="PDF3DContent"></see> class.
    /// </summary>
    /// <param name="filename">The filename.</param>
    /// <exception cref="ArgumentException">Unknown 3D Artwork type</exception>
    ASPOSE_PDF_SHARED_API PDF3DContent(System::String filename);
    
    /// <summary>
    /// Loads 3D content with the specified filename.
    /// </summary>
    /// <param name="filename">The filename.</param>
    /// <exception cref="ArgumentException">Unknown 3D content type</exception>
    ASPOSE_PDF_SHARED_API void Load(System::String filename);
    /// <summary>
    /// Loads 3D content with the specified filename as PRC format.
    /// </summary>
    /// <param name="filename">The filename.</param>
    ASPOSE_PDF_SHARED_API void LoadAsPRC(System::String filename);
    /// <summary>
    /// Loads 3D content with the specified filename as U3D format.
    /// </summary>
    /// <param name="filename">The filename.</param>
    ASPOSE_PDF_SHARED_API void LoadAsU3D(System::String filename);
    /// <summary>
    /// Loads 3D content from stream as PRC format.
    /// </summary>
    /// <param name="stream">The 3D content stream.</param>
    ASPOSE_PDF_SHARED_API void LoadAsPRC(System::SharedPtr<System::IO::Stream> stream);
    /// <summary>
    /// Loads 3D content from stream as U3D format.
    /// </summary>
    /// <param name="stream">The 3D content stream.</param>
    ASPOSE_PDF_SHARED_API void LoadAsU3D(System::SharedPtr<System::IO::Stream> stream);
    /// <summary>
    /// Loads 3D content from byte array as PRC format.
    /// </summary>
    /// <param name="stream">The stream.</param>
    ASPOSE_PDF_SHARED_API void LoadAsPRC(System::ArrayPtr<uint8_t> stream);
    /// <summary>
    /// Loads 3D content from byte array as U3D format.
    /// </summary>
    /// <param name="stream">The stream.</param>
    ASPOSE_PDF_SHARED_API void LoadAsU3D(System::ArrayPtr<uint8_t> stream);
    /// <summary>
    /// Saves 3D content to file.
    /// </summary>
    /// <param name="filename">The file name.</param>
    /// <exception cref="ArgumentException">3DArtwork content format is PRC or U3D.</exception>
    ASPOSE_PDF_SHARED_API void SaveToFile(System::String filename);
    /// <summary>
    /// Gets 3D content as stream.
    /// </summary>
    /// <returns>Stream.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> GetAsStream();
    /// <summary>
    /// Gets 3D content as byte array.
    /// </summary>
    /// <returns>System.Byte[].</returns>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<uint8_t> GetAsByteArray();
    
protected:

    System::WeakPtr<PDF3DStream> Pdf3DStream;
    System::ArrayPtr<uint8_t> Data;
    
    PDF3DContent(System::SharedPtr<Aspose::Pdf::Engine::Data::PdfStream> stream);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PDF3DContent, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::PdfStream> stream));
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::Data::PdfStream> _stream;
    System::String _extension;
    
    static System::ArrayPtr<uint8_t> ReadFully(System::SharedPtr<System::IO::Stream> input);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


