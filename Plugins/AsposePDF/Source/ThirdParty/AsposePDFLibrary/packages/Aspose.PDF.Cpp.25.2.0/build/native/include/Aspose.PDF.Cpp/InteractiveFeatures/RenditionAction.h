#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

#include "Aspose.PDF.Cpp/InteractiveFeatures/PdfAction.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class Rendition;
enum class RenditionOperation;
class ScreenAnnotation;
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
namespace System
{
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// A rendition action that controls the playing of multimedia content.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS RenditionAction final : public Aspose::Pdf::Annotations::PdfAction
{
    typedef RenditionAction ThisType;
    typedef Aspose::Pdf::Annotations::PdfAction BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::PdfAction;
    friend class Aspose::Pdf::Annotations::ScreenAnnotation;
    
public:

    /// <summary>
    /// Gets rendition associated with the action.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Annotations::Rendition> get_Rendition();
    /// <summary>
    /// The operation to perform when the action is triggered.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Annotations::RenditionOperation get_RenditionOperation();
    /// <summary>
    /// The operation to perform when the action is triggered.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RenditionOperation(Aspose::Pdf::Annotations::RenditionOperation value);
    /// <summary>
    /// Gets JavaScript code associated with the action.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_JavaScript();
    /// <summary>
    /// Sets JavaScript code associated with the action.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_JavaScript(System::String value);
    
protected:

    /// <summary>
    /// Creates the rendition action.
    /// </summary>
    /// <param name="mediaFile">The path to multimedia file.</param>
    /// <param name="screen">The ScreenAnnotation object the RenditionAction will be bound with.</param>
    RenditionAction(System::String mediaFile, System::SharedPtr<ScreenAnnotation> screen);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(RenditionAction, CODEPORTING_ARGS(System::String mediaFile, System::SharedPtr<ScreenAnnotation> screen));
    
    RenditionAction(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> action);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(RenditionAction, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> action));
    
private:

    System::SharedPtr<Aspose::Pdf::Annotations::Rendition> _rendition;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


