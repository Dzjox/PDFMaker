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
enum class ColorSchemeIndex : uint8_t;
class IColorFormat;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

namespace Theme {

/// <summary>
/// Stores theme-defined colors.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IColorScheme : public Aspose::Slides::ISlideComponent
{
    typedef IColorScheme ThisType;
    typedef Aspose::Slides::ISlideComponent BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// First dark color in the scheme.
    /// Read-only <see cref="IColorFormat"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorFormat> get_Dark1() = 0;
    /// <summary>
    /// First light color in the scheme.
    /// Read-only <see cref="IColorFormat"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorFormat> get_Light1() = 0;
    /// <summary>
    /// Second dark color in the scheme.
    /// Read-only <see cref="IColorFormat"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorFormat> get_Dark2() = 0;
    /// <summary>
    /// Second light color in the scheme.
    /// Read-only <see cref="IColorFormat"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorFormat> get_Light2() = 0;
    /// <summary>
    /// First accent color in the scheme.
    /// Read-only <see cref="IColorFormat"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorFormat> get_Accent1() = 0;
    /// <summary>
    /// Second accent color in the scheme.
    /// Read-only <see cref="IColorFormat"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorFormat> get_Accent2() = 0;
    /// <summary>
    /// Third accent color in the scheme.
    /// Read-only <see cref="IColorFormat"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorFormat> get_Accent3() = 0;
    /// <summary>
    /// Fourth accent color in the scheme.
    /// Read-only <see cref="IColorFormat"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorFormat> get_Accent4() = 0;
    /// <summary>
    /// Fifth accent color in the scheme.
    /// Read-only <see cref="IColorFormat"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorFormat> get_Accent5() = 0;
    /// <summary>
    /// Sixth accent color in the scheme.
    /// Read-only <see cref="IColorFormat"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorFormat> get_Accent6() = 0;
    /// <summary>
    /// Color for the hyperlinks.
    /// Read-only <see cref="IColorFormat"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorFormat> get_Hyperlink() = 0;
    /// <summary>
    /// Color for the visited hyperlinks.
    /// Read-only <see cref="IColorFormat"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorFormat> get_FollowedHyperlink() = 0;
    
    /// <summary>
    /// Gets the element at the specified index.
    /// Read-only <see cref="IColorFormat"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IColorFormat> idx_get(ColorSchemeIndex index) = 0;
    
};

} // namespace Theme
} // namespace Slides
} // namespace Aspose


