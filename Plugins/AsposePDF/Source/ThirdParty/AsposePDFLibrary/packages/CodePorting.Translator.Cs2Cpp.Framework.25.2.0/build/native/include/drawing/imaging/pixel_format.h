/// @file drawing/imaging/pixel_format.h
#ifndef _pixel_format_h_
#define _pixel_format_h_
#include "system/enum.h"
#include "system/enum_helpers.h"

namespace System {  namespace Drawing { namespace Imaging {

    /*
    * In-memory pixel data formats:
    *  bits 0-7 = format index
    *  bits 8-15 = pixel size (in bits)
    *  bits 16-23 = flags
    *  bits 24-31 = reserved
    */
    /// Specifies the color data format of a pixel.
    enum class PixelFormat {
        /// Specifies that the pixel data contains color indexed values which means they are an index to colors in the system color
        /// table.
        Indexed = 0x00010000,
        /// Specifies that the pixel data contains GDI colors.
        Gdi = 0x00020000,
        /// Specifies that the pixel data contains alpha values which are not pre-multiplied.
        Alpha = 0x00040000,
        /// Specifies that the pixel data contains pre-multipled alpha values.
        PAlpha = 0x00080000,
        /// Reserved.
        Extended = 0x00100000,
        /// Specifies the pixel format of 32 bits per pixel with 24-bit color depth and an 8-bit alpha channel.
        Canonical = 0x00200000,
        /// Specifies that the pixel format is undefined.
        Undefined = 0,
        /// The pixel format is not specified.
        DontCare = 0,
        /// Specifies that pixel format is 1 bit per pixel indexed color.
        Format1bppIndexed = 1 | (1 << 8) | (int)Indexed | (int)Gdi,
        /// Specifies that pixel format is 4 bits per pixel indexed color.
        Format4bppIndexed = 2 | (4 << 8) | (int)Indexed | (int)Gdi,
        /// Specifies that pixel format is 8 bits per pixel indexed color.
        Format8bppIndexed = 3 | (8 << 8) | (int)Indexed | (int)Gdi,
        /// Specifies that the pixel format is 16 bits per pixel. The color information specifies 65536 shades of gray.
        Format16bppGrayScale = 4 | (16 << 8) | (int)Extended,
        /// Specifies that the pixel format is 16 bits per pixel with 5 bits for each of red, green, and blue components and remaining bit not used.
        Format16bppRgb555 = 5 | (16 << 8) | (int)Gdi,
        /// Specifies that the pixel format is 16 bits per pixel with 5 bits for red, 6 bits for green and 5 bits for blue components.
        Format16bppRgb565 = 6 | (16 << 8) | (int)Gdi,
        /// Specifies that the pixel format is 16 bits per pixel with 5 bits for each of red, green, and blue components and 1 bit for alpha.
        Format16bppArgb1555 = 7 | (16 << 8) | (int)Alpha | (int)Gdi,
        /// Specifies that the pixel format is 24 bits per pixel with 8 bits for each of red, green, and blue components.
        Format24bppRgb = 8 | (24 << 8) | (int)Gdi,
        /// Specifies that the pixel format is 32 bits per pixel with 8 bits for each of red, green, and blue components and remaining 8 bits not used.
        Format32bppRgb = 9 | (32 << 8) | (int)Gdi,
        /// Specifies that the pixel format is 32 bits per pixel with 8 bits for each of red, green, and blue components and 8 bits for alpha.
        Format32bppArgb = 10 | (32 << 8) | (int)Alpha | (int)Gdi | (int)Canonical,
        /// Specifies that the pixel format is 32 bits per pixel with 8 bits for each of red, green, and blue components and 8 bits for alpha. The red, green and blue
        /// components are pre-multiplied according to the value of alpha component.
        Format32bppPArgb = 11 | (32 << 8) | (int)Alpha | (int)PAlpha | (int)Gdi,
        /// Specifies that the pixel format is 48 bits per pixel with 16 bits for each of red, green, and blue components.
        Format48bppRgb = 12 | (48 << 8) | (int)Extended,
        /// Specifies that the pixel format is 64 bits per pixel with 16 bits for each of red, green, and blue components and 16 bits for alpha.
        Format64bppArgb = 13 | (64 << 8) | (int)Alpha | (int)Canonical | (int)Extended,
        /// Specifies that the pixel format is 64 bits per pixel with 16 bits for each of red, green, and blue components and 16 bits for alpha. The red, green and blue
        /// components are pre-multiplied according to the value of alpha component.
        Format64bppPArgb = 14 | (64 << 8) | (int)Alpha | (int)PAlpha | (int)Extended,
        /// Specifies that the pixel format is 32 bits per pixel with 8 bits for each of the cyan, magenta, yellow and key components.
        Format32bppCMYK = (15 | (32 << 8)),
        /// The max value of this enum.
        Max = 16,
    };

    /// @cond
    /// Declaration of template arithmetic operators for values of the PixelFormat enum type.
    DECLARE_ENUM_OPERATORS(PixelFormat);

    /// Import of global operators into current namespace.
    DECLARE_USING_GLOBAL_OPERATORS
    /// @endcond
}}}

/// Inserts using declaratios for arithmetic operators declared in namespace System::Drawing::Imaging.
DECLARE_USING_ENUM_OPERATORS(System::Drawing::Imaging);  

/// Specialization for System::Drawing::Imaging::PixelFormat; contains mapping of enum constants
/// to their string representations.
template<>
struct EnumMetaInfo<System::Drawing::Imaging::PixelFormat>
{
	/// Returns a array of pairs that associate System::Drawing::Imaging::PixelFormat enum's constants with their
    /// string representations.
    static ASPOSECPP_SHARED_API const std::array<std::pair<System::Drawing::Imaging::PixelFormat, const char_t*>, 24>& values()
    {
        static std::array<std::pair<System::Drawing::Imaging::PixelFormat, const char_t*>, 24> enum_values = {{
            {System::Drawing::Imaging::PixelFormat::Indexed, u"Indexed"},
            {System::Drawing::Imaging::PixelFormat::Gdi, u"Gdi"},
            {System::Drawing::Imaging::PixelFormat::Alpha, u"Alpha"},
            {System::Drawing::Imaging::PixelFormat::PAlpha, u"PAlpha"},
            {System::Drawing::Imaging::PixelFormat::Extended, u"Extended"},
            {System::Drawing::Imaging::PixelFormat::Canonical, u"Canonical"},
            {System::Drawing::Imaging::PixelFormat::Undefined, u"Undefined"},
            {System::Drawing::Imaging::PixelFormat::DontCare, u"DontCare"},
            {System::Drawing::Imaging::PixelFormat::Format1bppIndexed, u"Format1bppIndexed"},
            {System::Drawing::Imaging::PixelFormat::Format4bppIndexed, u"Format4bppIndexed"},
            {System::Drawing::Imaging::PixelFormat::Format8bppIndexed, u"Format8bppIndexed"},
            {System::Drawing::Imaging::PixelFormat::Format16bppGrayScale, u"Format16bppGrayScale"},
            {System::Drawing::Imaging::PixelFormat::Format16bppRgb555, u"Format16bppRgb555"},
            {System::Drawing::Imaging::PixelFormat::Format16bppRgb565, u"Format16bppRgb565"},
            {System::Drawing::Imaging::PixelFormat::Format16bppArgb1555, u"Format16bppArgb1555"},
            {System::Drawing::Imaging::PixelFormat::Format24bppRgb, u"Format24bppRgb"},
            {System::Drawing::Imaging::PixelFormat::Format32bppRgb, u"Format32bppRgb"},
            {System::Drawing::Imaging::PixelFormat::Format32bppArgb, u"Format32bppArgb"},
            {System::Drawing::Imaging::PixelFormat::Format32bppPArgb, u"Format32bppPArgb"},
            {System::Drawing::Imaging::PixelFormat::Format48bppRgb, u"Format48bppRgb"},
            {System::Drawing::Imaging::PixelFormat::Format64bppArgb, u"Format64bppArgb"},
            {System::Drawing::Imaging::PixelFormat::Format64bppPArgb, u"Format64bppPArgb"},
            {System::Drawing::Imaging::PixelFormat::Format32bppCMYK, u"Format32bppCMYK"},
            {System::Drawing::Imaging::PixelFormat::Max, u"Max"},
        }};
        return enum_values;
    }
};

#endif
