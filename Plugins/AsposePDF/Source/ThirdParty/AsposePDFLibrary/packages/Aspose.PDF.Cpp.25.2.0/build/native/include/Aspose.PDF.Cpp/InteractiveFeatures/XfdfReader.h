#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class WidgetAnnotation;
} // namespace Annotations
class Document;
namespace Facades
{
class Form;
} // namespace Facades
namespace Forms
{
class Field;
} // namespace Forms
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
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace IO
{
class Stream;
} // namespace IO
class String;
namespace Xml
{
class XmlNamespaceManager;
class XmlNodeList;
class XmlReader;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class which peroformes reading of XFDF format. 
/// </summary>
/// <example>
/// </example>
class ASPOSE_PDF_SHARED_CLASS XfdfReader final : public System::Object
{
    typedef XfdfReader ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::Form;
    
public:

    /// <summary>
    /// Import annotations from XFDF file and put them into document.
    /// </summary>
    /// <param name="stream">Source stream containing XFDF file.</param>
    /// <param name="document">Document where annotations will be added.</param>
    static ASPOSE_PDF_SHARED_API void ReadAnnotations(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Document> document);
    /// <summary>
    /// Import field values from XFDF file.
    /// </summary>
    /// <param name="stream">Stream containing XFDF data.</param>
    /// <param name="document">Document where fields data will be imported.</param>
    static ASPOSE_PDF_SHARED_API void ReadFields(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Document> document);
    /// <summary>
    /// Parses XFDF file and returns information as hashtable.
    /// </summary>
    /// <param name="reader">XmlReader for the source file.</param>
    /// <returns>Hashtable with information parsed from XFDF file.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> GetElements(System::SharedPtr<System::Xml::XmlReader> reader);
    
protected:

    static bool IsAnnotation(System::String annot);
    static void ReadFields(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Document> document, System::SharedPtr<System::Collections::Generic::List<System::String>> foundFields, System::SharedPtr<System::Collections::Generic::IList<System::String>> notFoundFields);
    
private:

    static System::SharedPtr<Aspose::Pdf::Forms::Field> FindField(System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<WidgetAnnotation>>> fields, System::String fieldName);
    static void ImportFromXfdf(System::SharedPtr<System::Xml::XmlNodeList> source, System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<WidgetAnnotation>>> dest, System::SharedPtr<System::Xml::XmlNamespaceManager> mngr, System::String xfaPath, System::SharedPtr<Document> document, System::SharedPtr<System::Collections::Generic::List<System::String>> foundFields, System::SharedPtr<System::Collections::Generic::IList<System::String>> notFoundFields);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


