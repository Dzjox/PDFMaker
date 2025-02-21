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
/// Describes footer artifact. This may be used to set footer of the page.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS FooterArtifact : public Aspose::Pdf::Artifact
{
    typedef FooterArtifact ThisType;
    typedef Aspose::Pdf::Artifact BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::ArtifactCollection;
    
public:

    /// <summary>
    /// Creates Footer Artifact instance.
    /// </summary>
    ASPOSE_PDF_SHARED_API FooterArtifact();
    
protected:

    FooterArtifact(System::SharedPtr<ArtifactCollection> owner, System::SharedPtr<Artifact::ArtifactContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> _contents, System::SharedPtr<Engine::Data::IPdfDictionary> _properties);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FooterArtifact, CODEPORTING_ARGS(System::SharedPtr<ArtifactCollection> owner, System::SharedPtr<Artifact::ArtifactContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> _contents, System::SharedPtr<Engine::Data::IPdfDictionary> _properties));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Artifact> CreateInstance() override;
    
};

} // namespace Pdf
} // namespace Aspose


