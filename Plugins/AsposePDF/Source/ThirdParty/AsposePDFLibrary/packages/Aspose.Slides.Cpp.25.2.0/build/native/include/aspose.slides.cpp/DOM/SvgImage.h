#pragma once
// Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <DOM/ISvgImage.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace DOM
{
namespace Util
{
class SvgMsStyleConverter;
} // namespace Util
} // namespace DOM
class ImageCollection;
namespace Import
{
class IExternalResourceResolver;
class SvgResourceResolver;
} // namespace Import
class IPictureFrame;
class PictureFrame;
namespace PptxSerialization
{
namespace PartParser
{
class SvgBlipPPTXSerialization;
} // namespace PartParser
class PptxSerializationContext;
} // namespace PptxSerialization
class ZoomObjectLayout;
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
class ASPOSE_SLIDES_SHARED_CLASS SvgImage : public Aspose::Slides::ISvgImage
{
    typedef SvgImage ThisType;
    typedef Aspose::Slides::ISvgImage BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::ZoomObjectLayout;
    friend class Aspose::Slides::PptxSerialization::PartParser::SvgBlipPPTXSerialization;
    friend class Aspose::Slides::DOM::Util::SvgMsStyleConverter;
    friend class Aspose::Slides::PictureFrame;
    friend class Aspose::Slides::ImageCollection;
    friend class Aspose::Slides::PptxSerialization::PptxSerializationContext;
    /// @endcond
    
public:

    /// <summary>
    /// Returns SVG data.
    /// Read-only <see cref="uint8_t"></see>[].
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::ArrayPtr<uint8_t> get_SvgData() override;
    /// <summary>
    /// Return callback interface used to resolve external resources during Svg documents import.
    /// Read-only <see cref="Aspose::Slides::Import::IExternalResourceResolver">Import::IExternalResourceResolver</see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Import::IExternalResourceResolver> get_ExternalResourceResolver() override;
    /// <summary>
    /// Returns base URI of the specified Svg. Used to resolve relative links.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_BaseUri() override;
    /// <summary>
    /// Returns SVG content.
    /// Read-only <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_SvgContent() override;
    
    /// <summary>
    /// Creates new SvgImage object. 
    /// </summary>
    /// <param name="data">Svg data.</param>
    ASPOSE_SLIDES_SHARED_API SvgImage(System::ArrayPtr<uint8_t> data);
    /// <summary>
    /// Creates new SvgImage object. 
    /// </summary>
    /// <param name="svgContent">Svg content.</param>
    ASPOSE_SLIDES_SHARED_API SvgImage(System::String svgContent);
    /// <summary>
    /// Creates new SvgImage object. 
    /// </summary>
    /// <param name="stream">Svg stream.</param>
    ASPOSE_SLIDES_SHARED_API SvgImage(System::SharedPtr<System::IO::Stream> stream);
    /// <summary>
    /// Creates new SvgImage object. 
    /// </summary>
    /// <param name="data">Svg data.</param>
    /// <param name="externalResResolver">A callback object used to fetch external objects. If this parameter is null all external objects will be ignored.</param>
    /// <param name="baseUri">Base URI of the specified Svg. Used to resolve relative links.</param>
    ASPOSE_SLIDES_SHARED_API SvgImage(System::ArrayPtr<uint8_t> data, System::SharedPtr<Import::IExternalResourceResolver> externalResResolver, System::String baseUri);
    /// <summary>
    /// Creates new SvgImage object. 
    /// </summary>
    /// <param name="svgContent">Svg content.</param>
    /// <param name="externalResResolver">A callback object used to fetch external objects. If this parameter is null all external objects will be ignored.</param>
    /// <param name="baseUri">Base URI of the specified Svg. Used to resolve relative links.</param>
    ASPOSE_SLIDES_SHARED_API SvgImage(System::String svgContent, System::SharedPtr<Import::IExternalResourceResolver> externalResResolver, System::String baseUri);
    /// <summary>
    /// Creates new SvgImage object. 
    /// </summary>
    /// <param name="stream">Svg stream.</param>
    /// <param name="externalResResolver">A callback object used to fetch external objects. If this parameter is null all external objects will be ignored.</param>
    /// <param name="baseUri">Base URI of the specified Svg. Used to resolve relative links.</param>
    ASPOSE_SLIDES_SHARED_API SvgImage(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Import::IExternalResourceResolver> externalResResolver, System::String baseUri);
    
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
    ASPOSE_SLIDES_SHARED_API void WriteAsEmf(System::SharedPtr<System::IO::Stream> stream) override;
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API uint32_t get_CRC();
    ASPOSE_SLIDES_LOCAL_API bool get_HasMsStyle();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<Aspose::Slides::Import::SvgResourceResolver> get_SvgResourceResolver();
    
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<ISvgImage> GetMsFormattedSvg(System::SharedPtr<IPictureFrame> shape);
    static ASPOSE_SLIDES_LOCAL_API System::String ApplyForeignObject(System::String svgAreaBody);
    /// @endcond
    
    virtual ASPOSE_SLIDES_SHARED_API ~SvgImage();
    
private:

    System::ArrayPtr<uint8_t> m_svgData;
    System::SharedPtr<Aspose::Slides::Import::SvgResourceResolver> m_svgResourceResolver;
    System::SharedPtr<Import::IExternalResourceResolver> m_externalResResolver;
    System::String m_baseUri;
    uint32_t m_CRC;
    
    ASPOSE_SLIDES_LOCAL_API System::ArrayPtr<uint8_t> LoadSvgData(System::String content);
    
};

} // namespace Slides
} // namespace Aspose


