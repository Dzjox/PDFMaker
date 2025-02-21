#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class PDF3DAnnotation;
class PDF3DArtwork;
class PDF3DCrossSectionArray;
class PDF3DLightingScheme;
class PDF3DRenderMode;
class PDF3DViewArray;
} // namespace Annotations
class Color;
class Document;
namespace Engine
{
namespace Data
{
class IPdfDictionary;
class IPdfObject;
class IPdfPrimitive;
class ITrailerable;
} // namespace Data
} // namespace Engine
class Matrix3D;
namespace Tests
{
namespace PDF3D
{
class PDF3DReporter;
} // namespace PDF3D
class RegressionTests_v19_12;
} // namespace Tests
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class PDF3DView.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PDF3DView : public System::Object
{
    typedef PDF3DView ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::PDF3DAnnotation;
    friend class Aspose::Pdf::Annotations::PDF3DArtwork;
    friend class Aspose::Pdf::Annotations::PDF3DCrossSectionArray;
    friend class Aspose::Pdf::Annotations::PDF3DViewArray;
    friend class Aspose::Pdf::Tests::PDF3D::PDF3DReporter;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_12;
    
public:

    /// <summary>
    /// Gets the lighting scheme of view.
    /// </summary>
    /// <value>The lighting scheme of view.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DLightingScheme> get_LightingScheme() const;
    /// <summary>
    /// Sets the lighting scheme of view.
    /// </summary>
    /// <value>The lighting scheme of view.</value>
    ASPOSE_PDF_SHARED_API void set_LightingScheme(System::SharedPtr<PDF3DLightingScheme> value);
    /// <summary>
    /// Gets the render mode of view.
    /// </summary>
    /// <value>The render mode of view.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DRenderMode> get_RenderMode() const;
    /// <summary>
    /// Sets the render mode of view.
    /// </summary>
    /// <value>The render mode of view.</value>
    ASPOSE_PDF_SHARED_API void set_RenderMode(System::SharedPtr<PDF3DRenderMode> value);
    /// <summary>
    /// Gets the cross sections array of view.
    /// </summary>
    /// <value>The cross sections array of view.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DCrossSectionArray> get_CrossSectionsArray() const;
    /// <summary>
    /// Gets the name of the view.
    /// </summary>
    /// <value>The name of the view.</value>
    ASPOSE_PDF_SHARED_API System::String get_ViewName() const;
    /// <summary>
    /// Sets the name of the view.
    /// </summary>
    /// <value>The name of the view.</value>
    ASPOSE_PDF_SHARED_API void set_ViewName(System::String value);
    /// <summary>
    /// Gets the camera position of view.
    /// </summary>
    /// <value>The camera position of view.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Matrix3D> get_CameraPosition() const;
    /// <summary>
    /// Sets the camera position of view.
    /// </summary>
    /// <value>The camera position of view.</value>
    ASPOSE_PDF_SHARED_API void set_CameraPosition(System::SharedPtr<Matrix3D> value);
    /// <summary>
    /// Gets the camera orbit of view.
    /// </summary>
    /// <value>The camera orbit of view.</value>
    ASPOSE_PDF_SHARED_API double get_CameraOrbit() const;
    /// <summary>
    /// Sets the camera orbit of view.
    /// </summary>
    /// <value>The camera orbit of view.</value>
    ASPOSE_PDF_SHARED_API void set_CameraOrbit(double value);
    /// <summary>
    /// Gets the color of the back ground of view.
    /// </summary>
    /// <value>The color of the back ground of view.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_BackGroundColor() const;
    /// <summary>
    /// Sets the color of the back ground of view.
    /// </summary>
    /// <value>The color of the back ground of view.</value>
    ASPOSE_PDF_SHARED_API void set_BackGroundColor(System::SharedPtr<Color> value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PDF3DView"></see> class.
    /// </summary>
    /// <param name="doc">The document.</param>
    /// <param name="cameraPosition">The camera position.</param>
    /// <param name="cameraOrbit">The camera orbit.</param>
    /// <param name="viewName">Name of the view.</param>
    ASPOSE_PDF_SHARED_API PDF3DView(System::SharedPtr<Document> doc, System::SharedPtr<Matrix3D> cameraPosition, double cameraOrbit, System::String viewName);
    /// <summary>
    /// Initializes a new instance of the <see cref="PDF3DView"></see> class.
    /// </summary>
    /// <param name="doc">The document.</param>
    /// <param name="view">The view.</param>
    /// <param name="viewName">Name of the view.</param>
    ASPOSE_PDF_SHARED_API PDF3DView(System::SharedPtr<Document> doc, System::SharedPtr<PDF3DView> view, System::String viewName);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> PdfView;
    System::WeakPtr<PDF3DArtwork> Pdf3DArtwork;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> PdfObject;
    bool isAdded;
    System::String InternalName;
    
    PDF3DView(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> obj, System::SharedPtr<Document> doc, System::SharedPtr<PDF3DArtwork> pdf3DArtwork, bool isDefaultView = false);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PDF3DView, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> obj, System::SharedPtr<Document> doc, System::SharedPtr<PDF3DArtwork> pdf3DArtwork, bool isDefaultView = false));
    
    virtual ASPOSE_PDF_SHARED_API ~PDF3DView();
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> _tr;
    System::SharedPtr<PDF3DLightingScheme> _lightingScheme;
    System::SharedPtr<PDF3DRenderMode> _renderMode;
    System::SharedPtr<PDF3DCrossSectionArray> _crossSectionArray;
    System::String _viewName;
    System::SharedPtr<Matrix3D> _cameraPosition;
    double _cameraOrbit;
    System::SharedPtr<Color> _backGroundColor;
    
    System::String GetViewName(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> view);
    System::String GetInternalName(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> view);
    System::SharedPtr<PDF3DLightingScheme> GetLightingScheme(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> view, bool isDefaultView);
    System::SharedPtr<PDF3DRenderMode> GetRenderMode(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> view, bool isDefaultView);
    System::SharedPtr<Color> GetBackgroundColor(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> view, bool isDefaultView);
    System::SharedPtr<PDF3DCrossSectionArray> GetCrossSectionArray(System::SharedPtr<Document> doc, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> view);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


