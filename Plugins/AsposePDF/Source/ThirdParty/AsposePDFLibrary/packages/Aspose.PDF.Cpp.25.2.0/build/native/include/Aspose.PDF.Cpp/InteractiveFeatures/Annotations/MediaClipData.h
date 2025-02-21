#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

#include "Aspose.PDF.Cpp/InteractiveFeatures/Annotations/MediaClip.h"
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

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class describes media clip data.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS MediaClipData : public Aspose::Pdf::Annotations::MediaClip
{
    typedef MediaClipData ThisType;
    typedef Aspose::Pdf::Annotations::MediaClip BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::MediaClip;
    
public:

    /// <summary>
    /// Return file specification which contains actual media data .
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<FileSpecification> get_Data();
    
protected:

    MediaClipData(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> EngineDict);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MediaClipData, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> EngineDict));
    
private:

    System::SharedPtr<FileSpecification> _fileSpec;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


