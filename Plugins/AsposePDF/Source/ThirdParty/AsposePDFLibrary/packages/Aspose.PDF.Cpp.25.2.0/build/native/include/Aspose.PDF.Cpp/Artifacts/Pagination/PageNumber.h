#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents a page number format that includes an index, total number of pages, and a delimiter.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PageNumber final : public System::Object
{
    typedef PageNumber ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Represents the page index component in the page number format.
    /// </summary>
    class ASPOSE_PDF_SHARED_CLASS PageIndex final : public System::Object
    {
        typedef PageIndex ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
        
    };
    
    /// <summary>
    /// Represents the total number of pages component in the page number format.
    /// </summary>
    class ASPOSE_PDF_SHARED_CLASS PageTotalNum final : public System::Object
    {
        typedef PageTotalNum ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
        
    };
    
    
public:

    /// <summary>
    /// Gets the offset to be added to the page index.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Offset() const;
    /// <summary>
    /// Sets the offset to be added to the page index.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Offset(int32_t value);
    /// <summary>
    /// Gets the page index component of the page number format. 
    /// The formatted string will include a placeholder for the page index.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PageNumber::PageIndex> get_Index() const;
    /// <summary>
    /// Sets the page index component of the page number format. 
    /// The formatted string will include a placeholder for the page index.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Index(System::SharedPtr<PageNumber::PageIndex> value);
    /// <summary>
    /// Gets the total number of pages component of the page number format. 
    /// The formatted string will include a placeholder for the total number of pages.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PageNumber::PageTotalNum> get_TotalNum() const;
    /// <summary>
    /// Sets the total number of pages component of the page number format. 
    /// The formatted string will include a placeholder for the total number of pages.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TotalNum(System::SharedPtr<PageNumber::PageTotalNum> value);
    /// <summary>
    /// Gets the delimiter used in the page number format.
    /// The formatted string will be updated based on the specified delimiter.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Delimiter() const;
    /// <summary>
    /// Sets the delimiter used in the page number format.
    /// The formatted string will be updated based on the specified delimiter.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Delimiter(System::String value);
    
    /// <summary>
    /// Returns a formatted string representing the page number based on the current settings.
    /// </summary>
    /// <param name="pageNumber">The current page number.</param>
    /// <param name="count">The total number of pages.</param>
    /// <returns>A formatted page number string.</returns>
    ASPOSE_PDF_SHARED_API System::String GetPageNumberString(int32_t pageNumber, int32_t count);
    
    ASPOSE_PDF_SHARED_API PageNumber();
    
private:

    System::String _delimiter;
    System::String _formattedString;
    System::SharedPtr<PageNumber::PageIndex> _pageIndex;
    System::SharedPtr<PageNumber::PageTotalNum> _pageTotalNum;
    int32_t pr_Offset;
    
};

} // namespace Pdf
} // namespace Aspose


