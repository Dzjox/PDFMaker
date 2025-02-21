#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Facades
{
class PdfPageEditor;
} // namespace Facades
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class representing size of page in PDF document.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS PageSize final : public System::Object
{
    typedef PageSize ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Facades::PdfPageEditor;
    
public:

    /// <summary>
    /// Gets page width.
    /// </summary>
    ASPOSE_PDF_SHARED_API float get_Width();
    /// <summary>
    /// Sets page width.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Width(float value);
    /// <summary>
    /// Gets page height.
    /// </summary>
    ASPOSE_PDF_SHARED_API float get_Height();
    /// <summary>
    /// Sets page height.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Height(float value);
    /// <summary>
    /// Gets page orientation. Returns true of this is landscape orientation and false if this is portrait. 
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsLandscape() const;
    /// <summary>
    /// Gets page orientation. Returns true of this is landscape orientation and false if this is portrait. 
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsLandscape(bool value);
    /// <summary>
    /// A0 size (1189x840 mm).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PageSize> get_A0();
    /// <summary>
    /// A1 size (840x594 mm).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PageSize> get_A1();
    /// <summary>
    /// A2 size (594x420 mm).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PageSize> get_A2();
    /// <summary>
    /// A3 size (420x297 mm).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PageSize> get_A3();
    /// <summary>
    /// A4 size (297x210 mm).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PageSize> get_A4();
    /// <summary>
    /// A5 size (210x148 mm).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PageSize> get_A5();
    /// <summary>
    /// A6 size (148x105 mm).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PageSize> get_A6();
    /// <summary>
    /// B5 size (250x176 mm).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PageSize> get_B5();
    /// <summary>
    /// Letter size (279x216 mm).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PageSize> get_PageLetter();
    /// <summary>
    /// Legal size (356x216 mm).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PageSize> get_PageLegal();
    /// <summary>
    /// Ledger size (432x279 mm).
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PageSize> get_PageLedger();
    /// <summary>
    /// 11x17 inches format.
    /// </summary>
    static ASPOSE_PDF_SHARED_API System::SharedPtr<PageSize> get_P11x17();
    
    /// <summary>
    /// Constructor for PageSize.
    /// </summary>
    /// <param name="x">Width of the page.</param>
    /// <param name="y">Height of the page.</param>
    ASPOSE_PDF_SHARED_API PageSize(float x, float y);
    
protected:

    static const float LEAVE_INTACT;
    
private:

    float width;
    float height;
    static System::SharedPtr<PageSize> _A0;
    static System::SharedPtr<PageSize> _A1;
    static System::SharedPtr<PageSize> _A2;
    static System::SharedPtr<PageSize> _A3;
    static System::SharedPtr<PageSize> _A4;
    static System::SharedPtr<PageSize> _A5;
    static System::SharedPtr<PageSize> _A6;
    static System::SharedPtr<PageSize> _B5;
    static System::SharedPtr<PageSize> _PageLetter;
    static System::SharedPtr<PageSize> _PageLegal;
    static System::SharedPtr<PageSize> _PageLedger;
    static System::SharedPtr<PageSize> _P11x17;
    bool isLandscape;
    
};

} // namespace Pdf
} // namespace Aspose


