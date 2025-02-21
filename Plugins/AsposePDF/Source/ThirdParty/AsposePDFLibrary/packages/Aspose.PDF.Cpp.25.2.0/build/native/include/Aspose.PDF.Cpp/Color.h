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
class Annotation;
class CommonFigureAnnotation;
class LineAnnotation;
class PDF3DCrossSection;
class PDF3DRenderMode;
class PDF3DView;
class PolyAnnotation;
class RedactionAnnotation;
} // namespace Annotations
class Artifact;
enum class ColorSpace;
namespace Drawing
{
class PatternColorSpace;
class Shape;
} // namespace Drawing
namespace Engine
{
namespace Presentation
{
namespace IndependentImpl
{
namespace ColorInitializerStrategies
{
class ContentToGrayConversion;
} // namespace ColorInitializerStrategies
} // namespace IndependentImpl
} // namespace Presentation
} // namespace Engine
class Operator;
class Table;
namespace Tagged
{
namespace Helpers
{
class StructureTextStateFactory;
} // namespace Helpers
} // namespace Tagged
namespace Tests
{
namespace PDF3D
{
class PDF3DAnnotation_Openning3thPartDocumentTests;
} // namespace PDF3D
} // namespace Tests
namespace Text
{
class TextFragmentState;
class TextParagraph;
class TextState;
} // namespace Text
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
namespace Drawing
{
class Color;
} // namespace Drawing
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents class for color value which can be expressed in different color space.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Color final : public System::Object
{
    typedef Color ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Annotations::Annotation;
    friend class Aspose::Pdf::Annotations::PDF3DRenderMode;
    friend class Aspose::Pdf::Annotations::PDF3DView;
    friend class Aspose::Pdf::Annotations::PDF3DCrossSection;
    friend class Aspose::Pdf::Annotations::RedactionAnnotation;
    friend class Aspose::Pdf::Drawing::Shape;
    friend class Aspose::Pdf::Tagged::Helpers::StructureTextStateFactory;
    friend class Aspose::Pdf::Annotations::CommonFigureAnnotation;
    friend class Aspose::Pdf::Annotations::LineAnnotation;
    friend class Aspose::Pdf::Annotations::PolyAnnotation;
    friend class Aspose::Pdf::Text::TextParagraph;
    friend class Aspose::Pdf::Text::TextFragmentState;
    friend class Aspose::Pdf::Text::TextState;
    friend class Aspose::Pdf::Table;
    friend class Aspose::Pdf::Artifact;
    friend class Aspose::Pdf::Engine::Presentation::IndependentImpl::ColorInitializerStrategies::ContentToGrayConversion;
    friend class Aspose::Pdf::Tests::PDF3D::PDF3DAnnotation_Openning3thPartDocumentTests;
    friend ASPOSE_PDF_SHARED_API bool operator ==(const System::SharedPtr<Color>& x, const System::SharedPtr<Color>& y);
    friend ASPOSE_PDF_SHARED_API bool operator !=(const System::SharedPtr<Color>& x, const System::SharedPtr<Color>& y);
    
public:

    /// <summary>
    /// Represents empty color.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> Empty;
    
    /// <summary>
    /// Gets the alpha component value
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_A() const;
    /// <summary>
    /// Gets color value.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<double> get_Data() const;
    /// <summary>
    /// Gets color space that the color represents.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::ColorSpace get_ColorSpace();
    /// <summary>
    /// Represents a object that indicates the pattern colorspace.        
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Drawing::PatternColorSpace> get_PatternColorSpace() const;
    /// <summary>
    /// Represents a object that indicates the pattern colorspace.        
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PatternColorSpace(System::SharedPtr<Aspose::Pdf::Drawing::PatternColorSpace> value);
    /// <summary>
    /// Gets a system-defined color.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Transparent();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFF0F8FF.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_AliceBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFAEBD7.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_AntiqueWhite();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF00FFFF.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Aqua();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF7FFFD4.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Aquamarine();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFF0FFFF.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Azure();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFF5F5DC.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Beige();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFFE4C4.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Bisque();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF000000.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Black();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFFEBCD.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_BlanchedAlmond();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF0000FF.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Blue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF8A2BE2.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_BlueViolet();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFA52A2A.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Brown();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFDEB887.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_BurlyWood();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF5F9EA0.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_CadetBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF7FFF00.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Chartreuse();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFD2691E.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Chocolate();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFF7F50.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Coral();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF6495ED.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_CornflowerBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFFF8DC.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Cornsilk();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFDC143C.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Crimson();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF00FFFF.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Cyan();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF00008B.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_DarkBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF008B8B.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_DarkCyan();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFB8860B.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_DarkGoldenrod();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFA9A9A9.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_DarkGray();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF006400.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_DarkGreen();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFBDB76B.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_DarkKhaki();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF8B008B.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_DarkMagenta();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF556B2F.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_DarkOliveGreen();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFF8C00.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_DarkOrange();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF9932CC.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_DarkOrchid();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF8B0000.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_DarkRed();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFE9967A.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_DarkSalmon();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF8FBC8F.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_DarkSeaGreen();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF483D8B.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_DarkSlateBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF2F4F4F.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_DarkSlateGray();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF00CED1.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_DarkTurquoise();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF9400D3.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_DarkViolet();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFF1493.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_DeepPink();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF00BFFF.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_DeepSkyBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF696969.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_DimGray();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF1E90FF.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_DodgerBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFB22222.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Firebrick();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFFFAF0.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_FloralWhite();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF228B22.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_ForestGreen();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFF00FF.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Fuchsia();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFDCDCDC.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Gainsboro();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFF8F8FF.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_GhostWhite();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFFD700.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Gold();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFDAA520.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Goldenrod();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF808080.
    /// </summary>
    /// 
    /// <returns>
    /// A  strcture representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Gray();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF008000.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Green();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFADFF2F.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_GreenYellow();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFF0FFF0.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Honeydew();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFF69B4.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_HotPink();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFCD5C5C.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_IndianRed();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF4B0082.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Indigo();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFFFFF0.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Ivory();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFF0E68C.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Khaki();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFE6E6FA.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Lavender();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFFF0F5.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_LavenderBlush();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF7CFC00.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_LawnGreen();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFFFACD.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_LemonChiffon();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFADD8E6.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_LightBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFF08080.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_LightCoral();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFE0FFFF.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_LightCyan();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFAFAD2.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_LightGoldenrodYellow();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF90EE90.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_LightGreen();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFD3D3D3.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_LightGray();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFFB6C1.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_LightPink();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFFA07A.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_LightSalmon();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF20B2AA.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_LightSeaGreen();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF87CEFA.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_LightSkyBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF778899.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_LightSlateGray();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFB0C4DE.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_LightSteelBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFFFFE0.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_LightYellow();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF00FF00.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Lime();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF32CD32.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_LimeGreen();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFAF0E6.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Linen();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFF00FF.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Magenta();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF800000.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Maroon();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF66CDAA.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_MediumAquamarine();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF0000CD.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_MediumBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFBA55D3.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_MediumOrchid();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF9370DB.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_MediumPurple();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF3CB371.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_MediumSeaGreen();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF7B68EE.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_MediumSlateBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF00FA9A.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_MediumSpringGreen();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF48D1CC.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_MediumTurquoise();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFC71585.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_MediumVioletRed();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF191970.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_MidnightBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFF5FFFA.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_MintCream();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFFE4E1.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_MistyRose();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFFE4B5.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Moccasin();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFFDEAD.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_NavajoWhite();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF000080.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Navy();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFDF5E6.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_OldLace();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF808000.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Olive();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF6B8E23.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_OliveDrab();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFFA500.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Orange();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFF4500.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_OrangeRed();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFDA70D6.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Orchid();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFEEE8AA.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_PaleGoldenrod();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF98FB98.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_PaleGreen();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFAFEEEE.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_PaleTurquoise();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFDB7093.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_PaleVioletRed();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFFEFD5.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_PapayaWhip();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFFDAB9.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_PeachPuff();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFCD853F.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Peru();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFFC0CB.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Pink();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFDDA0DD.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Plum();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFB0E0E6.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_PowderBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF800080.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Purple();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFF0000.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Red();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFBC8F8F.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_RosyBrown();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF4169E1.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_RoyalBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF8B4513.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_SaddleBrown();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFA8072.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Salmon();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFF4A460.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_SandyBrown();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF2E8B57.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_SeaGreen();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFFF5EE.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_SeaShell();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFA0522D.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Sienna();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFC0C0C0.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Silver();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF87CEEB.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_SkyBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF6A5ACD.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_SlateBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF708090.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_SlateGray();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFFFAFA.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Snow();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF00FF7F.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_SpringGreen();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF4682B4.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_SteelBlue();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFD2B48C.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Tan();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF008080.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Teal();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFD8BFD8.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Thistle();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFF6347.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Tomato();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF40E0D0.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Turquoise();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFEE82EE.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Violet();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFF5DEB3.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Wheat();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFFFFFF.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_White();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFF5F5F5.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_WhiteSmoke();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FFFFFF00.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_Yellow();
    /// <summary>
    /// Gets a system-defined color that has an ARGB value of \c \#FF9ACD32.
    /// </summary>
    /// 
    /// <returns>
    /// A  representing a system-defined color.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> get_YellowGreen();
    
    /// <summary>
    /// Default constructor.
    /// </summary>
    ASPOSE_PDF_SHARED_API Color();
    
    /// <summary>
    /// Extracts color components from the string.
    /// </summary>
    /// <param name="value">
    /// String value with color component values.
    /// </param>
    /// <returns>
    /// Color object.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> Parse(System::String value);
    /// <summary>
    /// Converts color into rgb.
    /// </summary>
    /// <returns>
    /// Rgb color value.
    /// </returns>
    ASPOSE_PDF_SHARED_API System::Drawing::Color ToRgb();
    /// <summary>
    /// Gets valid pdf Color object from System.Drawing.Color value.
    /// </summary>
    /// <param name="color">
    /// System.Drawing.Color value.
    /// </param>
    /// <returns>
    /// Color object with each component value in [0..1] range.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> FromRgb(System::Drawing::Color color);
    /// <summary>
    /// Gets valid pdf Color object from RGB color components.
    /// </summary>
    /// <param name="r">
    /// The Red color component (value 0 - 255).
    /// </param>
    /// <param name="g">
    /// The Green color component (value 0 - 255).
    /// </param>
    /// <param name="b">
    /// The Blue color component (value 0 - 255).
    /// </param>
    /// <returns>
    /// Color object with each component value in [0..255] range.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> FromArgb(int32_t r, int32_t g, int32_t b);
    /// <summary>
    /// Gets valid pdf Color object from RGB color components.
    /// </summary>
    /// <param name="a">
    /// The alpha component value (value 0 - 255).
    /// </param>
    /// <param name="r">
    /// The Red color component (value 0 - 255).
    /// </param>
    /// <param name="g">
    /// The Green color component (value 0 - 255).
    /// </param>
    /// <param name="b">
    /// The Blue color component (value 0 - 255).
    /// </param>
    /// <returns>
    /// Color object with each component value in [0..255] range.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> FromArgb(int32_t a, int32_t r, int32_t g, int32_t b);
    /// <summary>
    /// Gets valid pdf Color object from RGB color components.
    /// </summary>
    /// <param name="r">
    /// The Red color component (value 0 - 1).
    /// </param>
    /// <param name="g">
    /// The Green color component (value 0 - 1).
    /// </param>
    /// <param name="b">
    /// The Blue color component (value 0 - 1).
    /// </param>
    /// <returns>
    /// Color object with each component value in [0..1] range.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> FromRgb(double r, double g, double b);
    /// <summary>
    /// Gets valid pdf Color object from Gray color component.
    /// </summary>
    /// <param name="g">
    /// The Gray color component (value 0 - 1).
    /// </param>
    /// <returns>
    /// Color object with each component value in [0..1] range.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> FromGray(double g);
    /// <summary>
    /// Gets valid pdf Color object from CMYK color components.
    /// </summary>
    /// <param name="c">
    /// The Cyan color component (value 0 - 1).
    /// </param>
    /// <param name="m">
    /// The Magenta color component (value 0 - 1).
    /// </param>
    /// <param name="y">
    /// The Yellow color component (value 0 - 1).
    /// </param>
    /// <param name="k">
    /// The Key color component (value 0 - 1).
    /// </param> 
    /// <returns>
    /// Color object with each component value in [0..1] range.
    /// </returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Color> FromCmyk(double c, double m, double y, double k);
    /// <summary>
    /// Returns true if two Colors are equal.
    /// </summary>
    /// <param name="obj">Object to compare.</param>
    /// <returns>True in case Color objects are equal.</returns>
    ASPOSE_PDF_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// Converts to string.
    /// </summary>
    /// <returns>
    /// String representation of the Color object.
    /// </returns>
    ASPOSE_PDF_SHARED_API System::String ToString() const override;
    
protected:

    /// <summary>
    /// If true this is empty (transparent) color.
    /// </summary>
    bool get_IsEmpty() const;
    
    Color(System::ArrayPtr<double> vector);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Color, CODEPORTING_ARGS(System::ArrayPtr<double> vector));
    /// 
    System::SharedPtr<Color> Clone();
    System::SharedPtr<Color> ToRgbColor();
    System::SharedPtr<Color> ToGrayColor();
    System::SharedPtr<Color> ToCmykColor();
    bool Equal(System::SharedPtr<Color> color);
    /// <summary>
    /// Adds the appropriate SetColorStroke operator to the list.
    /// </summary>
    /// <param name="operators">The operators.</param>
    void AddStrokeColorToOperators(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    /// <summary>
    /// Adds the appropriate SetColor operator to the list.
    /// </summary>
    /// <param name="operators">The operators.</param>
    void AddFillColorToOperators(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators);
    
private:

    System::ArrayPtr<double> vector;
    bool isEmpty;
    double alpha;
    /// <summary>
    /// The pattern colorspace.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Drawing::PatternColorSpace> patternColor;
    
    Color(System::ArrayPtr<double> vector, bool isEmpty, double alpha);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Color, CODEPORTING_ARGS(System::ArrayPtr<double> vector, bool isEmpty, double alpha));
    System::String ToString_NonConst();
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
};

ASPOSE_PDF_SHARED_API bool operator ==(const System::SharedPtr<Color>& x, const System::SharedPtr<Color>& y);
ASPOSE_PDF_SHARED_API bool operator !=(const System::SharedPtr<Color>& x, const System::SharedPtr<Color>& y);

} // namespace Pdf
} // namespace Aspose


