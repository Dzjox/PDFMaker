#pragma once
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/IPresentationFactory.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

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
class FileInfo;
class Stream;
} // namespace IO
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Allows to create presentation via COM interface
/// </summary>
/// <example>
/// The following example shows how to checking a Presentation Format.
/// <code>
/// System::SharedPtr<IPresentationInfo> info = PresentationFactory::get_Instance()->GetPresentationInfo(u"pres.pptx");
/// System::Console::WriteLine(System::ExplicitCast<System::Object>(info->get_LoadFormat())); // PPTX
/// System::SharedPtr<IPresentationInfo> info2 = PresentationFactory::get_Instance()->GetPresentationInfo(u"pres.ppt");
/// System::Console::WriteLine(System::ExplicitCast<System::Object>(info2->get_LoadFormat())); // PPT
/// System::SharedPtr<IPresentationInfo> info3 = PresentationFactory::get_Instance()->GetPresentationInfo(u"pres.odp");
/// System::Console::WriteLine(System::ExplicitCast<System::Object>(info3->get_LoadFormat())); // ODP
/// </code>
/// The following example shows how to getting the properties of a Presentation.
/// <code>
/// System::SharedPtr<IPresentationInfo> info = PresentationFactory::get_Instance()->GetPresentationInfo(u"pres.pptx");
/// System::SharedPtr<IDocumentProperties> props = info->ReadDocumentProperties();
/// System::Console::WriteLine(System::ExplicitCast<System::Object>(props->get_CreatedTime()));
/// System::Console::WriteLine(props->get_Subject());
/// System::Console::WriteLine(props->get_Title());
/// </code>
/// The following example shows how to updating the properties of a Presentation.
/// <code>
/// System::SharedPtr<IPresentationInfo> info = PresentationFactory::get_Instance()->GetPresentationInfo(u"pres.pptx");
/// System::SharedPtr<IDocumentProperties> props = info->ReadDocumentProperties();
/// props->set_Title(u"My title");
/// info->UpdateDocumentProperties(props);
/// </code>
/// </example>
class ASPOSE_SLIDES_SHARED_CLASS PresentationFactory : public Aspose::Slides::IPresentationFactory
{
    typedef PresentationFactory ThisType;
    typedef Aspose::Slides::IPresentationFactory BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Presentation factory static instance.
    /// Read-only <see cref="Aspose::Slides::PresentationFactory">PresentationFactory</see>.
    /// </summary>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<PresentationFactory> get_Instance();
    
    /// <summary>
    /// Creates new presentation.
    /// </summary>
    /// <returns>New presentation</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentation> CreatePresentation() override;
    /// <summary>
    /// Creates new presentation with additional load options
    /// </summary>
    /// <param name="options">Load options</param>
    /// <returns>New presentation</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentation> CreatePresentation(System::SharedPtr<ILoadOptions> options) override;
    /// <summary>
    /// Creates new PresentationInfo object from file and binds presentation to it.
    /// </summary>
    /// <param name="file">Presentation file.</param>
    /// <returns>Presentation info binded to presentation.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentationInfo> GetPresentationInfo(System::String file) override;
    /// <summary>
    /// Creates new PresentationInfo object from stream and binds presentation to it.
    /// Gets info about presentation in specified stream.
    /// </summary>
    /// <param name="stream">Presentation stream.</param>
    /// <returns>Presentation info binded to presentation.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentationInfo> GetPresentationInfo(System::SharedPtr<System::IO::Stream> stream) override;
    /// <summary>
    /// Reads an existing presentation from array
    /// </summary>
    /// <param name="data">Array to read</param>
    /// <returns>Read presentation</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentation> ReadPresentation(System::ArrayPtr<uint8_t> data) override;
    /// <summary>
    /// Reads an existing presentation from array with additional load options
    /// </summary>
    /// <param name="data">Array to read</param>
    /// <param name="options">Load options</param>
    /// <returns>Read presentation</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentation> ReadPresentation(System::ArrayPtr<uint8_t> data, System::SharedPtr<ILoadOptions> options) override;
    /// <summary>
    /// Reads an existing presentation from stream
    /// </summary>
    /// <param name="stream">Input stream to read</param>
    /// <returns>Read presentation</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentation> ReadPresentation(System::SharedPtr<System::IO::Stream> stream) override;
    /// <summary>
    /// Reads an existing presentation from stream with additional load options
    /// </summary>
    /// <param name="stream">Input stream to read</param>
    /// <param name="options">Load options</param>
    /// <returns>Read presentation</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentation> ReadPresentation(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<ILoadOptions> options) override;
    /// <summary>
    /// Reads an existing presentation from file
    /// </summary>
    /// <param name="file">File name</param>
    /// <returns>Read presentation</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentation> ReadPresentation(System::String file) override;
    /// <summary>
    /// Reads an existing presentation from stream with additional load options
    /// </summary>
    /// <param name="file">File name</param>
    /// <param name="options">Load options</param>
    /// <returns>Read presentation</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentation> ReadPresentation(System::String file, System::SharedPtr<ILoadOptions> options) override;
    /// <summary>
    /// Retrieves the raw text from the slides
    /// </summary>
    /// <param name="file">Input file</param>
    /// <param name="mode">Extraction mode</param>
    /// <returns>The instance of PresentationText containing the SlideText array representing the raw slides text</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentationText> GetPresentationText(System::String file, TextExtractionArrangingMode mode) override;
    /// <summary>
    /// Retrieves the raw text from the slides
    /// </summary>
    /// <param name="stream">Input stream</param>
    /// <param name="mode">Extraction mode</param>
    /// <returns>The instance of PresentationText containing the SlideText array representing the raw slides text</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentationText> GetPresentationText(System::SharedPtr<System::IO::Stream> stream, TextExtractionArrangingMode mode) override;
    /// <summary>
    /// Retrieves the raw text from the slides
    /// </summary>
    /// <param name="stream">Input stream</param>
    /// <param name="mode">Extraction mode</param>
    /// <param name="options">Load options</param>
    /// <returns>The instance of PresentationText containing the SlideText array representing the raw slides text</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<IPresentationText> GetPresentationText(System::SharedPtr<System::IO::Stream> stream, TextExtractionArrangingMode mode, System::SharedPtr<ILoadOptions> options) override;
    
private:

    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<PresentationFactory> s_factory;
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<IPresentationInfo> GetPresentationInfo(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<System::IO::FileInfo> fileInfo);
    ASPOSE_SLIDES_LOCAL_API bool TryReadFileInfo(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<System::IO::FileInfo>& fileInfo);
    
};

} // namespace Slides
} // namespace Aspose


