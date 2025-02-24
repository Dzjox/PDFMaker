#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class IFontData;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Immutable object which contains effective fonts set.
/// </summary>
/// <remarks>
/// This interface is used as a part of <see cref="Aspose::Slides::IBasePortionFormatEffectiveData">IBasePortionFormatEffectiveData</see> and <see cref="Aspose::Slides::Theme::IFontSchemeEffectiveData">Theme::IFontSchemeEffectiveData</see> interfaces.
/// </remarks>
class ASPOSE_SLIDES_API_SHARED_CLASS IFontsEffectiveData : public virtual System::Object
{
    typedef IFontsEffectiveData ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the Latin font.
    /// Read-only <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFontData> get_LatinFont() = 0;
    /// <summary>
    /// Returns the East Asian font.
    /// Read-only <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFontData> get_EastAsianFont() = 0;
    /// <summary>
    /// Returns the complex script font.
    /// Read-only <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFontData> get_ComplexScriptFont() = 0;
    
};

} // namespace Slides
} // namespace Aspose


