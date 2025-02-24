#pragma once
// Copyright (c) 2001-2020 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum_helpers.h>
#include <system/array.h>
#include <DOM/IFontsLoader.h>
#include <cstdint>

#include "aspose_slides_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
namespace DOM
{
namespace Util
{
class FontWrapperCreator;
} // namespace Util
} // namespace DOM
namespace Drawing
{
class SVGCanvas;
class SvgResources;
} // namespace Drawing
class Presentation;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
class FontFamily;
enum class FontStyle;
} // namespace Drawing
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

// todo (victorkrp): this class should be implemented with Singleton pattern and with IDisposable interface.
// todo (yknigin): consider implementing fonts loading only as memory fonts both for exactly passed as binary data and passed as directories to search and load. It may makes this class simplier.
/// <summary>
/// Class for loading custom fonts defined by user.
/// Should be used before creating any presentation objects.
/// </summary>
class ASPOSE_SLIDES_SHARED_CLASS FontsLoader final : public Aspose::Slides::IFontsLoader
{
    typedef FontsLoader ThisType;
    typedef Aspose::Slides::IFontsLoader BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_SHARED_RTTI_INFO_DECL();
    ASPOSE_FAST_RTTI_DECL(ASPOSE_SLIDES_SHARED_API);
    
    /// @cond
    friend class Aspose::Slides::Drawing::SVGCanvas;
    friend class Aspose::Slides::Drawing::SvgResources;
    friend class Aspose::Slides::DOM::Util::FontWrapperCreator;
    friend class Aspose::Slides::Presentation;
    /// @endcond
    
public:

    /// <summary>
    /// Adds additional folders to seek fonts.
    /// </summary>
    /// <param name="directories">Directories to read additional fonts.</param>
    /// <example>
    /// The follow examples shows how to load custom fonts from .TTF
    /// <code>
    /// // The path to the documents directory.
    /// System::String dataDir = u"C:\\";
    /// 
    /// // folders to seek fonts
    /// System::ArrayPtr<System::String> folders = System::MakeArray<System::String>({dataDir});
    /// 
    /// // Load the custom font directory fonts
    /// FontsLoader::LoadExternalFonts(folders);
    /// 
    /// // Do some work and perform presentation/slides rendering
    /// auto presentation = System::MakeObject<Presentation>(dataDir + u"DefaultFonts.pptx");
    /// presentation->Save(dataDir + u"NewFonts_out.pptx", SaveFormat::Pptx);
    /// 
    /// // Clear Font Cache
    /// FontsLoader::ClearCache();
    /// </code>
    /// </example>
    static ASPOSE_SLIDES_SHARED_API void LoadExternalFonts(System::ArrayPtr<System::String> directories);
    /// <summary>
    /// Adds font from the binary data
    /// </summary>
    /// <param name="data">Font's data</param>
    static ASPOSE_SLIDES_SHARED_API void LoadExternalFont(System::ArrayPtr<uint8_t> data);
    /// <summary>
    /// Gets font folders. Returns folders that have been added with LoadExternalFonts method as well as system font folders
    /// </summary>
    /// <returns>array containing folder names</returns>
    static ASPOSE_SLIDES_SHARED_API System::ArrayPtr<System::String> GetFontFolders();
    /// <summary>
    /// Releases all custom fonts defined by user
    /// </summary>
    /// <remarks>This method needs to clear cache with custom fonts defined by user.</remarks>
    static ASPOSE_SLIDES_SHARED_API void ClearCache();
    
protected:

    /// @cond
    static ASPOSE_SLIDES_LOCAL_API bool WasExternalFontLoaded(System::String fontName);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::List<System::ArrayPtr<uint8_t>>> GetMemoryFonts();
    static ASPOSE_SLIDES_LOCAL_API bool WasExternalFontLoaded(System::String fontName, System::String& filePath, System::ArrayPtr<uint8_t>& fontBytes);
    static ASPOSE_SLIDES_LOCAL_API bool WasExternalFontLoaded(System::String fontName, System::ArrayPtr<uint8_t>& fontBytes);
    static ASPOSE_SLIDES_LOCAL_API bool HasFilePath(System::String fontName, System::String& filePath);
    static ASPOSE_SLIDES_LOCAL_API bool HasMemoryFontData(System::String fontName, System::ArrayPtr<uint8_t>& fontData);
    /// @endcond
    
private:

    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Object> s_lock;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Drawing::FontFamily>>>>> s_fileFamiliesPaths;
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Collections::Generic::Dictionary<System::ArrayPtr<uint8_t>, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Drawing::FontFamily>>>>> s_memoryFonts;
    
    ASPOSE_SLIDES_LOCAL_API FontsLoader();
    
    ASPOSE_SLIDES_LOCAL_API MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FontsLoader, CODEPORTING_ARGS());
    static ASPOSE_SLIDES_LOCAL_API void Load(System::ArrayPtr<System::String> paths);
    static ASPOSE_SLIDES_LOCAL_API void Load(System::ArrayPtr<uint8_t> data);
    static ASPOSE_SLIDES_LOCAL_API System::SharedPtr<System::Drawing::FontFamily> GetFromCache(System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<System::Drawing::FontFamily>>> cache, System::String familyName, System::Drawing::FontStyle style);
    
};

} // namespace Slides
} // namespace Aspose


