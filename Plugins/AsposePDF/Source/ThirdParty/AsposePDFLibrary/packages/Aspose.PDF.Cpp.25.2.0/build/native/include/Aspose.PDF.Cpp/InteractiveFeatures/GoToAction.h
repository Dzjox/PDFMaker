#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/InteractiveFeatures/PdfAction.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class ExplicitDestination;
enum class ExplicitDestinationType;
class GoToRemoteAction;
class IAppointment;
} // namespace Annotations
class Document;
namespace Engine
{
namespace Data
{
class IPdfDictionary;
} // namespace Data
} // namespace Engine
class Page;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Represents a go-to action that changes the view to a specified destination (page, location, and magnification factor).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS GoToAction : public Aspose::Pdf::Annotations::PdfAction
{
    typedef GoToAction ThisType;
    typedef Aspose::Pdf::Annotations::PdfAction BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::PdfAction;
    friend class Aspose::Pdf::Annotations::GoToRemoteAction;
    
public:

    /// <summary>
    /// Gets the destination to jump to.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<IAppointment> get_Destination();
    /// <summary>
    /// Sets the destination to jump to.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_Destination(System::SharedPtr<IAppointment> value);
    
    /// @deprecated Use constructor with Aspose.Pdf.Page parameter instead of this one. Reason: if to use this constructor there is the problem with the document when to resave it in Adobe Acrobat.
    /// <summary>
    /// Constructor for GoToAction class.
    /// </summary>
    /// <param name="page">The destination page number to jump to.</param>
    ASPOSE_PDF_SHARED_API GoToAction(int32_t page);
    /// <summary>
    /// Constructor for GoToAction class.
    /// </summary>
    /// <param name="page">Aspose.Pdf.Page destination object to jump to.</param>
    ASPOSE_PDF_SHARED_API GoToAction(System::SharedPtr<Page> page);
    /// <summary>
    /// Constructor for GoToAction class. 
    /// </summary>
    /// <param name="page">Destination page.</param>
    /// <param name="type">Destination type.</param>
    /// <param name="values">Action parameters.</param>
    ASPOSE_PDF_SHARED_API GoToAction(System::SharedPtr<Page> page, ExplicitDestinationType type, const System::ArrayPtr<double>& values);
    /// <summary>
    /// Constructor.
    /// </summary>
    /// <param name="destination">Explicit destination.</param>
    ASPOSE_PDF_SHARED_API GoToAction(System::SharedPtr<ExplicitDestination> destination);
    /// @deprecated Use constructors with parameters.
    /// <summary>
    /// Constructor.
    /// </summary>
    ASPOSE_PDF_SHARED_API GoToAction();
    /// <summary>
    /// Action which linked with Named Destination.
    /// </summary>
    /// <param name="doc">Document where action will be created.</param>
    /// <param name="name">Name of the destination.</param>
    ASPOSE_PDF_SHARED_API GoToAction(System::SharedPtr<Document> doc, System::String name);
    
protected:

    GoToAction(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> action);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(GoToAction, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> action));
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


