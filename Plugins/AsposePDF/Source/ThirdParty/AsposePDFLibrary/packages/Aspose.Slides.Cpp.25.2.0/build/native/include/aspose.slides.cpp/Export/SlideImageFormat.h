#pragma once
// Copyright (c) 2001-2013 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <Export/ISlideImageFormat.h>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace Export
{
class PptxExporter;
enum class SlideImageType;
class SVGOptions;
} // namespace Export
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
namespace Imaging
{
class ImageFormat;
} // namespace Imaging
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

namespace Export {

/// <summary>
/// Determines format in which slide image will be saved for presentation to HTML export.
/// </summary> 
class ASPOSE_SLIDES_SHARED_CLASS SlideImageFormat : public Aspose::Slides::Export::ISlideImageFormat
{
    typedef SlideImageFormat ThisType;
    typedef Aspose::Slides::Export::ISlideImageFormat BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Export::PptxExporter;
    /// @endcond
    
public:

    /// <summary>
    /// Slides should converted to a SVG format.
    /// </summary>
    /// <param name="options">Options for SVG export.</param>
    /// <returns></returns>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<SlideImageFormat> Svg(System::SharedPtr<SVGOptions> options);
    /// <summary>
    /// Slides should be converted to a raster image.
    /// </summary>
    /// <param name="scale">Image scale factor.</param>
    /// <param name="imgFormat">Image format.</param>
    /// <returns></returns>
    static ASPOSE_SLIDES_SHARED_API System::SharedPtr<SlideImageFormat> Bitmap(float scale, System::SharedPtr<System::Drawing::Imaging::ImageFormat> imgFormat);
    
    ASPOSE_SLIDES_SHARED_API SlideImageFormat();
    
protected:

    /// @cond
    ASPOSE_SLIDES_LOCAL_API Aspose::Slides::Export::SlideImageType get_SlideImageType();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Drawing::Imaging::ImageFormat> get_ImageFormat();
    ASPOSE_SLIDES_LOCAL_API System::SharedPtr<SVGOptions> get_SvgOptions();
    ASPOSE_SLIDES_LOCAL_API float get_BitmapScale();
    /// @endcond
    
private:

    Aspose::Slides::Export::SlideImageType m_slideImageType;
    System::SharedPtr<SVGOptions> m_svgOptions;
    float m_bitmapScale;
    System::SharedPtr<System::Drawing::Imaging::ImageFormat> m_imageFormat;
    
};

} // namespace Export
} // namespace Slides
} // namespace Aspose


