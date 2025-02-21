#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "Aspose.PDF.Cpp/UnifiedSaveOptions.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class ApsToExcelConverter;
class FlowToTableAbsorber;
namespace Tests
{
class ExcelConverterTest;
class FlowConverterTests;
} // namespace Tests
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// Save options for export to Excel format
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ExcelSaveOptions : public Aspose::Pdf::UnifiedSaveOptions
{
    typedef ExcelSaveOptions ThisType;
    typedef Aspose::Pdf::UnifiedSaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::ApsToExcelConverter;
    friend class Aspose::Pdf::FlowToTableAbsorber;
    friend class Aspose::Pdf::Tests::ExcelConverterTest;
    friend class Aspose::Pdf::Tests::FlowConverterTests;
    
public:

    /// <summary>
    /// Allows to specify .xlsx, .xls/xml or csv file format.
    /// Default value is XLSX; 
    /// </summary>
    enum class ExcelFormat
    {
        /// <summary>
        /// Excel 2003 XML Format
        /// </summary>
        XMLSpreadSheet2003,
        /// <summary>
        /// Office Open XML (.xlsx) File Format
        /// </summary>
        XLSX,
        /// <summary>
        /// A comma-separated values (CSV) File Format
        /// </summary>
        CSV,
        /// <summary>
        /// A macro-enabled Office Open XML (.xlsm) File Format
        /// </summary>
        XLSM,
        /// <summary>
        /// OpenDocument Spreadsheet
        /// </summary>
        ODS
    };
    
    
public:

    /// <summary>
    /// Set true if you need to minimize the number of worksheets in resultant workbook.
    /// Default value is false; it means save of each PDF page as separated worksheet.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_MinimizeTheNumberOfWorksheets() const;
    /// <summary>
    /// Set true if you need to minimize the number of worksheets in resultant workbook.
    /// Default value is false; it means save of each PDF page as separated worksheet.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_MinimizeTheNumberOfWorksheets(bool value);
    /// <summary>
    /// Set true if you need inserting of blank column as the first column of worksheet.
    /// Default value is false; it means that blank column will not be inserted.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_InsertBlankColumnAtFirst() const;
    /// <summary>
    /// Set true if you need inserting of blank column as the first column of worksheet.
    /// Default value is false; it means that blank column will not be inserted.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_InsertBlankColumnAtFirst(bool value);
    /// <summary>
    /// Set true for using uniform columns division through the document. 
    /// Default value is false; it means that columns division will independent for each page.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_UniformWorksheets() const;
    /// <summary>
    /// Set true for using uniform columns division through the document. 
    /// Default value is false; it means that columns division will independent for each page.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_UniformWorksheets(bool value);
    /// <summary>
    /// Output format
    /// </summary>
    ASPOSE_PDF_SHARED_API ExcelSaveOptions::ExcelFormat get_Format() const;
    /// <summary>
    /// Output format
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Format(ExcelSaveOptions::ExcelFormat value);
    
    /// <summary>
    /// Constructor
    /// </summary>
    ASPOSE_PDF_SHARED_API ExcelSaveOptions();
    
protected:

    System::String TxtIntermediateFileIfAny;
    
private:

    bool _minimizeTheNumberOfWorksheets;
    bool _insertBlankColumnAtFirst;
    bool _uniformWorksheets;
    ExcelSaveOptions::ExcelFormat format;
    
};

} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::ExcelSaveOptions::ExcelFormat>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::ExcelSaveOptions::ExcelFormat, const char_t*>, 5>& values();
};



