#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/details/pointer_collection_helpers.h>
#include <system/collections/dictionary.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
namespace Engine
{
namespace Data
{
class IPdfDictionary;
} // namespace Data
class IPdfDocumentInfo;
} // namespace Engine
namespace Tests
{
class RegressionTests_v21_2;
} // namespace Tests
} // namespace Pdf
} // namespace Aspose
namespace System
{
class DateTime;
class TimeSpan;
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents meta information of PDF document.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS DocumentInfo final : public System::Collections::Generic::Dictionary<System::String, System::String>
{
    typedef DocumentInfo ThisType;
    typedef System::Collections::Generic::Dictionary<System::String, System::String> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Tests::RegressionTests_v21_2;
    
public:

    /// <summary>
    /// Gets document title.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Title();
    /// <summary>
    /// Sets document title.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Title(System::String value);
    /// <summary>
    /// Gets document creator.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Creator();
    /// <summary>
    /// Sets document creator.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Creator(System::String value);
    /// <summary>
    /// Gets document author.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Author();
    /// <summary>
    /// Sets document author.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Author(System::String value);
    /// <summary>
    /// Gets the subject of the document.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Subject();
    /// <summary>
    /// Sets the subject of the document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Subject(System::String value);
    /// <summary>
    /// Gets or set the keywords of the document.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Keywords();
    /// <summary>
    /// Gets or set the keywords of the document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Keywords(System::String value);
    /// <summary>
    /// Gets the document producer.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Producer();
    /// <summary>
    /// Sets the document producer.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Producer(System::String value);
    /// <summary>
    /// Gets the date of document creation.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::DateTime get_CreationDate();
    /// <summary>
    /// Sets the date of document creation.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CreationDate(System::DateTime value);
    /// <summary>
    /// Time zone of creation date. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::TimeSpan get_CreationTimeZone();
    /// <summary>
    /// Time zone of creation date. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CreationTimeZone(System::TimeSpan value);
    /// <summary>
    /// Time zone of modification date. 
    /// </summary>
    ASPOSE_PDF_SHARED_API System::TimeSpan get_ModTimeZone();
    /// <summary>
    /// Time zone of modification date. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ModTimeZone(System::TimeSpan value);
    /// <summary>
    /// Gets the date of document modification.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::DateTime get_ModDate();
    /// <summary>
    /// Sets the date of document modification.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ModDate(System::DateTime value);
    /// <summary>
    /// Gets the trapped flag.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Trapped();
    /// <summary>
    /// Sets the trapped flag.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Trapped(System::String value);
    
    /// <summary>
    /// Initialize DocumentInfo instance.
    /// </summary>
    /// <param name="document">The info of this document will be used for initialization.</param>
    ASPOSE_PDF_SHARED_API DocumentInfo(System::SharedPtr<Document> document);
    
    /// <summary>
    /// Clears the document info.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Clear() override;
    /// <summary>
    /// Adds an element with the specified key and value into the collection.
    /// </summary>
    /// <param name="key">The key of the element to add.</param>
    /// <param name="value">The value of the element to add. The value can be null.</param>
    ASPOSE_PDF_SHARED_API void Add(const System::String& key, const System::String& value) override;
    /// <summary>
    /// Removes the element with the specified key from the collection.
    /// </summary>
    /// <param name="key">The key of the element to remove.</param>
    ASPOSE_PDF_SHARED_API void Remove(System::String key);
    
    /// <summary>
    /// Gets the value associated with the specified key.
    /// </summary>
    /// <param name="key">The key whose value to get or set.</param>
    /// <returns></returns>
    ASPOSE_PDF_SHARED_API System::String idx_get(const System::String& key) const override;
    /// <summary>
    /// Sets the value associated with the specified key.
    /// </summary>
    /// <param name="key">The key whose value to get or set.</param>
    /// <param name="value"></param>
    ASPOSE_PDF_SHARED_API void idx_set(const System::String& key, System::String value) override;
    
    /// <summary>
    /// Clears custom data only, leaves all other predefined values (Title, Author, etc.).
    /// </summary>
    ASPOSE_PDF_SHARED_API void ClearCustomData();
    /// <summary>
    /// Determines if the key is predefined (Title, Author, etc.), not custom.
    /// </summary>
    /// <param name="key">Selected key</param>
    /// <returns>True in case the key is predefined.</returns>
    static ASPOSE_PDF_SHARED_API bool IsPredefinedKey(System::String key);
    ASPOSE_PDF_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    bool _creatorUpdated;
    bool _producerUpdated;
    
    void UpdateVersion(double version);
    
    virtual ASPOSE_PDF_SHARED_API ~DocumentInfo();
    
private:

    System::SharedPtr<Engine::IPdfDocumentInfo> engineDocInfo;
    System::SharedPtr<Engine::Data::IPdfDictionary> dict;
    double _version;
    
    void UpdateHashtable();
    
};

} // namespace Pdf
} // namespace Aspose


