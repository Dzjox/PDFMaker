#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/scope_guard.h>
#include <system/make_const_ref.h>
#include <system/idisposable.h>
#include <system/details/pointer_collection_helpers.h>
#include <system/default.h>
#include <system/date_time.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
enum class AFRelationship;
namespace Annotations
{
class Annotation;
class FileAttachmentAnnotation;
class GoToRemoteAction;
class ImportDataAction;
class LaunchAction;
class MediaClipData;
class MovieAnnotation;
class RenditionAction;
class RichMediaAnnotation;
class SubmitFormAction;
} // namespace Annotations
class EmbeddedFileCollection;
class EncryptedPayload;
namespace Engine
{
namespace Data
{
class IPdfDictionary;
class IPdfObject;
class IPdfPrimitive;
class ITrailerable;
} // namespace Data
namespace Filters
{
enum class FilterType;
} // namespace Filters
namespace IO
{
namespace ConvertStrategies
{
class PdfA1ConvertStrategy;
class PdfA2ConvertStrategy;
class PdfA3ConvertStrategy;
class PdfA4ConvertStrategy;
class PdfAConvertStrategyBase;
class PdfUaConvertStrategy;
} // namespace ConvertStrategies
} // namespace IO
} // namespace Engine
namespace Facades
{
class PdfFileEditor;
} // namespace Facades
enum class FileEncoding;
class FileParams;
class FileSpecification;
namespace Tests
{
class RegressionTests_v10_2;
class RegressionTests_v10_3;
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
} // namespace Generic
} // namespace Collections
namespace IO
{
class Stream;
} // namespace IO
namespace Text
{
namespace RegularExpressions
{
class Regex;
} // namespace RegularExpressions
} // namespace Text
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents a class for checking file security.
/// </summary>
class FileChecker
{
    typedef FileChecker ThisType;
    
public:

    /// <summary>
    /// Checks file extensions.
    /// </summary>
    /// <param name="file">The target file.</param>
    /// <returns>
    /// <c>True</c> if check passed.
    /// </returns>
    static bool IsFileExtensionSafe(System::String file);
    /// <summary>
    /// Checks the content of files to identify dangerous content.
    /// By checking the content, we do not allow adding dangerous content from a text file via stream.
    /// </summary>
    /// <param name="stream">The content stream.</param>
    /// <returns><c>True</c> if check passed.</returns>
    static bool IsContentSafe(System::SharedPtr<System::IO::Stream> stream);
    
private:

    static const System::String SettingContentMsExtension;
    static System::SharedPtr<System::Text::RegularExpressions::Regex> _settingContentMsRegex;
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
    static bool HasDangerousContent(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<System::Text::RegularExpressions::Regex> regex, int32_t byteLimit, bool deleteSpaces);
    
public:
    FileChecker() = delete;
};

/// <summary>
/// Represents a collection item class.
/// The collection item contains the data described by the collection schema.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS CollectionItem : public System::Object
{
    typedef CollectionItem ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::FileSpecification;
    
public:

    /// <summary>
    /// Represents a class for a value of colection item.
    /// </summary>
    /// <typeparam name="T"></typeparam>
    template<typename T>
    class Value : public System::Object
    {
        typedef Value<T> ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_TEMPLATE_CLASS(ThisType, ThisTypeBaseTypesInfo);
        
        friend class Aspose::Pdf::CollectionItem;
        friend class Aspose::Pdf::CollectionItem;
        
    public:
    
        /// <summary>
        /// Gets a prefix string that shall be concatenated with the text string presented 
        /// to the user. This entry is ignored when an interactive PDF processor sorts the 
        /// items in the collection. Default: none 
        /// </summary>
        System::String get_Prefix() const
        {
            return pr_Prefix;
        }
        
        /// <summary>
        /// Gets a collection item value.
        /// </summary>
        System::MakeConstRef_t<T> get_Data() const
        {
            return pr_Data;
        }
        
        void SetTemplateWeakPtr(uint32_t argument) override
        {
            switch (argument)
            {
                case 0:
                    break;
                    
            }
        }
        
    protected:
    
        /// <summary>
        /// Creates a collection item value class instance.
        /// </summary>
        Value() : pr_Data(T())
        {
            //Self Reference+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
            System::Details::ThisProtector __local_self_ref(this);
            //---------------------------------------------------------Self Reference
            
            pr_Data = System::Default<T>();
            pr_Prefix = System::String::Empty;
        }
        
        MEMBER_FUNCTION_MAKE_OBJECT(Value, CODEPORTING_ARGS(), CODEPORTING_ARGS());
        
        /// <summary>
        ///  Creates a collection item value class instance.
        /// </summary>
        /// <param name="data">The value.</param>
        Value(T data) : Value(System::String::Empty, data)
        {
        }
        
        MEMBER_FUNCTION_MAKE_OBJECT(Value, CODEPORTING_ARGS(T data), CODEPORTING_ARGS(data));
        
        /// <summary>
        /// Creates a collection item value class instance.
        /// </summary>
        /// <param name="prefix">The prefix.</param>
        /// <param name="data">The value.</param>
        Value(System::String prefix, T data) : pr_Data(T())
        {
            //Self Reference+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
            System::Details::ThisProtector __local_self_ref(this);
            //---------------------------------------------------------Self Reference
            
            pr_Data = data;
            pr_Prefix = prefix;
        }
        
        MEMBER_FUNCTION_MAKE_OBJECT(Value, CODEPORTING_ARGS(System::String prefix, T data), CODEPORTING_ARGS(prefix,data));
        
    private:
    
        System::String pr_Prefix;
        T pr_Data;
        
    };
    
    
public:

    /// <summary>
    /// Gets a value indicating whether the collection item is empty.
    /// </summary>
    /// <remarks>
    /// This property returns true if the collection item does not contain any values, including string values,
    /// double values, integer values, and date values. If any of these value types are present in the collection item,
    /// this property returns false.
    /// </remarks>
    /// <returns>true if the collection item is empty; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool get_IsEmpty();
    /// <summary>
    /// Gets a collection of all the names of collection item values.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::ICollection<System::String>> get_AllNames();
    
    /// <summary>
    /// Checks if the given name exists in the collection item.
    /// </summary>
    /// <param name="name">The name to check.</param>
    /// <returns>True if the name exists in the collection item, otherwise false.</returns>
    ASPOSE_PDF_SHARED_API bool HasName(System::String name);
    /// <summary>
    /// Tries to get the integer value for a specified name from the collection item.
    /// </summary>
    /// <param name="name">The name of the value to retrieve.</param>
    /// <param name="value">When this method returns, contains the value associated with the specified name, if the name is found; otherwise, null.</param>
    /// <returns>true if the value associated with the specified name is found; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool TryGetIntValue(System::String name, System::SharedPtr<CollectionItem::Value<int32_t>>& value);
    /// <summary>
    /// Tries to get the double value for the specified name from the collection item.
    /// </summary>
    /// <param name="name">The name of the value to retrieve.</param>
    /// <param name="value">When this method returns, contains the double value associated with the specified name, if the name is found; otherwise, null. This parameter is passed uninitialized.</param>
    /// <returns>true if the value is successfully retrieved; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool TryGetDoubleValue(System::String name, System::SharedPtr<CollectionItem::Value<double>>& value);
    /// <summary>
    /// Tries to get the text value with the specified name from the collection item.
    /// </summary>
    /// <param name="name">The name of the text value.</param>
    /// <param name="value">When this method returns, contains the text value associated with the specified name, if the name is found; otherwise, null.</param>
    /// <returns>true if the text value with the specified name is found; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool TryGetTextValue(System::String name, System::SharedPtr<CollectionItem::Value<System::String>>& value);
    /// <summary>
    /// Tries to get the value of type DateTime from the collection item by the specified name.
    /// </summary>
    /// <param name="name">The name of the value to retrieve.</param>
    /// <param name="value">When this method returns, contains the value associated with the specified name, if the name is found; otherwise, null. This parameter is passed uninitialized.</param>
    /// <returns>true if the value associated with the specified name is successfully retrieved; otherwise, false.</returns>
    ASPOSE_PDF_SHARED_API bool TryGetDateTimeValue(System::String name, System::SharedPtr<CollectionItem::Value<System::DateTime>>& value);
    
protected:

    /// <summary>
    /// Creates a collection item class instance.
    /// </summary>
    CollectionItem();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CollectionItem, CODEPORTING_ARGS());
    
    /// <summary>
    /// Creates a collection item class instance.
    /// </summary>
    /// <param name="collectionItemDict">The collection item dictionary.</param>
    CollectionItem(System::SharedPtr<Engine::Data::IPdfDictionary> collectionItemDict);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(CollectionItem, CODEPORTING_ARGS(System::SharedPtr<Engine::Data::IPdfDictionary> collectionItemDict));
    
private:

    System::SharedPtr<Engine::Data::IPdfDictionary> _engineDict;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<System::Object>>> _values;
    
    void InitValues();
    void AddValue(System::SharedPtr<Engine::Data::IPdfPrimitive> value, System::String key, System::String prefix);
    
};

/// <summary>
/// Class representing embedded file.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS FileSpecification final : public System::IDisposable
{
    typedef FileSpecification ThisType;
    typedef System::IDisposable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::EncryptedPayload;
    friend class Aspose::Pdf::Annotations::MediaClipData;
    friend class Aspose::Pdf::Annotations::ImportDataAction;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfUaConvertStrategy;
    friend class Aspose::Pdf::Annotations::RichMediaAnnotation;
    friend class Aspose::Pdf::EmbeddedFileCollection;
    friend class Aspose::Pdf::Facades::PdfFileEditor;
    friend class Aspose::Pdf::FileParams;
    friend class Aspose::Pdf::Annotations::FileAttachmentAnnotation;
    friend class Aspose::Pdf::Annotations::MovieAnnotation;
    friend class Aspose::Pdf::Annotations::GoToRemoteAction;
    friend class Aspose::Pdf::Annotations::LaunchAction;
    friend class Aspose::Pdf::Annotations::SubmitFormAction;
    friend class Aspose::Pdf::Annotations::RenditionAction;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfA1ConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategyBase;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfA2ConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfA3ConvertStrategy;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfA4ConvertStrategy;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_3;
    friend class Aspose::Pdf::Tests::RegressionTests_v10_2;
    
public:

    /// <summary>
    /// Gets encoding format.
    /// Possible values: Zip - file is compressed with ZIP, 
    /// None - file is not compressed.
    /// </summary>
    ASPOSE_PDF_SHARED_API FileEncoding get_Encoding() const;
    /// <summary>
    /// Sets encoding format.
    /// Possible values: Zip - file is compressed with ZIP, 
    /// None - file is not compressed.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Encoding(FileEncoding value);
    /// <summary>
    /// If true, contents of the file will be included in the file specification. 
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IncludeContents() const;
    /// <summary>
    /// If true, contents of the file will be included in the file specification. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IncludeContents(bool value);
    /// <summary>
    /// Gets a collection item of the file specification.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::CollectionItem> get_CollectionItem();
    /// <summary>
    /// Gets encrypted payload.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::EncryptedPayload> get_EncryptedPayload();
    /// <summary>
    /// Gets text associated with the file specification. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Description();
    /// <summary>
    /// Sets text associated with the file specification. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Description(System::String value);
    /// <summary>
    /// Associated file Relationship.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::AFRelationship get_AFRelationship();
    /// <summary>
    /// Associated file Relationship.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AFRelationship(Aspose::Pdf::AFRelationship value);
    /// <summary>
    /// Gets contents of file as stream. 
    /// Contents is not loaded into memory which allows to decrease memory usage.
    /// But this stream does not support positioning and Length property. If you need this features please use Contents property instead.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> get_StreamContents();
    /// <summary>
    /// Gets contents file. 
    /// This property returns data loaded in memory which may cause Out of memory exception for large data.
    /// To decrease memory usage please use StreamContents.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> get_Contents();
    /// <summary>
    /// Sets contents file. 
    /// This property returns data loaded in memory which may cause Out of memory exception for large data.
    /// To decrease memory usage please use StreamContents.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Contents(System::SharedPtr<System::IO::Stream> value);
    /// <summary>
    /// Gets file paramteres.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<FileParams> get_Params();
    /// <summary>
    /// Gets file paramteres.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Params(System::SharedPtr<FileParams> value);
    /// <summary>
    /// Gets subtype of the embedded file
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_MIMEType();
    /// <summary>
    /// Gets subtype of the embedded file
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_MIMEType(System::String value);
    /// <summary>
    /// Gets file specification name. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Name();
    /// <summary>
    /// Sets file specification name. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Name(System::String value);
    /// <summary>
    /// Gets file specification unicode name. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_UnicodeName();
    /// <summary>
    /// Sets file specification unicode name. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_UnicodeName(System::String value);
    /// <summary>
    /// Gets name of the file system.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_FileSystem();
    /// <summary>
    /// Sets name of the file system.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FileSystem(System::String value);
    
    /// <summary>
    /// Constructor for FileSpecification
    /// </summary>
    /// <param name="file">File path.</param>
    ASPOSE_PDF_SHARED_API FileSpecification(System::String file);
    /// <summary>
    /// Constructor for file specification.
    /// </summary>
    /// <param name="stream">Stream containing data file.</param>
    /// <param name="name">File specification.</param>
    ASPOSE_PDF_SHARED_API FileSpecification(System::SharedPtr<System::IO::Stream> stream, System::String name);
    /// <summary>
    /// Constructor for FileSpecification.
    /// </summary>
    /// <param name="file">File path.</param>
    /// <param name="description">File description. </param>
    ASPOSE_PDF_SHARED_API FileSpecification(System::String file, System::String description);
    /// <summary>
    /// Constructor for FileSpecification.
    /// </summary>
    /// <param name="stream">Stream to be used in the document.</param>
    /// <param name="name">A file specification string.</param>
    /// <param name="description">File description.</param>
    ASPOSE_PDF_SHARED_API FileSpecification(System::SharedPtr<System::IO::Stream> stream, System::String name, System::String description);
    /// <summary>
    /// Constructor for FileSpecification.
    /// </summary>
    /// <param name="fileName">File path.</param>
    /// <param name="annot">The annotation.</param>
    ASPOSE_PDF_SHARED_API FileSpecification(System::String fileName, System::SharedPtr<Annotations::Annotation> annot);
    /// <summary>
    /// Create new empty file specification. 
    /// </summary>
    ASPOSE_PDF_SHARED_API FileSpecification();
    
    /// <summary>
    /// Gets application-specific parameter.
    /// </summary>
    /// <param name="key">Parameter name.</param>
    /// <returns>Value - if parameter found; otherwise, null.</returns>
    ASPOSE_PDF_SHARED_API System::String GetValue(System::String key);
    /// <summary>
    /// Sets application-specific parameter.
    /// </summary>
    /// <param name="key">Parameter name.</param>
    /// <param name="value">New parameter value.</param>
    ASPOSE_PDF_SHARED_API void SetValue(System::String key, System::String value);
    /// <summary>
    /// Dispose contents.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Dispose() override;
    
protected:

    /// <summary>
    /// Pdf dictionary containing information about the file.
    /// </summary>
    System::SharedPtr<Engine::Data::IPdfDictionary> get_EngineDict();
    System::SharedPtr<Engine::Data::IPdfObject> get_EngineObj() const;
    
    FileSpecification(System::SharedPtr<Engine::Data::IPdfPrimitive> specification);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FileSpecification, CODEPORTING_ARGS(System::SharedPtr<Engine::Data::IPdfPrimitive> specification));
    void SendMeteredInformation();
    /// <summary>
    /// Creates file specification 
    /// </summary>
    /// <param name="trailer">Trailerable object.</param>
    /// <returns>PDF object which describes file specification</returns>
    System::SharedPtr<Engine::Data::IPdfPrimitive> createFileSpecification(System::SharedPtr<Engine::Data::ITrailerable> trailer);
    
    virtual ASPOSE_PDF_SHARED_API ~FileSpecification();
    
private:

    System::SharedPtr<Engine::Data::IPdfObject> _engineObj;
    System::SharedPtr<Engine::Data::IPdfDictionary> _engineDict;
    System::String _description;
    Aspose::Pdf::AFRelationship _afRelationship;
    System::SharedPtr<FileParams> _parms;
    System::String _name;
    System::String _unicodeName;
    bool _disposeContents;
    System::SharedPtr<System::IO::Stream> _contents;
    System::String _fileSystem;
    bool _includeContents;
    System::String _mimeType;
    bool _meteredInformationSent;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> _parameters;
    System::SharedPtr<Aspose::Pdf::EncryptedPayload> _encryptedPayload;
    FileEncoding _encoding;
    bool _needDisposeStream;
    
    System::SharedPtr<System::IO::Stream> get_contents();
    void set_contents(System::SharedPtr<System::IO::Stream> value);
    
    System::SharedPtr<Aspose::Pdf::CollectionItem> _collectionItem;
    
    Engine::Filters::FilterType TranslateEncoding(FileEncoding encoding);
    bool IsAscii(System::String s);
    void InitFileParams(System::SharedPtr<System::IO::Stream> stream);
    void InitFileParams(System::String fileName);
    void CopyParameters();
    void AssertFile(System::String file);
    void AssertStream(System::SharedPtr<System::IO::Stream> stream);
    
};

} // namespace Pdf
} // namespace Aspose


