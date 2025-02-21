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
enum class AnnotationFlags;
class SubmitFormAction;
class WidgetAnnotation;
} // namespace Annotations
enum class ContentDisposition;
class Document;
namespace Facades
{
enum class FieldType;
enum class FontStyle;
class FormFieldFacade;
enum class PropertyFlag;
enum class SubmitFormFlag;
} // namespace Facades
namespace Forms
{
class ButtonField;
class Field;
} // namespace Forms
enum class PdfFormat;
class Point;
class SaveOptions;
} // namespace Pdf
} // namespace Aspose
namespace System
{
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
class XmlNamespaceManager;
class XmlNode;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Class for editing forms (ading/deleting field etc)
/// </summary>
class ASPOSE_PDF_SHARED_CLASS FormEditor final : public Aspose::Pdf::Facades::SaveableFacade
{
    typedef FormEditor ThisType;
    typedef Aspose::Pdf::Facades::SaveableFacade BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// @deprecated Use BindPdf(inputFile) method for facade initialization.
    /// <summary>
    /// Gets name of source file.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::String get_SrcFileName() const;
    /// @deprecated Use BindPdf(inputFile) method for facade initialization.
    /// <summary>
    /// Sets name of source file.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_SrcFileName(System::String value);
    /// @deprecated Use Save(outputFile) method for getting facade results.
    /// <summary>
    /// Gets destination file name.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::String get_DestFileName() const;
    /// @deprecated Use Save(outputFile) method for getting facade results.
    /// <summary>
    /// Sets destination file name.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_DestFileName(System::String value);
    /// @deprecated Use BindPdf(inputStream) method for facade initialization.
    /// <summary>
    /// Gets source stream.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> get_SrcStream() const;
    /// @deprecated Use BindPdf(inputStream) method for facade initialization.
    /// <summary>
    /// Sets source stream.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_SrcStream(System::SharedPtr<System::IO::Stream> value);
    /// <summary>
    /// Sets PDF file format. Result file will be saved in specified file format. 
    /// If this property is not specified then file will be save in default PDF format without conversion.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ConvertTo(PdfFormat value);
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
    /// Sets items which will be added t onewly created list box or combo box. 
    /// <example>
    /// </example>
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::String> get_Items() const;
    /// <summary>
    /// Sets items which will be added t onewly created list box or combo box. 
    /// <example>
    /// </example>
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Items(System::ArrayPtr<System::String> value);
    /// <summary> Sets options for combo box with export values.</summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::ArrayPtr<System::String>> get_ExportItems() const;
    /// <summary> Sets options for combo box with export values.</summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_ExportItems(System::ArrayPtr<System::ArrayPtr<System::String>> value);
    /// <summary>
    /// Sets visual attributes of the field.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<FormFieldFacade> get_Facade() const;
    /// <summary>
    /// Sets visual attributes of the field.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_Facade(System::SharedPtr<FormFieldFacade> value);
    /// <summary>
    /// The member to record the gap between two neighboring radio buttons in pixels,default is 50.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API float get_RadioGap();
    /// <summary>
    /// The member to record the gap between two neighboring radio buttons in pixels,default is 50.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_RadioGap(float value);
    /// <summary>
    /// The flag to indicate whether the radios are arranged horizontally or vertically, default value is true.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool get_RadioHoriz() const;
    /// <summary>
    /// The flag to indicate whether the radios are arranged horizontally or vertically, default value is true.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void set_RadioHoriz(bool value);
    /// <summary>
    /// Gets size of radio button item size (when new radio button field is added). 
    /// <code lang="C#">
    /// formEditor = new Aspose.Pdf.Facades.FormEditor("PdfForm.pdf", "FormEditor_AddField_RadioButton.pdf");
    /// formEditor.RadioGap = 4;
    /// formEditor.RadioHoriz = false;
    /// formEditor.RadioButtonItemSize = 20;
    /// formEditor.Items = new string[] { "First", "Second", "Third" };
    /// formEditor.AddField(FieldType.Radio, "AddedRadioButtonField", "Second", 1, 10, 30, 110, 130);
    /// formEditor.Save();
    /// </code>
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_RadioButtonItemSize() const;
    /// <summary>
    /// Sets size of radio button item size (when new radio button field is added). 
    /// <code lang="C#">
    /// formEditor = new Aspose.Pdf.Facades.FormEditor("PdfForm.pdf", "FormEditor_AddField_RadioButton.pdf");
    /// formEditor.RadioGap = 4;
    /// formEditor.RadioHoriz = false;
    /// formEditor.RadioButtonItemSize = 20;
    /// formEditor.Items = new string[] { "First", "Second", "Third" };
    /// formEditor.AddField(FieldType.Radio, "AddedRadioButtonField", "Second", 1, 10, 30, 110, 130);
    /// formEditor.Save();
    /// </code>
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RadioButtonItemSize(double value);
    /// <summary>
    /// Set the submit button's submission flags
    /// </summary>
    ASPOSE_PDF_SHARED_API SubmitFormFlag get_SubmitFlag() const;
    /// <summary>
    /// Set the submit button's submission flags
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SubmitFlag(SubmitFormFlag value);
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
    
    /// @deprecated Use constructor without destination.
    /// <summary>
    /// Constructor for FormEditor.
    /// </summary>
    /// <param name="srcStream">Source stream.</param>
    /// <param name="destStream">Destination stream.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API FormEditor(System::SharedPtr<System::IO::Stream> srcStream, System::SharedPtr<System::IO::Stream> destStream);
    /// @deprecated Use constructor without destination.
    /// <summary>
    /// Constructor for FormEditor 
    /// </summary>
    /// <param name="srcFileName">Name of source file.</param>
    /// <param name="destFileName">Name of destination file.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API FormEditor(System::String srcFileName, System::String destFileName);
    /// <summary>
    /// Constructor for FormEditor.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API FormEditor();
    
    /// @deprecated Use Save(destination) method for saving facade results.
    /// <summary>
    /// Saves changes into destination file.
    /// </summary>
    /// FormEditor formEditor = new FormEditor("InFile.pdf", "OutFile.pdf");
    /// //make some changes... 
    /// formEditor.Save();
    ASPOSE_PDF_SHARED_API void Save();
    /// <summary>
    /// Set attributes of field. 
    /// </summary>
    /// <param name="fieldName">Name of field which attributes should be set.</param>
    /// <param name="flag">Flag (NoExport/ReadOnly/Required)</param>
    /// <returns>true if attribute was set successfully.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool SetFieldAttribute(System::String fieldName, PropertyFlag flag);
    /// <summary>
    /// Set field flags
    /// </summary>
    /// <param name="fieldName">Name of field whose flags should be updated.</param>
    /// <param name="flags">Flag of the field.</param>
    /// <returns>true if flags were updated successfully.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool SetFieldAppearance(System::String fieldName, Aspose::Pdf::Annotations::AnnotationFlags flags);
    /// <summary>
    /// Get field flags. 
    /// </summary>
    /// <param name="fieldName">Name of the field.</param>
    /// <returns>Set of field flags</returns>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Annotations::AnnotationFlags GetFieldAppearance(System::String fieldName);
    /// <summary>
    /// Set submit flag of submit button. 
    /// </summary>
    /// <param name="fieldName">Name of submit button.</param>
    /// <param name="submitFormFlag">Submit flag.</param>
    /// <returns>true if field was found and submit flag was successfully set. </returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool SetSubmitFlag(System::String fieldName, SubmitFormFlag submitFormFlag);
    /// <summary>
    /// Sets URL of the button.
    /// </summary>
    /// <param name="fieldName">Submit button name.</param>
    /// <param name="url">Fully qualified URL.</param>
    /// <returns>true if URL for button was successfully set.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool SetSubmitUrl(System::String fieldName, System::String url);
    /// <summary>
    /// Sets maximum character count of the text field.
    /// </summary>
    /// <param name="fieldName">Name of the text field.</param>
    /// <param name="fieldLimit">New value of limit for the field.</param>
    /// <returns>true if field limit was successfully set.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool SetFieldLimit(System::String fieldName, int32_t fieldLimit);
    /// <summary>
    /// Sets number of combs for a regular single-line text field (the field is 
    /// automatically divided into as many equally spaced positions, or combs, 
    /// as the value of combNumber parameter).
    /// </summary>
    /// <param name="fieldName">The qualified field name.</param>
    /// <param name="combNumber">The number of combs to divide the field into.</param>
    /// <returns>If success, return true;else false.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool SetFieldCombNumber(System::String fieldName, int32_t combNumber);
    /// <summary>
    /// Set new position of field.
    /// </summary>
    /// <param name="fieldName">Name of field which must be moved.</param>
    /// <param name="llx">Abscissa of the lower-left corner of the field.</param>
    /// <param name="lly">Ordinate of the lower-left coerner of the field.</param>
    /// <param name="urx">Abscissa of the upper-right corner of the field.</param>
    /// <param name="ury">Ordinate of the upper-right corner of the field.</param>
    /// <returns>true if field position was changed successfully.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool MoveField(System::String fieldName, float llx, float lly, float urx, float ury);
    /// <summary>
    /// Add field of specified type to the form.
    /// </summary>
    /// <param name="fieldType">Type of the field which must be added.</param>
    /// <param name="fieldName">Name of the field whic must be added.</param>
    /// <param name="pageNum">Page number where new field must be placed.</param>
    /// <param name="llx">Abscissa of the lower-left corner of the field.</param>
    /// <param name="lly">Ordinate of the lower-left corner of the field.</param>
    /// <param name="urx">Abscissa of the upper-right corner of the field.</param>
    /// <param name="ury">Ordinate of the upper-right corner of the field.</param>
    /// <returns>true if field was successfully added.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool AddField(FieldType fieldType, System::String fieldName, int32_t pageNum, float llx, float lly, float urx, float ury);
    /// <summary>
    /// Add field of specified type to the form.
    /// </summary>
    /// <param name="fieldType">Type of the field which must be added.</param>
    /// <param name="fieldName">Name of the field whic must be added.</param>
    /// <param name="initValue">Initial value of the field.</param>
    /// <param name="pageNum">Page number where new field must be placed.</param>
    /// <param name="llx">Abscissa of the lower-left corner of the field.</param>
    /// <param name="lly">Ordinate of the lower-left corner of the field.</param>
    /// <param name="urx">Abscissa of the upper-right corner of the field.</param>
    /// <param name="ury">Ordinate of the upper-right corner of the field.</param>
    /// <returns>true if field was successfully added.</returns>
    /// /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool AddField(FieldType fieldType, System::String fieldName, System::String initValue, int32_t pageNum, float llx, float lly, float urx, float ury);
    /// <summary>
    /// Remove field from the form.
    /// </summary>
    /// <param name="fieldName">Name of the field which must be removed.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void RemoveField(System::String fieldName);
    /// <summary>
    /// Reset all visual attribtues to empty value.
    /// </summary>
    ASPOSE_PDF_SHARED_API void ResetFacade();
    /// <summary>
    /// Reset all visual attribtues of inner facade to empty value.
    /// </summary>
    ASPOSE_PDF_SHARED_API void ResetInnerFacade();
    /// <summary>
    /// Copies an existing field to the same position in specified page number.
    /// A new document will be produced, which contains everything the source document has except for the newly copied field.
    /// </summary>
    /// <param name="fieldName">The old fully qualified field name.</param> 
    /// <param name="newFieldName">The new fully qualified field name. If null, it will be set as fieldName + "~".</param> 
    /// <param name="pageNum">The number of page to hold the new field. If -1, new field will be copid to the same page as old one hosted.</param> 
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void CopyInnerField(System::String fieldName, System::String newFieldName, int32_t pageNum);
    /// <summary>
    /// Copies an existing field to a new position specified by both page number and ordinates.
    /// A new document will be produced, which contains everything the source document has except for the newly copied field.
    /// </summary>
    /// <param name="fieldName">The old fully qualified field name.</param> 
    /// <param name="newFieldName">The new fully qualified field name. If null, it will be set as fieldName + "~".</param> 
    /// <param name="pageNum">The number of page to hold the new field. If -1, new field will be copid to the same page as old one hosted.</param> 
    /// <param name="abscissa">The abscissa of the new field. If -1, the abscissa will be equaled to the original one.</param> 
    /// <param name="ordinate">The ordinate of the new field. If -1, the ordinate will be equaled to the original one.</param> 
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void CopyInnerField(System::String fieldName, System::String newFieldName, int32_t pageNum, float abscissa, float ordinate);
    /// <summary>
    /// Copies an existing field from one PDF document to another document with original page number and ordinates.
    /// Notice: Only for AcroForm fields (excluding radio box).
    /// </summary>
    /// <param name="srcFileName"> The name of PDF document which containes the field to be copied.</param>
    /// <param name="fieldName">The original fully qualified field name.</param> 
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void CopyOuterField(System::String srcFileName, System::String fieldName);
    /// <summary>
    /// Copies an existing field from one PDF document to another document with specified page number and original ordinates.
    /// Notice: Only for AcroForm fields (excluding radio box).
    /// </summary>
    /// <param name="srcFileName">The name of PDF document which containes the field to be copied.</param> 
    /// <param name="fieldName">The original fully qualified field name.</param> 
    /// <param name="pageNum">The number of page to hold the new field. If -1, new field will be copid to the same page as old one hosted.</param> 
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void CopyOuterField(System::String srcFileName, System::String fieldName, int32_t pageNum);
    /// <summary>
    /// Copies an existing field from one PDF document to another document with specified page number and ordinates.
    /// Notice: Only for AcroForm fields (excluding radio box).
    /// </summary>
    /// <param name="srcFileName">The name of PDF document which containes the field to be copied.</param> 
    /// <param name="fieldName">The original fully qualified field name.</param> 
    /// <param name="pageNum">The number of page to hold the new field. If -1, new field will be copid to the same page as old one hosted.</param> 
    /// <param name="abscissa">The abscissa of the new field. If -1, the abscissa will be equaled to the original one.</param> 
    /// <param name="ordinate">The ordinate of the new field. If -1, the ordinate will be equaled to the original one.</param> 
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void CopyOuterField(System::String srcFileName, System::String fieldName, int32_t pageNum, float abscissa, float ordinate);
    /// <summary>
    /// Changes visual attributes of the specified field.
    /// </summary>
    /// <param name="fieldName">The fully qualified field name.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void DecorateField(System::String fieldName);
    /// <summary>
    /// Changes visual attributes of all fields with the specified field type.
    /// </summary>
    /// <param name="fieldType">Type of fields which will be decorated.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void DecorateField(FieldType fieldType);
    /// <summary>
    /// Changes visual attributes of all fields in the PDF document.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void DecorateField();
    /// <summary>
    /// Change name of the field.
    /// </summary>
    /// <param name="fieldName">Old name of the field.</param>
    /// <param name="newFieldName">New name of the field.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void RenameField(System::String fieldName, System::String newFieldName);
    /// <summary>
    /// Remove submit action of the field.
    /// </summary>
    /// <param name="fieldName">Name of the field.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void RemoveFieldAction(System::String fieldName);
    /// <summary>
    /// Add submit button on the form.
    /// </summary>
    /// <param name="fieldName">Name of new button. </param>
    /// <param name="page">Page where button will be placed.</param>
    /// <param name="label">Button caption.</param>
    /// <param name="url">URL of the submit button.</param>
    /// <param name="llx">Abscissa of the lower-left corner.</param>
    /// <param name="lly">Ordinate of the lower-left corner.</param>
    /// <param name="urx">Abscissa of the upper-right corner.</param>
    /// <param name="ury">Ordinate of the upper-right corner.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void AddSubmitBtn(System::String fieldName, int32_t page, System::String label, System::String url, float llx, float lly, float urx, float ury);
    /// <summary>
    /// Adds new item to the list box. 
    /// </summary>
    /// <param name="fieldName">Name of the field ot which new item will be added.</param>
    /// <param name="itemName">Name if new item.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void AddListItem(System::String fieldName, System::String itemName);
    /// <summary>
    /// Add a new item with Export value to the existing list box field, only for AcroForm combo box field.
    /// </summary>
    /// <param name="fieldName">Name of field to which items will be added.</param>
    /// <param name="exportName">A string array denoting a new list item with Export Value, i.e. (Item Label, Export Value).</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void AddListItem(System::String fieldName, System::ArrayPtr<System::String> exportName);
    /// <summary>
    /// Delete item from the list field.
    /// </summary>
    /// <param name="fieldName">Name of the field.</param>
    /// <param name="itemName">Name of the item which must be deleted.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void DelListItem(System::String fieldName, System::String itemName);
    /// <summary>
    /// Set JavaScript for a PushButton field. If old JavaScript existed, it will be replaced by the new one.
    /// </summary>
    /// <param name="fieldName">The fully qualified field name.</param>
    /// <param name="script">The Java script to be added/placed into a push button field.</param>
    /// <returns>true if field scrip was successfully set. </returns>
    ASPOSE_PDF_SHARED_API bool SetFieldScript(System::String fieldName, System::String script);
    /// <summary>
    /// Add JavaScript for a PushButton field. If old event exists, new event is added after it. 
    /// </summary>
    /// <param name="fieldName">The fully qualified field name.</param>
    /// <param name="script">The Java script to be added/placed into a push button field.</param>
    /// <returns>True in case script was added successfully.</returns>
    ASPOSE_PDF_SHARED_API bool AddFieldScript(System::String fieldName, System::String script);
    /// <summary>
    /// Change a single-lined text field to a multiple-lined one.
    /// </summary>
    /// <param name="fieldName">The qualified field name.</param>
    /// <returns>If success, return true;else false.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool Single2Multiple(System::String fieldName);
    /// <summary>
    /// Set the alignment style of a text field.
    /// </summary>
    /// <param name="fieldName">The qualified field name.</param>
    /// <param name="alignment">The alignment style definition, including FormFieldFacade.AlignLeft,
    /// FormFieldFacade.AlignCenter and FormFieldFacade.AlignRight.</param>
    /// <returns>true if true if field was found and alignment was set.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool SetFieldAlignment(System::String fieldName, int32_t alignment);
    /// <summary>
    /// Set the vertical alignment style of a text field.
    /// </summary>
    /// <param name="fieldName">The qualified field name.</param>
    /// <param name="alignment">The alignment style definition, including FormFieldFacade.AlignTop,
    /// FormFieldFacade.AlignMiddle and FormFieldFacade.AlignRight.</param>
    /// <returns>true if field was found and alignment was successfully filled.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API bool SetFieldAlignmentV(System::String fieldName, int32_t alignment);
    
    /// <summary>
    /// Initializes new <see cref="FormEditor"></see> object on base of the <paramref name="document"></paramref>.
    /// </summary>
    /// <param name="document">Pdf document.</param>
    ASPOSE_PDF_SHARED_API FormEditor(System::SharedPtr<Aspose::Pdf::Document> document);
    /// @deprecated Use constructor without destination.
    /// <summary>
    /// Initializes new <see cref="FormEditor"></see> object on base of the <paramref name="document"></paramref>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    /// <param name="destFileName">Path of the destination file.</param>
    ASPOSE_PDF_SHARED_API FormEditor(System::SharedPtr<Aspose::Pdf::Document> document, System::String destFileName);
    /// @deprecated Use constructor without destination.
    /// <summary>
    /// Initializes new <see cref="FormEditor"></see> object on base of the <paramref name="document"></paramref>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    /// <param name="destStream">Destination stream.</param>
    ASPOSE_PDF_SHARED_API FormEditor(System::SharedPtr<Aspose::Pdf::Document> document, System::SharedPtr<System::IO::Stream> destStream);
    /// @deprecated Use constructor without destination.
    /// <summary>
    /// Creates FormEditor which will save result into HttpResponse object.
    /// </summary>
    /// <param name="inputStream">Source stream.</param>
    /// <param name="response">HttpResponse object where result will be saved.</param>
    ASPOSE_PDF_SHARED_API FormEditor(System::SharedPtr<System::IO::Stream> inputStream, System::SharedPtr<System::Web::HttpResponse> response);
    /// @deprecated Use constructor without destination.
    /// <summary>
    /// Creates FormEditor which will save result into HttpResponse object.
    /// </summary>
    /// <param name="inputFile">Source file name.</param>
    /// <param name="response">HttpResponse objects where result be saved.</param>
    ASPOSE_PDF_SHARED_API FormEditor(System::String inputFile, System::SharedPtr<System::Web::HttpResponse> response);
    
    /// <summary>
    /// Closes the facade.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Close() override;
    
private:

    System::String _srcFileName;
    System::String _destFileName;
    System::SharedPtr<System::IO::Stream> _srcStream;
    System::SharedPtr<System::IO::Stream> _destStream;
    System::SharedPtr<FormFieldFacade> _formFieldFacade;
    System::ArrayPtr<System::String> items;
    System::ArrayPtr<System::ArrayPtr<System::String>> exportItems;
    double _radioGap;
    bool _radioHoriz;
    SubmitFormFlag _submitFlag;
    PdfFormat _convertTo;
    bool _executeConvert;
    Aspose::Pdf::ContentDisposition _contentDisposition;
    System::SharedPtr<Aspose::Pdf::SaveOptions> _saveOptions;
    System::String _attachmentName;
    System::SharedPtr<System::Web::HttpResponse> _outputResponse;
    double _radioButtonItemSize;
    
    void CloseSource();
    void CloseDest();
    System::SharedPtr<Aspose::Pdf::Annotations::SubmitFormAction> FindSubmitAction(System::SharedPtr<Aspose::Pdf::Forms::ButtonField> field);
    void AssertDestStream();
    System::SharedPtr<Point> getLowestLeftPoint(System::SharedPtr<Aspose::Pdf::Forms::Field> field);
    void copyField(System::SharedPtr<Aspose::Pdf::Forms::Field> field, System::String newFieldName, int32_t pageNum, double abscissa, double ordinate);
    System::String SelectFont(System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> field, FontStyle fontStyle);
    System::String SelectCjkFont(System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> field);
    void setFieldProperties(System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> field);
    int32_t translateSubmitFlag(SubmitFormFlag formFlag);
    System::SharedPtr<System::Xml::XmlNamespaceManager> GetTemplateNamespace();
    System::SharedPtr<System::Xml::XmlNode> GetFieldTemplate(System::String fieldName);
    void AddXmlFieldItems(System::SharedPtr<System::Xml::XmlNode> fieldTemplate, System::String name);
    bool IsHiddenList(System::SharedPtr<System::Xml::XmlNode> list);
    void GetFieldAndTemplate(System::String fieldName, System::SharedPtr<Aspose::Pdf::Forms::Field>& field, System::SharedPtr<System::Xml::XmlNode>& template_);
    void AddXmlFieldItems(System::SharedPtr<System::Xml::XmlNode> fieldTemplate, System::String name, System::String value);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


