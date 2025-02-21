#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents a base class for date components with a format attribute.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS DateComponent : public System::Object
{
    typedef DateComponent ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the format for the date component.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Format() const;
    /// <summary>
    /// Sets the format for the date component.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Format(int32_t value);
    
    /// <summary>
    /// Returns a string composed of a specified character repeated based on the format.
    /// </summary>
    /// <param name="ch">The character to repeat.</param>
    /// <returns>A string consisting of the character repeated.</returns>
    ASPOSE_PDF_SHARED_API System::String GetFormat(char16_t ch);
    
    ASPOSE_PDF_SHARED_API DateComponent();
    
private:

    int32_t pr_Format;
    
};

/// <summary>
/// Represents a date format composed of day, month, and year components.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PageDate final : public System::Object
{
    typedef PageDate ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Represents the month component of a date.
    /// </summary>
    class ASPOSE_PDF_SHARED_CLASS MonthComponent : public Aspose::Pdf::DateComponent
    {
        typedef MonthComponent ThisType;
        typedef Aspose::Pdf::DateComponent BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Gets the format string for the month component.
        /// </summary>
        /// <returns>A string representing the month format.</returns>
        ASPOSE_PDF_SHARED_API System::String GetFormat();
        
    private:
    
        static const char16_t PlaceHolder;
        
    };
    
    /// <summary>
    /// Represents the day component of a date.
    /// </summary>
    class ASPOSE_PDF_SHARED_CLASS DayComponent : public Aspose::Pdf::DateComponent
    {
        typedef DayComponent ThisType;
        typedef Aspose::Pdf::DateComponent BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Gets the format string for the day component.
        /// </summary>
        /// <returns>A string representing the day format.</returns>
        ASPOSE_PDF_SHARED_API System::String GetFormat();
        
    private:
    
        static const char16_t PlaceHolder;
        
    };
    
    /// <summary>
    /// Represents the year component of a date.
    /// </summary>
    class ASPOSE_PDF_SHARED_CLASS YearComponent : public Aspose::Pdf::DateComponent
    {
        typedef YearComponent ThisType;
        typedef Aspose::Pdf::DateComponent BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Gets the format string for the year component.
        /// </summary>
        /// <returns>A string representing the year format.</returns>
        ASPOSE_PDF_SHARED_API System::String GetFormat();
        
    private:
    
        static const char16_t PlaceHolder;
        
    };
    
    
public:

    /// <summary>
    /// Gets the day component of the date. 
    /// The format of the date will be updated based on this component.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PageDate::DayComponent> get_Day() const;
    /// <summary>
    /// Sets the day component of the date. 
    /// The format of the date will be updated based on this component.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Day(System::SharedPtr<PageDate::DayComponent> value);
    /// <summary>
    /// Gets the month component of the date. 
    /// The format of the date will be updated based on this component.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PageDate::MonthComponent> get_Month() const;
    /// <summary>
    /// Sets the month component of the date. 
    /// The format of the date will be updated based on this component.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Month(System::SharedPtr<PageDate::MonthComponent> value);
    /// <summary>
    /// Gets the year component of the date. 
    /// The format of the date will be updated based on this component.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PageDate::YearComponent> get_Year() const;
    /// <summary>
    /// Sets the year component of the date. 
    /// The format of the date will be updated based on this component.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Year(System::SharedPtr<PageDate::YearComponent> value);
    /// <summary>
    /// Gets the delimiter used in the date format.
    /// The format of the date will be updated based on this delimiter.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Delimiter() const;
    /// <summary>
    /// Sets the delimiter used in the date format.
    /// The format of the date will be updated based on this delimiter.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Delimiter(System::String value);
    
    /// <summary>
    /// Returns the formatted date string based on the current date format.
    /// </summary>
    /// <returns>A formatted date string.</returns>
    ASPOSE_PDF_SHARED_API System::String GetFormattedDate();
    
private:

    System::String _dateFormat;
    System::SharedPtr<PageDate::DayComponent> _day;
    System::SharedPtr<PageDate::MonthComponent> _month;
    System::SharedPtr<PageDate::YearComponent> _year;
    System::String _delimiter;
    
};

} // namespace Pdf
} // namespace Aspose


