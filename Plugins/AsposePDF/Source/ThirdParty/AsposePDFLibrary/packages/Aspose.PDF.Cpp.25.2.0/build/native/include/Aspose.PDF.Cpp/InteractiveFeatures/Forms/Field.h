#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
//using Aspose.Doc.DocumentModel;

#include <system/nullable.h>
#include <system/details/pointer_collection_helpers.h>
#include <system/collections/icollection.h>
#include <system/array.h>

#include "Aspose.PDF.Cpp/InteractiveFeatures/Annotations/WidgetAnnotation.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class Annotation;
class AnnotationCollection;
class JavascriptAction;
namespace JavascriptExtensions
{
class FieldExtension;
} // namespace JavascriptExtensions
} // namespace Annotations
class ApsToPdfConverter;
namespace Collections
{
template <typename, typename> class AsposeHashDictionary;
} // namespace Collections
namespace Devices
{
class DocumentDevice;
} // namespace Devices
class Document;
namespace Engine
{
namespace Data
{
class IPdfDictionary;
class IPdfObject;
class IPdfPrimitive;
class ITrailerable;
} // namespace Data
} // namespace Engine
namespace Facades
{
class Form;
class FormEditor;
class PdfFileSignature;
} // namespace Facades
namespace Forms
{
class ButtonField;
class CheckboxField;
class ChoiceField;
class ChoiceOption;
class ComboBoxField;
class Field;
class Form;
class ListBoxField;
class RadioButtonField;
class RadioButtonOptionField;
class SignatureField;
class TextBoxField;
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
class Point;
class Rectangle;
namespace Tests
{
namespace Annotations
{
class AnnotationTests;
} // namespace Annotations
class RegressionTests_v12_1;
class RegressionTests_v22_12;
class RegressionTests_v23_11;
class RegressionTests_v6_3;
class RegressionTests_v7_3;
} // namespace Tests
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class HashSet;
template <typename> class IEnumerator;
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace IO
{
class Stream;
} // namespace IO
namespace Xml
{
class XmlNamespaceManager;
class XmlNode;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Forms {


// C# preprocessor directive: #if !DOCUMENTIZE

/// <summary>
/// The <b>Aspose.Pdf.Forms</b> namespace has classes which describes forms (standard, static, dynamic) and various types of fields like text box, list box, radio button etc.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};


// C# preprocessor directive: #endif

/// <summary>
/// Base class for acro form fields.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Field : public Aspose::Pdf::Annotations::WidgetAnnotation, public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>>
{
    typedef Field ThisType;
    typedef Aspose::Pdf::Annotations::WidgetAnnotation BaseType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>> BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Devices::DocumentDevice;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::Form;
    friend class Aspose::Pdf::Facades::FormEditor;
    friend class Aspose::Pdf::Facades::PdfFileSignature;
    friend class Aspose::Pdf::Annotations::AnnotationCollection;
    friend class Aspose::Pdf::Annotations::WidgetAnnotation;
    friend class Aspose::Pdf::Forms::XFA;
    friend class Aspose::Pdf::Forms::TextBoxField;
    friend class Aspose::Pdf::Forms::ButtonField;
    friend class Aspose::Pdf::Forms::CheckboxField;
    friend class Aspose::Pdf::Forms::ChoiceField;
    friend class Aspose::Pdf::Forms::ChoiceOption;
    friend class Aspose::Pdf::Forms::ComboBoxField;
    friend class Aspose::Pdf::Forms::Form;
    friend class Aspose::Pdf::Forms::ListBoxField;
    friend class Aspose::Pdf::Forms::RadioButtonField;
    friend class Aspose::Pdf::Forms::RadioButtonOptionField;
    friend class Aspose::Pdf::Forms::SignatureField;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::PageCollection;
    friend class Aspose::Pdf::ApsToPdfConverter;
    friend class Aspose::Pdf::Annotations::JavascriptExtensions::FieldExtension;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::WidgetWrapper;
    friend class Aspose::Pdf::Tests::Annotations::AnnotationTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v12_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v6_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v7_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v22_12;
    friend class Aspose::Pdf::Tests::RegressionTests_v23_11;
    
public:

    /// <summary>
    /// Gets partial name of the field.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_PartialName();
    /// <summary>
    /// Sets partial name of the field.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PartialName(System::String value);
    /// <summary>
    /// Gets alternate name of the field (An alternate field 
    /// name that shall be used in place of the actual field name 
    /// wherever the field shall be identified in the user interface).
    /// Alternate name is used as field tooltip in Adobe Acrobat.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_AlternateName();
    /// <summary>
    /// Sets alternate name of the field (An alternate field 
    /// name that shall be used in place of the actual field name 
    /// wherever the field shall be identified in the user interface).
    /// Alternate name is used as field tooltip in Adobe Acrobat.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AlternateName(System::String value);
    /// <summary>
    /// Gets mapping name  of the field that shall be used when exporting interactive form field data from the document.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_MappingName();
    /// <summary>
    /// Sets mapping name  of the field that shall be used when exporting interactive form field data from the document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_MappingName(System::String value);
    /// <summary>
    /// Gets value of the field.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API System::String get_Value();
    /// <summary>
    /// Sets value of the field.
    /// </summary>
    virtual ASPOSE_PDF_SHARED_API void set_Value(System::String value);
    /// <summary>
    /// Returns true if dictionary is synchronized.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsSynchronized();
    /// <summary>
    /// Gets number of subfields in this field. (For example number of items in radio button field).
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Count() const override;
    /// <summary>
    /// Synchronization object.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> get_SyncRoot() const;
    /// <summary>
    /// Gets boolean value which indicates is this field non-terminal field i.e. group of fields.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsGroup() const;
    /// <summary>
    /// Gets index of this anotation on the page.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_AnnotationIndex();
    /// <summary>
    /// Sets index of this anotation on the page.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AnnotationIndex(int32_t value);
    /// <summary>
    /// Gets index of page which contains this field.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_PageIndex() override;
    /// <summary>
    /// Gets the field rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Rectangle> get_Rect() override;
    /// <summary>
    /// Sets the field rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Rect(System::SharedPtr<Rectangle> value) override;
    /// <summary>
    /// Property for Generator support. Used when field is added to header or footer. If true, this field will created once and it's appearance will be visible on all pages of the document. If false, separated field will be created for every document page. 
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsSharedField() const;
    /// <summary>
    /// Property for Generator support. Used when field is added to header or footer. If true, this field will created once and it's appearance will be visible on all pages of the document. If false, separated field will be created for every document page. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsSharedField(bool value);
    /// <summary>
    /// If true then font size will reduced to fit text to specified rectangle. 
    /// </summary>
    static ASPOSE_PDF_SHARED_API bool get_FitIntoRectangle();
    /// <summary>
    /// If true then font size will reduced to fit text to specified rectangle. 
    /// </summary>
    static ASPOSE_PDF_SHARED_API void set_FitIntoRectangle(bool value);
    /// <summary>
    /// Maximail font size which can be used for field contents. -1 to don't check size. 
    /// </summary>
    static ASPOSE_PDF_SHARED_API double get_MaxFontSize();
    /// <summary>
    /// Maximail font size which can be used for field contents. -1 to don't check size. 
    /// </summary>
    static ASPOSE_PDF_SHARED_API void set_MaxFontSize(double value);
    /// <summary>
    /// Minimal font size which can be used for field contents. -1 to don't check size. 
    /// </summary>
    static ASPOSE_PDF_SHARED_API double get_MinFontSize();
    /// <summary>
    /// Minimal font size which can be used for field contents. -1 to don't check size. 
    /// </summary>
    static ASPOSE_PDF_SHARED_API void set_MinFontSize(double value);
    /// <summary>
    /// Gets tab order of the field.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_TabOrder();
    /// <summary>
    /// Sets tab order of the field.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TabOrder(int32_t value);
    
    /// <summary>
    /// Recaculates all calculated fields on the form. 
    /// </summary>
    /// <returns>true if field value was changed during recalculation.</returns>
    ASPOSE_PDF_SHARED_API bool Recalculate();
    /// @deprecated Use CopyTo(WidgetAnnotation[], index) instead.
    /// <summary>
    /// Copies subfields of this field into array starting from specified index.
    /// </summary>
    /// <param name="array">Array where field must be copied.</param>
    /// <param name="index">Starting index where fields will be copied.</param>
    ASPOSE_PDF_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<Field>> array, int32_t index);
    /// <summary>
    /// Copies subfields of this field into array starting from specified index.
    /// </summary>
    /// <param name="array">Array where field must be copied.</param>
    /// <param name="index">Starting index where fields will be copied.</param>
    ASPOSE_PDF_SHARED_API void CopyToWidgetArray(System::ArrayPtr<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>> array, int32_t index);
    /// <summary>
    /// Returns enumerator of contained fields.
    /// </summary>
    /// <returns>Enumerator.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>>> GetEnumerator() override;
    
    /// <summary>
    /// Creates field for use in Generator.
    /// </summary>
    /// <param name="doc">Document where field will be created.</param>
    ASPOSE_PDF_SHARED_API Field(System::SharedPtr<Document> doc);
    
    /// <summary>
    /// Removes this field and place its value directly on the page.
    /// </summary>
    /// <param name="isPageContentsBracketed"></param>
    ASPOSE_PDF_SHARED_API void Flatten() override;
    
    /// <summary>
    /// Gets subfield contained in this field by name of the subfield.
    /// </summary>
    /// <param name="name">Contained subfield name.</param>
    /// <returns>Field instance.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> idx_get(System::String name);
    /// <summary>
    /// Gets subfield contained in this field by index.
    /// </summary>
    /// <param name="index">Index of the reuqested subfield.</param>
    /// <returns>Field instance.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> idx_get(int32_t index);
    
    /// <summary>
    /// Set position of the field.
    /// </summary>
    /// <param name="point">Point where field should be positioned.</param>
    virtual ASPOSE_PDF_SHARED_API void SetPosition(System::SharedPtr<Point> point);
    /// <summary>
    /// Executes a specified JavaScript action for the field.
    /// </summary>
    /// <param name="javaScriptAction">The JavaScript action to execute.</param>
    ASPOSE_PDF_SHARED_API void ExecuteFieldJavaScript(System::SharedPtr<Aspose::Pdf::Annotations::JavascriptAction> javaScriptAction);
    ASPOSE_PDF_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    static const int32_t _NoToggleToOff;
    static const int32_t _Radio;
    static const int32_t _Pushbutton;
    static const int32_t _RadiosInUnison;
    static const int32_t _Multiline;
    static const int32_t _Password;
    static const int32_t _FileSelect;
    static const int32_t _DoNotSpellCheck;
    static const int32_t _DoNotScroll;
    static const int32_t _Comb;
    static const int32_t _RichText;
    static const int32_t _Combo;
    static const int32_t _Edit;
    static const int32_t _Sort;
    static const int32_t _MultiSelect;
    static const int32_t _CommitOnSelChange;
    System::String _value;
    
    System::SharedPtr<System::Xml::XmlNamespaceManager> get_NamespaceManager();
    
    /// <summary>
    /// Operator for comparision field value with given value.
    /// </summary>
    /// <param name="value">Value to check the field value on.</param>
    /// <returns>True if field value and passed value are equals.</returns>
    virtual ASPOSE_PDF_SHARED_API bool IsEqualTo(System::String value);
    /// <summary>
    /// Returns value correctly encoded for placing into XFA dataset.
    /// </summary>
    /// <param name="value">Value for placing into XFA form.</param>
    /// <returns>Encoded value.</returns>
    virtual ASPOSE_PDF_SHARED_API System::String GetConformXFAValue(System::String value);
    bool IsCalculated();
    void RemoveFromKids(System::SharedPtr<Aspose::Pdf::Annotations::Annotation> fieldInKids);
    static System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> CreateField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> field, System::SharedPtr<Document> document);
    
    Field(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Field, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> annotation, System::SharedPtr<Document> document));
    ASPOSE_PDF_SHARED_API void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer, System::SharedPtr<Rectangle> rect) override;
    /// <summary>
    /// Initialize the field.
    /// </summary>
    /// <param name="trailer">The trailerable.</param>
    virtual ASPOSE_PDF_SHARED_API void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailer);
    
    Field();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Field, CODEPORTING_ARGS());
    
    Field(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Field, CODEPORTING_ARGS(System::SharedPtr<Document> doc, System::SharedPtr<Rectangle> rect));
    
    Field(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, bool addToForm = false);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Field, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, bool addToForm = false));
    /// <summary>
    /// Cleans field structure when all fields are removed. See PDFNEWNET-37756.
    /// </summary>
    void RemoveEmptyParents();
    /// <summary>
    /// Checks if field is grouping field.
    /// </summary>
    /// <param name="field">The dictionary of field to check.</param>
    /// <returns><c>True</c> if field is grouping field.</returns>
    static bool IsGroupField(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> field);
    System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> findField(System::String name);
    void addField(System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> field);
    System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> remove(System::String name);
    /// <summary>
    /// Set value of the field.
    /// </summary>
    /// <param name="value">NEw value of the field.</param>
    void setValue(System::String value);
    ASPOSE_PDF_SHARED_API void UpdateAppearances() override;
    System::String GetFieldReferencePath();
    System::SharedPtr<System::Xml::XmlNode> GetFieldTemplate();
    void SetFieldImage(System::SharedPtr<System::IO::Stream> image);
    System::ArrayPtr<uint8_t> GetFieldImage();
    void AddNext(System::SharedPtr<Field> field);
    void ConvertToFieldWithKids();
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> CreateKidAnnotation(System::SharedPtr<Rectangle> rect);
    void EmbedAnnotation();
    /// <summary>
    /// This method is required for Generator support. This method creates copy of field "template" when generator uses Footer/Header functionality.
    /// </summary>
    /// <returns></returns>
    virtual ASPOSE_PDF_SHARED_API System::SharedPtr<Field> CreateCopy();
    ASPOSE_PDF_SHARED_API bool AppearanceSupported() override;
    System::String GetCharacteristicsString(System::String entry);
    static void SetCharacteristicsString(System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annot, System::String entry, System::String value);
    void SetCharacteristicsString(System::String entry, System::String value);
    
    virtual ASPOSE_PDF_SHARED_API ~Field();
    
private:

    System::SharedPtr<System::Object> syncRoot;
    System::String partialName;
    System::String alternateName;
    System::String mappingName;
    bool enableRecalculate;
    System::String _ReferencePath;
    System::SharedPtr<Field> _next;
    System::SharedPtr<System::Xml::XmlNamespaceManager> _nsmgr;
    bool _isSharedField;
    static const System::String Prologue;
    
    static System::Nullable<bool>& _fitIntoRectangle();
    static System::Nullable<double>& _maxFontSize();
    static System::Nullable<double>& _minFontSize();
    
    static const double FontSizeNotDefined;
    static const double DefaultMaxFontSize;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::WidgetWrapper>>> cache;
    System::SharedPtr<Aspose::Pdf::Collections::AsposeHashDictionary<System::String, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::WidgetWrapper>>> hash;
    System::SharedPtr<System::Collections::Generic::HashSet<int32_t>> _objectIds;
    bool isGroup;
    
    bool get_IsReadOnly() const override;
    
    bool IsValidValueType(System::String typeName);
    System::String CalculateValue(System::String script);
    static bool IsRadioButtonOption(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> field);
    static bool IsRadioButton(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> field);
    void AddToCache(System::SharedPtr<Document> document, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> kid);
    void AddToCache(System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::WidgetWrapper> wrapper);
    void AddToCache(System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> annotation);
    System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> get(System::String name);
    System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation> get(int32_t index);
    static bool isWidget(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> field);
    void RemoveFromCache(int32_t objectId);
    /// <summary>
    /// Returns rectangle of all kids of the field. This is required for fields
    /// </summary>
    /// <returns></returns>
    System::SharedPtr<Rectangle> GetKidsRectangle(int32_t pageIndex);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> Copy(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> src);
    void Add(const System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>& item) override;
    void Clear() override;
    bool Contains(const System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>& item) const override;
    void CopyTo(System::ArrayPtr<System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>> array, int32_t arrayIndex) override;
    bool Remove(const System::SharedPtr<Aspose::Pdf::Annotations::WidgetAnnotation>& item) override;
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


