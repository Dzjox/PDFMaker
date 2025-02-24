#pragma once
// Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

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
namespace System
{
class String;
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Options for extracting HTML from the Pptx text.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ITextToHtmlConversionOptions : public virtual System::Object
{
    typedef ITextToHtmlConversionOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns value, indicating if Clipboard headers should be added.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_AddClipboardFragmentHeader() = 0;
    /// <summary>
    /// Sets value, indicating if Clipboard headers should be added.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_AddClipboardFragmentHeader(bool value) = 0;
    /// <summary>
    /// Returns inhering depth for text properties.
    /// Read <see cref="TextInheritanceLimit"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::Export::TextInheritanceLimit get_TextInheritanceLimit() = 0;
    /// <summary>
    /// Sets inhering depth for text properties.
    /// Write <see cref="TextInheritanceLimit"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_TextInheritanceLimit(Aspose::Slides::Export::TextInheritanceLimit value) = 0;
    /// <summary>
    /// Returns a callback object which controlls how external object will be stored.
    /// Read <see cref="Export::ILinkEmbedController"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<Export::ILinkEmbedController> get_LinkEmbedController() = 0;
    /// <summary>
    /// Sets a callback object which controlls how external object will be stored.
    /// Write <see cref="Export::ILinkEmbedController"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_LinkEmbedController(System::SharedPtr<Export::ILinkEmbedController> value) = 0;
    /// <summary>
    /// Returns html encoding name.
    /// This value will be saved to the generated HTML file, but its up to caller to ensure that file will be saved in this encoding.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_EncodingName() = 0;
    /// <summary>
    /// Sets html encoding name.
    /// This value will be saved to the generated HTML file, but its up to caller to ensure that file will be saved in this encoding.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_EncodingName(System::String value) = 0;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


