#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class SoundAnnotation;
enum class SoundEncoding;
class SoundSampleData;
} // namespace Annotations
namespace Engine
{
namespace Data
{
class IPdfDataStream;
class IPdfObject;
} // namespace Data
} // namespace Engine
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace IO
{
class Stream;
} // namespace IO
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Represents a sound data defining the sound to be played when the annotation is activated.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SoundData final : public System::Object
{
    typedef SoundData ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::SoundAnnotation;
    
public:

    /// <summary>
    /// Gets the sampling rate, in samples per second.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Rate();
    /// <summary>
    /// Sets the sampling rate, in samples per second.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Rate(int32_t value);
    /// <summary>
    /// Gets the number of sound channels.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Channels();
    /// <summary>
    /// Sets the number of sound channels.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Channels(int32_t value);
    /// <summary>
    /// Gets the number of bits per sample value per channel.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Bits();
    /// <summary>
    /// Sets the number of bits per sample value per channel.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Bits(int32_t value);
    /// <summary>
    /// Gets stream of the sound to be played when the annotation is activated.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> get_Contents();
    /// <summary>
    /// Gets the encoding format for the sample data.
    /// </summary>
    ASPOSE_PDF_SHARED_API SoundEncoding get_Encoding();
    /// <summary>
    /// Sets the encoding format for the sample data.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Encoding(SoundEncoding value);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> get_EngineStm() const;
    
    SoundData(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> engineStm);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SoundData, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> engineStm));
    
    /// <summary>
    /// 
    /// </summary>
    /// <param name="parent"></param>
    /// <param name="soundFile"></param>
    SoundData(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> parent, System::String soundFile);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SoundData, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> parent, System::String soundFile));
    
    /// <summary>
    /// 
    /// </summary>
    /// <param name="parent"></param>
    /// <param name="soundFile"></param>
    /// <param name="soundSampleData"></param>
    SoundData(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> parent, System::String soundFile, System::SharedPtr<SoundSampleData> soundSampleData);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SoundData, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> parent, System::String soundFile, System::SharedPtr<SoundSampleData> soundSampleData));
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDataStream> _engineStm;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


