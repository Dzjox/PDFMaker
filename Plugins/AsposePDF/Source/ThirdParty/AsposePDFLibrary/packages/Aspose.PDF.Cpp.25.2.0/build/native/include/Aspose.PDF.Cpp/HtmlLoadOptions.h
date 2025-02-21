#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/LoadOptions.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class HtmlFragment;
enum class HtmlMediaType;
enum class HtmlPageLayoutOption;
class PageInfo;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Net
{
class ICredentials;
} // namespace Net
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents options for loading/importing html file into pdf document.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS HtmlLoadOptions final : public Aspose::Pdf::LoadOptions
{
    typedef HtmlLoadOptions ThisType;
    typedef Aspose::Pdf::LoadOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::HtmlFragment;
    
public:

    /// <summary>
    /// Gets rendering all document to single page
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsRenderToSinglePage() const;
    /// <summary>
    /// Sets rendering all document to single page
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsRenderToSinglePage(bool value);
    /// <summary>
    /// Gets fonts embedding to result document
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsEmbedFonts() const;
    /// <summary>
    /// Sets fonts embedding to result document
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsEmbedFonts(bool value);
    /// <summary>
    /// Gets layout option.
    /// </summary>
    ASPOSE_PDF_SHARED_API HtmlPageLayoutOption get_PageLayoutOption() const;
    /// <summary>
    /// Sets layout option.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PageLayoutOption(HtmlPageLayoutOption value);
    /// <summary>
    /// Gets possible media types used during rendering.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::HtmlMediaType get_HtmlMediaType() const;
    /// <summary>
    /// Sets possible media types used during rendering.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_HtmlMediaType(Aspose::Pdf::HtmlMediaType value);
    /// <summary>
    /// Gets the attribute specifying the encoding used for this document at the time of the parsing. If this attribute is null the encoding will determine from document character set atribute.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_InputEncoding() const;
    /// <summary>
    /// Sets the attribute specifying the encoding used for this document at the time of the parsing. If this attribute is null the encoding will determine from document character set atribute.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_InputEncoding(System::String value);
    /// <summary>
    /// The base path/url for the html file.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_BasePath() const;
    /// <summary>
    /// Gets the flag that specifies that @page rules defined in css will override values defined in PageInfo.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsPriorityCssPageRule() const;
    /// <summary>
    /// Sets the flag that specifies that @page rules defined in css will override values defined in PageInfo.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsPriorityCssPageRule(bool value);
    
    /// <summary>
    ///  If loading of external data referenced in HTML 
    ///  requirs credentials, You can put them into this parameter - they will be used
    ///  during loading of external resources
    /// </summary>
    System::SharedPtr<System::Net::ICredentials> ExternalResourcesCredentials;
    /// <summary>
    ///  Sometimes it's necessary to avoid usage of internal loader of external resources(like images or CSSes)
    ///  and supply custom method that will get requested resources from somewhere. For example, during usage 
    ///  of Aspose.PDF in cloude direct access to referenced files impossible: in such case some custome code put
    ///  into special method should be used, and delegate that refers that method should be assygned to this attribute.
    /// </summary>
    LoadOptions::ResourceLoadingStrategy CustomLoaderOfExternalResources;
    
    /// <summary>
    /// Gets document page info
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Aspose::Pdf::PageInfo>& get_PageInfo() const;
    /// <summary>
    /// Sets document page info
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PageInfo(System::SharedPtr<Aspose::Pdf::PageInfo> value);
    
    /// <summary>
    /// Creates load options for converting html into pdf document with empty base path.
    /// </summary>
    ASPOSE_PDF_SHARED_API HtmlLoadOptions();
    /// <summary>
    /// Creates load options for converting html into pdf document with defined base path.
    /// </summary>
    /// <param name="basePath">
    /// The base path/url for the html file.
    /// </param>
    ASPOSE_PDF_SHARED_API HtmlLoadOptions(System::String basePath);
    
protected:

    /// <summary>
    /// Gets the flag that controls visibility of fields borders (button, text, combobox).
    /// </summary>
    bool get_ShowFieldsBorders() const;
    /// <summary>
    /// Sets the flag that controls visibility of fields borders (button, text, combobox).
    /// </summary>
    void set_ShowFieldsBorders(bool value);
    
private:

    bool pr_IsRenderToSinglePage;
    bool pr_IsEmbedFonts;
    HtmlPageLayoutOption pr_PageLayoutOption;
    Aspose::Pdf::HtmlMediaType pr_HtmlMediaType;
    System::String pr_InputEncoding;
    bool pr_ShowFieldsBorders;
    System::String pr_BasePath;
    bool pr_IsPriorityCssPageRule;
    System::SharedPtr<Aspose::Pdf::PageInfo> pr_PageInfo;
    
};

} // namespace Pdf
} // namespace Aspose


