#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/type_info.h>
#include <system/object_ext.h>
#include <system/enumerator_adapter.h>
#include <system/constraints.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/ienumerable.h>
#include <system/collections/icollection.h>

#include "Aspose.PDF.Cpp/InteractiveFeatures/Forms/Field.h"
#include "Aspose.PDF.Cpp/InteractiveFeatures/Annotations/WidgetAnnotation.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pal
{
class PalZipWriter;
} // namespace Pal
namespace Pdf
{
namespace Annotations
{
class DefaultAppearance;
namespace JavascriptExtensions
{
class ThisObjectExtension;
} // namespace JavascriptExtensions
class XfdfReader;
class XfdfWriter;
} // namespace Annotations
class ApsToPdfConverter;
enum class ApsToXpsSavingMode;
namespace Collections
{
template <typename, typename> class AsposeHashDictionary;
} // namespace Collections
class Copier;
class Document;
namespace Engine
{
namespace CommonData
{
namespace Text
{
namespace Fonts
{
namespace Utilities
{
class DocumentFontsIterator;
} // namespace Utilities
} // namespace Fonts
} // namespace Text
} // namespace CommonData
namespace Data
{
class IPdfArray;
class IPdfDictionary;
class IPdfObject;
class IPdfPrimitive;
} // namespace Data
} // namespace Engine
namespace Facades
{
class Form;
class FormEditor;
class PdfConverter;
class PdfFileEditor;
class PdfFileSignature;
} // namespace Facades
namespace Forms
{
enum class FormType;
class ListBoxField;
class XFA;
} // namespace Forms
namespace InteractiveFeatures
{
namespace Forms
{
class WidgetWrapper;
} // namespace Forms
} // namespace InteractiveFeatures
class Page;
class PageCollection;
class PageGenerator;
class Rectangle;
class Resources;
namespace Tests
{
namespace Facades
{
class PdfFileSignatureTests;
} // namespace Facades
class InvalidFormTypeOperationExceptionTests;
class RegressionTests_v10_8;
class RegressionTests_v16_12;
class RegressionTests_v17_12;
class RegressionTests_v18_5;
class RegressionTests_v20_01;
class RegressionTests_v23_11;
class RegressionTests_v24_01;
class RegressionTests_v24_12;
class RegressionTests_v6_9;
class RegressionTests_v7_1;
class RegressionTests_v7_4;
class RegressionTests_v7_7;
class RegressionTests_v7_8;
class RegressionTests_v7_9;
class RegressionTests_v8_2;
class RegressionTests_v8_8;
class RegressionTests_v9_1;
class XfaRendererTests;
} // namespace Tests
namespace XfaConverter
{
class XfaParserOptions;
} // namespace XfaConverter
class XfaMerge;
enum class XfaTag;
class XfaToPdfConverter;
} // namespace Pdf
namespace XfaRenderer
{
namespace Core
{
class XfaFontCash;
} // namespace Core
} // namespace XfaRenderer
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
template <typename> class HashSet;
} // namespace Generic
} // namespace Collections
namespace IO
{
class MemoryStream;
class Stream;
} // namespace IO
class Uri;
namespace Xml
{
class XmlDocument;
class XmlNode;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Forms {

/// <summary>
/// Class representing form object.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Form final : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>>
{
    typedef Form ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Utilities::DocumentFontsIterator;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::Form;
    friend class Aspose::Pdf::Facades::FormEditor;
    friend class Aspose::Pdf::Facades::PdfConverter;
    friend class Aspose::Pdf::Facades::PdfFileEditor;
    friend class Aspose::Pdf::Facades::PdfFileSignature;
    friend class Aspose::Pdf::Annotations::WidgetAnnotation;
    friend class Aspose::Pdf::Forms::XFA;
    friend class Aspose::Pdf::Forms::Field;
    friend class Aspose::Pdf::Forms::ListBoxField;
    friend class Aspose::Pdf::Annotations::XfdfReader;
    friend class Aspose::Pdf::Annotations::XfdfWriter;
    friend class Aspose::Pdf::PageCollection;
    friend class Aspose::Pdf::Resources;
    friend class Aspose::Pdf::XfaToPdfConverter;
    friend class Aspose::Pdf::XfaMerge;
    friend class Aspose::Pdf::Annotations::JavascriptExtensions::ThisObjectExtension;
    friend class Aspose::Pdf::Tests::XfaRendererTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v9_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v16_12;
    friend class Aspose::Pdf::Tests::RegressionTests_v18_5;
    friend class Aspose::Pdf::Tests::Facades::PdfFileSignatureTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_4;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_7;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_9;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_2;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_8;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_12;
    friend class Aspose::Pdf::Tests::RegressionTests_v20_01;
    friend class Aspose::Pdf::Tests::RegressionTests_v23_11;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_01;
    friend class Aspose::Pdf::Tests::RegressionTests_v24_12;
    friend class Aspose::Pdf::Tests::InvalidFormTypeOperationExceptionTests;
    
public:

    /// <summary>
    ///   Forms can contain signing information and can be signed or unsigned.
    ///   Sometimes view of forms in viewer must depend on whether form is signed or not.
    ///   This enum enumerates possible rendering modes during convertion of form type in regard to sign. 
    /// </summary>
    enum class SignDependentElementsRenderingModes
    {
        /// <summary>
        /// Render form as unsigned.
        /// </summary>
        RenderFormAsUnsigned,
        /// <summary>
        /// Render form as signed.
        /// </summary>
        RenderFormAsSigned
    };
    
    
public:

    /// <summary>
    /// Class which describes settings for Form flattening procedure.
    /// </summary>
    class ASPOSE_PDF_SHARED_CLASS FlattenSettings : public System::Object
    {
        typedef FlattenSettings ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// If set, all field appearances will be regenerated before flattening. This option may help if field is incorrectly flattened.
        /// This option may decrease performance. By default set to false.
        /// </summary>
        ASPOSE_PDF_SHARED_API bool get_UpdateAppearances() const;
        /// <summary>
        /// If set, all field appearances will be regenerated before flattening. This option may help if field is incorrectly flattened.
        /// This option may decrease performance. By default set to false.
        /// </summary>
        ASPOSE_PDF_SHARED_API void set_UpdateAppearances(bool value);
        /// <summary>
        /// If set, formatting and other JavaScript events will be called. True by default.
        /// </summary>
        ASPOSE_PDF_SHARED_API bool get_CallEvents() const;
        /// <summary>
        /// If set, formatting and other JavaScript events will be called. True by default.
        /// </summary>
        ASPOSE_PDF_SHARED_API void set_CallEvents(bool value);
        /// <summary>
        /// If set, buttons will be removed from flattened document. False by default.
        /// </summary>
        ASPOSE_PDF_SHARED_API bool get_HideButtons() const;
        /// <summary>
        /// If set, buttons will be removed from flattened document. False by default.
        /// </summary>
        ASPOSE_PDF_SHARED_API void set_HideButtons(bool value);
        /// <summary>
        /// If true, redaction specified Redaction annotation will be applied 
        /// </summary>
        ASPOSE_PDF_SHARED_API bool get_ApplyRedactions() const;
        /// <summary>
        /// If true, redaction specified Redaction annotation will be applied 
        /// </summary>
        ASPOSE_PDF_SHARED_API void set_ApplyRedactions(bool value);
        
        ASPOSE_PDF_SHARED_API FlattenSettings();
        
    private:
    
        bool _hideButtons;
        bool _updateAppearances;
        bool _callEvents;
        bool _applyRedactions;
        
    };
    
    
protected:

    class FieldsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>>
    {
        typedef FieldsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        CODEPORTING_ENUMERATOR_ITERATOR_METHODS_DECLARATION(CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>), CODEPORTING_NO_API_KEYWORD);
        
    public:
    
        const System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>& get_Current() const override;
        
        FieldsEnumerator(System::SharedPtr<Document> document, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::WidgetWrapper>>> fields);
        
        bool MoveNext() override;
        void Reset() override;
        void Dispose() override;
        
    private:
    
        System::SharedPtr<Document> _document;
        System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::WidgetWrapper>>> fields;
        int32_t cursor;
        
        bool MoveNextImplementation();
        System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>* GetCurrentElementPointer();
        
    };
    
    
private:

    class XfaTestConversionData : public System::Object
    {
        typedef XfaTestConversionData ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<System::IO::MemoryStream> DataStream;
        System::SharedPtr<System::IO::MemoryStream> TemplateStream;
        System::SharedPtr<System::IO::MemoryStream> ConfigStream;
        System::SharedPtr<System::IO::MemoryStream> LocalesSetStream;
        System::SharedPtr<System::IO::MemoryStream> WholeXDPStream;
        System::SharedPtr<XfaRenderer::Core::XfaFontCash> FontCash;
        System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::ArrayPtr<uint8_t>>> ImageResources;
        
        /// <summary>
        /// 
        /// </summary>
        /// <param name="outZipFileName"></param>
        /// <param name="fontNames"></param>
        /// <param name="saveAdvansedSetOfData"> new issues requres loading of advanced sets of data - LocaleSet, Config,Form - this parameter defines wheter they are needed. They are not needed when we for some reason want recreate xfadataset-file for old issue. </param>
        void SaveToZip(System::String outZipFileName, System::SharedPtr<System::Collections::Generic::List<System::String>> fontNames);
        void SeekAllStreamsToZeroPosition();
        System::SharedPtr<System::Collections::Generic::Dictionary<XfaTag, System::SharedPtr<System::IO::Stream>>> GetStreamsDictionaryForConverter();
        
        XfaTestConversionData();
        
    private:
    
        void AddEntryToZipWriterIfNotNull(System::SharedPtr<System::IO::MemoryStream> addedStream, System::String entryName, System::SharedPtr<Aspose::Pal::PalZipWriter> zipWriter);
        void SeekStreamToBeginIfNotNull(System::SharedPtr<System::IO::MemoryStream> stream);
        
    };
    
    
public:

    /// <summary>
    /// Returns true if object is thread-safe.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsSynchronized();
    /// <summary>
    /// Returns synchronization object.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> get_SyncRoot() const;
    /// <summary>
    /// If set, all form fields will be recalculated when any field is changed. Default value is true. Set to false in order to increase performance when filling form with large amount of calculated fields.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_AutoRecalculate() const;
    /// <summary>
    /// If set, all form fields will be recalculated when any field is changed. Default value is true. Set to false in order to increase performance when filling form with large amount of calculated fields.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AutoRecalculate(bool value);
    /// <summary>
    /// If set, absent form fields will be automatically created if they present in annotations.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_AutoRestoreForm() const;
    /// <summary>
    /// If set, absent form fields will be automatically created if they present in annotations.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AutoRestoreForm(bool value);
    /// <summary>
    /// Gets default resources placed on this form.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Resources> get_DefaultResources();
    /// <summary>
    /// Gets default appearance of the form (object which describes default font, text size and color for fields on the form).
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Annotations::DefaultAppearance> get_DefaultAppearance();
    /// <summary>
    /// Sets default appearance of the form (object which describes default font, text size and color for fields on the form).
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DefaultAppearance(System::SharedPtr<Aspose::Pdf::Annotations::DefaultAppearance> value);
    /// <summary>
    /// Gets XFA data of the form (if presents).
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Forms::XFA> get_XFA() const;
    
    /// <summary>
    ///   Forms can contain signing information, i.e. can be signed or unsigned.
    ///   And form's view sometimes must depend on whether form is signed or not.
    ///   This property tells to form's converter (f.e. during conversion XFA form to Standard form)
    ///   whether result form must be rendered as signed or as unsigned.
    /// </summary>
    Form::SignDependentElementsRenderingModes SignDependentElementsRenderingModeWhenConverted;
    
    /// <summary>
    /// If this property is true the value of NeedsRendering key will be ignored during conversion 
    /// XFA form to Standard form. It is false by default.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IgnoreNeedsRendering() const;
    /// <summary>
    /// If this property is true the value of NeedsRendering key will be ignored during conversion 
    /// XFA form to Standard form. It is false by default.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IgnoreNeedsRendering(bool value);
    /// <summary>
    /// If this property is true the "Perms" dictionary will be removed from the pdf document after conversion 
    /// dynamic documents to standard. The "Perms" dictionary can contain a rules that disturb displaying selection of 
    /// mandatory fields in Adobe Acrobat reader.
    /// It is false by default.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_RemovePermission() const;
    /// <summary>
    /// If this property is true the "Perms" dictionary will be removed from the pdf document after conversion 
    /// dynamic documents to standard. The "Perms" dictionary can contain a rules that disturb displaying selection of 
    /// mandatory fields in Adobe Acrobat reader.
    /// It is false by default.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_RemovePermission(bool value);
    /// <summary>
    /// If this property is true then additional red boundary rectangles will be drawn for required Xfa exclGroup elements containers
    /// This property was introduced because absences of analogues for the exclGroup during conversion Xfa representation of forms 
    /// to standard.
    /// It is false by default.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_EmulateRequierdGroups() const;
    /// <summary>
    /// If this property is true then additional red boundary rectangles will be drawn for required Xfa exclGroup elements containers
    /// This property was introduced because absences of analogues for the exclGroup during conversion Xfa representation of forms 
    /// to standard.
    /// It is false by default.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_EmulateRequierdGroups(bool value);
    /// <summary>
    /// Gets type of the form. Possible values are: Standard, Static, Dynamic.
    /// </summary>
    ASPOSE_PDF_SHARED_API FormType get_Type();
    /// <summary>
    /// Gets type of the form. Possible values are: Standard, Static, Dynamic.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Type(FormType value);
    /// <summary>
    /// Gets list of all fields in lowest level of hierarhical form.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::SharedPtr<Field>> get_Fields();
    /// <summary>
    /// Allows to set order of field calculation. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CalculatedFields(System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<Field>>> value);
    /// <summary>
    /// If set, the document contains at least one signature field. 
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_SignaturesExist();
    /// <summary>
    /// If set, the document contains at least one signature field. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SignaturesExist(bool value);
    /// <summary>
    /// If set, the document contains signatures that may be invalidated if the file is saved (written) in a way that alters its previous contents, 
    /// as opposed to an incremental update.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_SignaturesAppendOnly();
    /// <summary>
    /// If set, the document contains signatures that may be invalidated if the file is saved (written) in a way that alters its previous contents, 
    /// as opposed to an incremental update.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SignaturesAppendOnly(bool value);
    
    /// <summary>
    /// Copies fields placed on the form into array.
    /// </summary>
    /// <param name="array">Array where fields must be placed.</param>
    /// <param name="index">Starting index.</param>
    ASPOSE_PDF_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<Field>> array, int32_t index);
    /// <summary>
    /// Gets enumeration of form fields.
    /// </summary>
    /// <returns>Field enumerator.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>>> GetEnumerator() override;
    /// <summary>
    /// Delete field from the form.
    /// </summary>
    /// <param name="field">Field which must be deleted.</param>
    ASPOSE_PDF_SHARED_API void Delete(System::SharedPtr<Field> field);
    /// <summary>
    /// Deletes field from the form by its name.
    /// </summary>
    /// <param name="fieldName">Name of the filed which must be deleted.</param>
    ASPOSE_PDF_SHARED_API void Delete(System::String fieldName);
    /// <summary>
    /// Removes all form fields and place their values directly on the page.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Flatten();
    
    /// <summary>
    /// Gets field of the form by field name. Throws excpetion if the field was not found.
    /// </summary>
    /// <param name="name">Name of the field.</param>
    /// <returns>Retreived field.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> idx_get(System::String name);
    /// <summary>
    /// Gets field of the form by field index.
    /// </summary>
    /// <param name="index">Index of the field.</param>
    /// <returns>Retreived field.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> idx_get(int32_t index);
    
    /// <summary>
    /// Adds field on the form.
    /// </summary>
    /// <param name="field">Field which must be added.</param>
    /// <param name="pageNumber">Page index where added field will be placed.</param>
    ASPOSE_PDF_SHARED_API void Add(System::SharedPtr<Field> field, int32_t pageNumber);
    /// <summary>
    /// Adds field on the form.
    /// </summary>
    /// <param name="field">Field which must be added.</param>
    ASPOSE_PDF_SHARED_API void Add(const System::SharedPtr<Field>& field);
    /// <summary>
    /// Adds new field to the form; If this field is already placed on other or this form, the copy of field is created. 
    /// </summary>
    /// <param name="field">Field name.</param>
    /// <param name="partialName">Name of field on the form.</param>
    /// <param name="pageNumber">Page number where field will be added.</param>
    /// <returns>Added field returned. If copy of the field was created it will be returned.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Field> Add(System::SharedPtr<Field> field, System::String partialName, int32_t pageNumber);
    /// <summary>
    /// Adds additional appearance of the field to specified page of the document in the specified location. 
    /// </summary>
    /// <param name="field">Field which appearance should be added on form.</param>
    /// <param name="pageNumber">Number of the page where field must be placed.</param>
    /// <param name="rect">Rectangle where field will be placed.</param>
    ASPOSE_PDF_SHARED_API void AddFieldAppearance(System::SharedPtr<Field> field, int32_t pageNumber, System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Removes appearance of the field at specified index. 
    /// If only one child appearance left, method embeds it into the field.
    /// </summary>
    /// <param name="field">Field with appearances.</param>
    /// <param name="appearanceIndex">Appearances index.</param>
    ASPOSE_PDF_SHARED_API void RemoveFieldAppearance(System::SharedPtr<Field> field, int32_t appearanceIndex);
    /// <summary>
    /// Sets XFA of the form to specified value.
    /// </summary>
    /// <param name="xml">Xml document which concains new XFA data.</param>
    ASPOSE_PDF_SHARED_API void AssignXfa(System::SharedPtr<System::Xml::XmlDocument> xml);
    /// <summary>
    /// Check if the form already has specified field.
    /// </summary>
    /// <param name="field">Field to check.</param>
    /// <returns>
    ///   <c>true</c> if the specified field name added to Form; otherwise, <c>false</c>.
    /// </returns>
    ASPOSE_PDF_SHARED_API bool HasField(System::SharedPtr<Field> field);
    /// <summary>
    /// Determines if the field with specified name already added to the Form.
    /// </summary>
    /// <param name="fieldName"><see cref="Field::PartialName"></see> or <see cref="Annotation::FullName"></see> of the field.</param>
    /// <returns>
    ///   <see langword="true"></see> if the specified field name added to Form; otherwise, <see langword="false"></see>.
    /// </returns>
    ASPOSE_PDF_SHARED_API bool HasField(System::String fieldName);
    /// <summary>
    /// Determines if the field with specified name already added to the Form, with ability to look into children hierarchy of fields.
    /// </summary>
    /// <param name="fieldName"><see cref="Field::PartialName"></see> or <see cref="Annotation::FullName"></see> of the field.</param>
    /// <param name="searchChildren">
    /// When set to <see langword="true"></see> the whole hierarchy of form fields would be searched for the requested <paramref name="fieldName"></paramref>
    /// (note that in this case the <see cref="Annotation::FullName"></see> of the required field should be passed as <paramref name="fieldName"></paramref>).
    /// </param>
    /// <returns>
    /// <see langword="true"></see> if the specified field name added to Form; otherwise, <see langword="false"></see>.
    /// </returns>
    ASPOSE_PDF_SHARED_API bool HasField(System::String fieldName, bool searchChildren);
    /// <summary>
    /// Returns fields inside of specified rectangle.
    /// </summary>
    /// <param name="rect">Rectangle where fields should be found.</param>
    /// <returns>Array with found fields.</returns>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::SharedPtr<Field>> GetFieldsInRect(System::SharedPtr<Rectangle> rect);
    /// <summary>
    /// Makes form fields annotations independent.
    /// </summary>
    /// <param name="page">The target page.</param>
    ASPOSE_PDF_SHARED_API void MakeFormAnnotationsIndependent(System::SharedPtr<Page> page);
    /// <summary>
    /// Gets number of the fields on this form.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Count() const override;
    
protected:

    System::WeakPtr<Document> _document;
    System::SharedPtr<Aspose::Pdf::Forms::XFA> _xfa;
    System::String ApsModelSnapshotFileForTypeConversion;
    System::String ApsModelXpsSnapshotFileForTypeConversion;
    System::String ApsModelPngSnapshotFileForTypeConversion;
    Aspose::Pdf::ApsToXpsSavingMode ApsToXpsSavingMode;
    bool useRadiobuttonExtendedAttibsWhenConvertedToStandardForm;
    System::String ZipFileToSaveConversionData;
    
    bool get_HasXfa();
    
    static System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> findInHash(System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::WidgetWrapper>>> hash, System::String name);
    static System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> getFieldByRemainedName(System::String remainedName, System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::WidgetWrapper>>> hash, System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>>> fields, System::SharedPtr<Document> document);
    void assertDefaultResources();
    static System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> GetAcroFormFontsDictionary(System::SharedPtr<Document> document);
    /// <summary>
    /// Clears cashed fields. This is required when form is flatteing.
    /// </summary>
    void ClearCache();
    
    Form(System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Form, CODEPORTING_ARGS(System::SharedPtr<Document> document));
    /// <summary>
    /// Searches field by field name. Returns null if field was not found.
    /// </summary>
    /// <param name="name">Field name.</param>
    /// <returns>Field object.</returns>
    System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> get(System::String name);
    bool IsButton(System::SharedPtr<System::Xml::XmlNode> fieldTemplate);
    void FlattenXfa(System::SharedPtr<Form::FlattenSettings> flattenSettings);
    System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> findField(System::String name);
    System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> remove(System::String name);
    void addFieldToAcroForm(System::SharedPtr<Field> field);
    System::SharedPtr<Field> DuplicateField(System::SharedPtr<Field> field, bool isNotSamePage);
    void RemoveFieldFromAnnots(System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> removedField);
    System::SharedPtr<Resources> CreateDefaultResources();
    void UpdateStaticFormAppearance(int32_t pageIndex);
    void Recalculate();
    /// <summary>
    /// Recalculates calculated fields of the form.
    /// </summary>
    /// <returns>true if at least one field was changed.</returns>
    bool RecalculateStep();
    /// <summary>
    /// Finds all fields of T type. Nested fields are taken into account.
    /// </summary>
    /// <typeparam name="T">The type to search.</typeparam>
    /// <returns>The list of fields with type T.</returns>
    template <typename T>
    System::SharedPtr<System::Collections::Generic::List<T>> FindFields()
    {
        typedef Field BaseT_Field;
        assert_is_base_of(BaseT_Field, T);
        
        System::SharedPtr<System::Collections::Generic::List<T>> result = System::MakeObject<System::Collections::Generic::List<T>>();
        FindFieldsByType<T>(System::MakeSharedPtr(this), System::ObjectExt::GetType<T>(), result);
        return result;
    }
    
    /// <summary>
    /// Finds and returns a list of fields with the specified name and specific type.
    /// </summary>
    /// <typeparam name="T">The type of the field to find.</typeparam>
    /// <param name="name">The name of the fields to find.</param>
    /// <returns>A list of fields of type T with the specified name.</returns>
    template <typename T>
    System::SharedPtr<System::Collections::Generic::List<T>> FindFieldsByName(System::String name)
    {
        typedef Field BaseT_Field;
        assert_is_base_of(BaseT_Field, T);
        
        System::SharedPtr<System::Collections::Generic::List<T>> result = System::MakeObject<System::Collections::Generic::List<T>>();
        FindFieldsByType<T>(System::MakeSharedPtr(this), System::ObjectExt::GetType<T>(), result, name);
        return result;
    }
    
    virtual ASPOSE_PDF_SHARED_API ~Form();
    
private:

    System::SharedPtr<System::Object> syncRoot;
    System::SharedPtr<Resources> defaultResources;
    System::SharedPtr<Aspose::Pdf::Annotations::DefaultAppearance> defaultAppearance;
    System::SharedPtr<System::Object> _syncDA;
    System::SharedPtr<System::Collections::Generic::HashSet<int32_t>> ids;
    System::SharedPtr<System::Collections::Generic::HashSet<System::String>> names;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::WidgetWrapper>>> cache;
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::WidgetWrapper>>> hash;
    bool _autoRecalculate;
    bool _autoRestoreForm;
    bool _formFieldsRestored;
    
    int32_t get_Count_NonConst();
    
    bool pr_IgnoreNeedsRendering;
    bool pr_RemovePermission;
    bool pr_EmulateRequierdGroups;
    
    /// <summary>
    /// Determines if collection is readonly. Always returns false.
    /// </summary>
    bool get_IsReadOnly() const override;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_AcroForm();
    int32_t get_SignatureFlags();
    void set_SignatureFlags(int32_t value);
    
    static int32_t _signaturesExist;
    static int32_t _signaturesAppendOnly;
    
    static void AddToHash(System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::WidgetWrapper>>> hash, System::String name, System::SharedPtr<Field> field, System::SharedPtr<Document> document);
    static void PartitionFieldName(System::String fieldName, System::String& nameHead, System::String& nameTail);
    static System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> AddAllFieldsToHash(System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::WidgetWrapper>>> hash, System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>>> fields, System::SharedPtr<Document> document, System::String fieldName, System::String nameHead, System::String nameTail);
    static System::SharedPtr<Field> AddFieldToHash(System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::WidgetWrapper>>> hash, System::SharedPtr<Document> document, System::SharedPtr<Field> field, System::String fieldName, System::String nameHead, System::String nameTail, System::String headTrimmed);
    static System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> TryFindInHash(System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::WidgetWrapper>>> hash, System::String fieldName, System::String nameHead, System::String nameTail);
    void form_assert();
    System::SharedPtr<System::IO::MemoryStream> SaveNodeAsDocumentToStream(System::SharedPtr<System::Xml::XmlNode> node);
    void ConvertDynamicXfaToStaticPdf();
    System::SharedPtr<System::Xml::XmlNode> FindDynamicRenderNode(System::SharedPtr<System::Xml::XmlNode> xfaConfigNode);
    static System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> GetAcroFormDrDictionary(System::SharedPtr<Document> document);
    static bool IsMustBeRenderedAsSignedDuringTypeConversion(System::SharedPtr<Form> form);
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::ArrayPtr<uint8_t>>> ExtractXfaImageResources();
    System::SharedPtr<System::IO::Stream> GetXfaImageStream(System::SharedPtr<System::Uri> uri, System::SharedPtr<Aspose::Pdf::XfaConverter::XfaParserOptions> options);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> GetXfaImageNames();
    System::SharedPtr<System::IO::Stream> GetXfaFontStream(System::String resourceId);
    void RemoveXfa();
    System::String GetDynamicRenderConfig();
    void LoadCache();
    void AddToCache(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> field);
    void AddToCache(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::WidgetWrapper> wrapper);
    void AddToCache(System::SharedPtr<Field> field);
    System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> get(int32_t index);
    /// <summary>
    /// Adds field on the form.
    /// </summary>
    /// <param name="field">Field which must be added.</param>
    void Add(const System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>& field) override;
    /// <summary>
    /// Deletes all fields from form. Not supported.
    /// </summary>
    void Clear() override;
    /// <summary>
    /// Determines if field is presented on form..
    /// </summary>
    /// <param name="field">Field to search.</param>
    bool Contains(const System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>& field) const override;
    /// <summary>
    /// Copies form's fields to array.
    /// </summary>
    /// <param name="array">Array to copy.</param>
    /// <param name="arrayIndex">Index of array's item where copying begins.</param>
    void CopyTo(System::ArrayPtr<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>> array, int32_t arrayIndex) override;
    /// <summary>
    /// Deletes field from the form.
    /// </summary>
    /// <param name="field">Field to delete.</param>
    /// <returns>True if field was deleted. False if field was not found on form.</returns>
    bool Remove(const System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>& field) override;
    /// <summary>
    /// Gets unique field name.
    /// </summary>
    /// <param name="prefix">The name prefix.</param>
    /// <param name="includeZeroSuffix">If true then includes zero suffix to name like this - prefix0, prefix1, else like that - pefix, prefix1,.. </param>
    /// <returns></returns>
    System::String GetUniqueFieldName(System::String prefix, bool includeZeroSuffix);
    void CreateUniqueFieldNameWithGroupPrefix(System::SharedPtr<Field> field, System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> existentWidgetAnnotation);
    void ResolveExistentFieldName(System::SharedPtr<Field> field);
    static bool HaveCommonParent(System::SharedPtr<Field> field, System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> otherField);
    void DuplicateKids(System::SharedPtr<Field> field, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> newFieldDictionary, System::SharedPtr<Copier> copier);
    void DuplicateFieldResources(System::SharedPtr<Field> field, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> newFieldDict, System::SharedPtr<Copier> copier);
    void DuplicateResources(System::String resourseType, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> srcApResources, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> destApResources, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> destinationDR, System::SharedPtr<Copier> copier);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> GetOrCreateAcroFormDR();
    void CollectFields(System::SharedPtr<Field> field, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Field>>> list);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Field>>> GetFields();
    System::ArrayPtr<System::SharedPtr<Field>> ToArray(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Field>>> list);
    System::SharedPtr<Rectangle> Intersect(System::SharedPtr<Rectangle> rect1, System::SharedPtr<Rectangle> rect2) const;
    bool Contains(System::SharedPtr<Rectangle> rect, System::SharedPtr<Rectangle> subRect) const;
    System::String GetFullPath(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> field);
    void RestoreFormFieldsIfRequired();
    void RestoreFormFields();
    void SetSignatureFlag(int32_t flag);
    void ClearSignatureFlag(int32_t flag);
    void UpdateSignatureFlag(bool value, int32_t flag);
    bool GetSignatureFlag(int32_t flag);
    void MakeFieldUnique(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> field, System::SharedPtr<System::Collections::Generic::HashSet<int32_t>> pageAnnotationsIds);
    void MoveKidToNewField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> kid, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> newField);
    void AddField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> newField);
    void ChangeFieldNames(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> newFieldDict, int32_t index);
    /// <summary>
    /// Replace the annotation with a reference to the field's parent object if the field only has one child annotation.
    /// Can only be called on an object with one child annotation.
    /// </summary>
    /// <param name="field">The field object.</param>
    void EmbedAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> field);
    template <typename T>
    void FindFieldsByType(System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>>> fields, const System::TypeInfo& type, System::SharedPtr<System::Collections::Generic::List<T>> result, System::String name = nullptr)
    {
        typedef Field BaseT_Field;
        assert_is_base_of(BaseT_Field, T);
        
        for (auto&& widget : System::IterateOver(fields))
        {
            if (widget == nullptr)
            {
                continue;
            }
            
            if (System::ObjectExt::GetType(widget) == type)
            {
                T field = System::ExplicitCast<T>(widget);
                if (name == nullptr || name == field->get_PartialName())
                {
                    result->Add(field);
                }
            }
            
            if (System::ObjectExt::Is<Field>(widget))
            {
                FindFieldsByType<T>(System::ForceStaticCast<Aspose::Pdf::Forms::Field>(widget), type, result, name);
            }
        }
    }
    
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


