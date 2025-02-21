#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/InteractiveFeatures/GoToAction.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class ExplicitDestination;
class IAppointment;
class PdfAction;
} // namespace Annotations
namespace Engine
{
namespace Data
{
class IPdfDictionary;
} // namespace Data
} // namespace Engine
enum class ExtendedBoolean;
class FileSpecification;
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
/// Represents a remote go-to action that is similar to an ordinary go-to action but jumps to a destination in another PDF file instead of the current file.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS GoToRemoteAction final : public Aspose::Pdf::Annotations::GoToAction
{
    typedef GoToRemoteAction ThisType;
    typedef Aspose::Pdf::Annotations::GoToAction BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::PdfAction;
    
public:

    /// <summary>
    /// Gets the specification of the file in which the destination is located.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<FileSpecification> get_File();
    /// <summary>
    /// Sets the specification of the file in which the destination is located.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_File(System::SharedPtr<FileSpecification> value);
    /// <summary>
    /// Gets a flag specifying whether to open the destination document in a new window.
    /// </summary>
    ASPOSE_PDF_SHARED_API ExtendedBoolean get_NewWindow();
    /// <summary>
    /// Sets a flag specifying whether to open the destination document in a new window.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_NewWindow(ExtendedBoolean value);
    /// <summary>
    /// Gets the destination to jump to.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<IAppointment> get_Destination() override;
    /// <summary>
    /// Sets the destination to jump to.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Destination(System::SharedPtr<IAppointment> value) override;
    
    /// <summary>
    /// Initializes GoToRemoteAction object.
    /// </summary>
    /// <param name="remotePdf">Destination PDF document.</param>
    /// <param name="remotePageNumber">Destination page number.</param>
    ASPOSE_PDF_SHARED_API GoToRemoteAction(System::String remotePdf, int32_t remotePageNumber);
    /// <summary>
    /// Initializes GoToRemoteAction object.
    /// </summary>
    /// <param name="remotePdf">Destination PDF document. </param>
    /// <param name="destination">Destination in the  PDF document.</param>
    ASPOSE_PDF_SHARED_API GoToRemoteAction(System::String remotePdf, System::SharedPtr<ExplicitDestination> destination);
    
protected:

    GoToRemoteAction(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> action);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(GoToRemoteAction, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> action));
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


