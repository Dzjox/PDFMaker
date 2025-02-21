#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

#include "Aspose.PDF.Cpp/CommonData/Text/Fonts/FontSubstitutions/FontSubstitution.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Text
{
class Font;
} // namespace Text
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents font categories that can be substituted.
/// </summary>
enum class SubstitutionFontCategories
{
    /// <summary>
    /// The fonts that are named the same as system fonts.
    /// Those fonts are mostly safe to be substituted with the same named system fonts.
    /// </summary>
    TheSameNamedEmbeddedFonts,
    /// <summary>
    /// All embedded fonts are substituted.
    /// </summary>
    AllEmbeddedFonts
};

/// <summary>
/// Represents a class for font substitution strategy that substitutes fonts with system fonts.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SystemFontsSubstitution final : public Aspose::Pdf::Text::FontSubstitution
{
    typedef SystemFontsSubstitution ThisType;
    typedef Aspose::Pdf::Text::FontSubstitution BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets substitution font categories that should be substituted with system fonts.
    /// </summary>
    ASPOSE_PDF_SHARED_API SubstitutionFontCategories get_FontCategories() const;
    /// <summary>
    /// Sets substitution font categories that should be substituted with system fonts.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FontCategories(SubstitutionFontCategories value);
    /// <summary>
    /// Gets default substitution font.
    /// The font is used when no other valid substitution were found but initial font belongs to target substitution category (<see cref="FontCategories"></see>).
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Font> get_DefaultFont();
    /// <summary>
    /// Sets default substitution font.
    /// The font is used when no other valid substitution were found but initial font belongs to target substitution category (<see cref="FontCategories"></see>).
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DefaultFont(System::SharedPtr<Font> value);
    
    /// <summary> 
    /// Initializes a new instance of <see cref="SystemFontsSubstitution"></see> class.
    /// </summary>
    /// <param name="fontCategories">Target font categories to substitute with system fonts</param>
    ASPOSE_PDF_SHARED_API SystemFontsSubstitution(SubstitutionFontCategories fontCategories);
    
private:

    SubstitutionFontCategories fontCategories;
    System::SharedPtr<Font> defaultFont;
    System::SharedPtr<System::Object> sync;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


