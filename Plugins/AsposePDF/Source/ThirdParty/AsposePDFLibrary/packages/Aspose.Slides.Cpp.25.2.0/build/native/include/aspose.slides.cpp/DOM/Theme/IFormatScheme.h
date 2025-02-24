#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/ISlideComponent.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IFillFormat;
class ILineFormat;
namespace Theme
{
class IEffectStyle;
class IEffectStyleCollection;
class IFillFormatCollection;
class ILineFormatCollection;
} // namespace Theme
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Theme {

/// <summary>
/// Stores theme-defined formats for the shapes.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IFormatScheme : public Aspose::Slides::ISlideComponent
{
    typedef IFormatScheme ThisType;
    typedef Aspose::Slides::ISlideComponent BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns a collection of theme defined fill styles.
    /// Read-only <see cref="Aspose::Slides::Theme::IFillFormatCollection">IFillFormatCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFillFormatCollection> get_FillStyles() = 0;
    /// <summary>
    /// Returns a collection of theme defined line styles.
    /// Read-only <see cref="Aspose::Slides::Theme::ILineFormatCollection">ILineFormatCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILineFormatCollection> get_LineStyles() = 0;
    /// <summary>
    /// Returns a collection of theme defined effect styles.
    /// Read-only <see cref="Aspose::Slides::Theme::IEffectStyleCollection">IEffectStyleCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IEffectStyleCollection> get_EffectStyles() = 0;
    /// <summary>
    /// Returns a collection of theme defined background fill styles.
    /// Read-only <see cref="Aspose::Slides::Theme::IFillFormatCollection">IFillFormatCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFillFormatCollection> get_BackgroundFillStyles() = 0;
    
    /// <summary>
    /// Returns the theme-defined fill style at the specified index.
    /// Read-only <see cref="Aspose::Slides::IFillFormat"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFillFormat> get_FillStyle(int32_t index) = 0;
    /// <summary>
    /// Returns the theme-defined line style at the specified index.
    /// Read-only <see cref="Aspose::Slides::ILineFormat"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ILineFormat> get_LineStyle(int32_t index) = 0;
    /// <summary>
    /// Returns the theme-defined effect style at the specified index.
    /// Read-only <see cref="Aspose::Slides::Theme::IEffectStyle"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IEffectStyle> get_EffectStyle(int32_t index) = 0;
    /// <summary>
    /// Returns the theme-defined background fill style at the specified index.
    /// Read-only <see cref="Aspose::Slides::IFillFormat"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFillFormat> get_BackgroundFillStyle(int32_t index) = 0;
    
};

} // namespace Theme
} // namespace Slides
} // namespace Aspose


