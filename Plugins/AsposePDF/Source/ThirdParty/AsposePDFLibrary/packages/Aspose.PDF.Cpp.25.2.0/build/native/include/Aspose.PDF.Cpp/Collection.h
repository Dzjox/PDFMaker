#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/nullable.h>
#include <system/enum.h>
#include <system/collections/icomparer.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/EmbeddedFileCollection.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Collection;
class CollectionField;
class CollectionItem;
class CollectionSort;
class Document;
namespace Engine
{
namespace Data
{
class IPdfDictionary;
class IPdfName;
} // namespace Data
} // namespace Engine
class FileSpecification;
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
template <typename> class IList;
} // namespace Generic
} // namespace Collections
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents the type of a field value in a schema collection.
/// </summary>
enum class FieldValueType
{
    /// <summary>
    /// Represents a value for not defined type.
    /// </summary>
    None,
    /// <summary>
    /// Represents a text type.
    /// </summary>
    Text,
    /// <summary>
    /// Represents a number type.
    /// </summary>
    Number,
    /// <summary>
    /// Represents a date type.
    /// </summary>
    Date
};

/// <summary>
/// Represents the subtype parameter of a field in a sceme collection.
/// </summary>
enum class CollectionFieldSubtype
{
    /// <summary>
    /// The subtype is not defined. 
    /// </summary>
    None = 0,
    /// <summary>
    /// A text type. The field data shall be stored as a PDF text string.
    /// </summary>
    S,
    /// <summary>
    /// A date type. The field data shall be stored as a PDF date string.
    /// </summary>
    D,
    /// <summary>
    /// A number type. The field data shall be stored as a PDF number.
    /// </summary>
    N,
    /// <summary>
    /// The field data shall be the file name of the embedded file stream, as identified by the UF
    /// entry of the file specification, if present; otherwise by the F entry of the file specification
    /// </summary>
    F,
    /// <summary>
    /// The field data shall be the file name of the embedded file stream, as identified by the UF
    /// entry of the file specification, if present; otherwise by the F entry of the file specification
    /// </summary>
    Desc,
    /// <summary>
    /// The field data shall be the modification date of the embedded file stream, as identified by the
    /// ModDate entry in the embedded file parameter dictionary.
    /// </summary>
    ModDate,
    /// <summary>
    /// The field data shall be the creation date of the embedded file stream, as identified by the
    /// CreationDate entry in the embedded file
    /// </summary>
    CreationDate,
    /// <summary>
    /// The field data shall be the size of the embedded file, as identified by the Size entry in the 
    /// embedded file parameter dictionary
    /// </summary>
    Size,
    /// <summary>
    /// (PDF 2.0) The field data is the length of the embedded file stream, as identified by the 
    /// Length entry in the embedded file stream dictionary, and the two values shall be identical.
    /// </summary>
    CompressedSize
};

/// <summary>
/// Represents a comparator class for a file specification.
/// The comparator compares according to the specification, using the list of fields to sort in the collection definition.
/// According to the specification, sorting is done by collection items values.
/// If there is no collection items dictionary, then sorting is done by Params values.
/// </summary>
class FileSpecificationComparer : public System::Collections::Generic::IComparer<System::SharedPtr<Aspose::Pdf::FileSpecification>>
{
    typedef FileSpecificationComparer ThisType;
    typedef System::Collections::Generic::IComparer<System::SharedPtr<Aspose::Pdf::FileSpecification>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a file specification comparer.
    /// </summary>
    /// <param name="sort">The collection sort definition.</param>
    FileSpecificationComparer(System::SharedPtr<CollectionSort> sort);
    
    /// <summary>
    /// Compares two file specifications according to the collection definition, using the specified sort.
    /// </summary>
    /// <param name="first">The first file specification.</param>
    /// <param name="second">The second file specification.</param>
    /// <returns>A value indicating the relative order of the file specifications.</returns>
    int32_t Compare(const System::SharedPtr<FileSpecification>& first, const System::SharedPtr<FileSpecification>& second) const override;
    
private:

    System::SharedPtr<CollectionSort> _sort;
    
    int32_t CompareByCollectionItemFields(const System::SharedPtr<FileSpecification>& first, const System::SharedPtr<FileSpecification>& second) const;
    int32_t CompareCollectionItems(const System::SharedPtr<CollectionItem>& first, const System::SharedPtr<CollectionItem>& second, const System::String& name, bool ascOrder) const;
    bool TryCompareDateValues(const System::SharedPtr<CollectionItem>& first, const System::SharedPtr<CollectionItem>& second, const System::String& name, int32_t& result) const;
    bool TryCompareIntValues(const System::SharedPtr<CollectionItem>& first, const System::SharedPtr<CollectionItem>& second, const System::String& name, int32_t& result) const;
    bool TryCompareDoubleValues(const System::SharedPtr<CollectionItem>& first, const System::SharedPtr<CollectionItem>& second, const System::String& name, int32_t& result) const;
    bool TryCompareTextValues(const System::SharedPtr<CollectionItem>& first, const System::SharedPtr<CollectionItem>& second, const System::String& name, int32_t& result) const;
    int32_t CompareByAlternateStrategy(const System::SharedPtr<FileSpecification>& first, const System::SharedPtr<FileSpecification>& second) const;
    
};

/// <summary>
/// Represents a class that describes the "Schema" of a document collection.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS CollectionSchema : public System::Object
{
    typedef CollectionSchema ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Collection;
    
public:

    /// <summary>
    /// Gets all schema's fields.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<CollectionField>>> get_AllFields();
    /// <summary>
    /// Gets all schema's fields names.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::ICollection<System::String>> get_AllNames();
    
    /// <summary>
    /// Determines whether the specified name exists in the schema.
    /// </summary>
    /// <param name="name">The name to check.</param>
    /// <returns>
    /// <c>true</c> if the specified name exists in the schema; otherwise, <c>false</c>.
    /// </returns>
    ASPOSE_PDF_SHARED_API bool HasName(System::String name);
    /// <summary>
    /// Gets a collection field by name.
    /// </summary>
    /// <param name="name">The field name</param>
    /// <returns></returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<CollectionField> GetCollectionField(System::String name);
    
protected:

    /// <summary>
    /// Creates an instance of collection schema.
    /// </summary>
    CollectionSchema();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CollectionSchema, CODEPORTING_ARGS());
    
    /// <summary>
    /// Creates an instance of collection schema.
    /// </summary>
    /// <param name="collectionDict">The schema dictionary.</param>
    CollectionSchema(System::SharedPtr<Engine::Data::IPdfDictionary> collectionDict);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CollectionSchema, CODEPORTING_ARGS(System::SharedPtr<Engine::Data::IPdfDictionary> collectionDict));
    
private:

    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<CollectionField>>> _collectionFields;
    System::SharedPtr<Engine::Data::IPdfDictionary> _engineDict;
    
    System::SharedPtr<CollectionField> CreateCollectionField(System::String key);
    
};

/// <summary>
/// Represents a class for converting CollectionFieldSubtype values.
/// </summary>
class CollectionFieldSubtypeConverter : public System::Object
{
    typedef CollectionFieldSubtypeConverter ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Converts a PdfName value to its corresponding CollectionFieldSubtype enumeration value.
    /// </summary>
    /// <param name="pdfName">The PdfName value to be converted.</param>
    /// <returns>
    /// The CollectionFieldSubtype enumeration value that corresponds to the PdfName value.
    /// If the name value is not recognized, returns CollectionFieldSubtype.None.
    /// </returns>
    static CollectionFieldSubtype Convert(System::SharedPtr<Engine::Data::IPdfName> pdfName);
    /// <summary>
    /// Converts a string value to its corresponding CollectionFieldSubtype enumeration value.
    /// </summary>
    /// <param name="name">The string value to be converted.</param>
    /// <returns>
    /// The CollectionFieldSubtype enumeration value that corresponds to the string value.
    /// If the string value is not recognized, returns CollectionFieldSubtype.None.
    /// </returns>
    static CollectionFieldSubtype Convert(System::String name);
    /// <summary>
    /// Converts a CollectionFieldSubtype value to its string representation.
    /// </summary>
    /// <param name="suptype">The CollectionFieldSubtype value to be converted.</param>
    /// <returns>
    /// The string representation of the CollectionFieldSubtype value.
    /// If suptype is None then returns empty string. 
    /// </returns>
    static System::String Convert(CollectionFieldSubtype suptype);
    /// <summary>
    /// Converts a CollectionFieldSubtype enumeration value to its corresponding FieldValueType enumeration value.
    /// </summary>
    /// <param name="subtype">The CollectionFieldSubtype value to convert.</param>
    /// <returns>The FieldValueType value corresponding to the given subtype.</returns>
    static FieldValueType ConvertToFieldType(CollectionFieldSubtype subtype);
    
};

/// <summary>
/// Represents a document collection schema field class.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS CollectionField : public System::Object
{
    typedef CollectionField ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::CollectionSchema;
    
public:

    /// <summary>
    /// Gets the type of a field value in a schema collection.
    /// This field describes the value type corresponding to <see cref="Subtype"></see>.
    /// </summary>
    ASPOSE_PDF_SHARED_API FieldValueType get_FiledType() const;
    /// <summary>
    /// Gets the subtype of a field value in a schema collection.
    /// The subtype of collection field or file-related field that this  dictionary describes.
    /// This entry identifies the type of data that shall be stored in the field.
    /// </summary>
    ASPOSE_PDF_SHARED_API CollectionFieldSubtype get_Subtype() const;
    /// <summary>
    /// Gets the textual field name that shall be presented to the user by the interactive PDF processor
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_N() const;
    /// <summary>
    /// Gets the relative order of the field name in the user interface. 
    /// Fields shall be sorted by the interactive PDF processor in ascending order.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::Nullable<int32_t> get_O() const;
    /// <summary>
    /// Gets the initial visibility of the field in the user interface. Default value: true.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_V() const;
    /// <summary>
    /// Gets a flag indicating whether the interactive PDF processor should provide support for editing the field value.
    /// Default value: false
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_E() const;
    
protected:

    /// <summary>
    /// Creates a collection field.
    /// </summary>
    /// <param name="engineDict">The collection field dictionary.</param>
    CollectionField(System::SharedPtr<Engine::Data::IPdfDictionary> engineDict);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CollectionField, CODEPORTING_ARGS(System::SharedPtr<Engine::Data::IPdfDictionary> engineDict));
    
private:

    System::SharedPtr<Engine::Data::IPdfDictionary> _engineDict;
    FieldValueType pr_FiledType;
    
    /// <summary>
    /// Gets the type of a field value in a schema collection.
    /// This field describes the value type corresponding to <see cref="Subtype"></see>.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FiledType(FieldValueType value);
    
    CollectionFieldSubtype pr_Subtype;
    
    /// <summary>
    /// Gets the subtype of a field value in a schema collection.
    /// The subtype of collection field or file-related field that this  dictionary describes.
    /// This entry identifies the type of data that shall be stored in the field.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Subtype(CollectionFieldSubtype value);
    
    System::String pr_N;
    
    /// <summary>
    /// Gets the textual field name that shall be presented to the user by the interactive PDF processor
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_N(System::String value);
    
    System::Nullable<int32_t> pr_O;
    
    /// <summary>
    /// Gets the relative order of the field name in the user interface. 
    /// Fields shall be sorted by the interactive PDF processor in ascending order.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_O(System::Nullable<int32_t> value);
    
    bool pr_V;
    
    /// <summary>
    /// Gets the initial visibility of the field in the user interface. Default value: true.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_V(bool value);
    
    bool pr_E;
    
    /// <summary>
    /// Gets a flag indicating whether the interactive PDF processor should provide support for editing the field value.
    /// Default value: false
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_E(bool value);
    
    void InitValues();
    void InitSubype();
    
};

/// <summary>
/// Represents a class for a collection sort definition.
/// </summary>
class CollectionSort : public System::Object
{
    typedef CollectionSort ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the name or names of fields that the interactive PDF processor shall use 
    /// to sort the items in the collection. If the value is a name, it identifies a field described 
    /// in the parent collection dictionary.
    /// If the value is an array, each element of the array shall be a name that identifies a 
    /// field described in the parent collection dictionary. The array form shall be used to 
    /// allow additional fields to contribute to the sort, where each additional field shall be 
    /// used to break ties. More specifically, if multiple collection item dictionaries have the 
    /// same value for the first field named in the array, the values for successive fields 
    /// named in the array shall be used for sorting, until a unique order is determined or 
    /// until the named fields are exhausted.
    /// </summary>
    const System::ArrayPtr<System::String>& get_S() const;
    /// <summary>
    /// Gets the sort ordering value.
    /// If the value is a boolean, it specifies whether the interactive PDF processor 
    /// shall sort the items in the collection in ascending order (true) or descending order 
    /// (false). If the value is an array, each element of the array shall be a boolean value that 
    /// specifies whether the entry at the same index in the S array shall be sorted in 
    /// ascending or descending order.
    /// If the number of entries in the A array is larger than the number of entries in the S
    /// array the extra entries in the A array shall be ignored. If the number of entries in the 
    /// A array is less than the number of entries in the S array the missing entries in the A
    /// array shall be assumed to be true.
    /// Default value: <c>true</c>
    /// </summary>
    const System::ArrayPtr<bool>& get_A() const;
    
    /// <summary>
    /// Creates an instance of collection sort class.
    /// </summary>
    CollectionSort();
    /// <summary>
    /// Creates an instance of collection sort class.
    /// </summary>
    /// <param name="collectionSortDict">The collection sort dictionary.</param>
    CollectionSort(System::SharedPtr<Engine::Data::IPdfDictionary> collectionSortDict);
    
private:

    System::SharedPtr<Engine::Data::IPdfDictionary> _engineDict;
    System::ArrayPtr<System::String> pr_S;
    
    /// <summary>
    /// Gets the name or names of fields that the interactive PDF processor shall use 
    /// to sort the items in the collection. If the value is a name, it identifies a field described 
    /// in the parent collection dictionary.
    /// If the value is an array, each element of the array shall be a name that identifies a 
    /// field described in the parent collection dictionary. The array form shall be used to 
    /// allow additional fields to contribute to the sort, where each additional field shall be 
    /// used to break ties. More specifically, if multiple collection item dictionaries have the 
    /// same value for the first field named in the array, the values for successive fields 
    /// named in the array shall be used for sorting, until a unique order is determined or 
    /// until the named fields are exhausted.
    /// </summary>
    void set_S(System::ArrayPtr<System::String> value);
    
    System::ArrayPtr<bool> pr_A;
    
    /// <summary>
    /// Gets the sort ordering value.
    /// If the value is a boolean, it specifies whether the interactive PDF processor 
    /// shall sort the items in the collection in ascending order (true) or descending order 
    /// (false). If the value is an array, each element of the array shall be a boolean value that 
    /// specifies whether the entry at the same index in the S array shall be sorted in 
    /// ascending or descending order.
    /// If the number of entries in the A array is larger than the number of entries in the S
    /// array the extra entries in the A array shall be ignored. If the number of entries in the 
    /// A array is less than the number of entries in the S array the missing entries in the A
    /// array shall be assumed to be true.
    /// Default value: <c>true</c>
    /// </summary>
    void set_A(System::ArrayPtr<bool> value);
    
    void InitValues();
    void InitA();
    void InitS();
    
};

/// <summary>
/// Represents class for Collection(12.3.5 Collections).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Collection : public Aspose::Pdf::EmbeddedFileCollection
{
    typedef Collection ThisType;
    typedef Aspose::Pdf::EmbeddedFileCollection BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Document;
    
public:

    /// <summary>
    /// Gets a "Schema" of a document collection.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<CollectionSchema> get_Schema();
    /// <summary>
    /// Default embedded file name.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_DefaultEntry();
    
    /// <summary>
    /// Initializes new Collection object.
    /// </summary>
    ASPOSE_PDF_SHARED_API Collection();
    
    /// <summary>
    /// Gets a collection of files sorted according to the specification.
    /// </summary>
    /// <returns>The list of sorted files.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<FileSpecification>>> GetSortedCollection();
    
protected:

    /// <summary>
    /// Gets a "Sort" of a document collection.
    /// </summary>
    System::SharedPtr<CollectionSort> get_Sort();
    
    /// <summary>
    /// Initializes new Collection object.
    /// </summary>
    /// <param name="document">Document object.</param>
    Collection(System::SharedPtr<Document> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Collection, CODEPORTING_ARGS(System::SharedPtr<Document> document));
    
    virtual ASPOSE_PDF_SHARED_API ~Collection();
    
private:

    System::SharedPtr<CollectionSchema> _schema;
    System::SharedPtr<CollectionSort> _sort;
    System::SharedPtr<Engine::Data::IPdfDictionary> _engineDict;
    
    System::SharedPtr<Engine::Data::IPdfDictionary> get_EngineDict();
    
};

} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::CollectionFieldSubtype>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::CollectionFieldSubtype, const char_t*>, 10>& values();
};



