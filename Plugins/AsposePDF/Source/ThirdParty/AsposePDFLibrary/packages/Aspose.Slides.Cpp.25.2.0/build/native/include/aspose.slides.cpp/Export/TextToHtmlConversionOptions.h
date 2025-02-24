#pragma once
// Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <Import/ITextToHtmlConversionOptions.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
class ILinkEmbedController;
enum class TextInheritanceLimit;
} // namespace Export
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Options for extracting HTML from the Pptx text.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS TextToHtmlConversionOptions final : public Aspose::Slides::Export::ITextToHtmlConversionOptions
{
    typedef TextToHtmlConversionOptions ThisType;
    typedef Aspose::Slides::Export::ITextToHtmlConversionOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Returns value, indicating if Clipboard headers should be added.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_AddClipboardFragmentHeader() override;
    /// <summary>
    /// Sets value, indicating if Clipboard headers should be added.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_AddClipboardFragmentHeader(bool value) override;
    /// <summary>
    /// Returns inhering depth for text properties.
    /// Read <see cref="Export::TextInheritanceLimit"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API Aspose::Slides::Export::TextInheritanceLimit get_TextInheritanceLimit() override;
    /// <summary>
    /// Sets inhering depth for text properties.
    /// Write <see cref="Export::TextInheritanceLimit"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_TextInheritanceLimit(Aspose::Slides::Export::TextInheritanceLimit value) override;
    /// <summary>
    /// Returns a callback object which controlls how external object will be stored.
    /// Read <see cref="Export::ILinkEmbedController"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::SharedPtr<Export::ILinkEmbedController> get_LinkEmbedController() override;
    /// <summary>
    /// Sets a callback object which controlls how external object will be stored.
    /// Write <see cref="Export::ILinkEmbedController"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_LinkEmbedController(System::SharedPtr<Export::ILinkEmbedController> value) override;
    /// <summary>
    /// Returns html encoding name.
    /// This value will be saved to the generated HTML file, but its up to caller to ensure that file will be saved in this encoding.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API System::String get_EncodingName() override;
    /// <summary>
    /// Sets html encoding name.
    /// This value will be saved to the generated HTML file, but its up to caller to ensure that file will be saved in this encoding.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_EncodingName(System::String value) override;
    
    ASPOSE_SLIDES_SHARED_API TextToHtmlConversionOptions();
    
private:

    bool m_addClipboardHeader;
    Aspose::Slides::Export::TextInheritanceLimit m_inheritanceLimit;
    System::SharedPtr<Export::ILinkEmbedController> m_linkEmbedController;
    System::String m_encoding;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


