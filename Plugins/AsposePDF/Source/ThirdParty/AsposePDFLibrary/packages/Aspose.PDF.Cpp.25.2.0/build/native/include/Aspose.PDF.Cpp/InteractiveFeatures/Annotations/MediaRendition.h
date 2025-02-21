#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

#include "Aspose.PDF.Cpp/InteractiveFeatures/Annotations/Rendition.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class MediaClip;
} // namespace Annotations
namespace Engine
{
namespace Data
{
class IPdfDictionary;
} // namespace Data
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class describes media rendition.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS MediaRendition final : public Aspose::Pdf::Annotations::Rendition
{
    typedef MediaRendition ThisType;
    typedef Aspose::Pdf::Annotations::Rendition BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::Rendition;
    
public:

    /// <summary>
    /// Gets media clip obkects associated with rendition.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Annotations::MediaClip> get_MediaClip();
    
protected:

    MediaRendition(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> EngineDict);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MediaRendition, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> EngineDict));
    
private:

    System::SharedPtr<Aspose::Pdf::Annotations::MediaClip> _mediaClip;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


