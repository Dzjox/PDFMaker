#pragma once
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
enum class FontSubstCondition;
class IFontData;
} // namespace Slides
} // namespace Aspose
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents font subtituition information
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS IFontSubstRule : public virtual System::Object
{
    typedef IFontSubstRule ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Font to substitute
    /// Read-only <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFontData> get_SourceFont() = 0;
    /// <summary>
    /// Font to use for substitution
    /// Read-only <see cref="Aspose::Slides::IFontData">IFontData</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IFontData> get_DestFont() = 0;
    /// <summary>
    /// Rule to apply for substitution
    /// Read-only <see cref="FontSubstCondition"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API FontSubstCondition get_ReplaceFontCondition() = 0;
    
};

} // namespace Slides
} // namespace Aspose


