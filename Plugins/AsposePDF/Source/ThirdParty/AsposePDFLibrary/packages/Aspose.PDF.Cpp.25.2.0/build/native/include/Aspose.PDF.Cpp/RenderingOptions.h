#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <drawing/font.h>
#include <cstdint>

#include "Caching/ConsolidatedCache.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Comparison
{
namespace GraphicalComparison
{
class GraphicalPdfComparer;
} // namespace GraphicalComparison
class GraphicalPdfComparer;
} // namespace Comparison
namespace Devices
{
class ImageGenerator;
class TiffDevice;
} // namespace Devices
namespace Engine
{
namespace CommonData
{
namespace PageContent
{
namespace Operators
{
namespace GraphicStateOperators
{
class SetLineWidth;
} // namespace GraphicStateOperators
} // namespace Operators
} // namespace PageContent
} // namespace CommonData
namespace IO
{
namespace ConvertStrategies
{
class TransparentContentRemoval;
} // namespace ConvertStrategies
} // namespace IO
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents rendering options.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS RenderingOptions final : public System::Object
{
    typedef RenderingOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::TransparentContentRemoval;
    friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::GraphicStateOperators::SetLineWidth;
    friend class Aspose::Pdf::Devices::ImageGenerator;
    friend class Aspose::Pdf::Devices::TiffDevice;
    friend class Aspose::Pdf::Comparison::GraphicalPdfComparer;
    friend class Aspose::Pdf::Comparison::GraphicalComparison::GraphicalPdfComparer;
    
public:

    /// <summary>
    /// Gets barcode optimization mode. 
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_BarcodeOptimization() const;
    /// <summary>
    /// Sets barcode optimization mode. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_BarcodeOptimization(bool value);
    /// <summary>
    /// Gets optimize dimensions mode. 
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_OptimizeDimensions() const;
    /// <summary>
    /// Sets optimize dimensions mode. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_OptimizeDimensions(bool value);
    /// <summary>
    /// Gets a mode where system fonts are rendered natively. 
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_SystemFontsNativeRendering() const;
    /// <summary>
    /// Sets a mode where system fonts are rendered natively. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SystemFontsNativeRendering(bool value);
    /// @deprecated UseNewImagingEngine is deprecated
    /// <summary>
    /// Gets a flag determines whether new imaging engine is used or not.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_UseNewImagingEngine() const;
    /// @deprecated UseNewImagingEngine is deprecated
    /// <summary>
    /// Sets a flag determines whether new imaging engine is used or not.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_UseNewImagingEngine(bool value);
    /// <summary>
    /// Gets a value used to increase or decrease the width of rectangle for AppendRectangle operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API float get_WidthExtraUnits() const;
    /// <summary>
    /// Sets a value used to increase or decrease the width of rectangle for AppendRectangle operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_WidthExtraUnits(float value);
    /// <summary>
    /// Gets a value used to increase or decrease the width of rectangle for AppendRectangle operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API float get_HeightExtraUnits() const;
    /// <summary>
    /// Sets a value used to increase or decrease the width of rectangle for AppendRectangle operator.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_HeightExtraUnits(float value);
    /// <summary>
    /// Indicates that all fonts will be converted to TTF unicode versions. That is useful for compatibility 
    /// reasons and to optimize font usage, cause every new TTF font will have not all the symbols 
    /// from source font, but only symbols which are used in text.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_ConvertFontsToUnicodeTTF() const;
    /// <summary>
    /// Indicates that all fonts will be converted to TTF unicode versions. That is useful for compatibility 
    /// reasons and to optimize font usage, cause every new TTF font will have not all the symbols 
    /// from source font, but only symbols which are used in text.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ConvertFontsToUnicodeTTF(bool value);
    /// <summary>
    /// Usage of this flag turn on font hinting mechanism. Font hinting is the use of mathematical instructions to adjust the display 
    /// of an outline font. In some cases turning this flag on may solve problems with text legibility. 
    /// At current moment usage of this flag could give effect only for TTF fonts, if these fonts are used in source document.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_UseFontHinting() const;
    /// <summary>
    /// Usage of this flag turn on font hinting mechanism. Font hinting is the use of mathematical instructions to adjust the display 
    /// of an outline font. In some cases turning this flag on may solve problems with text legibility. 
    /// At current moment usage of this flag could give effect only for TTF fonts, if these fonts are used in source document.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_UseFontHinting(bool value);
    /// @deprecated ScaleImagesToFitPageWidth is deprecated.
    /// <summary>
    /// Gets a values used to scale all images on the page to fit page's width. 
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_ScaleImagesToFitPageWidth() const;
    /// @deprecated ScaleImagesToFitPageWidth is deprecated.
    /// <summary>
    /// Sets a values used to scale all images on the page to fit page's width. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ScaleImagesToFitPageWidth(bool value);
    /// <summary>
    /// Gets hiqh quality mode for interpolation.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_InterpolationHighQuality() const;
    /// <summary>
    /// Sets hiqh quality mode for interpolation.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_InterpolationHighQuality(bool value);
    /// <summary>
    /// Maximum count of fonts in fonts cache. Default value is 10.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_MaxFontsCacheSize() const;
    /// <summary>
    /// Maximum count of fonts in fonts cache. Default value is 10.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_MaxFontsCacheSize(int32_t value);
    /// <summary>
    /// Maximum count of symbols in symbol cache. Default value is 100.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_MaxSymbolsCacheSize() const;
    /// <summary>
    /// Maximum count of symbols in symbol cache. Default value is 100.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_MaxSymbolsCacheSize(int32_t value);
    /// <summary>
    /// Gets/sets the default name of font used to substitute of missing fonts.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_DefaultFontName() const;
    /// <summary>
    /// Gets/sets the default name of font used to substitute of missing fonts.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DefaultFontName(System::String value);
    /// <summary>
    /// Gets indication that errors related to absence of font will be ignored.
    /// true - means that errors of absence of font will be ignored. Text segments that refer to incorrect resources will be skipped during processing.
    /// false by default
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IgnoreResourceFontErrors() const;
    /// <summary>
    /// Sets indication that errors related to absence of font will be ignored.
    /// true - means that errors of absence of font will be ignored. Text segments that refer to incorrect resources will be skipped during processing.
    /// false by default
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IgnoreResourceFontErrors(bool value);
    /// <summary>
    /// Replaces fonts as necessary to ensure all characters in the text can be displayed.
    /// The font substitution algorithm follows these steps:
    /// 1. If the user explicitly sets the DefaultFontName property, check if the specified font can display the desired characters.
    /// 2. If no user-defined font is set, search through fonts added via the <see cref="FontRepository::Sources"></see>.
    /// 3. Analyze the text to identify its alphabet or script and suggest font names accordingly.
    ///    Attempt to locate and use these fonts from the system.
    /// 4. As a fallback, search the system for any font capable of displaying the required characters.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_AnalyzeFonts() const;
    /// <summary>
    /// Replaces fonts as necessary to ensure all characters in the text can be displayed.
    /// The font substitution algorithm follows these steps:
    /// 1. If the user explicitly sets the DefaultFontName property, check if the specified font can display the desired characters.
    /// 2. If no user-defined font is set, search through fonts added via the <see cref="FontRepository::Sources"></see>.
    /// 3. Analyze the text to identify its alphabet or script and suggest font names accordingly.
    ///    Attempt to locate and use these fonts from the system.
    /// 4. As a fallback, search the system for any font capable of displaying the required characters.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AnalyzeFonts(bool value);
    
    /// <summary>
    /// Initializes new instance of the <see cref="RenderingOptions"></see> object.
    /// </summary>
    ASPOSE_PDF_SHARED_API RenderingOptions();
    
protected:

    /// <summary>
    /// Gets bitmap type, if it's false, 32bppArgb will be used. 
    /// </summary>
    bool get_Use24bppBitmap() const;
    /// <summary>
    /// Sets bitmap type, if it's false, 32bppArgb will be used. 
    /// </summary>
    void set_Use24bppBitmap(bool value);
    /// <summary>
    /// Get or sets an option to fix hairlines (lines with 0 width, that are supposed to represent the thinnest line possible to print or display
    /// on a device). If set to <see langword="true"></see>, zero width will be replaced with the smallest possible supported width (0.01).
    /// </summary>
    /// <remarks>
    /// A line width of 0 shall denote the thinnest line that can be rendered at device resolution: 1 device pixel wide.
    /// However, some devices cannot reproduce 1-pixel lines, and on high-resolution devices, they are nearly invisible.
    /// Since the results of rendering such zero-width lines are device-dependent, they should not be used. 
    /// </remarks>
    bool get_FixHairlines() const;
    /// <summary>
    /// Get or sets an option to fix hairlines (lines with 0 width, that are supposed to represent the thinnest line possible to print or display
    /// on a device). If set to <see langword="true"></see>, zero width will be replaced with the smallest possible supported width (0.01).
    /// </summary>
    /// <remarks>
    /// A line width of 0 shall denote the thinnest line that can be rendered at device resolution: 1 device pixel wide.
    /// However, some devices cannot reproduce 1-pixel lines, and on high-resolution devices, they are nearly invisible.
    /// Since the results of rendering such zero-width lines are device-dependent, they should not be used. 
    /// </remarks>
    void set_FixHairlines(bool value);
    /// <summary>
    /// Gets the replacement width for fixing hairlines in the rendering process.
    /// </summary>
    /// <remarks>
    /// This property is used when the FixHairlines option is enabled. If a line has zero width, 
    /// this ReplacementWidth is used instead to ensure the line is visible in the rendered output.
    /// </remarks>
    float get_ReplacementWidth() const;
    /// <summary>
    /// Sets the replacement width for fixing hairlines in the rendering process.
    /// </summary>
    /// <remarks>
    /// This property is used when the FixHairlines option is enabled. If a line has zero width, 
    /// this ReplacementWidth is used instead to ensure the line is visible in the rendered output.
    /// </remarks>
    void set_ReplacementWidth(float value);
    /// <summary>
    /// Gets the cache for system fonts used during rendering.
    /// </summary>
    /// <remarks>
    /// This property allows managing a cache of system fonts to optimize rendering performance.
    /// It can be used to store and retrieve font instances for reuse, reducing the overhead of repeatedly loading fonts.
    /// </remarks>
    const System::SharedPtr<Engine::Caching::ConsolidatedCache::Cache<System::String, System::SharedPtr<System::Drawing::Font>>>& get_SystemFontsCache() const;
    /// <summary>
    /// Sets the cache for system fonts used during rendering.
    /// </summary>
    /// <remarks>
    /// This property allows managing a cache of system fonts to optimize rendering performance.
    /// It can be used to store and retrieve font instances for reuse, reducing the overhead of repeatedly loading fonts.
    /// </remarks>
    void set_SystemFontsCache(System::SharedPtr<Engine::Caching::ConsolidatedCache::Cache<System::String, System::SharedPtr<System::Drawing::Font>>> value);
    
private:

    bool _barcodeOptimization;
    bool _systemFontsNativeRendering;
    bool _useNewImagingEngine;
    float _widthExtraUnits;
    bool _convertFontsToUnicodeTtf;
    bool _interpolationHighQuality;
    bool _optimizeDimensions;
    bool _ignoreResourceFontErrors;
    int32_t _maxFontsCacheSize;
    int32_t _maxSymbolsCacheSize;
    System::String _defaultFontName;
    bool _use24bppBitmap;
    float pr_HeightExtraUnits;
    bool pr_UseFontHinting;
    bool pr_ScaleImagesToFitPageWidth;
    bool pr_AnalyzeFonts;
    bool pr_FixHairlines;
    float pr_ReplacementWidth;
    System::SharedPtr<Engine::Caching::ConsolidatedCache::Cache<System::String, System::SharedPtr<System::Drawing::Font>>> pr_SystemFontsCache;
    
};

} // namespace Pdf
} // namespace Aspose


