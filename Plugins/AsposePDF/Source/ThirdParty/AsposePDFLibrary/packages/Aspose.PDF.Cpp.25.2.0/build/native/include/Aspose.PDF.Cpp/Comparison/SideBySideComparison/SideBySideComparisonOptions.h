#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>

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

namespace Comparison {

/// <summary>
/// The comparison mode enumeration.
/// </summary>
enum class ComparisonMode
{
    /// <summary>
    /// Normal mode.
    /// Only spaces within text fragments are taken into account (depending on the way the document is generated.)
    /// </summary>
    Normal,
    /// <summary>
    /// All spaces are ignored. Changes are sought only in words.
    /// </summary>
    IgnoreSpaces,
    /// <summary>
    /// The mode is similar to normal, but attempts to account for visual spacing between text fragments based on distance.
    /// Recognizing the number of spaces between fragments may not be accurate because this greatly depends on how the documents are generated.
    /// If documents are created by different generators, there may be inaccuracies in comparing spaces between text fragments.
    /// </summary>
    ParseSpaces
};

/// <summary>
/// Represents an options class for comparing documents with side-by-side output.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS SideBySideComparisonOptions : public System::Object
{
    typedef SideBySideComparisonOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets and sets a comparison mode.
    /// The default value is <see cref="SideBySideComparison::ComparisonMode::IgnoreSpaces"></see>.
    /// </summary>
    ASPOSE_PDF_SHARED_API Aspose::Pdf::Comparison::ComparisonMode get_ComparisonMode() const;
    /// <summary>
    /// Gets and sets a comparison mode.
    /// The default value is <see cref="SideBySideComparison::ComparisonMode::IgnoreSpaces"></see>.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ComparisonMode(Aspose::Pdf::Comparison::ComparisonMode value);
    /// <summary>
    /// Get and set the property that determines whether additional change markers are displayed.
    /// If set, displays change marks that are not on the current page but are present on another page.
    /// If the change lacates between words, the mark may not be positioned exactly relative to the whitespace character.
    /// The default value is <c>false</c>.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_AdditionalChangeMarks() const;
    /// <summary>
    /// Get and set the property that determines whether additional change markers are displayed.
    /// If set, displays change marks that are not on the current page but are present on another page.
    /// If the change lacates between words, the mark may not be positioned exactly relative to the whitespace character.
    /// The default value is <c>false</c>.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_AdditionalChangeMarks(bool value);
    /// <summary>
    /// Get and set the option that determines whether tables are excluded from comparison.
    /// This option cannot be set together with <see cref="ComparisonArea1"></see> and <see cref="ComparisonArea2"></see>.
    /// The default value is <c>false</c>.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_ExcludeTables() const;
    /// <summary>
    /// Get and set the option that determines whether tables are excluded from comparison.
    /// This option cannot be set together with <see cref="ComparisonArea1"></see> and <see cref="ComparisonArea2"></see>.
    /// The default value is <c>false</c>.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ExcludeTables(bool value);
    /// <summary>
    /// Get and set the comparison area. Used for the first page or document in the comparison method.
    /// This option can't be setted along with <see cref="ExcludeTables"></see>, <see cref="ExcludeAreas1"></see> and <see cref="ExcludeAreas2"></see> options.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Rectangle>& get_ComparisonArea1() const;
    /// <summary>
    /// Get and set the comparison area. Used for the first page or document in the comparison method.
    /// This option can't be setted along with <see cref="ExcludeTables"></see>, <see cref="ExcludeAreas1"></see> and <see cref="ExcludeAreas2"></see> options.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ComparisonArea1(System::SharedPtr<Rectangle> value);
    /// <summary>
    /// Get and set the comparison area. Used for the second page or document in the comparison method.
    /// This option can't be setted along with <see cref="ExcludeTables"></see>, <see cref="ExcludeAreas1"></see> and <see cref="ExcludeAreas2"></see> options.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Rectangle>& get_ComparisonArea2() const;
    /// <summary>
    /// Get and set the comparison area. Used for the second page or document in the comparison method.
    /// This option can't be setted along with <see cref="ExcludeTables"></see>, <see cref="ExcludeAreas1"></see> and <see cref="ExcludeAreas2"></see> options.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ComparisonArea2(System::SharedPtr<Rectangle> value);
    /// <summary>
    /// Get and set the exclude areas. Used for the first page or document in the comparison method.
    /// This option can be setted along with <see cref="ExcludeTables"></see>. This option can't be setted along with <see cref="ComparisonArea1"></see> option.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::ArrayPtr<System::SharedPtr<Rectangle>>& get_ExcludeAreas1() const;
    /// <summary>
    /// Get and set the exclude areas. Used for the first page or document in the comparison method.
    /// This option can be setted along with <see cref="ExcludeTables"></see>. This option can't be setted along with <see cref="ComparisonArea1"></see> option.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ExcludeAreas1(System::ArrayPtr<System::SharedPtr<Rectangle>> value);
    /// <summary>
    /// Get and set the exclude areas. Used for the second page or document in the comparison method.
    /// This option can be setted along with <see cref="ExcludeTables"></see>. This option can't be setted along with <see cref="ComparisonArea2"></see> option.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::ArrayPtr<System::SharedPtr<Rectangle>>& get_ExcludeAreas2() const;
    /// <summary>
    /// Get and set the exclude areas. Used for the second page or document in the comparison method.
    /// This option can be setted along with <see cref="ExcludeTables"></see>. This option can't be setted along with <see cref="ComparisonArea2"></see> option.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ExcludeAreas2(System::ArrayPtr<System::SharedPtr<Rectangle>> value);
    
    /// <summary>
    /// Creates an instance of <see cref="SideBySideComparisonOptions"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API SideBySideComparisonOptions();
    
private:

    Aspose::Pdf::Comparison::ComparisonMode pr_ComparisonMode;
    bool pr_AdditionalChangeMarks;
    bool pr_ExcludeTables;
    System::SharedPtr<Rectangle> pr_ComparisonArea1;
    System::SharedPtr<Rectangle> pr_ComparisonArea2;
    System::ArrayPtr<System::SharedPtr<Rectangle>> pr_ExcludeAreas1;
    System::ArrayPtr<System::SharedPtr<Rectangle>> pr_ExcludeAreas2;
    
};

} // namespace Comparison
} // namespace Pdf
} // namespace Aspose


