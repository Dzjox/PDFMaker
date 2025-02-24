#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IColorFormat;
class IImage;
enum class PatternStyle : int8_t;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Bitmap;
class Color;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a pattern to fill a shape.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IPatternFormat : public virtual System::Object
{
    typedef IPatternFormat ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the pattern style.
    /// Read <see cref="Slides::PatternStyle"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::PatternStyle get_PatternStyle() = 0;
    /// <summary>
    /// Sets the pattern style.
    /// Write <see cref="Slides::PatternStyle"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_PatternStyle(Aspose::Slides::PatternStyle value) = 0;
    /// <summary>
    /// Returns the foreground pattern color.
    /// Read-only <see cref="Aspose::Slides::IColorFormat">IColorFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorFormat> get_ForeColor() = 0;
    /// <summary>
    /// Returns the background pattern color.
    /// Read-only <see cref="Aspose::Slides::IColorFormat">IColorFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorFormat> get_BackColor() = 0;
    
    /// @deprecated Use GetTile(Color background, Color foreground) method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Creates a tile image for the pattern fill with a specified colors.
    /// </summary>
    /// <param name="background">The background <see cref="System::Drawing::Color"></see> for the pattern.</param>
    /// <param name="foreground">The foreground <see cref="System::Drawing::Color"></see> for the pattern.</param>
    /// <returns>Tile <see cref="System::Drawing::Bitmap"></see>.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<System::Drawing::Bitmap> GetTileImage(System::Drawing::Color background, System::Drawing::Color foreground) = 0;
    /// <summary>
    /// Creates a tile image for the pattern fill with a specified colors.
    /// </summary>
    /// <param name="background">The background <see cref="System::Drawing::Color"></see> for the pattern.</param>
    /// <param name="foreground">The foreground <see cref="System::Drawing::Color"></see> for the pattern.</param>
    /// <returns>Tile <see cref="System::Drawing::Bitmap"></see>.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IImage> GetTile(System::Drawing::Color background, System::Drawing::Color foreground) = 0;
    /// @deprecated Use GetTile(Color styleColor) method instead. The method will be removed after release of version 24.7.
    /// <summary>
    /// Creates a tile image for the pattern fill.
    /// </summary>
    /// <param name="styleColor">The default <see cref="System::Drawing::Color"></see>, 
    /// defined in ShapeEx's StyleEx object. Fill's colors can depend on this.</param>
    /// <returns>Tile <see cref="System::Drawing::Bitmap"></see>.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<System::Drawing::Bitmap> GetTileImage(System::Drawing::Color styleColor) = 0;
    /// <summary>
    /// Creates a tile image for the pattern fill.
    /// </summary>
    /// <param name="styleColor">The default <see cref="System::Drawing::Color"></see>, 
    /// defined in ShapeEx's StyleEx object. Fill's colors can depend on this.</param>
    /// <returns>Tile <see cref="System::Drawing::Bitmap"></see>.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IImage> GetTile(System::Drawing::Color styleColor) = 0;
    
};

} // namespace Slides
} // namespace Aspose


