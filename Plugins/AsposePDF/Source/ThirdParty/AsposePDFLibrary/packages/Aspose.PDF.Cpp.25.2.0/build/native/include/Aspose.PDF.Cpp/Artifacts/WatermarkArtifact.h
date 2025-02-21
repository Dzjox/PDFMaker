#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

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
/// Class describes watermark artifact. This may be used to 
/// </summary>
class ASPOSE_PDF_SHARED_CLASS WatermarkArtifact : public Aspose::Pdf::Artifact
{
    typedef WatermarkArtifact ThisType;
    typedef Aspose::Pdf::Artifact BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::ArtifactCollection;
    
public:

    /// <summary>
    /// Creates instance of Watermark artifact.
    /// </summary>
    ASPOSE_PDF_SHARED_API WatermarkArtifact();
    
protected:

    WatermarkArtifact(System::SharedPtr<ArtifactCollection> owner, System::SharedPtr<Artifact::ArtifactContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> _contents, System::SharedPtr<Engine::Data::IPdfDictionary> _properties);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(WatermarkArtifact, CODEPORTING_ARGS(System::SharedPtr<ArtifactCollection> owner, System::SharedPtr<Artifact::ArtifactContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> _contents, System::SharedPtr<Engine::Data::IPdfDictionary> _properties));
    ASPOSE_PDF_SHARED_API System::SharedPtr<Artifact> CreateInstance() override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<Artifact> Clone() override;
    ASPOSE_PDF_SHARED_API void WriteSpecialInfo(System::SharedPtr<XForm> form) override;
    
private:

    static const System::String name;
    static const System::String value;
    static const System::String size;
    static const System::String cR;
    static const System::String cG;
    static const System::String cB;
    static const System::String WatermarkSettings;
    static const System::String SourceFile;
    static const System::String CurrentImage;
    static const System::String type;
    
    static const System::String& DefaultFontName();
    
    float DefaultFontSize;
    
    void Init();
    
};

} // namespace Pdf
} // namespace Aspose


