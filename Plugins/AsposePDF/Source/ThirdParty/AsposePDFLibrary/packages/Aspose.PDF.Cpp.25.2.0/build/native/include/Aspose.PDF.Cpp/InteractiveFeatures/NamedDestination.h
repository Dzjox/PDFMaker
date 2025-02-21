#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/InteractiveFeatures/IAppointment.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class DestinationFactory;
class GoToAction;
class LinkAnnotation;
} // namespace Annotations
class Document;
namespace Engine
{
namespace Data
{
class IPdfName;
class IPdfPrimitive;
class IPdfString;
} // namespace Data
} // namespace Engine
namespace Facades
{
class PdfFileEditor;
} // namespace Facades
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Instead of being defined directly with the explicit syntax, a destination may be referred to indirectly by means of a name object or a byte string.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS NamedDestination final : public Aspose::Pdf::Annotations::IAppointment
{
    typedef NamedDestination ThisType;
    typedef Aspose::Pdf::Annotations::IAppointment BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::PdfFileEditor;
    friend class Aspose::Pdf::Annotations::LinkAnnotation;
    friend class Aspose::Pdf::Annotations::GoToAction;
    friend class Aspose::Pdf::Annotations::DestinationFactory;
    
public:

    /// <summary>
    /// Gets the name of named destination.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Name();
    
    /// <summary>
    /// Create named destination.
    /// </summary>
    /// <param name="doc">Document where named destination should be created.</param>
    /// <param name="name">Name to which destination refers.</param>
    ASPOSE_PDF_SHARED_API NamedDestination(System::SharedPtr<Document> doc, System::String name);
    
    /// <summary>
    /// Converts destination to string value.
    /// </summary>
    /// <returns>String value.</returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> get_EngineObject();
    
    NamedDestination(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString> engineStr);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(NamedDestination, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString> engineStr));
    
    NamedDestination(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfName> engineName);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(NamedDestination, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfName> engineName));
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfString> _engineStr;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfName> _engineName;
    
    System::String ToString_NonConst();
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


