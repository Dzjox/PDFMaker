#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Import
{
class IExternalResourceResolver;
} // namespace Import
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
/// Represents an SVG image.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ISvgImage : public virtual System::Object
{
    typedef ISvgImage ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns SVG content.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_SvgContent() = 0;
    /// <summary>
    /// Returns SVG data.
    /// Read-only <see cref="uint8_t"></see>[].
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::ArrayPtr<uint8_t> get_SvgData() = 0;
    /// <summary>
    /// Return callback interface used to resolve external resources during SVG documents import.
    /// Read-only <see cref="Aspose::Slides::Import::IExternalResourceResolver">Import::IExternalResourceResolver</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<Import::IExternalResourceResolver> get_ExternalResourceResolver() = 0;
    /// <summary>
    /// Returns base URI of the specified SVG. Used to resolve relative links.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_BaseUri() = 0;
    
    /// <summary>
    /// Saves the SVG image as an EMF file.
    /// </summary>
    /// <param name="stream">Target stream</param>
    /// <exception cref="System::ArgumentNullException">Target stream is <b>null</b></exception>
    /// <example>
    /// The following example demonstrates how to save the SVG image into a metafile.
    /// <code>
    /// // Creates the new SVG image
    /// System::SharedPtr<ISvgImage> svgImage = System::MakeObject<SvgImage>(System::IO::File::ReadAllText(u"content.svg"));
    /// 
    /// // Saves the SVG image as a metafille
    /// auto fileStream = System::IO::File::OpenWrite(u"SvgAsEmf.emf");
    /// svgImage->WriteAsEmf(fileStream);
    /// </code>
    /// This sample demonstrates how to add the SVG image as a metafile to the presentation image collection.
    /// <code>
    /// System::SharedPtr<Presentation> pres = System::MakeObject<Presentation>();
    /// 
    /// // Creates the new SVG image
    /// System::SharedPtr<ISvgImage> svgImage = System::MakeObject<SvgImage>(System::IO::File::ReadAllText(u"content.svg"));
    /// auto memStream = System::MakeObject<System::IO::MemoryStream>();
    /// 
    /// // Saves the SVG image as a metafille
    /// svgImage->WriteAsEmf(memStream);
    /// // Adds metafile to the image collection
    /// pres->get_Images()->AddImage(memStream->ToArray());
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void WriteAsEmf(System::SharedPtr<System::IO::Stream> stream) = 0;
    
};

} // namespace Slides
} // namespace Aspose


