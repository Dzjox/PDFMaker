#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/InteractiveFeatures/PdfAction.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
enum class PredefinedAction;
} // namespace Annotations
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
/// Represents named actions that PDF viewer applications are expected to support.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS NamedAction final : public Aspose::Pdf::Annotations::PdfAction
{
    typedef NamedAction ThisType;
    typedef Aspose::Pdf::Annotations::PdfAction BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::PdfAction;
    
public:

    /// <summary>
    /// Gets the action to be performed.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Name();
    /// <summary>
    /// Sets the action to be performed.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Name(System::String value);
    
    /// <summary>
    /// Constructor for Named Action class.
    /// </summary>
    /// <param name="action">Action for which this object is created.</param>
    ASPOSE_PDF_SHARED_API NamedAction(PredefinedAction action);
    
protected:

    /// <summary>
    /// Creates an instance of <see cref="NamedAction"></see> class.
    /// </summary>
    /// <param name="action">The dictionary of action.</param>
    NamedAction(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> action);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(NamedAction, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> action));
    /// <summary>
    /// Replaces trailer in strings in the action.
    /// </summary>
    /// <param name="trailerable">The trailerable.</param>
    ASPOSE_PDF_SHARED_API void ReplaceTrailer(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable) override;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


