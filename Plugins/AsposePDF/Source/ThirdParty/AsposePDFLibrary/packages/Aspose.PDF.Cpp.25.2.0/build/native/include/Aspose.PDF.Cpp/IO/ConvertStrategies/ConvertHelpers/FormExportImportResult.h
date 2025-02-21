#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class HashSet;
} // namespace Generic
} // namespace Collections
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents the status of the form field serialization.
/// </summary>
enum class FieldSerializationStatus
{
    /// <summary>
    /// Indicates that the serialization was successful.
    /// </summary>
    Success,
    /// <summary>
    /// Indicates that the serialization completed with warnings.
    /// </summary>
    Warning,
    /// <summary>
    /// Indicates that the serialization encountered errors.
    /// </summary>
    Error
};

/// <summary>
/// Contains various error messages for export and import operations of form fields.
/// </summary>
class ExportImportMessages
{
    typedef ExportImportMessages ThisType;
    
public:

    static const System::String PageIsNull;
    static const System::String RectNotPresented;
    static const System::String PageIndexIsNotSet;
    static const System::String PageNotFoundInDocument;
    static const System::String RectangleIsNotSet;
    static const System::String UnknownFieldType;
    static const System::String UnknownImportError;
    static const System::String UnknownExportError;
    static const System::String PartialNameIsNotSet;
    static const System::String AppearanceDObjectNotImporting;
    static const System::String AppearanceRObjectNotImporting;
    static const System::String AppearanceNNotPresented;
    static const System::String RectangleImportError;
    static const System::String BarcodeSymbologyValueNotValid;
    static const System::String SupportExportOnly14StandardFonts;
    static const System::String NotImplemented;
    
public:
    ExportImportMessages() = delete;
};

/// <summary>
/// Represents the result of a form field serialization process.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS FieldSerializationResult : public System::Object
{
    typedef FieldSerializationResult ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the status of the form field serialization.
    /// </summary>
    /// <value>
    /// The serialization status of the form field.
    /// </value>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::FieldSerializationStatus get_FieldSerializationStatus() const;
    /// <summary>
    /// Gets the full name of the field.
    /// </summary>
    /// <value>
    /// The full name of the field.
    /// </value>
    ASPOSE_PDF_SHARED_API System::String get_FieldFullName() const;
    /// <summary>
    /// Gets the warning messages associated with the serialization process.
    /// </summary>
    /// <value>
    /// A set of warning messages.
    /// </value>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<System::Collections::Generic::HashSet<System::String>>& get_WarningMessages() const;
    /// <summary>
    /// Gets the error messages associated with the serialization process.
    /// </summary>
    /// <value>
    /// A set of error messages.
    /// </value>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<System::Collections::Generic::HashSet<System::String>>& get_ErrorMessages() const;
    
protected:

    /// <summary>
    /// Initializes a new instance of the <see cref="FieldSerializationResult"></see> class.
    /// </summary>
    FieldSerializationResult();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FieldSerializationResult, CODEPORTING_ARGS());
    
    /// <summary>
    /// Initializes a new instance of the <see cref="FieldSerializationResult"></see> class with the specified field name.
    /// </summary>
    /// <param name="fieldName">The full name of the field.</param>
    FieldSerializationResult(System::String fieldName);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FieldSerializationResult, CODEPORTING_ARGS(System::String fieldName));
    
    /// <summary>
    /// Initializes a new instance of the <see cref="FieldSerializationResult"></see> class with the specified field name, status, and message.
    /// </summary>
    /// <param name="fieldName">The full name of the field.</param>
    /// <param name="status">The status of the form field serialization.</param>
    /// <param name="message">The message associated with the serialization process.</param>
    FieldSerializationResult(System::String fieldName, Aspose::Pdf::FieldSerializationStatus status, System::String message);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FieldSerializationResult, CODEPORTING_ARGS(System::String fieldName, Aspose::Pdf::FieldSerializationStatus status, System::String message));
    /// <summary>
    /// Updates the serialization status and adds a message to the appropriate set.
    /// </summary>
    /// <param name="status">The new status of the form field serialization.</param>
    /// <param name="message">The message to add to the appropriate message set.</param>
    void UpdateStatus(Aspose::Pdf::FieldSerializationStatus status, System::String message);
    /// <summary>
    /// Updates the current result with the status and messages from another result.
    /// </summary>
    /// <param name="result">The result to update from.</param>
    void Update(System::SharedPtr<FieldSerializationResult> result);
    
private:

    Aspose::Pdf::FieldSerializationStatus pr_FieldSerializationStatus;
    
    /// <summary>
    /// Gets the status of the form field serialization.
    /// </summary>
    /// <value>
    /// The serialization status of the form field.
    /// </value>
    ASPOSE_PDF_SHARED_API void set_FieldSerializationStatus(Aspose::Pdf::FieldSerializationStatus value);
    
    System::String pr_FieldFullName;
    System::SharedPtr<System::Collections::Generic::HashSet<System::String>> pr_WarningMessages;
    System::SharedPtr<System::Collections::Generic::HashSet<System::String>> pr_ErrorMessages;
    
};

} // namespace Pdf
} // namespace Aspose


