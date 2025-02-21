#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Annotations
{
class PDF3DView;
} // namespace Annotations
class Color;
namespace Engine
{
namespace Data
{
class IPdfDictionary;
} // namespace Data
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Enum RenderModeType: set of render mode types
/// </summary>
enum class RenderModeType
{
    /// <summary>
    /// The "Solid" render mode.
    /// </summary>
    Solid,
    /// <summary>
    /// The "SolidWireFrame" render mode.
    /// </summary>
    SolidWireframe,
    /// <summary>
    /// The "Transparent" render mode.
    /// </summary>
    Transparent,
    /// <summary>
    /// The "TransparentWareFrame" render mode.
    /// </summary>
    TransparentWareFrame,
    /// <summary>
    /// The "BoundingBox" render mode.
    /// </summary>
    BoundingBox,
    /// <summary>
    /// The "TransparentBoundingBox" render mode.
    /// </summary>
    TransparentBoundingBox,
    /// <summary>
    /// The "TransparentBoundingBoxOutline" render mode.
    /// </summary>
    TransparentBoundingBoxOutline,
    /// <summary>
    /// The "WireFrame" render mode.
    /// </summary>
    Wireframe,
    /// <summary>
    /// The "ShadedWireFrame" render mode.
    /// </summary>
    ShadedWireframe,
    /// <summary>
    /// The "Vertices" render mode.
    /// </summary>
    Vertices,
    /// <summary>
    /// The "ShadedVertices" render mode.
    /// </summary>
    ShadedVertices,
    /// <summary>
    /// The "Illustration" render mode.
    /// </summary>
    Illustration,
    /// <summary>
    /// The "SolidOutline" render mode.
    /// </summary>
    SolidOutline,
    /// <summary>
    /// The "ShadedIllustration" render mode.
    /// </summary>
    ShadedIllustration
};

/// <summary>
/// Class PDF3DRenderMode.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PDF3DRenderMode : public System::Object
{
    typedef PDF3DRenderMode ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::PDF3DView;
    
public:

    /// <summary>
    /// The "Solid" render mode.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DRenderMode> Solid;
    /// <summary>
    /// The "SolidWireFrame" render mode.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DRenderMode> SolidWireframe;
    /// <summary>
    /// The "Transparent" render mode.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DRenderMode> Transparent;
    /// <summary>
    /// The "TransparentWareFrame" render mode.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DRenderMode> TransparentWareFrame;
    /// <summary>
    /// The "BoundingBox" render mode.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DRenderMode> BoundingBox;
    /// <summary>
    /// The "TransparentBoundingBox" render mode.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DRenderMode> TransparentBoundingBox;
    /// <summary>
    /// The "TransparentBoundingBoxOutline" render mode.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DRenderMode> TransparentBoundingBoxOutline;
    /// <summary>
    /// The "WireFrame" render mode.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DRenderMode> Wireframe;
    /// <summary>
    /// The "ShadedWireFrame" render mode.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DRenderMode> ShadedWireframe;
    /// <summary>
    /// The "Vertices" render mode.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DRenderMode> Vertices;
    /// <summary>
    /// The "ShadedVertices" render mode.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DRenderMode> ShadedVertices;
    /// <summary>
    /// The "Illustration" render mode.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DRenderMode> Illustration;
    /// <summary>
    /// The "SolidOutline" render mode.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DRenderMode> SolidOutline;
    /// <summary>
    /// The "ShadedIllustration" render mode.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DRenderMode> ShadedIllustration;
    
    /// <summary>
    /// Gets the type.
    /// </summary>
    /// <value>The type.</value>
    ASPOSE_PDF_SHARED_API RenderModeType get_Type() const;
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PDF3DRenderMode"></see> class.
    /// </summary>
    /// <param name="subtype">The render mode type.</param>
    ASPOSE_PDF_SHARED_API PDF3DRenderMode(RenderModeType subtype);
    /// <summary>
    /// Initializes a new instance of the <see cref="PDF3DRenderMode"></see> class.
    /// </summary>
    /// <param name="typeName">Name of the type.</param>
    /// <exception cref="ArgumentException">Unknown a render mode type argument</exception>
    ASPOSE_PDF_SHARED_API PDF3DRenderMode(System::String typeName);
    
    /// <summary>
    /// Gets the auxiliary colour.
    /// </summary>
    /// <returns>Color.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Color> GetAuxiliaryColour();
    /// <summary>
    /// Sets the auxiliary colour.
    /// </summary>
    /// <param name="color">The color.</param>
    /// <returns>PDF3DRenderMode.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DRenderMode> SetAuxiliaryColour(System::SharedPtr<Color> color);
    /// <summary>
    /// Gets the color of the face.
    /// </summary>
    /// <returns>Object.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> GetFaceColor();
    /// <summary>
    /// Sets the color of the face.
    /// </summary>
    /// <param name="color">The color.</param>
    /// <returns>PDF3DRenderMode.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DRenderMode> SetFaceColor(System::SharedPtr<Color> color);
    /// <summary>
    /// Gets the opacity.
    /// </summary>
    /// <returns>System.Double.</returns>
    ASPOSE_PDF_SHARED_API double GetOpacity();
    /// <summary>
    /// Sets the opacity.
    /// </summary>
    /// <param name="opacity">The opacity.</param>
    /// <returns>PDF3DRenderMode.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DRenderMode> SetOpacity(double opacity);
    /// <summary>
    /// Sets the crease value.
    /// </summary>
    /// <param name="creaseValue">The crease value.</param>
    /// <returns>PDF3DRenderMode.</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<PDF3DRenderMode> SetCreaseValue(double creaseValue);
    /// <summary>
    /// Gets the crease value.
    /// </summary>
    /// <returns>System.Double.</returns>
    ASPOSE_PDF_SHARED_API double GetCreaseValue();
    
protected:

    System::SharedPtr<Color> auxiliaryColour;
    System::SharedPtr<System::Object> faceColor;
    double opacity;
    double creaseValue;
    
    PDF3DRenderMode(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> rmPdfDictionary);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(PDF3DRenderMode, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> rmPdfDictionary));
    
    virtual ASPOSE_PDF_SHARED_API ~PDF3DRenderMode();
    
private:

    RenderModeType _type;
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::Annotations::RenderModeType>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Annotations::RenderModeType, const char_t*>, 14>& values();
};



