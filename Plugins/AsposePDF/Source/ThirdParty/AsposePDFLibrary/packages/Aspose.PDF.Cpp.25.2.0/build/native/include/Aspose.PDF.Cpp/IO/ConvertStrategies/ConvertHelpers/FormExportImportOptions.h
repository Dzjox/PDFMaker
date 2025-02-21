#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents base class of options for exporting form fields.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ExportFieldsOptions : public System::Object
{
    typedef ExportFieldsOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets a value indicating whether the password value should be exported.
    /// </summary>
    /// <value>
    ///   <c>true</c> if the password value should be exported; otherwise, <c>false</c>.
    /// </value>
    ASPOSE_PDF_SHARED_API bool get_ExportPasswordValue() const;
    /// <summary>
    /// Sets a value indicating whether the password value should be exported.
    /// </summary>
    /// <value>
    ///   <c>true</c> if the password value should be exported; otherwise, <c>false</c>.
    /// </value>
    ASPOSE_PDF_SHARED_API void set_ExportPasswordValue(bool value);
    
    ASPOSE_PDF_SHARED_API ExportFieldsOptions();
    
private:

    bool pr_ExportPasswordValue;
    
};

/// <summary>
/// Represents options for exporting form fields to Json format.
/// </summary>
/// <remarks>
/// Inherits from <see cref="ExportFieldsOptions"></see> and adds specific options for Json export.
/// </remarks>
class ASPOSE_PDF_SHARED_CLASS ExportFieldsToJsonOptions : public Aspose::Pdf::ExportFieldsOptions
{
    typedef ExportFieldsToJsonOptions ThisType;
    typedef Aspose::Pdf::ExportFieldsOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets a value indicating whether the Json output should be indented.
    /// </summary>
    /// <value>
    ///   <c>true</c> if the Json output should be indented; otherwise, <c>false</c>.
    /// </value>
    ASPOSE_PDF_SHARED_API bool get_WriteIndented() const;
    /// <summary>
    /// Sets a value indicating whether the Json output should be indented.
    /// </summary>
    /// <value>
    ///   <c>true</c> if the Json output should be indented; otherwise, <c>false</c>.
    /// </value>
    ASPOSE_PDF_SHARED_API void set_WriteIndented(bool value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="ExportFieldsToJsonOptions"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API ExportFieldsToJsonOptions();
    
private:

    bool pr_WriteIndented;
    
};

/// <summary>
/// Represents base class of options for importing form fields.
/// </summary>
class ImportFieldsOptions : public System::Object
{
    typedef ImportFieldsOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

/// <summary>
/// Represents options for importing form fields to Json format.
/// </summary>
/// <remarks>
/// Inherits from <see cref="ImportFieldsOptions"></see> and adds specific options for Json import.
/// </remarks>
class ImportFieldsToJsonOptions : public Aspose::Pdf::ImportFieldsOptions
{
    typedef ImportFieldsToJsonOptions ThisType;
    typedef Aspose::Pdf::ImportFieldsOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

} // namespace Pdf
} // namespace Aspose


