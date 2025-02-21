#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"
#include "Aspose.PDF.Cpp/Artifacts/Artifact.h"

namespace Aspose
{
namespace Pdf
{
class ArtifactCollection;
class Color;
namespace Engine
{
namespace Data
{
class IPdfDictionary;
} // namespace Data
} // namespace Engine
class Operator;
class OperatorCollection;
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
namespace IO
{
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class descibes background artifact. This artifact allows to set background of the page.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS BackgroundArtifact : public Aspose::Pdf::Artifact
{
    typedef BackgroundArtifact ThisType;
    typedef Aspose::Pdf::Artifact BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::ArtifactCollection;
    
public:

    /// <summary>
    /// Gets bacground color of background artifact
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_BackgroundColor() const;
    /// <summary>
    /// Sets bacground color of background artifact
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BackgroundColor(System::SharedPtr<Color> value);
    /// <summary>
    /// Gets bacground image of background artifact
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> get_BackgroundImage() const;
    /// <summary>
    /// Sets bacground image of background artifact
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BackgroundImage(System::SharedPtr<System::IO::Stream> value);
    
    /// <summary>
    /// Initializes BackgroundArtifact object. 
    /// </summary>
    ASPOSE_PDF_SHARED_API BackgroundArtifact();
    
protected:

    BackgroundArtifact(System::SharedPtr<ArtifactCollection> owner, System::SharedPtr<Artifact::ArtifactContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> _contents, System::SharedPtr<Engine::Data::IPdfDictionary> _properties);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(BackgroundArtifact, CODEPORTING_ARGS(System::SharedPtr<ArtifactCollection> owner, System::SharedPtr<Artifact::ArtifactContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> _contents, System::SharedPtr<Engine::Data::IPdfDictionary> _properties));
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> GetOperators() override;
    ASPOSE_PDF_SHARED_API void ModifyContents(System::SharedPtr<OperatorCollection> contents) override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<Artifact> CreateInstance() override;
    ASPOSE_PDF_SHARED_API System::SharedPtr<Artifact> Clone() override;
    
private:

    System::SharedPtr<Color> backgroundColor;
    System::SharedPtr<System::IO::Stream> backgroundImage;
    
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> ShowBackground();
    
};

} // namespace Pdf
} // namespace Aspose


