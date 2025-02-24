#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "aspose_slides_api_api_defs.h"

namespace Aspose {

namespace Slides {

/// <summary>
/// This structure represents the information about the font replacement when it will be rendered.
/// </summary>
/// <example>
/// <code>
/// auto pres = System::MakeObject<Presentation>(u"pres.pptx");
/// 
/// for (auto fontSubstitution : System::IterateOver(pres->get_FontsManager()->GetSubstitutions()))
/// {
///     System::Console::WriteLine(u"{0} -> {1}", fontSubstitution->get_OriginalFontName(), fontSubstitution->get_SubstitutedFontName());
/// }
/// </code>
/// </example>    
class ASPOSE_SLIDES_API_SHARED_CLASS FontSubstitutionInfo : public System::Object
{
    typedef FontSubstitutionInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Indicates source font name in presentation.
    /// Read-only <see cref="System::String"></see>
    /// </summary>
    ASPOSE_SLIDES_API_SHARED_API System::String get_OriginalFontName();
    /// <summary>
    /// Indicates the replacement font name for the original font.
    /// Read-only <see cref="System::String"></see>
    /// </summary>
    ASPOSE_SLIDES_API_SHARED_API System::String get_SubstitutedFontName();
    
    /// <summary>
    /// Creates an instance of <see cref="Aspose::Slides::FontSubstitutionInfo">FontSubstitutionInfo</see> class.
    /// </summary>
    /// <param name="originFontName">Source font name in presentation <see cref="System::String"></see></param>
    /// <param name="substFontName">Replacement font name for the original font <see cref="System::String"></see></param>
    ASPOSE_SLIDES_API_SHARED_API FontSubstitutionInfo(System::String originFontName, System::String substFontName);
    
private:

    System::String m_originalFontName;
    System::String m_substitutedFontName;
    
};

} // namespace Slides
} // namespace Aspose


