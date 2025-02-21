#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Describes viewer prefereces (page mode, non full screen page mode, page layout).
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ViewerPreference final : public System::Object
{
    typedef ViewerPreference ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Optional content group panel visible.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t PageModeUseOC = 1048576;
    /// <summary>
    /// A flag specifying whether the window's title bar should display the document title
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t DisplayDocTitle = 262144;
    /// <summary>
    /// Optional content group panel visible.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t NonFullScreenPageModeUseOC = 524288;
    /// <summary>
    /// Display one page at a time.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t PageLayoutSinglePage = 1;
    /// <summary>
    /// Display the pages in one column.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t PageLayoutOneColumn = 2;
    /// <summary>
    /// Display the pages in two columns, with odd-numbered pages on the right
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t PageLayoutTwoColumnLeft = 4;
    /// <summary>
    /// Display the pages in two columns, with odd-numbered pages on the right.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t PageLayoutTwoColumnRight = 8;
    /// <summary>
    /// Neither document outline nor thumbnail images visible
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t PageModeUseNone = 16;
    /// <summary>
    /// Document outline visible.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t PageModeUseOutlines = 32;
    /// <summary>
    /// Thumbnail images visible.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t PageModeUseThumbs = 64;
    /// <summary>
    /// Full-screen mode, with no menu bar, window controls, or any other window visible.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t PageModeFullScreen = 128;
    /// <summary>
    /// Page mode with attacments.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t PageModeUseAttachment = 2097152;
    /// <summary>
    /// A flag specifying whether to hide the conforming reader's tool bars when the document is active.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t HideToolbar = 256;
    /// <summary>
    /// A flag specifying whether to hide the conforming reader's menu bar when the document is active.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t HideMenubar = 512;
    /// <summary>
    /// A flag specifying whether to hide user interface elements in the document's window (such as scroll bars and navigation controls), leaving only the document's contents displayed.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t HideWindowUI = 1024;
    /// <summary>
    /// A flag specifying whether to resize the document's window to fit the size of the first displayed page.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t FitWindow = 2048;
    /// <summary>
    /// A flag specifying whether to position the document's window in the center of the screen.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t CenterWindow = 4096;
    /// <summary>
    /// Neither document outline nor thumbnail images visible.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t NonFullScreenPageModeUseNone = 8192;
    /// <summary>
    /// Document outline visible.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t NonFullScreenPageModeUseOutlines = 16384;
    /// <summary>
    /// Thumbnail images visible
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t NonFullScreenPageModeUseThumbs = 32768;
    /// <summary>
    /// Text reading order left to right.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t DirectionL2R = 65536;
    /// <summary>
    /// Text reading order right to left.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t DirectionR2L = 131072;
    /// <summary>
    /// Print single-sided.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t Simplex = 4194304;
    /// <summary>
    /// Duplex and flip on the short edge of the sheet.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t DuplexFlipShortEdge = 8388608;
    /// <summary>
    /// Duplex and flip on the short edge of the sheet.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t DuplexFlipLongEdge = 16777216;
    /// <summary>
    /// The conforming reader's default print scaling.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t PrintScalingAppDefault = static_cast<int32_t>(1 << 25);
    /// <summary>
    /// No page scaling.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t PrintScalingNone = static_cast<int32_t>(1 << 26);
    /// <summary>
    /// Use the PDF page size to select the input paper tray.
    /// </summary>
    static constexpr ASPOSE_PDF_SHARED_API int32_t PickTrayByPDFSize = static_cast<int32_t>(1 << 27);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


