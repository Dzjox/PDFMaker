#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
//using System.Windows.Forms;
//using System.CodeDom;

#include <system/object.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class PDF3DCrossSectionArray;
class PDF3DCuttingPlaneOrientation;
class PDF3DView;
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
class Point3D;
namespace Tests
{
namespace PDF3D
{
class PDF3DReporter;
} // namespace PDF3D
} // namespace Tests
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class PDF3DCrossSection.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PDF3DCrossSection : public System::Object
{
    typedef PDF3DCrossSection ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::PDF3DCrossSectionArray;
    friend class Aspose::Pdf::Tests::PDF3D::PDF3DReporter;
    
public:

    /// <summary>
    /// Gets the cross section rotation center.
    /// </summary>
    /// <value>The center.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Point3D> get_Center() const;
    /// <summary>
    /// Sets the cross section rotation center.
    /// </summary>
    /// <value>The center.</value>
    ASPOSE_PDF_SHARED_API void set_Center(System::SharedPtr<Point3D> value);
    /// <summary>
    /// Gets the cutting plane opacity.
    /// </summary>
    /// <value>The cutting plane opacity.</value>
    /// <exception cref="Exception">The number must be in the range [0 , 1]</exception>
    ASPOSE_PDF_SHARED_API double get_CuttingPlaneOpacity() const;
    /// <summary>
    /// Sets the cutting plane opacity.
    /// </summary>
    /// <value>The cutting plane opacity.</value>
    /// <exception cref="Exception">The number must be in the range [0 , 1]</exception>
    ASPOSE_PDF_SHARED_API void set_CuttingPlaneOpacity(double value);
    /// <summary>
    /// Gets the cutting plane orientation.
    /// </summary>
    /// <value>The cutting plane orientation.</value>
    /// <exception cref="Exception">
    /// Only one of the values shall be Null
    /// </exception>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DCuttingPlaneOrientation> get_CuttingPlaneOrientation() const;
    /// <summary>
    /// Sets the cutting plane orientation.
    /// </summary>
    /// <value>The cutting plane orientation.</value>
    /// <exception cref="Exception">
    /// Only one of the values shall be Null
    /// </exception>
    ASPOSE_PDF_SHARED_API void set_CuttingPlaneOrientation(System::SharedPtr<PDF3DCuttingPlaneOrientation> value);
    /// <summary>
    /// Gets the color of the cutting plane.
    /// </summary>
    /// <value>The color of the cutting plane.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_CuttingPlaneColor() const;
    /// <summary>
    /// Sets the color of the cutting plane.
    /// </summary>
    /// <value>The color of the cutting plane.</value>
    ASPOSE_PDF_SHARED_API void set_CuttingPlaneColor(System::SharedPtr<Color> value);
    /// <summary>
    /// Gets the color of the cutting planes intersection.
    /// </summary>
    /// <value>The color of the cutting planes intersection.</value>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_CuttingPlanesIntersectionColor() const;
    /// <summary>
    /// Sets the color of the cutting planes intersection.
    /// </summary>
    /// <value>The color of the cutting planes intersection.</value>
    ASPOSE_PDF_SHARED_API void set_CuttingPlanesIntersectionColor(System::SharedPtr<Color> value);
    /// <summary>
    /// Gets a value indicating visibility of the cutting planes intersection.
    /// </summary>
    /// <value><c>true</c> if visible; otherwise, <c>false</c>.</value>
    ASPOSE_PDF_SHARED_API bool get_Visibility() const;
    /// <summary>
    /// Sets a value indicating visibility of the cutting planes intersection.
    /// </summary>
    /// <value><c>true</c> if visible; otherwise, <c>false</c>.</value>
    ASPOSE_PDF_SHARED_API void set_Visibility(bool value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PDF3DCrossSection"></see> class.
    /// </summary>
    /// <param name="doc">The document.</param>
    ASPOSE_PDF_SHARED_API PDF3DCrossSection(System::SharedPtr<Document> doc);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> CrossSectionPdfDict;
    int32_t ObjectID;
    System::WeakPtr<PDF3DView> Pdf3DView;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfObject> PdfObject;
    
    PDF3DCrossSection(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> obj);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PDF3DCrossSection, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> obj));
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> _tr;
    System::SharedPtr<Point3D> _center;
    double _cuttingPlaneOpacity;
    System::SharedPtr<PDF3DCuttingPlaneOrientation> _cuttingPlaneOrientation;
    System::SharedPtr<Color> _cuttingPlaneColor;
    System::SharedPtr<Color> _cuttingPlanesIntersectionColor;
    bool _visibility;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


