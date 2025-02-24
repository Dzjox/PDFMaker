#pragma once

#include <ITextSearchOptions.h>

#include "aspose_slides_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents options that can be used to search for text in a Presentation, Slide or TextFrame.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS TextSearchOptions : public Aspose::Slides::ITextSearchOptions
{
    typedef TextSearchOptions ThisType;
    typedef Aspose::Slides::ITextSearchOptions BaseType;
    
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
    /// Creates new default text search options.
    /// </summary>
    ASPOSE_SLIDES_SHARED_API TextSearchOptions();
    
private:

    bool pr_CaseSensitive;
    bool pr_WholeWordsOnly;
    
};

} // namespace Slides
} // namespace Aspose


