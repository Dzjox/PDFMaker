#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
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
class IPdfPrimitive;
} // namespace Data
} // namespace Engine
class LayerProcessor;
class Operator;
class Page;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace IO
{
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents a layer within a PDF page.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Layer : public System::Object
{
    typedef Layer ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::LayerProcessor;
    
public:

    /// <summary>
    /// Gets the layer name.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Name() const;
    /// <summary>
    /// Gets the layer id.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Id() const;
    /// <summary>
    /// Gets the layer content.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>>& get_Contents() const;
    /// <summary>
    /// Gets a value indicating whether the layer is locked.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_Locked();
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Layer"></see> class.
    /// </summary>
    /// <param name="id">The layer id</param>
    /// <param name="name">The layer name</param>
    ASPOSE_PDF_SHARED_API Layer(System::String id, System::String name);
    
    /// <summary>
    /// Saves the current layer to a PDF document.
    /// </summary>
    /// <param name="outputPath">The file path where the PDF document will be saved.</param>
    ASPOSE_PDF_SHARED_API void Save(System::String outputPath);
    /// <summary>
    /// Saves the current layer to a PDF document.
    /// </summary>
    /// <param name="outputStream">The stream where the PDF document will be saved.</param>
    ASPOSE_PDF_SHARED_API void Save(System::SharedPtr<System::IO::Stream> outputStream);
    /// <summary>
    /// Flattens the specified layer.
    /// </summary>
    /// <param name="cleanupContentStream">Specifies whether to remove optional content group markers from the content stream.</param>
    /// <remarks>
    /// Setting the <paramref name="cleanupContentStream"></paramref> parameter to false speeds up the process of flattening.
    /// </remarks>
    ASPOSE_PDF_SHARED_API void Flatten(bool cleanupContentStream);
    /// <summary>
    /// Locks the layer.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Lock();
    /// <summary>
    /// Unlocks the layer.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Unlock();
    /// <summary>
    /// Deletes the current layer from the PDF document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void Delete();
    
protected:

    /// <summary>
    /// Gets the number of optional content (OC) chunks contained within the PDF layer.
    /// </summary>
    int32_t get_NumberOfChunks() const;
    /// <summary>
    /// Sets the number of optional content (OC) chunks contained within the PDF layer.
    /// </summary>
    void set_NumberOfChunks(int32_t value);
    /// <summary>
    /// Gets the layer position in content stream.
    /// </summary>
    int32_t get_Position() const;
    /// <summary>
    /// Gets the layer position in content stream.
    /// </summary>
    void set_Position(int32_t value);
    /// <summary>
    /// Gets a value indicating whether the layer was parsed from the content stream of the PDF document.
    /// </summary>
    bool get_ParsedFromContent() const;
    /// <summary>
    /// Sets a value indicating whether the layer was parsed from the content stream of the PDF document.
    /// </summary>
    void set_ParsedFromContent(bool value);
    /// <summary>
    /// Gets the page.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Page> get_Page() const;
    /// <summary>
    /// Sets the page.
    /// </summary>
    void set_Page(System::SharedPtr<Aspose::Pdf::Page> value);
    /// <summary>
    /// Gets the modified page content after performing layer extraction or removal.
    /// </summary>
    /// <remarks>
    /// This property contains a list of operators representing the modified content of the page
    /// after performing layer extraction or removal.
    /// </remarks>
    const System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>>& get_PageContents() const;
    /// <summary>
    /// Sets the optional content property object.
    /// </summary>
    void set_OptionalContentProperty(System::SharedPtr<Engine::Data::IPdfPrimitive> value);
    
    /// <summary>
    /// Cleans up optional content properties from the page and document.
    /// </summary>
    void CleanupOptionalContentResources();
    
    virtual ASPOSE_PDF_SHARED_API ~Layer();
    
private:

    System::WeakPtr<Aspose::Pdf::Page> _page;
    System::SharedPtr<Engine::Data::IPdfPrimitive> _optionalContentProperty;
    System::String pr_Name;
    System::String pr_Id;
    int32_t pr_NumberOfChunks;
    int32_t pr_Position;
    bool pr_ParsedFromContent;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> pr_PageContents;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> pr_Contents;
    
    static void CopyResources(System::SharedPtr<Aspose::Pdf::Page> sourcePage, System::SharedPtr<Aspose::Pdf::Page> destPage);
    System::SharedPtr<Document> CreateDocument();
    
};

} // namespace Pdf
} // namespace Aspose


