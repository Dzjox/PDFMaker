#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

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
class Font;
} // namespace Text
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents a base class for custom font substitution strategy.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS CustomFontSubstitutionBase : public Aspose::Pdf::Text::FontSubstitution
{
    typedef CustomFontSubstitutionBase ThisType;
    typedef Aspose::Pdf::Text::FontSubstitution BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Represents original font specification. 
    /// </summary>
    /// <remarks>
    /// Provides info related to original font such as <seealso cref="OriginalFontName"></seealso>, <seealso cref="IsEmbedded"></seealso> flag.
    /// Also provides <seealso cref="IsSubstitutionUnavoidable"></seealso> flag that helps to check is the substitution will anyway happen with the font 
    /// and the user may override the default substitution logic.
    /// </remarks>
    class ASPOSE_PDF_SHARED_CLASS OriginalFontSpecification final : public System::Object
    {
        typedef OriginalFontSpecification ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
        
        friend class Aspose::Pdf::Engine::CommonData::Text::Fonts::Substitution::FontSubstitutor;
        
    public:
    
        /// <summary>
        /// Gets original font name.
        /// </summary>
        ASPOSE_PDF_SHARED_API System::String get_OriginalFontName() const;
        /// <summary>
        /// Gets a value that indicates whether the font is embedded.
        /// </summary>
        ASPOSE_PDF_SHARED_API bool get_IsEmbedded() const;
        /// <summary>
        /// Gets a value that indicates that the substitution is unavoidable. 
        /// </summary>
        /// <remarks>
        /// Returns true in case substitution was requested because of absence of the original font or in case original font cannot be used in context of some task.
        /// In case user ignores the flag and doesn't substitute the font - default font substitution procedure is performed.
        /// But it provides opportunity for the user to alternate standard font substitution procedure and set better font to the system.
        /// 
        /// Returns false in case original font is present, valid, but it is allowed for the user to substitute it.  
        /// </remarks>
        ASPOSE_PDF_SHARED_API bool get_IsSubstitutionUnavoidable() const;
        
    protected:
    
        /// <summary>
        /// Initializes new OriginalFontSpecification object.
        /// </summary>
        OriginalFontSpecification(System::String originalFontName, bool isEmbedded, bool isUnavoidable);
        
        MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(OriginalFontSpecification, CODEPORTING_ARGS(System::String originalFontName, bool isEmbedded, bool isUnavoidable));
        
    private:
    
        System::String originalFontName;
        bool isEmbedded;
        bool isUnavoidable;
        
    };
    
    
public:

    /// <summary>
    /// Substitutes original font with another font.
    /// </summary>
    /// <remarks>
    /// The class CustomFontSubstitutionBase should be inherited to implement custom font substitution logic.
    /// TrySubstitute method should be overridden properly:
    /// 
    /// Must return true in case substitution is required. substitutionFont must be set to valid Font object.
    /// Must return false in case no substitution is required. substitutionFont may be set to null. 
    /// </remarks>
    /// <param name="originalFontSpecification">Original font specification.</param>
    /// <param name="substitutionFont">Substitution font.</param>
    /// <returns>True in case substitution was successfull.</returns>
    virtual ASPOSE_PDF_SHARED_API bool TrySubstitute(System::SharedPtr<CustomFontSubstitutionBase::OriginalFontSpecification> originalFontSpecification, System::SharedPtr<Font>& substitutionFont);
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


