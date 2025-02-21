#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/InteractiveFeatures/Annotations/Annotation.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class AnnotationSelector;
enum class AnnotationType;
class PDF3DArtwork;
class PDF3DContent;
class PDF3DLightingScheme;
class PDF3DRenderMode;
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
} // namespace Data
} // namespace Engine
class Page;
class Rectangle;
namespace Tests
{
namespace PDF3D
{
class PDF3DAnnotation_OpenningTests;
} // namespace PDF3D
class RegressionTests_v19_12;
} // namespace Tests
class XForm;
} // namespace Pdf
} // namespace Aspose
namespace System
{
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
/// Enum PDF3DActivation: set of 3D annotation activation mode.
/// </summary>
enum class PDF3DActivation
{
    /// <summary>
    /// The active when open
    /// </summary>
    activeWhenOpen,
    /// <summary>
    /// The active when visible
    /// </summary>
    activeWhenVisible,
    /// <summary>
    /// The activated by user or script action
    /// </summary>
    activatedUserOrScriptAction
};

/// <summary>
/// Class PDF3DAnnotation. This class cannot be inherited.
/// </summary>
/// <seealso cref="Aspose::Pdf::Annotations::Annotation" ></seealso>
class ASPOSE_PDF_SHARED_CLASS PDF3DAnnotation final : public Aspose::Pdf::Annotations::Annotation
{
    typedef PDF3DAnnotation ThisType;
    typedef Aspose::Pdf::Annotations::Annotation BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Annotations::PDF3DViewArray;
    friend class Aspose::Pdf::Tests::PDF3D::PDF3DAnnotation_OpenningTests;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_12;
    
public:

    /// <summary>
    /// Gets the 3D Artwork.
    /// </summary>
    /// <value>The PDF3 d artwork.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DArtwork> get_Pdf3DArtwork();
    /// <summary>
    /// Gets the lighting scheme.
    /// </summary>
    /// <value>The lighting scheme.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DLightingScheme> get_LightingScheme();
    /// <summary>
    /// Gets the content.
    /// </summary>
    /// <value>The content.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DContent> get_Content();
    /// <summary>
    /// Sets the content.
    /// </summary>
    /// <value>The content.</value>
    ASPOSE_PDF_SHARED_API void set_Content(System::SharedPtr<PDF3DContent> value);
    /// <summary>
    /// Gets the render mode.
    /// </summary>
    /// <value>The render mode.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DRenderMode> get_RenderMode();
    /// <summary>
    /// Gets the view array.
    /// </summary>
    /// <value>The view array.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DViewArray> get_ViewArray();
    /// <summary>
    /// Gets type of annotation.
    /// </summary>
    /// <value>The type of the annotation.</value>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Annotations::AnnotationType get_AnnotationType() override;
    
    /// <summary>
    /// Sets the index of the default view.
    /// </summary>
    /// <param name="index">The default view index.</param>
    ASPOSE_PDF_SHARED_API void SetDefaultViewIndex(int32_t index);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PDF3DAnnotation"></see> class.
    /// </summary>
    /// <param name="page">The page.</param>
    /// <param name="rect">The rectangle.</param>
    /// <param name="pdf3DArtwork">The 3D Artwork.</param>
    ASPOSE_PDF_SHARED_API PDF3DAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, System::SharedPtr<PDF3DArtwork> pdf3DArtwork);
    /// <summary>
    /// Initializes a new instance of the <see cref="PDF3DAnnotation"></see> class.
    /// </summary>
    /// <param name="page">The page.</param>
    /// <param name="rect">The rectangle.</param>
    /// <param name="pdf3DArtwork">The 3D Artwork.</param>
    /// <param name="activation">The activation mode.</param>
    /// <exception cref="Exception">3D Stream is already added to current 3D Artwork</exception>
    ASPOSE_PDF_SHARED_API PDF3DAnnotation(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Rectangle> rect, System::SharedPtr<PDF3DArtwork> pdf3DArtwork, PDF3DActivation activation);
    
    /// <summary>
    /// Accepts visitor for annotation processing.
    /// </summary>
    /// <param name="visitor">AnnotationSelector object.</param>
    ASPOSE_PDF_SHARED_API void Accept(System::SharedPtr<AnnotationSelector> visitor) override;
    /// <summary>
    /// Sets the image preview.
    /// </summary>
    /// <param name="filename">The image preview filename.</param>
    ASPOSE_PDF_SHARED_API void SetImagePreview(System::String filename);
    /// <summary>
    /// Sets the image preview.
    /// </summary>
    /// <param name="image">The image stream.</param>
    ASPOSE_PDF_SHARED_API void SetImagePreview(System::SharedPtr<System::IO::Stream> image);
    /// <summary>
    /// Clears the image preview.
    /// </summary>
    ASPOSE_PDF_SHARED_API void ClearImagePreview();
    /// <summary>
    /// Gets the image preview.
    /// </summary>
    /// <returns>Image preview as stream.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::IO::Stream> GetImagePreview();
    
protected:

    /// <summary>
    /// Gets the default initial view of the 3D artwork that shall be used when the annotation is activated.
    /// </summary>
    System::SharedPtr<PDF3DView> get_DefaultView();
    
    int32_t defaultViewIndex;
    
    PDF3DAnnotation(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> obj, System::SharedPtr<Document> doc);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PDF3DAnnotation, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> obj, System::SharedPtr<Document> doc));
    ASPOSE_PDF_SHARED_API void DeleteAllChildElements() override;
    
    virtual ASPOSE_PDF_SHARED_API ~PDF3DAnnotation();
    
private:

    System::SharedPtr<XForm> _appForm;
    System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> _tr;
    System::SharedPtr<PDF3DArtwork> _pdf3DArtwork;
    System::SharedPtr<System::IO::Stream> _imagePreviewStream;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


