#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

namespace Aspose
{
namespace Font
{
namespace Sources
{
class FontDefinition;
} // namespace Sources
} // namespace Font
namespace Pdf
{
namespace Engine
{
namespace Addressing
{
class IRegistrar;
} // namespace Addressing
namespace CommonData
{
namespace Text
{
namespace Fonts
{
class IPdfFont;
} // namespace Fonts
} // namespace Text
} // namespace CommonData
namespace Data
{
class ITrailerable;
} // namespace Data
} // namespace Engine
namespace Text
{
class Font;
} // namespace Text
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
} // namespace Generic
} // namespace Collections
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// This interface declares necessary functionality for register font substitutions
/// </summary>
class IFontSubstitutionRegistrator : public System::Object
{
    typedef IFontSubstitutionRegistrator ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Register substitution for passed fonts. Fonts passed as IPdfFont objects in this method.
    /// </summary>
    /// <param name="oldFont">original font</param>
    /// <param name="newFont">new font which replaces an original font</param>
    /// <param name="trailerable">trailerable</param>
    virtual void RegistrySubstitution(System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> oldFont, System::SharedPtr<Aspose::Pdf::Engine::CommonData::Text::Fonts::IPdfFont> newFont, System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> trailerable) = 0;
    /// <summary>
    /// Register substitution for fonts which are represented via FontDefinition objects.
    /// This method was added due to necessity to register "implicit" substitutions which have place
    /// in PdfFont object.
    /// </summary>
    /// <param name="oldFontDef">Font definition for original font</param>
    /// <param name="newFontDef">Font definition for new font</param>
    virtual void RegistrySubstitution(System::SharedPtr<Aspose::Font::Sources::FontDefinition> oldFontDef, System::SharedPtr<Aspose::Font::Sources::FontDefinition> newFontDef) = 0;
    /// <summary>
    /// This method must return all the substitutions registered for current document. 
    /// Added for trace objectives.
    /// </summary>
    /// <returns>all the substitution pairs</returns>
    virtual System::SharedPtr<System::Collections::Generic::Dictionary<System::SharedPtr<Aspose::Pdf::Text::Font>, System::SharedPtr<Aspose::Pdf::Text::Font>>> GetAllSubstitutions() = 0;
    
};

/// <summary>
/// This interface declares a callback mechanism to send notifications
/// </summary>
class IFontSubstitutionCallback : public System::Object
{
    typedef IFontSubstitutionCallback ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns true if font substitutions are enabled
    /// </summary>
    virtual bool get_NotifyAboutFontSubstitutions() = 0;
    /// <summary>
    /// IRegistrar for current document
    /// </summary>
    virtual System::SharedPtr<Aspose::Pdf::Engine::Addressing::IRegistrar> get_Registrar() = 0;
    
    /// <summary>
    /// Sends notification about font substitution via event mechanism
    /// </summary>
    /// <param name="oldFont">original font</param>
    /// <param name="newFont">new font</param>
    virtual void NotifyAboutSubstitution(System::SharedPtr<Aspose::Pdf::Text::Font> oldFont, System::SharedPtr<Aspose::Pdf::Text::Font> newFont) = 0;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


