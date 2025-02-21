#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/InteractiveFeatures/PdfAction.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
namespace Engine
{
namespace Data
{
class IPdfDictionary;
class ITrailerable;
} // namespace Data
} // namespace Engine
enum class ExtendedBoolean;
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
/// Represents a launch action that launches an application or opens or prints a document.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS LaunchAction final : public Aspose::Pdf::Annotations::PdfAction
{
    typedef LaunchAction ThisType;
    typedef Aspose::Pdf::Annotations::PdfAction BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::PdfAction;
    
public:

    /// <summary>
    /// Gets the application to be launched or the document to be opened or printed.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_File();
    /// <summary>
    /// Sets the application to be launched or the document to be opened or printed.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_File(System::String value);
    /// <summary>
    /// Gets a flag specifying whether to open the destination document in a new window (affect PDF documents only).
    /// </summary>
    ASPOSE_PDF_SHARED_API ExtendedBoolean get_NewWindow();
    /// <summary>
    /// Sets a flag specifying whether to open the destination document in a new window (affect PDF documents only).
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_NewWindow(ExtendedBoolean value);
    
    /// <summary>
    /// Creates a launch action.
    /// </summary>
    /// <param name="file">The file to be launched.</param>
    ASPOSE_PDF_SHARED_API LaunchAction(System::String file);
    /// <summary>
    /// Creates a launch action.
    /// </summary>
    /// <param name="document">Document where action will be created.</param>
    /// <param name="file">The file to be launched.</param>
    ASPOSE_PDF_SHARED_API LaunchAction(System::SharedPtr<Document> document, System::String file);
    
protected:

    LaunchAction(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> action);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(LaunchAction, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> action));
    
private:

    void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer, System::String file);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


