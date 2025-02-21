#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if !NETCORE


// C# preprocessor directive: #endif


#include <system/enum_helpers.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/Facades/Facade.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class WidgetAnnotation;
} // namespace Annotations
namespace Collections
{
template <typename, typename> class AsposeHashDictionary;
} // namespace Collections
enum class ContentDisposition;
class Document;
namespace Engine
{
namespace CommonData
{
class ITreeNode;
} // namespace CommonData
namespace Data
{
class IPdfArray;
class IPdfDictionary;
class IPdfNumber;
class IPdfObject;
class ITrailerable;
} // namespace Data
} // namespace Engine
namespace Facades
{
enum class FieldType;
class Form;
class FormEditor;
class FormFieldFacade;
enum class PropertyFlag;
enum class SubmitFormFlag;
} // namespace Facades
namespace Forms
{
class ChoiceField;
class Field;
class OptionCollection;
} // namespace Forms
class Operator;
class OperatorCollection;
enum class PdfFormat;
class SaveOptions;
namespace Tests
{
namespace OriginalKit
{
namespace New
{
class RegressionTests_v4_8;
} // namespace New
} // namespace OriginalKit
} // namespace Tests
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
template <typename> class ICollection;
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace IO
{
class Stream;
} // namespace IO
namespace Web
{
class HttpResponse;
} // namespace Web
namespace Xml
{
class XmlDocument;
class XmlNamespaceManager;
class XmlNode;
class XmlNodeList;
class XmlTextWriter;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Class representing Acro form object.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Form final : public Aspose::Pdf::Facades::SaveableFacade
{
    typedef Form ThisType;
    typedef Aspose::Pdf::Facades::SaveableFacade BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::FormEditor;
    friend class Aspose::Pdf::Tests::OriginalKit::New::RegressionTests_v4_8;
    
public:

    /// <summary>
    /// Status of imported field
    /// </summary>
    enum class ImportStatus
    {
        /// <summary>
        /// Field was successfully imported
        /// </summary>
        Success,
        /// <summary>
        /// Field with this name was not found in the document form.
        /// </summary>
        FieldNotFound
    };
    
    
public:

    /// <summary>
    /// Class which describes result if field import. 
    /// </summary>
    class ASPOSE_PDF_SHARED_CLASS FormImportResult : public System::Object
    {
        typedef FormImportResult ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
        
        friend class Aspose::Pdf::Facades::Form;
        
    public:
    
        /// <summary>
        /// Status of field import.
        /// </summary>
        ASPOSE_PDF_SHARED_API Form::ImportStatus get_Status() const;
        /// <summary>
        /// Full name of the field.
        /// </summary>
        ASPOSE_PDF_SHARED_API System::String get_FieldName() const;
        
    protected:
    
        FormImportResult(System::String fieldName, Form::ImportStatus status);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FormImportResult, CODEPORTING_ARGS(System::String fieldName, Form::ImportStatus status));
        
    private:
    
        Form::ImportStatus _status;
        System::String _fieldName;
        
    };
    
    
public:

    /// <summary>
    /// Result of last import operation. Array of objects which descibre result of import for each field.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::SharedPtr<Form::FormImportResult>> get_ImportResult();
    /// @deprecated Use BindPdf(inputFile) method for facade initialization.
    /// <summary>
    /// Gets source file name.
    /// <example>
    /// </example>
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_SrcFileName() const;
    /// @deprecated Use BindPdf(inputFile) method for facade initialization.
    /// <summary>
    /// Sets source file name.
    /// <example>
    /// </example>
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SrcFileName(System::String value);
    /// <summary>
    /// Sets PDF file format. Result file will be saved in specified file format. 
    /// If this property is not specified then file will be save in default PDF format without conversion.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ConvertTo(PdfFormat value);
    /// @deprecated Use Save(outputFile) method for getting facade results.
    /// <summary>
    /// Gets destiination file name.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::String get_DestFileName() const;
    /// @deprecated Use Save(outputFile) method for getting facade results.
    /// <summary>
    /// Sets destiination file name.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_DestFileName(System::String value);
    /// @deprecated Use BindPdf(inputStream) method for facade initialization.
    /// <summary>
    /// Gets source stream.
    /// <example>
    /// </example>
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> get_SrcStream() const;
    /// @deprecated Use BindPdf(inputStream) method for facade initialization.
    /// <summary>
    /// Sets source stream.
    /// <example>
    /// </example>
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SrcStream(System::SharedPtr<System::IO::Stream> value);
    /// @deprecated Use Save(outputStream) method for getting facade results.
    /// <summary>
    /// Gets destination stream.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> get_DestStream() const;
    /// @deprecated Use Save(outputStream) method for getting facade results.
    /// <summary>
    /// Sets destination stream.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_DestStream(System::SharedPtr<System::IO::Stream> value);
    /// <summary>
    /// Gets list of field names on the form.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::String> get_FieldNames();
    /// <summary>
    /// Gets all form submit button names.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::String> get_FormSubmitButtonNames();
    /// <summary>
    /// Gets how content will be stored when result of operation is stored into HttpResponse object. Possible value: inline / attachment.
    /// Default: inline.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::ContentDisposition get_ContentDisposition() const;
    /// <summary>
    /// Sets how content will be stored when result of operation is stored into HttpResponse object. Possible value: inline / attachment.
    /// Default: inline.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ContentDisposition(Aspose::Pdf::ContentDisposition value);
    /// <summary>
    /// Gets Response object where result of operation will be stored.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Web::HttpResponse> get_Response() const;
    /// <summary>
    /// Sets Response object where result of operation will be stored.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Response(System::SharedPtr<System::Web::HttpResponse> value);
    /// <summary>
    /// Gets save options when result is stored as HttpResponse.
    /// Default value: PdfSaveOptions. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::SaveOptions> get_SaveOptions() const;
    /// <summary>
    /// Sets save options when result is stored as HttpResponse.
    /// Default value: PdfSaveOptions. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SaveOptions(System::SharedPtr<Aspose::Pdf::SaveOptions> value);
    /// <summary>
    /// Gets name of attachment when result of operation is stored into HttpResponse objects as attachment.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_AttachmentName() const;
    /// <summary>
    /// Sets name of attachment when result of operation is stored into HttpResponse objects as attachment.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AttachmentName(System::String value);
    
    /// <summary>
    /// Returns FrofmFieldFacade object containing all appearance attributes.
    /// <example>
    /// </example>
    /// </summary>
    /// <param name="fieldName">Name of field to read.</param>
    /// <returns>FormFieldFacade object</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<FormFieldFacade> GetFieldFacade(System::String fieldName);
    
    /// @deprecated Use constructor without destination.
    /// <summary>
    /// Constructor of Form with two stream parameters.
    /// Specify same source and destination stream for incremental update.
    /// </summary>
    /// <param name="srcStream">Source stream.</param>
    /// <param name="destStream">Destination stream.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API Form(System::SharedPtr<System::IO::Stream> srcStream, System::SharedPtr<System::IO::Stream> destStream);
    /// <summary>
    /// Construtcor of Form without parameters.
    /// <example>
    /// </example>
    /// </summary>
    ASPOSE_PDF_SHARED_API Form();
    
    /// <summary>
    /// Fills the field with a valid value according to a fully qualified field name.
    /// Before filling the fields, every field's names and its corresponding valid values must be known.
    /// Both the fields' name and values are case sensitive.
    /// Please note that Aspose.Pdf.Facades supports only full field names and does not work with partial 
    /// field names in contrast with Aspose.Pdf.Kit;
    /// For example if field has full name "Form.Subform.TextField" you should specify full name and not "TextField". 
    /// You can use FieldNames property to explore existing field names and search required field by its partial name.
    /// </summary>
    /// <param name="fieldName">The field's name to be filled.</param>
    /// <param name="fieldValue">The field's value which must be a valid value for some fields.</param>
    /// <returns>true if field is found and filled successfully.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool FillField(System::String fieldName, System::String fieldValue);
    /// <summary>
    /// Fills the radio box field with a valid index value according to a fully qualified field name.
    /// Before filling the fields, only field's name must be known. While the value can be specified by its index.
    /// Notice: Only be applied to Radio Box, Combo Box and List Box fields.
    /// Please note that Aspose.Pdf.Facades supports only full field names and does not work with partial 
    /// field names in contrast with Aspose.Pdf.Kit;
    /// For example if field has full name "Form.Subform.ListBoxField" you should specify full name and not "ListBoxField". 
    /// You can use FieldNames property to explore existing field names and search required field by its partial name.
    /// </summary>
    /// <param name="fieldName">Name of field to be filled.</param>
    /// <param name="index">Index of chosen item.</param>
    /// <returns>true if field was found and successfully filled.</returns>
    /// <example lang="C#">
    /// <code lang="C#">
    /// Form form = new Form("PdfForm.pdf");
    /// form.FillField("listboxField", 2);
    /// form.FillField("comboboxField", 2);
    /// form.FillField("radiobuttonField", 2);
    /// </code>
    /// <code lang="C#">
    /// //how to search field by its partial name:
    /// Form form = new Form("input.pdf", "output.pdf"); 
    /// foreach(string fieldName in form.FieldNames)
    /// {
    ///   if (fieldName.EndsWith("ListBoxField"))
    ///   {
    ///     Console.WriteLine("Full name is: " + fieldName);
    ///   }
    /// }
    /// </code>
    /// </example>
    ASPOSE_PDF_SHARED_API bool FillField(System::String fieldName, int32_t index);
    /// <summary>
    /// Fills the check box field with a boolean value.
    /// Notice: Only be applied to Check Box.
    /// Please note that Aspose.Pdf.Facades supports only full field names and does not work with partial 
    /// field names in contrast with Aspose.Pdf.Kit;
    /// For example if field has full name "Form.Subform.CheckBoxField" you should specify full name and not "CheckBoxField". 
    /// You can use FieldNames property to explore existing field names and search required field by its partial name.
    /// </summary>
    /// <example>
    /// </example>
    /// <param name="fieldName">The field's name to be filled.</param>
    /// <param name="beChecked">A boolean flag: true means to check the box, while false to uncheck it.</param>
    /// <returns>true if field was found and successfully filled.</returns>
    ASPOSE_PDF_SHARED_API bool FillField(System::String fieldName, bool beChecked);
    /// <summary>
    /// Fills the text box fields with a text values and save the document.
    /// Relevant for signed documents.
    /// Notice: Only be applied to Text Box.
    /// Both the fields' name and values are case sensitive.
    /// </summary>
    /// <example>
    /// </example>
    /// <param name="fieldNames">Names of fields.</param>
    /// <param name="fieldValues">New values of the fields.</param>
    /// <param name="output">Stream where document will be saved.</param>
    /// <returns>true if fields was found and successfully filled.</returns>
    ASPOSE_PDF_SHARED_API bool FillFields(System::ArrayPtr<System::String> fieldNames, System::ArrayPtr<System::String> fieldValues, System::SharedPtr<System::IO::Stream>& output);
    /// <summary>
    /// Returns the current value for radio button option fields.
    /// </summary>
    /// <param name="fieldName">Field Name</param>
    /// <returns>String value for the current radio group optino. See also <see cref="GetButtonOptionValues"></see></returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::String GetButtonOptionCurrentValue(System::String fieldName);
    /// <summary>
    /// Gets the radio button option fields and related values based on the field name.
    /// This method has meaning for radio button groups.
    /// </summary>
    /// <param name="fieldName">Field Name</param>
    /// <returns>Hash table of option values keyed by form item name</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> GetButtonOptionValues(System::String fieldName);
    /// <summary>
    /// Gets the field's value according to its field name.
    /// </summary>
    /// <param name="fieldName">The fully qualified field name.</param>
    /// <returns>The field's value.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::String GetField(System::String fieldName);
    /// <summary>
    /// Gets the full field name according to its short field name.
    /// </summary>
    /// <param name="fieldName">The fully qualified field name.</param>
    /// <returns>The full field name.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::String GetFullFieldName(System::String fieldName);
    /// <summary>
    /// Get the limitation of text field.
    /// </summary>
    /// <param name="fieldName">The qualified field name.</param>
    /// <returns>Return the limitation number of characters a text field can be filled. It not set, return 0.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API int32_t GetFieldLimit(System::String fieldName);
    /// @deprecated Use Save(destination) method for saving facade results.
    /// <summary>
    /// Saves the value of the filled fields and close the opened Pdf document.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void Save();
    /// <summary>
    /// Saves document into specified file.
    /// </summary>
    /// <param name="destFile">File where document will be saved.</param>
    ASPOSE_PDF_SHARED_API void Save(System::String destFile) override;
    /// <summary>
    /// Saves document into specified stream.
    /// </summary>
    /// <param name="destStream">Stream where document will be saved.</param>
    ASPOSE_PDF_SHARED_API void Save(System::SharedPtr<System::IO::Stream> destStream) override;
    /// <summary>
    /// Closes opened files without any changes.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Close() override;
    /// <summary>
    /// Flattens all the fields.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void FlattenAllFields();
    /// <summary>
    /// Flattens a specified field with the fully qualified field name.
    /// Any other field will remain unchangable. If the fieldName is invalid, 
    /// all the fields will remain unchangable.
    /// </summary>
    /// <example>
    /// </example>
    /// <param name="fieldName">The name of the field to be flattened.</param>
    ASPOSE_PDF_SHARED_API void FlattenField(System::String fieldName);
    /// <summary>
    /// Fill a barcode field according to its fully qualified field name.
    /// </summary>
    /// <param name="fieldName">The fully qualified field name.</param>
    /// <param name="data">The new barcode value.</param>
    /// <returns>If filling succeed, return true; otherwise, false.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool FillBarcodeField(System::String fieldName, System::String data);
    /// <summary>
    /// Imports the content of the fields from the fdf file and put them into the new pdf.
    /// </summary>
    /// <param name="inputFdfStream">The input fdf stream.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void ImportFdf(System::SharedPtr<System::IO::Stream> inputFdfStream);
    /// <summary>
    /// Exports the content of the fields of the pdf into the fdf stream.
    /// </summary>
    /// <param name="outputFdfStream">The output fdf stream.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void ExportFdf(System::SharedPtr<System::IO::Stream> outputFdfStream);
    /// <summary>
    /// Imports the content of the fields from the xml file and put them into the new pdf.
    /// </summary>
    /// <param name="inputXmlStream">Stream from which XML for import is read.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void ImportXml(System::SharedPtr<System::IO::Stream> inputXmlStream);
    /// <summary>
    /// Exports the content of the fields of the pdf into the xml stream.
    /// The button field's value will not be exported.
    /// </summary>
    /// <example>
    /// </example>
    /// <param name="outputXmlStream">Output Xml stream.</param>
    ASPOSE_PDF_SHARED_API void ExportXml(System::SharedPtr<System::IO::Stream> outputXmlStream);
    /// <summary>
    /// Extracts XFA data packet
    /// </summary>
    /// <param name="outputXmlStream">Stream where XML data will be stored.</param>
    ASPOSE_PDF_SHARED_API void ExtractXfaData(System::SharedPtr<System::IO::Stream> outputXmlStream);
    /// <summary>
    /// Replaces XFA data with specified data packet. Data packet may be extracted using ExtractXfaData. 
    /// </summary>
    /// <param name="inputXmlStream">Stream where XML is stored.</param>
    ASPOSE_PDF_SHARED_API void SetXfaData(System::SharedPtr<System::IO::Stream> inputXmlStream);
    /// <summary>
    /// Imports the content of the fields from the xfdf(xml) file and put them into the new pdf.
    /// </summary>
    /// <param name="inputXfdfStream">The input xfdf(xml) stream.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void ImportXfdf(System::SharedPtr<System::IO::Stream> inputXfdfStream);
    /// <summary>
    /// Exports the content of the fields of the pdf into the xml stream.
    /// The button field's value will not be exported.
    /// </summary>
    /// <param name="outputXfdfStream">The output xml stream.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void ExportXfdf(System::SharedPtr<System::IO::Stream> outputXfdfStream);
    /// <summary>
    /// Fill a field with multiple selections.Note: only for AcroForm List Box Field.
    /// </summary>
    /// <param name="fieldName">The fully qualified field name.</param>
    /// <param name="fieldValues">A string array which contains several items to be selected.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void FillField(System::String fieldName, System::ArrayPtr<System::String> fieldValues);
    /// <summary> Renames a field. Either AcroForm field or XFA field is OK.
    /// </summary>
    /// <param name="fieldName">the old field name
    /// </param>
    /// <param name="newFieldName">the new field name
    /// </param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void RenameField(System::String fieldName, System::String newFieldName);
    /// <summary>
    /// Get a Rich Text field's value, including the formattinf information of every character.
    /// </summary>
    /// <param name="fieldName">The fully qualified field name of the Rich Text field.</param>
    /// <returns>Return a string containing formatting information of the Rich Text field.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::String GetRichText(System::String fieldName);
    /// <summary>
    /// Returns the submit button's submission flags
    /// </summary>
    /// <param name="fieldName">The qualified field name.</param>
    /// <returns>Submission flags of the button.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API SubmitFormFlag GetSubmitFlags(System::String fieldName);
    
    /// <summary>
    /// Constructor of Form.
    /// </summary>
    /// <param name="srcFileName">Source file path.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API Form(System::String srcFileName);
    /// <summary>
    /// Constructor for form.
    /// </summary>
    /// <param name="srcStream">source stream.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API Form(System::SharedPtr<System::IO::Stream> srcStream);
    /// @deprecated Use constructor without destination.
    /// <summary>
    /// Constructor of Form class.
    /// Specify same source file name and destination file name to perform incremental update.
    /// </summary>
    /// <param name="srcFileName">Path of the source file.</param>
    /// <param name="destFileName">Path of the destination file.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API Form(System::String srcFileName, System::String destFileName);
    /// @deprecated Use constructor without destination.
    /// <summary>
    /// Constructor of Form.
    /// </summary>
    /// <param name="srcFileName">Source file path.</param>
    /// <param name="destStream">Destination file path.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API Form(System::String srcFileName, System::SharedPtr<System::IO::Stream> destStream);
    /// @deprecated Use constructor without destination.
    /// <summary>
    /// Constructor of Form
    /// </summary>
    /// <param name="srcStream">Source stream.</param>
    /// <param name="destFileName">Destination file path.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API Form(System::SharedPtr<System::IO::Stream> srcStream, System::String destFileName);
    
    /// <summary>
    /// Returns type of field. 
    /// </summary>
    /// <param name="fieldName">Field name.</param>
    /// <returns>Element of FileType enumeration corresponding to field type.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API FieldType GetFieldType(System::String fieldName);
    /// <summary>
    /// Determines whether field is required or not.
    /// </summary>
    /// <param name="fieldName">The name of field.</param>
    /// <returns>True - the field is required; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool IsRequiredField(System::String fieldName);
    /// <summary>
    /// Returns flags of the field.
    /// </summary>
    /// <param name="fieldName">Field name</param>
    /// <returns>Property flag (ReadOnly/ Required/NoExport</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API PropertyFlag GetFieldFlag(System::String fieldName);
    /// <summary>
    /// Pastes an image onto the existing button field as its appearance according to 
    /// its fully qualified field name.
    /// </summary>
    /// <param name="fieldName"> The fully qualified field name of the image button field.</param>
    /// <param name="imageFileName">The path of the image file, relative and absolute are both ok.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void FillImageField(System::String fieldName, System::String imageFileName);
    /// <summary>
    /// Overloads function of FillImageField.
    /// The input is a image stream.
    /// </summary>
    /// <param name="fieldName">The fully qualified field name.</param>
    /// <param name="imageStream">The image's stream.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void FillImageField(System::String fieldName, System::SharedPtr<System::IO::Stream> imageStream);
    
    /// <summary>
    /// Initializes new <see cref="Form"></see> object on base of the <paramref name="document"></paramref>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    ASPOSE_PDF_SHARED_API Form(System::SharedPtr<Aspose::Pdf::Document> document);
    /// @deprecated Use constructor without destination.
    /// <summary>
    /// Initializes new <see cref="Form"></see> object on base of the <paramref name="document"></paramref>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    /// <param name="destFileName">
    /// Path of the destination file.
    /// </param>
    ASPOSE_PDF_SHARED_API Form(System::SharedPtr<Aspose::Pdf::Document> document, System::String destFileName);
    /// @deprecated Use constructor without destination.
    /// <summary>
    /// Initializes new <see cref="Form"></see> object on base of the <paramref name="document"></paramref>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    /// <param name="destStream">
    /// Destination stream.
    /// </param>
    ASPOSE_PDF_SHARED_API Form(System::SharedPtr<Aspose::Pdf::Document> document, System::SharedPtr<System::IO::Stream> destStream);
    
    /// <summary>
    /// Imports the content of the fields from the xml file and put them into the new pdf.
    /// </summary>
    /// <param name="inputXmlStream">The input xml stream.</param>
    /// <param name="IgnoreFormTemplateChanges">If this parameter is true then all changes of the XFA form template will not be saved</param>
    ASPOSE_PDF_SHARED_API void ImportXml(System::SharedPtr<System::IO::Stream> inputXmlStream, bool IgnoreFormTemplateChanges);
    /// <summary>
    /// Fills field with specified value. 
    /// </summary>
    /// <param name="fieldName">Name of field</param>
    /// <param name="value">New value of the field</param>
    /// <param name="fitFontSize">If true, the font size in the edit boxes will be fitted.</param>
    /// <returns>true if field was found and successfully filled.</returns>
    ASPOSE_PDF_SHARED_API bool FillField(System::String fieldName, System::String value, bool fitFontSize);
    
    /// @deprecated Use constructor without destination.
    /// <summary>
    /// Creates form which will save result into HttpResponse object.
    /// </summary>
    /// <param name="inputStream">Stream containing source document.</param>
    /// <param name="response">HttpResponse object where result will be saved.</param>
    ASPOSE_PDF_SHARED_API Form(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::Web::HttpResponse> response);
    /// @deprecated Use constructor without destination.
    /// <summary>
    /// Creates form which will save result into HttpResponse object.
    /// </summary>
    /// <param name="inputFile">Name of input file.</param>
    /// <param name="response">HttpResponse object where result will be stored.</param>
    ASPOSE_PDF_SHARED_API Form(System::String inputFile, System::SharedPtr<System::Web::HttpResponse> response);
    
protected:

    /// <summary>
    /// Initializes the facade.
    /// </summary>
    /// <param name="srcStream">The stream of PDF file.</param>
    /// <param name="password">The password of the PDF document.</param>
    ASPOSE_PDF_SHARED_API void BindPdf(System::SharedPtr<System::IO::Stream> srcStream, System::String password) override;
    /// <summary>
    /// Initializes the facade.
    /// </summary>
    /// <param name="srcFile">The PDF file.</param>
    /// <param name="password">The password of the PDF document.</param>
    ASPOSE_PDF_SHARED_API void BindPdf(System::String srcFile, System::String password) override;
    static bool IsImageField(System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> annotation);
    static FieldType getFieldType(System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> annotation);
    System::SharedPtr<System::Xml::XmlNode> GetFieldTemplate(System::String fieldName);
    
private:

    System::SharedPtr<System::IO::Stream> sourceStream;
    System::SharedPtr<System::IO::Stream> destStream;
    bool _closeStream;
    bool _formChanged;
    System::String sourceFileName;
    System::String destFileName;
    PdfFormat _convertTo;
    bool _executeConvert;
    Aspose::Pdf::ContentDisposition _contentDisposition;
    System::SharedPtr<Aspose::Pdf::SaveOptions> _saveOptions;
    System::String _attachmentName;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Form::FormImportResult>>> _importResult;
    System::SharedPtr<System::Web::HttpResponse> _outputResponse;
    
    bool IsIncrementalUpdates();
    void CloseSource();
    void CloseDest();
    System::String RemoveLines(System::String s);
    System::SharedPtr<System::Xml::XmlNode> GetXfaNode(System::SharedPtr<System::Xml::XmlDocument> xml);
    void CollectValues(System::String parent, System::SharedPtr<System::Xml::XmlNodeList> nodes, System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::String>> values);
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::String>> GetValues(System::SharedPtr<System::Xml::XmlDocument> xml);
    void CollectXfaValues(System::String parent, System::SharedPtr<System::Xml::XmlNodeList> nodes, System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::String>> values);
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::String>> GetXfaValues(System::SharedPtr<System::Xml::XmlNode> xfa);
    /// <summary>
    /// Read all fields from XFA template and write data into XML file. This is used if dataset is empty to create correct XML export data packet.
    /// </summary>
    /// <param name="node">Current node.</param>
    /// <param name="writer">Writer where data will be stored.</param>
    void ReadFieldsFromTeamplate(System::SharedPtr<System::Xml::XmlNode> node, System::SharedPtr<System::Xml::XmlTextWriter> writer, System::String path);
    /// <summary>
    /// Read all fields from XFA template and write data into XML file. This is used if dataset is empty to create correct XML export data packet.
    /// </summary>
    /// <param name="writer">Writer where data are stored.</param>
    void ReadFieldsFromTeamplate(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    bool IsDataPacketEmpty(System::SharedPtr<Aspose::Pdf::Document> doc);
    void UpdateStaticFormAfterXfaReplace();
    /// <summary>
    /// Collects field from field tree
    /// </summary>
    /// <param name="fields">Collection which contains fields of the current level.</param>
    /// <param name="prefix">Path to the container.</param>
    /// <param name="destination">List where found fields will be placed.</param>
    void collectFields(System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>>> fields, System::String prefix, System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Aspose::Pdf::Forms::Field>>> destination);
    int32_t findPage(System::SharedPtr<Aspose::Pdf::Forms::Field> field);
    System::ArrayPtr<System::String> getOptionsAsStrings(System::SharedPtr<Aspose::Pdf::Forms::OptionCollection> options);
    System::ArrayPtr<System::ArrayPtr<System::String>> getOptionsAsArrays(System::SharedPtr<Aspose::Pdf::Forms::OptionCollection> options);
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::String>> getOptionsForChoiceField(System::SharedPtr<Aspose::Pdf::Forms::ChoiceField> field);
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::String>> getOptionsForField(System::SharedPtr<Aspose::Pdf::Forms::Field> field);
    System::String getFieldValue(System::SharedPtr<Aspose::Pdf::Forms::Field> field);
    void ExportFieldsToFdf(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable, System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>>> source, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> dest);
    bool hasChildFields(System::SharedPtr<System::Xml::XmlNode> node);
    void ExportXfaTemplateToFdf(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable, System::SharedPtr<System::Xml::XmlNodeList> source, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> dest, System::String fullName);
    void ExportXfaToFdf(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable, System::SharedPtr<System::Xml::XmlNodeList> source, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> dest);
    void ExportToXmlXfa(System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>>> source, System::SharedPtr<System::Xml::XmlTextWriter> dest);
    void ExportFieldsToXml(System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>>> source, System::SharedPtr<System::Xml::XmlTextWriter> dest);
    bool IsXfaFieldMultiline(System::String path);
    void ImportXmlFromXfa(System::SharedPtr<System::Xml::XmlNodeList> source, System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>>> dest, System::String xfaPath);
    System::SharedPtr<Aspose::Pdf::Forms::Field> findField(System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>>> fields, System::String fieldName);
    void setFieldValue(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> source, System::SharedPtr<Aspose::Pdf::Forms::Field> dest, System::String xfaPath);
    void ImportFieldsFromFdf(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> source, System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>>> dest, System::String xfaPath);
    System::SharedPtr<System::Xml::XmlNamespaceManager> GetTemplateNamespace();
    System::SharedPtr<System::Xml::XmlNamespaceManager> GetDatasetNamespace();
    System::SharedPtr<System::Collections::Generic::List<int32_t>> CreateTail(System::SharedPtr<System::Collections::Generic::List<int32_t>> path);
    System::SharedPtr<System::Xml::XmlNode> GetFieldTemplate(System::String fieldName, bool fullName);
    System::SharedPtr<System::Xml::XmlNode> GetFieldData(System::String fieldName);
    /// <summary>
    /// Find node by index in Number tree
    /// </summary>
    /// <param name="root">Root number tree node</param>
    /// <param name="index">Index of element to retreive</param>
    /// <returns></returns>
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> Search(System::SharedPtr<Aspose::Pdf::Engine::CommonData::ITreeNode> root, int32_t index);
    /// <summary>
    /// Find sturct element by index.
    /// </summary>
    /// <param name="index">Index</param>
    /// <returns>Struct element</returns>
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> GetStructParentElement(int32_t index);
    /// <summary>
    /// Retreive element MCID by index
    /// </summary>
    /// <param name="structParentIndex">Struct parent index</param>
    /// <returns>marked content ID</returns>
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfNumber> GetElementMcid(int32_t structParentIndex);
    /// <summary>
    /// Gets list of operators inside of marked contnet block from operator collection.
    /// </summary>
    /// <param name="operators">Operator collection</param>
    /// <param name="mcid">MCID</param>
    /// <param name="tag">Tag of marked content block</param>
    /// <returns>Operators list</returns>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> GetOperatorsByMcid(System::SharedPtr<OperatorCollection> operators, int32_t mcid, System::String tag);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


