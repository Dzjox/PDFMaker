#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"
#include "Aspose.PDF.Cpp/Artifacts/Artifact.h"

namespace Aspose
{
namespace Pdf
{
class ArtifactCollection;
namespace Engine
{
namespace Data
{
class IPdfDictionary;
} // namespace Data
} // namespace Engine
class Operator;
class XForm;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class List;
} // namespace Generic
} // namespace Collections
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class describes Heaader artifact. This artifacgt may be used to set heading of the page.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS HeaderArtifact : public Aspose::Pdf::Artifact
{
    typedef HeaderArtifact ThisType;
    typedef Aspose::Pdf::Artifact BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::ArtifactCollection;
    
public:

    /// <summary>
    /// Creates Header Artifact instance. 
    /// </summary>
    ASPOSE_PDF_SHARED_API HeaderArtifact();
    
protected:

    HeaderArtifact(System::SharedPtr<ArtifactCollection> owner, System::SharedPtr<Artifact::ArtifactContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> _contents, System::SharedPtr<Engine::Data::IPdfDictionary> _properties);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(HeaderArtifact, CODEPORTING_ARGS(System::SharedPtr<ArtifactCollection> owner, System::SharedPtr<Artifact::ArtifactContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> _contents, System::SharedPtr<Engine::Data::IPdfDictionary> _properties));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Artifact> CreateInstance() override;
    /// <summary>
    /// Writes the PieceInfo dictionary into the form.
    /// </summary>
    /// <param name="form">The XForm.</param>
    ASPOSE_PDF_SHARED_API void WriteSpecialInfo(System::SharedPtr<XForm> form) override;
    
};

} // namespace Pdf
} // namespace Aspose


