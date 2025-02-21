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
class MediaRendition;
class RenditionAction;
enum class RenditionType;
class SelectorRendition;
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
namespace System
{
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class which describes rendition object of RendtionAnnotation.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Rendition : public System::Object
{
    typedef Rendition ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::MediaRendition;
    friend class Aspose::Pdf::Annotations::SelectorRendition;
    friend class Aspose::Pdf::Annotations::RenditionAction;
    friend class Aspose::Pdf::Tests::Annotations::AnnotationTests;
    
public:

    /// <summary>
    /// Text string specifying the name of the rendition for use in a user interface and for name tree lookup by JavaScript actions.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Name();
    /// <summary>
    /// Text string specifying the name of the rendition for use in a user interface and for name tree lookup by JavaScript actions.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Name(System::String value);
    /// <summary>
    /// Gets rendition type.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Annotations::RenditionType get_RenditionType();
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> _engineDict;
    
    Rendition(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> EngineDict);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Rendition, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> EngineDict));
    static System::SharedPtr<Rendition> Create(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> EngineDict);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


