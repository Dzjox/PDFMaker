#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.
//using Aspose.Pdf.Exceptions;

#include <system/object.h>
#include <system/enum_helpers.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

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
namespace Text
{
class Font;
class FontSourceCollection;
enum class FontStyles;
class FontSubstitutionCollection;
enum class FontTypes;
} // namespace Text
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class ICollection;
} // namespace Generic
} // namespace Collections
namespace IO
{
class Stream;
} // namespace IO
class String;
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Performs font search. Searches in system installed fonts and standard Pdf fonts.
/// Also provides functionality to open custom fonts.
/// </summary>
/// <example>
/// </example>
/// <seealso cref="TextFragmentAbsorber"></seealso>
/// <seealso cref="Document"></seealso>
class ASPOSE_PDF_SHARED_CLASS FontRepository final : public System::Object
{
    typedef FontRepository ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets font substitution strategies collection.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<FontSubstitutionCollection> get_Substitutions();
    /// <summary>
    /// Gets font sources collection.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<FontSourceCollection> get_Sources();
    
    /// <summary>
    /// Searches and returns font with specified font name.
    /// </summary>
    /// <example>
    /// </example>
    /// <param name="fontName">Font name.</param>
    /// <returns>Font object.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Font> FindFont(System::String fontName);
    /// <summary>
    /// Searches and returns font with specified font name ignoring or honoring case sensitivity.
    /// </summary>
    /// <example>
    /// </example>
    /// <param name="fontName">Font name.</param>
    /// <param name="ignoreCase">case sensitivity</param>
    /// <returns>Font object.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Font> FindFont(System::String fontName, bool ignoreCase);
    /// <summary>
    /// Searches and returns font with specified font name and font style.
    /// </summary>
    /// <example>
    /// </example>
    /// <param name="fontFamilyName">Font family name.</param>
    /// <param name="stl">Font style value.</param>
    /// <returns>Font object corresponding to search request parameters.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Font> FindFont(System::String fontFamilyName, FontStyles stl);
    /// <summary>
    /// Searches and returns font with specified font name and font style 
    /// ignoring or honoring case sensitivity.
    /// </summary>
    /// <example>
    /// </example>
    /// <param name="fontFamilyName">Font family name.</param>
    /// <param name="stl">Font style value.</param>
    /// <param name="ignoreCase">case sensitivity</param>
    /// <returns>Font object corresponding to search request parameters.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Font> FindFont(System::String fontFamilyName, FontStyles stl, bool ignoreCase);
    /// <summary>
    /// Opens font with specified font stream.
    /// </summary>
    /// <example>
    /// </example>
    /// <param name="fontStream">Font stream.</param>
    /// <param name="fontType">Font type value.</param>
    /// <returns>Font object.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Font> OpenFont(System::SharedPtr<System::IO::Stream> fontStream, FontTypes fontType);
    /// <summary>
    /// Opens font with specified font file path.
    /// </summary>
    /// <example>
    /// </example>
    /// <param name="fontFilePath">Font file path.</param>
    /// <returns>Font object.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Font> OpenFont(System::String fontFilePath);
    /// <summary>
    /// Opens font with specified font file path and metrics file path.
    /// </summary>
    /// <example>
    /// </example>
    /// <param name="fontFilePath">Font file path.</param>
    /// <param name="metricsFilePath">Font metrics file patrh.</param>
    /// <returns>Font object.</returns>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<Font> OpenFont(System::String fontFilePath, System::String metricsFilePath);
    /// <summary>
    /// Loads system installed fonts and standard Pdf fonts. This method was designed to speed up font loading process.
    /// By default fonts are loaded on first request for any font. Use of this method loads system and standard Pdf fonts
    /// immediately before any Pdf document was open.
    /// </summary>
    static ASPOSE_PDF_SHARED_API void LoadFonts();
    /// <summary>
    /// Reloads all fonts specified by property <see cref="Sources"></see>
    /// </summary>
    static ASPOSE_PDF_SHARED_API void ReloadFonts();
    
private:

    static System::SharedPtr<Aspose::Font::Sources::FontDefinition> GetFontDefinition(System::SharedPtr<System::Collections::Generic::ICollection<System::String>> realFontNames, bool IgnoreCase);
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


