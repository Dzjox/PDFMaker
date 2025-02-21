#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/InteractiveFeatures/Forms/Form.h"
#include "Aspose.PDF.Cpp/Facades/Facade.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class Annotation;
enum class AnnotationType;
} // namespace Annotations
class Document;
namespace Forms
{
class Form;
} // namespace Forms
class Rectangle;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IList;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
class Color;
} // namespace Drawing
namespace IO
{
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary> 
/// Represents a class for work with PDF document annotations (comments).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PdfAnnotationEditor final : public Aspose::Pdf::Facades::SaveableFacade
{
    typedef PdfAnnotationEditor ThisType;
    typedef Aspose::Pdf::Facades::SaveableFacade BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Imports all annotations from XFDF file.
    /// </summary>
    /// <param name="xfdfFile">The input XFDF file.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void ImportAnnotationsFromXfdf(System::String xfdfFile);
    /// <summary>
    /// Imports all annotations from FDF file.
    /// </summary>
    /// <param name="fdfFile">The input FDF file.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void ImportAnnotationsFromFdf(System::String fdfFile);
    /// @deprecated Method is obsolete, please use ImportAnnotationsFromXfdf instead
    /// <summary>
    /// Imports all annotations from XFDF file.
    /// </summary>
    /// <param name="xfdfFile">The input XFDF file.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void ImportAnnotationFromXfdf(System::String xfdfFile);
    /// <summary>
    /// Imports the specified annotations from XFDF file.
    /// </summary>
    /// <param name="xfdfFile">The input XFDF file.</param>
    /// <param name="annotType">The annotations array to be imported.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void ImportAnnotationFromXfdf(System::String xfdfFile, System::ArrayPtr<Aspose::Pdf::Annotations::AnnotationType> annotType);
    /// <summary>
    /// Imports the specified annotations from XFDF data stream.
    /// </summary>
    /// <param name="xfdfStream">The input XFDF data stream.</param>
    /// <param name="annotType">The array of annotation types to be imported.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void ImportAnnotationFromXfdf(System::SharedPtr<System::IO::Stream> xfdfStream, System::ArrayPtr<Aspose::Pdf::Annotations::AnnotationType> annotType);
    /// <summary>
    /// Imports all annotations from XFDF data stream.
    /// </summary>
    /// <param name="xfdfStream">The input XFDF data stream.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void ImportAnnotationsFromXfdf(System::SharedPtr<System::IO::Stream> xfdfStream);
    /// @deprecated Method is obsolete, please use ImportAnnotationsFromXfdf instead
    /// <summary>
    /// Imports all annotations from XFDF data stream.
    /// </summary>
    /// <param name="xfdfStream">The input XFDF data stream.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void ImportAnnotationFromXfdf(System::SharedPtr<System::IO::Stream> xfdfStream);
    /// <summary>
    /// Imports the specified annotations into document from array of another PDF documents.
    /// </summary>
    /// <param name="annotFile">The array of paths of PDF documents that contain source annotations.</param>
    /// <param name="annotType">The array of annotation types to be imported.</param>
    /// <example>
    /// </example> 
    ASPOSE_PDF_SHARED_API void ImportAnnotations(System::ArrayPtr<System::String> annotFile, System::ArrayPtr<Aspose::Pdf::Annotations::AnnotationType> annotType);
    /// <summary>
    /// Imports annotations into document from array of another PDF documents.
    /// </summary>
    /// <param name="annotFile">The array of paths of PDF documents that contain source annotations.</param>
    /// <example>
    /// </example> 
    ASPOSE_PDF_SHARED_API void ImportAnnotations(System::ArrayPtr<System::String> annotFile);
    /// <summary>
    /// Imports the specified annotations into document from array of another PDF document streams.
    /// </summary>
    /// <param name="annotFileStream">The array of streams of PDF documents that contain source annotations.</param>
    /// <param name="annotType">The annotation types to be imported.</param>
    /// <example>
    /// </example> 
    ASPOSE_PDF_SHARED_API void ImportAnnotations(System::ArrayPtr<System::SharedPtr<System::IO::Stream>> annotFileStream, System::ArrayPtr<Aspose::Pdf::Annotations::AnnotationType> annotType);
    /// <summary>
    /// Imports annotations into document from array of another PDF document streams.
    /// </summary>
    /// <param name="annotFileStream">The array of streams of PDF documents that contain source annotations.</param>
    /// <example>
    /// </example> 
    ASPOSE_PDF_SHARED_API void ImportAnnotations(System::ArrayPtr<System::SharedPtr<System::IO::Stream>> annotFileStream);
    /// <summary>
    /// Modifies the author of annotations on the specified page range.
    /// </summary>
    /// <param name="start">The start page number.</param>
    /// <param name="end">The end page number.</param>
    /// <param name="srcAuthor">The author that must be modified.</param>
    /// <param name="desAuthor">The new author.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void ModifyAnnotationsAuthor(int32_t start, int32_t end, System::String srcAuthor, System::String desAuthor);
    /// <summary>
    /// Flattens all annotations in the document.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void FlatteningAnnotations();
    /// <summary>
    /// Flattens all annotations in the document.
    /// </summary>
    /// <param name="flattenSettings">Specifies modes of flattening.</param>
    ASPOSE_PDF_SHARED_API void FlatteningAnnotations(System::SharedPtr<Forms::Form::FlattenSettings> flattenSettings);
    /// <summary>
    /// Flattens the annotations of the specified types.
    /// </summary>
    /// <param name="start">The start page.</param>
    /// <param name="end">Then end page.</param>
    /// <param name="annotType">The annotation types should be flattened.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void FlatteningAnnotations(int32_t start, int32_t end, System::ArrayPtr<Aspose::Pdf::Annotations::AnnotationType> annotType);
    /// <summary>
    /// Deletes all annotations in the document.
    /// </summary>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void DeleteAnnotations();
    /// <summary>
    /// Deletes all annotations of the specified type in the document.
    /// </summary>
    /// <param name="annotType">The type of annotation will be deleted.</param>
    /// <example>
    /// </example> 
    ASPOSE_PDF_SHARED_API void DeleteAnnotations(System::String annotType);
    /// <summary>
    /// Deletes the annotation with specified annotation name.
    /// </summary>
    /// <param name="annotName">The annotation name</param>
    /// <example>
    /// </example>  
    ASPOSE_PDF_SHARED_API void DeleteAnnotation(System::String annotName);
    /// <summary>
    /// Exports the content of the specified annotation types into XFDF
    /// </summary>
    /// <param name="xmlOutputStream">The output XFDF stream.</param>
    /// <param name="start">Start page from which the annotations of the document will be exported.</param>
    /// <param name="end">End page to which the annotations of the document will be exported.</param>
    /// <param name="annotTypes">The array of annotation types need be exported.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void ExportAnnotationsXfdf(System::SharedPtr<System::IO::Stream> xmlOutputStream, int32_t start, int32_t end, System::ArrayPtr<System::String> annotTypes);
    /// <summary>
    /// Exports the content of the specified annotations types into XFDF
    /// </summary>
    /// <param name="xmlOutputStream">The output XFDF stream.</param>
    /// <param name="start">Start page from which the annotations of the document will be exported.</param>
    /// <param name="end">End page to which the annotations of the document will be exported.</param>
    /// <param name="annotTypes">The array of annotation types need be exported.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void ExportAnnotationsXfdf(System::SharedPtr<System::IO::Stream> xmlOutputStream, int32_t start, int32_t end, System::ArrayPtr<Aspose::Pdf::Annotations::AnnotationType> annotTypes);
    /// <summary>
    /// Exports annotations to stream.
    /// </summary>
    /// <param name="xmlOutputStream">Output stream.</param>
    ASPOSE_PDF_SHARED_API void ExportAnnotationsToXfdf(System::SharedPtr<System::IO::Stream> xmlOutputStream);
    /// <summary>
    /// Gets the list of annotations of the specified types.
    /// </summary>
    /// <param name="start">Start page from which the annotations will be selected.</param>
    /// <param name="end">End page to which the annotations will be selected.</param>
    /// <param name="annotTypes">The array of needed annotation types.</param>
    /// <returns>Annotations list.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Pdf::Annotations::Annotation>>> ExtractAnnotations(int32_t start, int32_t end, System::ArrayPtr<System::String> annotTypes);
    /// <summary>
    /// Gets the list of annotations of the specified types.
    /// </summary>
    /// <param name="start">Start page from which the annotations will be selected.</param>
    /// <param name="end">End page to which the annotations will be selected.</param>
    /// <param name="annotTypes">The array of needed annotation types.</param>
    /// <returns>Annotations list.</returns>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Pdf::Annotations::Annotation>>> ExtractAnnotations(int32_t start, int32_t end, System::ArrayPtr<Aspose::Pdf::Annotations::AnnotationType> annotTypes);
    
    /// <summary>
    /// Initializes new <see cref="PdfAnnotationEditor"></see> object.
    /// </summary>
    ASPOSE_PDF_SHARED_API PdfAnnotationEditor();
    /// <summary>
    /// Initializes new <see cref="PdfAnnotationEditor"></see> object on base of the <paramref name="document"></paramref>.
    /// </summary>
    /// <param name="document">
    /// Pdf document.
    /// </param>
    ASPOSE_PDF_SHARED_API PdfAnnotationEditor(System::SharedPtr<Aspose::Pdf::Document> document);
    
    /// <summary>
    /// Modifies the annotations of the specifed type on the specified page range.
    /// It supports to modify next annotation properties: Modified, Title, Contents, Color, Subject and Open.
    /// </summary>
    /// <param name="start">The start page number.</param>
    /// <param name="end">The end page number.</param>
    /// <param name="annotation">The annotation object contains new properties.</param>
    /// <example>
    /// </example>
    ASPOSE_PDF_SHARED_API void ModifyAnnotations(int32_t start, int32_t end, System::SharedPtr<Aspose::Pdf::Annotations::Annotation> annotation);
    /// <summary>
    /// Redacts area on the specified page. All contents is removed. 
    /// </summary>
    /// <param name="pageIndex">Index of the page.</param>
    /// <param name="rect">Area rectangle.</param>
    /// <param name="color">Filling color.</param>
    ASPOSE_PDF_SHARED_API void RedactArea(int32_t pageIndex, System::SharedPtr<Rectangle> rect, System::Drawing::Color color);
    
private:

    System::ArrayPtr<int32_t> GetAnnotCounts();
    void Decimate(System::ArrayPtr<int32_t> prevAnnotCounts, System::ArrayPtr<Aspose::Pdf::Annotations::AnnotationType> annotTypes);
    void Decimate(System::ArrayPtr<Aspose::Pdf::Annotations::AnnotationType> annotTypes);
    static System::ArrayPtr<Aspose::Pdf::Annotations::AnnotationType> ConvertAnnotTypeArray(System::ArrayPtr<System::String> annotTypes);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


