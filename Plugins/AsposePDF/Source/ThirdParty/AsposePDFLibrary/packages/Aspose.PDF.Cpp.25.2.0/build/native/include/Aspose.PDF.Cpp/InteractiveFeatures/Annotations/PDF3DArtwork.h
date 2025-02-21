#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class PDF3DAnnotation;
class PDF3DContent;
class PDF3DLightingScheme;
class PDF3DRenderMode;
class PDF3DStream;
class PDF3DView;
class PDF3DViewArray;
} // namespace Annotations
class Document;
namespace Engine
{
namespace Data
{
class IPdfObject;
class ITrailerable;
class PdfDictionary;
} // namespace Data
} // namespace Engine
namespace Tests
{
class RegressionTests_v19_12;
} // namespace Tests
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace ObjectModel
{
template <typename> class ReadOnlyCollection;
} // namespace ObjectModel
} // namespace Collections
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class PDF3DArtwork.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PDF3DArtwork : public System::Object
{
    typedef PDF3DArtwork ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::PDF3DAnnotation;
    friend class Aspose::Pdf::Annotations::PDF3DView;
    friend class Aspose::Pdf::Annotations::PDF3DViewArray;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_12;
    
public:

    /// <summary>
    /// Gets the lighting scheme.
    /// </summary>
    /// <value>The lighting scheme.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DLightingScheme> get_LightingScheme() const;
    /// <summary>
    /// Sets the lighting scheme.
    /// </summary>
    /// <value>The lighting scheme.</value>
    ASPOSE_PDF_SHARED_API void set_LightingScheme(System::SharedPtr<PDF3DLightingScheme> value);
    /// <summary>
    /// Gets the render mode.
    /// </summary>
    /// <value>The render mode.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DRenderMode> get_RenderMode() const;
    /// <summary>
    /// Sets the render mode.
    /// </summary>
    /// <value>The render mode.</value>
    ASPOSE_PDF_SHARED_API void set_RenderMode(System::SharedPtr<PDF3DRenderMode> value);
    /// <summary>
    /// Gets the view array.
    /// </summary>
    /// <value>The view array.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DViewArray> get_ViewArray() const;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PDF3DArtwork"></see> class.
    /// </summary>
    /// <param name="doc">The document.</param>
    /// <param name="content">The content.</param>
    /// <param name="lightingScheme">The lighting scheme.</param>
    /// <param name="renderMode">The render mode.</param>
    ASPOSE_PDF_SHARED_API PDF3DArtwork(System::SharedPtr<Document> doc, System::SharedPtr<PDF3DContent> content, System::SharedPtr<PDF3DLightingScheme> lightingScheme, System::SharedPtr<PDF3DRenderMode> renderMode);
    /// <summary>
    /// Initializes a new instance of the <see cref="PDF3DArtwork"></see> class.
    /// </summary>
    /// <param name="doc">The document.</param>
    /// <param name="content">The content.</param>
    ASPOSE_PDF_SHARED_API PDF3DArtwork(System::SharedPtr<Document> doc, System::SharedPtr<PDF3DContent> content);
    
    /// <summary>
    /// Get the views as list.
    /// </summary>
    /// <returns>ReadOnlyCollection&lt;PDF3DView&gt;.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::ObjectModel::ReadOnlyCollection<System::SharedPtr<PDF3DView>>> GetViewsList();
    /// <summary>
    /// Gets the views array.
    /// </summary>
    /// <returns>Array of views.</returns>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::SharedPtr<PDF3DView>> GetViewsArray();
    
protected:

    System::SharedPtr<PDF3DStream> Pdf3DStream;
    System::SharedPtr<Aspose::Pdf::Engine::Data::PdfDictionary> Pdf3DArtwork;
    
    /// <summary>
    /// Gets the annotation.
    /// </summary>
    System::SharedPtr<PDF3DAnnotation> get_Annot() const;
    /// <summary>
    /// Sets the annotation.
    /// </summary>
    void set_Annot(System::SharedPtr<PDF3DAnnotation> value);
    
    bool isAdded;
    
    /// <summary>
    /// Gets the default view.
    /// </summary>
    const System::SharedPtr<PDF3DView>& get_DefaultView() const;
    
    PDF3DArtwork(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> obj, System::SharedPtr<Document> doc, System::SharedPtr<PDF3DAnnotation> annot);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PDF3DArtwork, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> obj, System::SharedPtr<Document> doc, System::SharedPtr<PDF3DAnnotation> annot));
    void DeleteAllChildElements();
    /// <summary>
    /// Sets the index of the default view.
    /// </summary>
    /// <param name="index">The default view index.</param>
    /// <param name="createNewObject"></param>
    void SetDefaultViewIndex(int32_t index, bool createNewObject);
    
    virtual ASPOSE_PDF_SHARED_API ~PDF3DArtwork();
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> _tr;
    System::SharedPtr<Document> _doc;
    System::WeakPtr<PDF3DAnnotation> _annot;
    System::SharedPtr<PDF3DLightingScheme> _lightingScheme;
    System::SharedPtr<PDF3DRenderMode> _renderMode;
    System::SharedPtr<PDF3DView> pr_DefaultView;
    
    /// <summary>
    /// Gets the default view.
    /// </summary>
    void set_DefaultView(System::SharedPtr<PDF3DView> value);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


