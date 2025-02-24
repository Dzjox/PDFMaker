#pragma once
// Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <Import/IHtmlExternalResolver.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace System
{
namespace IO
{
class Stream;
} // namespace IO
namespace Xml
{
class XmlUrlResolver;
} // namespace Xml
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Import {

/// @deprecated Obsolete. Use ExternalResourceResolver instead. Will be removed in 17.12 release.
/// <summary>
/// Callback object used by HTML import routine to obtain referrenced objects such as images.
/// <remarks>Using this resolver could create a vulnurability when client provided HTML file will make server software to obtain local or network file. Use with caution. It is recommended not to specify HtmlExternalResolver at all (only embedded objects will be read) or create some subclass which checks if specified uri is valid.</remarks>
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS HtmlExternalResolver : public Aspose::Slides::Import::IHtmlExternalResolver
{
    typedef HtmlExternalResolver ThisType;
    typedef Aspose::Slides::Import::IHtmlExternalResolver BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Resolves the absolute URI from the base and relative URIs.
    /// </summary>
    /// <param name="baseUri">Base URI of linking objects</param>
    /// <param name="relativeUri">Relative URI to the linked object.</param>
    /// <returns>Absolute URI or null if the relative URI cannot be resolved.</returns>
    ASPOSE_SLIDES_SHARED_API System::String ResolveUri(System::String baseUri, System::String relativeUri) override;
    /// <summary>
    /// Maps a URI to an object containing the actual resource.
    /// </summary>
    /// <param name="absoluteUri">Absolute URI to the object.</param>
    /// <returns> A <see cref="System::IO::Stream"></see> object or null if resource cannot be streamed.</returns>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<System::IO::Stream> GetEntity(System::String absoluteUri) override;
    
    ASPOSE_SLIDES_SHARED_API HtmlExternalResolver();
    
private:

    static const ASPOSE_SLIDES_LOCAL_API System::String DataUriPrefix;
    static const ASPOSE_SLIDES_LOCAL_API System::String Base64;
    System::SharedPtr<System::Xml::XmlUrlResolver> m_base;
    
};

} // namespace Import
} // namespace Slides
} // namespace Aspose


