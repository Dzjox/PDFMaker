#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/InteractiveFeatures/PdfAction.h"
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
class ITrailerable;
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
/// Represents a URI action causes a URI to be resolved.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS GoToURIAction final : public Aspose::Pdf::Annotations::PdfAction
{
    typedef GoToURIAction ThisType;
    typedef Aspose::Pdf::Annotations::PdfAction BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::PdfAction;
    
public:

    /// <summary>
    /// Gets the uniform resource identifier to resolve.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_URI();
    /// <summary>
    /// Sets the uniform resource identifier to resolve.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_URI(System::String value);
    
    /// <summary>
    /// Creates an instance of <see cref="GoToURIAction"></see> class.
    /// </summary>
    /// <param name="uri">The uniform resource identifier to resolve.</param>
    ASPOSE_PDF_SHARED_API GoToURIAction(System::String uri);
    
protected:

    GoToURIAction(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> action);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(GoToURIAction, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> action));
    /// <summary>
    /// Initializes the action. The method is called on the Action property of the receiving object.
    /// </summary>
    /// <param name="trailerable">The trailerable.</param>
    ASPOSE_PDF_SHARED_API void ReplaceTrailer(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable) override;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


