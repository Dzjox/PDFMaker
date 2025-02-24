#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// @deprecated The interface ITextHighlightingOptions will be removed after release of version 24.10.
/// <summary>
/// Represents options which can be used to highlight text in text frame.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ITextHighlightingOptions : public virtual System::Object
{
    typedef ITextHighlightingOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Set true to use case-sensitive search, false - otherwise.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_CaseSensitive() = 0;
    /// <summary>
    /// Set true to use case-sensitive search, false - otherwise.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_CaseSensitive(bool value) = 0;
    /// <summary>
    /// Set true to match only whole words, false - otherwise.
    /// Read <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API bool get_WholeWordsOnly() = 0;
    /// <summary>
    /// Set true to match only whole words, false - otherwise.
    /// Write <see cref="bool"></see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_WholeWordsOnly(bool value) = 0;
    
};

} // namespace Slides
} // namespace Aspose


