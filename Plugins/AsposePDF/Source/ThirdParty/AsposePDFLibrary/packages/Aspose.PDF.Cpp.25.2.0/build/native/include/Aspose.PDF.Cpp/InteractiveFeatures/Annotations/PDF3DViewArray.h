#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
//using System.Windows.Forms;

#include <system/object.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class PDF3DArtwork;
class PDF3DCrossSectionArray;
class PDF3DLightingScheme;
class PDF3DRenderMode;
class PDF3DStream;
class PDF3DView;
} // namespace Annotations
class Document;
namespace Engine
{
namespace Data
{
class IPdfArray;
class ITrailerable;
} // namespace Data
} // namespace Engine
namespace Tests
{
namespace PDF3D
{
class PDF3DReporter;
} // namespace PDF3D
} // namespace Tests
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
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class PDF3DViewArray.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PDF3DViewArray : public System::Object
{
    typedef PDF3DViewArray ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::PDF3DArtwork;
    friend class Aspose::Pdf::Annotations::PDF3DCrossSectionArray;
    friend class Aspose::Pdf::Annotations::PDF3DStream;
    friend class Aspose::Pdf::Tests::PDF3D::PDF3DReporter;
    
public:

    /// <summary>
    /// Gets the views count.
    /// </summary>
    /// <value>The views count.</value>
    ASPOSE_PDF_SHARED_API int32_t get_Count();
    
    /// <summary>
    /// Adds the specified view.
    /// </summary>
    /// <param name="view">The view.</param>
    /// <exception cref="ArgumentException">Only one entry of 3D view is allowed</exception>
    ASPOSE_PDF_SHARED_API void Add(System::SharedPtr<PDF3DView> view);
    /// <summary>
    /// Removes view from views array at specified index.
    /// </summary>
    /// <param name="index">The view index.</param>
    /// <exception cref="IndexOutOfRangeException">Invalid index: index should be in the range [1..n] where n equals to the views count.</exception>
    ASPOSE_PDF_SHARED_API void RemoveAt(int32_t index);
    /// <summary>
    /// Removes all views.
    /// </summary>
    ASPOSE_PDF_SHARED_API void RemoveAll();
    
    /// <summary>
    /// Gets the <see cref="PDF3DView"></see> to view array at the specified index.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns>PDF3DView.</returns>
    /// <exception cref="IndexOutOfRangeException">
    /// Invalid index: index should be in the range [1..n] where n equals to the views count.
    /// </exception>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DView> idx_get(int32_t index);
    /// <summary>
    /// Sets the <see cref="PDF3DView"></see> to view array at the specified index.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <param name="value">PDF3DView.</param>
    /// <exception cref="IndexOutOfRangeException">
    /// Invalid index: index should be in the range [1..n] where n equals to the views count.
    /// </exception>
    ASPOSE_PDF_SHARED_API void idx_set(int32_t index, System::SharedPtr<PDF3DView> value);
    
protected:

    System::WeakPtr<PDF3DStream> Pdf3DStream;
    
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> get_ViewPdfArray() const;
    void set_ViewPdfArray(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> value);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PDF3DView>>> get_ViewListArray() const;
    
    PDF3DViewArray(System::SharedPtr<Document> doc, System::SharedPtr<PDF3DStream> pdf3DStream);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PDF3DViewArray, CODEPORTING_ARGS(System::SharedPtr<Document> doc, System::SharedPtr<PDF3DStream> pdf3DStream));
    System::SharedPtr<PDF3DView> CreateDefaultView(System::SharedPtr<Document> doc, System::SharedPtr<PDF3DView> view, System::SharedPtr<PDF3DLightingScheme> lightingScheme, System::SharedPtr<PDF3DRenderMode> renderMode);
    System::SharedPtr<PDF3DView> GetDefaultViewAndCreateViewArray(int32_t index);
    void UpdateDefaultView(int32_t index);
    void UpdateDefaultView(System::SharedPtr<PDF3DView> view);
    void AddToList(System::SharedPtr<PDF3DView> view);
    System::SharedPtr<PDF3DView> FindByInternalName(System::String name);
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> _tr;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> _viewPdfArray;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PDF3DView>>> _viewListArray;
    System::WeakPtr<Document> _doc;
    
    void UpdateAt(int32_t index, System::SharedPtr<PDF3DView> view);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


