#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// This class represents a columns info.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ColumnInfo final : public System::Object
{
    typedef ColumnInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets a string that contains the width of columns. 
    /// The value of each column should be separated by blank.The default unit is point,
    /// but cm, inch and percentage of available width are also supported.
    /// For example,"120 2.5cm 1.5inch"
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_ColumnWidths() const;
    /// <summary>
    /// Sets a string that contains the width of columns. 
    /// The value of each column should be separated by blank.The default unit is point,
    /// but cm, inch and percentage of available width are also supported.
    /// For example,"120 2.5cm 1.5inch"
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ColumnWidths(System::String value);
    /// <summary>
    /// Gets a string that contains the spacing between columns. 
    /// The value of each spacing should be separated by blank. The default unit is point,
    /// but cm and inch are also supported.For example,"120 2.5cm 1.5inch".
    /// </summary>
    /// <remarks>
    /// If this property is not set, default value 0 will be used for each spacing.
    /// </remarks>
    ASPOSE_PDF_SHARED_API System::String get_ColumnSpacing() const;
    /// <summary>
    /// Sets a string that contains the spacing between columns. 
    /// The value of each spacing should be separated by blank. The default unit is point,
    /// but cm and inch are also supported.For example,"120 2.5cm 1.5inch".
    /// </summary>
    /// <remarks>
    /// If this property is not set, default value 0 will be used for each spacing.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void set_ColumnSpacing(System::String value);
    /// <summary>
    /// Gets a int value that indicates the number of columns.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_ColumnCount() const;
    /// <summary>
    /// Sets a int value that indicates the number of columns.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ColumnCount(int32_t value);
    
    /// <summary>
    /// Initializes a new instance of the ColumnInfo class.
    /// </summary>
    ASPOSE_PDF_SHARED_API ColumnInfo();
    
private:

    int32_t columnCount;
    System::String columnWidths;
    System::String columnSpacing;
    
};

} // namespace Pdf
} // namespace Aspose


