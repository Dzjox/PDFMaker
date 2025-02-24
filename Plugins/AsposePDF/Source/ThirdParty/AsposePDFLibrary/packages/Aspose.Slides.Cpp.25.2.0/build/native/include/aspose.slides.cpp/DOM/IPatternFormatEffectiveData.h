#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
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
/// Immutable object which contains effective pattern filling properties.
/// </summary>
/// <remarks>
/// This interface is used as a part of <see cref="Aspose::Slides::IFillFormatEffectiveData">IFillFormatEffectiveData</see> and <see cref="Aspose::Slides::ILineFillFormatEffectiveData">ILineFillFormatEffectiveData</see>.
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IPatternFormatEffectiveData : public virtual System::Object
{
    typedef IPatternFormatEffectiveData ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the pattern style.
    /// Read-only <see cref="Slides::PatternStyle"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::PatternStyle get_PatternStyle() = 0;
    /// <summary>
    /// Returns the foreground pattern color.
    /// Read-only <see cref="System::Drawing::Color"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::Color get_ForeColor() = 0;
    /// <summary>
    /// Returns the background pattern color.
    /// Read-only <see cref="System::Drawing::Color"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::Drawing::Color get_BackColor() = 0;
    
    /// @deprecated Use GetTileIImage(SlidesImage image) method instead. The method will be removed after release of version 24.7.
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
    /// <returns>Tile <see cref="Aspose::Slides::IImage">IImage</see>.</returns>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IImage> GetTileIImage(System::Drawing::Color background, System::Drawing::Color foreground) = 0;
    
};

} // namespace Slides
} // namespace Aspose


