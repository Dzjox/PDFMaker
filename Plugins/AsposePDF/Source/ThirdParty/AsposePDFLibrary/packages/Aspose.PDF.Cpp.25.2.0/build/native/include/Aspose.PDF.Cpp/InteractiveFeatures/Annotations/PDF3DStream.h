#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class PDF3DAnnotation;
class PDF3DArtwork;
class PDF3DContent;
class PDF3DViewArray;
} // namespace Annotations
class Document;
namespace Engine
{
namespace Data
{
class IPdfObject;
class IPdfPrimitive;
class ITrailerable;
class PdfStream;
} // namespace Data
namespace Filters
{
class IDecoder;
class IEncoder;
} // namespace Filters
} // namespace Engine
namespace Tests
{
class RegressionTests_v19_12;
} // namespace Tests
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class IDictionary;
} // namespace Generic
} // namespace Collections
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class PDF3DStream.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PDF3DStream : public System::Object
{
    typedef PDF3DStream ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::PDF3DAnnotation;
    friend class Aspose::Pdf::Annotations::PDF3DArtwork;
    friend class Aspose::Pdf::Annotations::PDF3DViewArray;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_12;
    
public:

    /// <summary>
    /// Gets the content.
    /// </summary>
    /// <value>The content.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DContent> get_Content() const;
    /// <summary>
    /// Sets the content.
    /// </summary>
    /// <value>The content.</value>
    ASPOSE_PDF_SHARED_API void set_Content(System::SharedPtr<PDF3DContent> value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PDF3DStream"></see> class.
    /// </summary>
    /// <param name="doc">The document.</param>
    /// <param name="pdf3DArtwork">The 3D Artwork.</param>
    ASPOSE_PDF_SHARED_API PDF3DStream(System::SharedPtr<Document> doc, System::SharedPtr<PDF3DArtwork> pdf3DArtwork);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::PdfStream> PdfStream;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> StreamPdfObject;
    System::SharedPtr<System::Collections::Generic::IDictionary<int32_t, int32_t>> StreamAnnotationLinksDictionary;
    System::SharedPtr<PDF3DViewArray> ViewArray;
    System::WeakPtr<PDF3DArtwork> Pdf3DArtwork;
    int32_t ObjectID;
    
    PDF3DStream(System::SharedPtr<Document> doc, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> stream);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PDF3DStream, CODEPORTING_ARGS(System::SharedPtr<Document> doc, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> stream));
    
    virtual ASPOSE_PDF_SHARED_API ~PDF3DStream();
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> _tr;
    System::SharedPtr<Aspose::Pdf::Engine::Filters::IDecoder> _decoder;
    System::SharedPtr<Aspose::Pdf::Engine::Filters::IEncoder> _encoder;
    System::String _extension;
    System::SharedPtr<PDF3DContent> _pdf3DContent;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


