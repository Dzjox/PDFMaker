#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <ITextHighlightingOptions.h>

#include "aspose_slides_api_defs.h"

namespace Aspose {

namespace Slides {

/// @deprecated The interface ITextHighlightingOptions will be removed after release of version 24.10.
/// <summary>
/// Represents options which can be used to highlight text in text frame.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS TextHighlightingOptions : public Aspose::Slides::ITextHighlightingOptions
{
    typedef TextHighlightingOptions ThisType;
    typedef Aspose::Slides::ITextHighlightingOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
public:

    /// <summary>
    /// Set true to use case-sensitive search, false - otherwise.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_CaseSensitive() override;
    /// <summary>
    /// Set true to use case-sensitive search, false - otherwise.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_CaseSensitive(bool value) override;
    /// <summary>
    /// Set true to match only whole words, false - otherwise.
    /// Read <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API bool get_WholeWordsOnly() override;
    /// <summary>
    /// Set true to match only whole words, false - otherwise.
    /// Write <see cref="bool"></see>.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API void set_WholeWordsOnly(bool value) override;
    
    /// <summary>
    /// Creates new default text highlighting options.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API TextHighlightingOptions();
    
private:

    bool m_caseSensitive;
    bool m_wholeWordsOnly;
    
};

} // namespace Slides
} // namespace Aspose


