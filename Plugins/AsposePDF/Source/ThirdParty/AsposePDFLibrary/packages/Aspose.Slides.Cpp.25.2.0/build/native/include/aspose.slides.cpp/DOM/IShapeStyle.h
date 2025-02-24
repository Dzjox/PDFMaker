#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class FontCollectionIndex : uint8_t;
class IColorFormat;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represent shape's style reference.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IShapeStyle : public virtual System::Object
{
    typedef IShapeStyle ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns a shape's outline color.
    /// Read-only <see cref="Aspose::Slides::IColorFormat">IColorFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorFormat> get_LineColor() = 0;
    /// <summary>
    /// Returns line's column index in a style matrix.
    /// Read <see cref="uint16_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint16_t get_LineStyleIndex() = 0;
    /// <summary>
    /// Sets line's column index in a style matrix.
    /// Write <see cref="uint16_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_LineStyleIndex(uint16_t value) = 0;
    /// <summary>
    /// Returns a shape's fill color.
    /// Read-only <see cref="Aspose::Slides::IColorFormat">IColorFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorFormat> get_FillColor() = 0;
    /// <summary>
    /// Returns shape's fill column index in style matrices.
    /// 0 means no fill,
    /// positive value - index in theme's fill styles,
    /// negative value - index in theme's background styles.
    /// Read <see cref="int16_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API int16_t get_FillStyleIndex() = 0;
    /// <summary>
    /// Sets shape's fill column index in style matrices.
    /// 0 means no fill,
    /// positive value - index in theme's fill styles,
    /// negative value - index in theme's background styles.
    /// Write <see cref="int16_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_FillStyleIndex(int16_t value) = 0;
    /// <summary>
    /// Returns a shape's effect color.
    /// Read-only <see cref="Aspose::Slides::IColorFormat">IColorFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorFormat> get_EffectColor() = 0;
    /// <summary>
    /// Returns shape's effect column index in a style matrix.
    /// Read <see cref="uint32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API uint32_t get_EffectStyleIndex() = 0;
    /// <summary>
    /// Sets shape's effect column index in a style matrix.
    /// Write <see cref="uint32_t"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_EffectStyleIndex(uint32_t value) = 0;
    /// <summary>
    /// Returns a shape's font color.
    /// Read-only <see cref="Aspose::Slides::IColorFormat">IColorFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorFormat> get_FontColor() = 0;
    /// <summary>
    /// Returns shape's font index in a font collection.
    /// Read <see cref="Slides::FontCollectionIndex"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API Aspose::Slides::FontCollectionIndex get_FontCollectionIndex() = 0;
    /// <summary>
    /// Sets shape's font index in a font collection.
    /// Write <see cref="Slides::FontCollectionIndex"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_FontCollectionIndex(Aspose::Slides::FontCollectionIndex value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


