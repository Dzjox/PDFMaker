#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class MediaClipData;
class MediaClipSection;
class MediaRendition;
} // namespace Annotations
namespace Engine
{
namespace Data
{
class IPdfDictionary;
} // namespace Data
} // namespace Engine
namespace Tests
{
namespace Annotations
{
class AnnotationTests;
} // namespace Annotations
} // namespace Tests
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class describes media clip object of rendition.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS MediaClip : public System::Object
{
    typedef MediaClip ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::MediaClipData;
    friend class Aspose::Pdf::Annotations::MediaClipSection;
    friend class Aspose::Pdf::Annotations::MediaRendition;
    friend class Aspose::Pdf::Tests::Annotations::AnnotationTests;
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> _engineDict;
    
    MediaClip(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> EngineDict);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MediaClip, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> EngineDict));
    static System::SharedPtr<MediaClip> Create(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> EngineDict);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


