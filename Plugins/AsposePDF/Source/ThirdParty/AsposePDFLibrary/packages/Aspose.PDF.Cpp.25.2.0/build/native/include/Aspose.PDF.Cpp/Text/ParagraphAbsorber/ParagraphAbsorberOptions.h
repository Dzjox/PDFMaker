#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Rectangle;
} // namespace Pdf
} // namespace Aspose

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents options for the <see cref="ParagraphAbsorber"></see>.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS ParagraphAbsorberOptions final : public System::Object
{
    typedef ParagraphAbsorberOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets the maximum length of zone with 'zero filling level' that will not be treated
    /// as actual horizontal section break (as a fraction of the width / height of a page).
    /// The default value is 0.005.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_SectionUnbreakingHorizontalOverride() const;
    /// <summary>
    /// Sets the maximum length of zone with 'zero filling level' that will not be treated
    /// as actual horizontal section break (as a fraction of the width / height of a page).
    /// The default value is 0.005.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SectionUnbreakingHorizontalOverride(double value);
    /// <summary>
    /// Gets the maximum length of zone with 'zero filling level' that will not be treated
    /// as actual vertical section break (as a fraction of the width / height of a page).
    /// The default value is 0.005.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_SectionUnbreakingVerticalOverride() const;
    /// <summary>
    /// Sets the maximum length of zone with 'zero filling level' that will not be treated
    /// as actual vertical section break (as a fraction of the width / height of a page).
    /// The default value is 0.005.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SectionUnbreakingVerticalOverride(double value);
    /// <summary>
    /// Gets paragraph search rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Rectangle> get_SearchRectangle() const;
    /// <summary>
    /// Sets paragraph search rectangle.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SearchRectangle(System::SharedPtr<Rectangle> value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="ParagraphAbsorberOptions"></see> object.
    /// </summary>
    ASPOSE_PDF_SHARED_API ParagraphAbsorberOptions();
    
private:

    double _sectionUnbreakingVerticalOverride;
    double _sectionUnbreakingHorizontalOverride;
    System::SharedPtr<Rectangle> _searchRectangle;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


