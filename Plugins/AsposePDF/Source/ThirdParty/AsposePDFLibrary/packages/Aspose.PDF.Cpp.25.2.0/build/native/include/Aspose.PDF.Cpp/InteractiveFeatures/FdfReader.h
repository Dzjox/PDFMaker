#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

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
namespace Engine
{
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
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace IO
{
class Stream;
} // namespace IO
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class which performes reading of FDF format. 
/// </summary>
/// <example>
/// </example>
class ASPOSE_PDF_SHARED_CLASS FdfReader final : public System::Object
{
    typedef FdfReader ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::Form;
    
public:

    /// <summary>
    /// Import annotations from FDF file and put them into document.
    /// </summary>
    /// <param name="stream">Source stream containing FDF file.</param>
    /// <param name="document">Document where annotations will be added.</param>
    static ASPOSE_PDF_SHARED_API void ReadAnnotations(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Document> document);
    
protected:

    /// <summary>
    /// Import annotations.
    /// </summary>
    /// <param name="annotations">Annotations collection.</param>
    /// <param name="document">Document to import to.</param>
    /// <param name="dest">Form fields.</param>
    static void ImportAnnotationsFromFdf(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> annotations, System::SharedPtr<Document> document, System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<WidgetAnnotation>>> dest);
    
private:

    FdfReader();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FdfReader, CODEPORTING_ARGS());
    static void ImportFieldsFromFdf(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> source, System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<WidgetAnnotation>>> dest);
    static System::SharedPtr<Aspose::Pdf::Forms::Field> FindField(System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<WidgetAnnotation>>> fields, System::String fieldName);
    static System::SharedPtr<Aspose::Pdf::Forms::Field> CheckField(System::String fieldName, System::String head, System::String tail, System::SharedPtr<Aspose::Pdf::Forms::Field> field);
    static void SetFieldValue(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> source, System::SharedPtr<Aspose::Pdf::Forms::Field> dest);
    static void SetParentReferences(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject>>> childs, System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject>>> ids);
    static void ImportAnnotation(System::SharedPtr<Document> document, int32_t pageNumber, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> primitive, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject>>> childs, System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject>>> ids);
    static System::String GetAnnotationType(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dic);
    static System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> GetAnnotationObject(System::SharedPtr<Document> document, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> primitive);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


