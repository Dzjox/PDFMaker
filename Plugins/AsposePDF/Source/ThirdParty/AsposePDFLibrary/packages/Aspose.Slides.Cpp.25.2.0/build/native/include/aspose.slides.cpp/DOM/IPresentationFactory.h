#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ILoadOptions;
class IPresentation;
class IPresentationInfo;
class IPresentationText;
enum class TextExtractionArrangingMode;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace IO
{
class Stream;
} // namespace IO
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Allows to create presentation via COM interface
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IPresentationFactory : public virtual System::Object
{
    typedef IPresentationFactory ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates new presentation.
    /// </summary>
    /// <returns>New presentation</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPresentation> CreatePresentation() = 0;
    /// <summary>
    /// Creates new presentation with additional load options
    /// </summary>
    /// <param name="options">Load options</param>
    /// <returns>New presentation</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPresentation> CreatePresentation(System::SharedPtr<ILoadOptions> options) = 0;
    /// <summary>
    /// Gets info about presentation in specified file.
    /// </summary>
    /// <param name="file">Presentation file.</param>
    /// <returns>Presentation info</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPresentationInfo> GetPresentationInfo(System::String file) = 0;
    /// <summary>
    /// Gets info about presentation in specified stream.
    /// </summary>
    /// <param name="stream">Presentation stream.</param>
    /// <returns>Presentation info.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPresentationInfo> GetPresentationInfo(System::SharedPtr<System::IO::Stream> stream) = 0;
    /// <summary>
    /// Reads an existing presentation from array
    /// </summary>
    /// <param name="data">Array to read</param>
    /// <returns>Read presentation</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPresentation> ReadPresentation(System::ArrayPtr<uint8_t> data) = 0;
    /// <summary>
    /// Reads an existing presentation from array with additional load options
    /// </summary>
    /// <param name="data">Array to read</param>
    /// <param name="options">Load options</param>
    /// <returns>Read presentation</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPresentation> ReadPresentation(System::ArrayPtr<uint8_t> data, System::SharedPtr<ILoadOptions> options) = 0;
    /// <summary>
    /// Reads an existing presentation from stream
    /// </summary>
    /// <param name="stream">Input stream to read</param>
    /// <returns>Read presentation</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPresentation> ReadPresentation(System::SharedPtr<System::IO::Stream> stream) = 0;
    /// <summary>
    /// Reads an existing presentation from stream with additional load options
    /// </summary>
    /// <param name="stream">Input stream to read</param>
    /// <param name="options">Load options</param>
    /// <returns>Read presentation</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPresentation> ReadPresentation(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<ILoadOptions> options) = 0;
    /// <summary>
    /// Reads an existing presentation from file
    /// </summary>
    /// <param name="file">File name</param>
    /// <returns>Read presentation</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPresentation> ReadPresentation(System::String file) = 0;
    /// <summary>
    /// Reads an existing presentation from stream with additional load options
    /// </summary>
    /// <param name="file">File name</param>
    /// <param name="options">Load options</param>
    /// <returns>Read presentation</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPresentation> ReadPresentation(System::String file, System::SharedPtr<ILoadOptions> options) = 0;
    /// <summary>
    /// Retrieves the raw text from the slides
    /// </summary>
    /// <param name="file">Input file</param>
    /// <param name="mode">Extraction mode</param>
    /// <returns>The instance of PresentationText containing the SlideText array representing the raw slides text</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPresentationText> GetPresentationText(System::String file, TextExtractionArrangingMode mode) = 0;
    /// <summary>
    /// Retrieves the raw text from the slides
    /// </summary>
    /// <param name="stream">Input stream</param>
    /// <param name="mode">Extraction mode</param>
    /// <returns>The instance of PresentationText containing the SlideText array representing the raw slides text</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPresentationText> GetPresentationText(System::SharedPtr<System::IO::Stream> stream, TextExtractionArrangingMode mode) = 0;
    /// <summary>
    /// Retrieves the raw text from the slides
    /// </summary>
    /// <param name="stream">Input stream</param>
    /// <param name="mode">Extraction mode</param>
    /// <param name="options">Load options</param>
    /// <returns>The instance of PresentationText containing the SlideText array representing the raw slides text</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IPresentationText> GetPresentationText(System::SharedPtr<System::IO::Stream> stream, TextExtractionArrangingMode mode, System::SharedPtr<ILoadOptions> options) = 0;
    
};

} // namespace Slides
} // namespace Aspose


