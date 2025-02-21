#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

#include "Aspose.PDF.Cpp/CommonData/Text/Fonts/FontSubstitutions/FontSubstitution.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Engine
{
namespace CommonData
{
namespace PageContent
{
namespace Operators
{
class OperationContext;
} // namespace Operators
} // namespace PageContent
namespace Text
{
namespace Fonts
{
namespace Substitution
{
class FontSubstitutor;
} // namespace Substitution
} // namespace Fonts
} // namespace Text
} // namespace CommonData
} // namespace Engine
namespace Text
{
class UnicodeSubstitution;
} // namespace Text
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents a class for simple font substitution strategy.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SimpleFontSubstitution final : public Aspose::Pdf::Text::FontSubstitution
{
    typedef SimpleFontSubstitution ThisType;
    typedef Aspose::Pdf::Text::FontSubstitution BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::OperationContext;
    friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Substitution::FontSubstitutor;
    
public:

    /// <summary>
    /// Gets original font name that should be substituted with <see cref="SubstitutionFontName"></see>
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_OriginalFontName() const;
    /// <summary>
    /// Gets font name that should substitute the <see cref="OriginalFontName"></see>
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_SubstitutionFontName() const;
    
    /// <summary> 
    /// Initializes a new instance of <see cref="SimpleFontSubstitution"></see> class.
    /// </summary>
    /// <param name="originalFontName">Original font name.</param>
    /// <param name="substitutionFontName">Substitution font name.</param>
    /// <param name="isForcedBySaveOption">Substitution forced by DefaultFontName save option.</param>
    ASPOSE_PDF_SHARED_API SimpleFontSubstitution(System::String originalFontName, System::String substitutionFontName, bool isForcedBySaveOption = false);
    
protected:

    /// <summary>
    /// Gets unicode substitution objects that define characted code substitutions
    /// </summary>
    System::ArrayPtr<UnicodeSubstitution> get_UnicodeSubstitutions() const;
    /// <summary>
    /// Gets the flag denoting whether substitution is forced by DefaultFontName save option
    /// </summary>
    bool get_IsForcedBySaveOption() const;
    
    /// <summary>
    /// Initializes a new instance of <see cref="SimpleFontSubstitution"></see> class.
    /// </summary>
    /// <param name="originalFontName">Original font name.</param>
    /// <param name="substitutionFontName">Substitution font name.</param>
    /// <param name="unicodeSubstitutions">Unicode substitution object list.</param>
    SimpleFontSubstitution(System::String originalFontName, System::String substitutionFontName, System::ArrayPtr<UnicodeSubstitution> unicodeSubstitutions);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(SimpleFontSubstitution, CODEPORTING_ARGS(System::String originalFontName, System::String substitutionFontName, System::ArrayPtr<UnicodeSubstitution> unicodeSubstitutions));
    ASPOSE_PDF_SHARED_API char16_t GetSubstitutedUnicode(char16_t unicode) override;
    
private:

    System::String originalFontName;
    System::String substitutionFontName;
    bool isForcedBySaveOption;
    System::ArrayPtr<UnicodeSubstitution> unicodeSubstitutions;
    
};

/// <summary>
/// Represents character code substitution.
/// </summary>
/// <remarks>
/// In some cases substituting font may not contain original unicode character.
/// For those cases characted substitution may be set explicitly with <see cref="UnicodeSubstitution"></see> structs.
/// </remarks>
class UnicodeSubstitution : public System::Object, public System::Details::BoxableObjectBase
{
    typedef UnicodeSubstitution ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Represents original character unicode
    /// </summary>
    char16_t OriginalCode;
    /// <summary>
    /// Represents character unicode that substitutes original unicode 
    /// </summary>
    char16_t SubstitutionCode;
    
    /// <summary>
    /// Creates character code substitution struct.
    /// </summary>
    /// <param name="originalCode">Original unicode value.</param>
    /// <param name="substitutionCode">Substitution unicode value.</param>
    UnicodeSubstitution(char16_t originalCode, char16_t substitutionCode);
    UnicodeSubstitution();
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


