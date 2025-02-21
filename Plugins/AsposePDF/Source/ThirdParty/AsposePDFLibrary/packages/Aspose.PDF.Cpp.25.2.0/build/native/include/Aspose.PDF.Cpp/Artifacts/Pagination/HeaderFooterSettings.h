#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Center;
class Footer;
class Header;
class Left;
class PageDate;
class PageNumber;
class PageRange;
class Right;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents the settings for header and footer artifacts.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS HeaderFooterSettings final : public System::Object
{
    typedef HeaderFooterSettings ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Represents horizontal alignment settings for header and footer.
    /// </summary>
    class ASPOSE_PDF_SHARED_CLASS HorizontalAlignment : public System::Object
    {
        typedef HorizontalAlignment ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Gets the left alignment settings.
        /// </summary>
        ASPOSE_PDF_SHARED_API const System::SharedPtr<Aspose::Pdf::Left>& get_Left() const;
        /// <summary>
        /// Sets the left alignment settings.
        /// </summary>
        ASPOSE_PDF_SHARED_API void set_Left(System::SharedPtr<Aspose::Pdf::Left> value);
        /// <summary>
        /// Gets the center alignment settings.
        /// </summary>
        ASPOSE_PDF_SHARED_API const System::SharedPtr<Aspose::Pdf::Center>& get_Center() const;
        /// <summary>
        /// Sets the center alignment settings.
        /// </summary>
        ASPOSE_PDF_SHARED_API void set_Center(System::SharedPtr<Aspose::Pdf::Center> value);
        /// <summary>
        /// Gets the right alignment settings.
        /// </summary>
        ASPOSE_PDF_SHARED_API const System::SharedPtr<Aspose::Pdf::Right>& get_Right() const;
        /// <summary>
        /// Sets the right alignment settings.
        /// </summary>
        ASPOSE_PDF_SHARED_API void set_Right(System::SharedPtr<Aspose::Pdf::Right> value);
        
    private:
    
        System::SharedPtr<Aspose::Pdf::Left> pr_Left;
        System::SharedPtr<Aspose::Pdf::Center> pr_Center;
        System::SharedPtr<Aspose::Pdf::Right> pr_Right;
        
    };
    
    
public:

    /// <summary>
    /// Gets the range of pages for the header and footer settings.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Aspose::Pdf::PageRange>& get_PageRange() const;
    /// <summary>
    /// Sets the range of pages for the header and footer settings.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PageRange(System::SharedPtr<Aspose::Pdf::PageRange> value);
    /// <summary>
    /// Gets the header settings.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Aspose::Pdf::Header>& get_Header() const;
    /// <summary>
    /// Sets the header settings.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Header(System::SharedPtr<Aspose::Pdf::Header> value);
    /// <summary>
    /// Gets the footer settings.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Aspose::Pdf::Footer>& get_Footer() const;
    /// <summary>
    /// Sets the footer settings.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Footer(System::SharedPtr<Aspose::Pdf::Footer> value);
    
private:

    System::SharedPtr<Aspose::Pdf::PageRange> pr_PageRange;
    System::SharedPtr<Aspose::Pdf::Header> pr_Header;
    System::SharedPtr<Aspose::Pdf::Footer> pr_Footer;
    
};

/// <summary>
/// Represents the range of pages for header and footer settings.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PageRange final : public System::Object
{
    typedef PageRange ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the starting page number.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Start() const;
    /// <summary>
    /// Sets the starting page number.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Start(int32_t value);
    /// <summary>
    /// Gets the ending page number.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_End() const;
    /// <summary>
    /// Sets the ending page number.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_End(int32_t value);
    /// <summary>
    /// Gets the setting for even pages.
    /// </summary>
    ASPOSE_PDF_SHARED_API uint8_t get_Even() const;
    /// <summary>
    /// Sets the setting for even pages.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Even(uint8_t value);
    /// <summary>
    /// Gets the setting for odd pages.
    /// </summary>
    ASPOSE_PDF_SHARED_API uint8_t get_Odd() const;
    /// <summary>
    /// Sets the setting for odd pages.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Odd(uint8_t value);
    
    ASPOSE_PDF_SHARED_API PageRange();
    
private:

    int32_t pr_Start;
    int32_t pr_End;
    uint8_t pr_Even;
    uint8_t pr_Odd;
    
};

/// <summary>
/// Represents the header settings.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Header final : public Aspose::Pdf::HeaderFooterSettings::HorizontalAlignment
{
    typedef Header ThisType;
    typedef Aspose::Pdf::HeaderFooterSettings::HorizontalAlignment BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
};

/// <summary>
/// Represents the footer settings.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Footer final : public Aspose::Pdf::HeaderFooterSettings::HorizontalAlignment
{
    typedef Footer ThisType;
    typedef Aspose::Pdf::HeaderFooterSettings::HorizontalAlignment BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
};

/// <summary>
/// Represents the pagination data for header and footer.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS HeaderFooterData : public System::Object
{
    typedef HeaderFooterData ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the page number settings.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Aspose::Pdf::PageNumber>& get_PageNumber() const;
    /// <summary>
    /// Sets the page number settings.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PageNumber(System::SharedPtr<Aspose::Pdf::PageNumber> value);
    /// <summary>
    /// Gets the date settings.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Aspose::Pdf::PageDate>& get_PageDate() const;
    /// <summary>
    /// Sets the date settings.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PageDate(System::SharedPtr<Aspose::Pdf::PageDate> value);
    
private:

    System::SharedPtr<Aspose::Pdf::PageNumber> pr_PageNumber;
    System::SharedPtr<Aspose::Pdf::PageDate> pr_PageDate;
    
};

/// <summary>
/// Represents the left alignment settings for header and footer data.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Left final : public Aspose::Pdf::HeaderFooterData
{
    typedef Left ThisType;
    typedef Aspose::Pdf::HeaderFooterData BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
};

/// <summary>
/// Represents the center alignment settings for header and footer data.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Center final : public Aspose::Pdf::HeaderFooterData
{
    typedef Center ThisType;
    typedef Aspose::Pdf::HeaderFooterData BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
};

/// <summary>
/// Represents the right alignment settings for header and footer data.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Right final : public Aspose::Pdf::HeaderFooterData
{
    typedef Right ThisType;
    typedef Aspose::Pdf::HeaderFooterData BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
};

} // namespace Pdf
} // namespace Aspose


