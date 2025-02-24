#pragma once
// Copyright (c) 2001-2012 Aspose Pty Ltd. All Rights Reserved.

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
/// Represents fonts collection.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IFonts : public virtual System::Object
{
    typedef IFonts ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the Latin font.
    /// Read <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFontData> get_LatinFont() = 0;
    /// <summary>
    /// Sets the Latin font.
    /// Write <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_LatinFont(System::SharedPtr<IFontData> value) = 0;
    /// <summary>
    /// Returns the East Asian font.
    /// Read <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFontData> get_EastAsianFont() = 0;
    /// <summary>
    /// Sets the East Asian font.
    /// Write <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_EastAsianFont(System::SharedPtr<IFontData> value) = 0;
    /// <summary>
    /// Returns the complex script font.
    /// Read <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFontData> get_ComplexScriptFont() = 0;
    /// <summary>
    /// Sets the complex script font.
    /// Write <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_ComplexScriptFont(System::SharedPtr<IFontData> value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


