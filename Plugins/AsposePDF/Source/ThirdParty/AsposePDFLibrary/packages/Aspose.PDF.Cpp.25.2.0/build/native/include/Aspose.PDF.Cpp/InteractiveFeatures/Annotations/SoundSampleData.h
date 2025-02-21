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
class SoundData;
enum class SoundSampleDataEncodingFormat;
} // namespace Annotations
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
/// Represents additional entries specific to a sound object (Section 9.2 PDF1-7)
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SoundSampleData : public System::Object
{
    typedef SoundSampleData ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::SoundData;
    
public:

    /// <summary>
    /// Default value for SamplingRate. 
    /// </summary>
    static const ASPOSE_PDF_SHARED_API int64_t DefaultSamplingRate;
    /// <summary>
    /// Default value for Channels parameter.
    /// </summary>
    static const ASPOSE_PDF_SHARED_API int32_t DefaultOfSoundChannels;
    /// <summary>
    /// Default value for BitsPerchannel parameter. 
    /// </summary>
    static const ASPOSE_PDF_SHARED_API int32_t DefaultOfBitsPerChannel;
    /// <summary>
    /// Default value for encoding format.
    /// </summary>
    static const ASPOSE_PDF_SHARED_API SoundSampleDataEncodingFormat DefaultEncodingFormat;
    
    /// <summary>
    /// Gets the sampling rate.
    /// </summary>
    ASPOSE_PDF_SHARED_API int64_t get_SamplingRate() const;
    /// <summary>
    /// Sets the sampling rate.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SamplingRate(int64_t value);
    /// <summary>
    /// Gets the number of sound channels.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_NumberOfSoundChannels() const;
    /// <summary>
    /// Sets the number of sound channels.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_NumberOfSoundChannels(int32_t value);
    /// <summary>
    /// Gets the number of bits per sample value per channel.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_BitsPerChannel() const;
    /// <summary>
    /// Sets the number of bits per sample value per channel.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BitsPerChannel(int32_t value);
    /// <summary>
    /// Gets the encoding format.
    /// </summary>
    ASPOSE_PDF_SHARED_API SoundSampleDataEncodingFormat get_EncodingFormat() const;
    /// <summary>
    /// Sets the encoding format.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_EncodingFormat(SoundSampleDataEncodingFormat value);
    
    /// <summary>
    /// Initializes new sound sample data.
    /// </summary>
    /// <param name="samplingRate">The sampling rate.</param>
    ASPOSE_PDF_SHARED_API SoundSampleData(int64_t samplingRate);
    /// <summary>
    /// Initializes new sound sample data.
    /// </summary>
    /// <param name="samplingRate">The sampling rate.</param>
    /// <param name="numberOfSoundChannels">The number of sound channels.</param>
    ASPOSE_PDF_SHARED_API SoundSampleData(int64_t samplingRate, int32_t numberOfSoundChannels);
    /// <summary>
    /// Initializes new sound sample data.
    /// </summary>
    /// <param name="samplingRate">The sampling rate.</param>
    /// <param name="numberOfSoundChannels">The number of sound channels.</param>
    /// <param name="bitsPerChannel">The number of bits per sample value per channel.</param>
    ASPOSE_PDF_SHARED_API SoundSampleData(int64_t samplingRate, int32_t numberOfSoundChannels, int32_t bitsPerChannel);
    /// <summary>
    /// Initializes new sound sample data.
    /// </summary>
    /// <param name="samplingRate">The sampling rate.</param>
    /// <param name="numberOfSoundChannels">The number of sound channels.</param>
    /// <param name="bitsPerChannel">The number of bits per sample value per channel.</param>
    /// <param name="soundSampleDataEncodingFormat">The encoding format for the sample data.</param>         
    ASPOSE_PDF_SHARED_API SoundSampleData(int64_t samplingRate, int32_t numberOfSoundChannels, int32_t bitsPerChannel, SoundSampleDataEncodingFormat soundSampleDataEncodingFormat);
    
protected:

    /// <summary>
    /// Returns string representation of encoding format parameter.
    /// </summary>
    /// <returns>Encoding parameter as a string.</returns>
    System::String GetEncodingFormat();
    /// <summary>
    /// Reads the sample rate value from wav header.
    /// </summary>
    /// <param name="soundFile">The wav input file.</param>
    /// <returns>If successfully found - sample rate value; otherwise, default value 11025.</returns>
    static int64_t ReadSamplingRate(System::String soundFile);
    
private:

    /// <summary>
    /// The sampling rate, in samples per second. Default value: 11025. Required.
    /// </summary>
    int64_t _samplingRate;
    /// <summary>
    /// The number of sound channels. Default value: 1. Optional.
    /// </summary>
    int32_t _numberOfSoundChannels;
    /// <summary>
    /// The number of bits per sample value per channel. Default value: 8. Optional.
    /// </summary>
    int32_t _bitsPerChannel;
    /// <summary>
    /// The encoding format for the sample data. Default value: Raw. Optional.
    /// </summary>
    SoundSampleDataEncodingFormat _encodingFormat;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


