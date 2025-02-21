#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.PDF.Cpp/InteractiveFeatures/Annotations/Rendition.h"
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
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class describes selector rendition.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SelectorRendition final : public Aspose::Pdf::Annotations::Rendition
{
    typedef SelectorRendition ThisType;
    typedef Aspose::Pdf::Annotations::Rendition BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::Rendition;
    
public:

    /// <summary>
    /// Gets array of renditions.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::SharedPtr<Rendition>> get_Renditions();
    
protected:

    SelectorRendition(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> EngineDict);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SelectorRendition, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> EngineDict));
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


