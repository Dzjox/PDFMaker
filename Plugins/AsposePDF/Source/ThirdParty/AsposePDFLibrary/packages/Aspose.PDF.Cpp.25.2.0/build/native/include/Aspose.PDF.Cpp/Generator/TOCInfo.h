#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class ColumnInfo;
class Document;
class Heading;
class LevelFormat;
enum class NumberingStyle;
namespace Text
{
enum class TabLeaderType;
class TextFragment;
class TextSegment;
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

/// <summary>
/// Represents table of contents info.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS TocInfo final : public System::Object
{
    typedef TocInfo ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Heading;
    friend class Aspose::Pdf::Document;
    
public:

    /// <summary>
    /// Gets column info.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Aspose::Pdf::ColumnInfo>& get_ColumnInfo() const;
    /// <summary>
    /// Sets column info.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ColumnInfo(System::SharedPtr<Aspose::Pdf::ColumnInfo> value);
    /// <summary>
    /// Gets format array for table of contents.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::ArrayPtr<System::SharedPtr<LevelFormat>>& get_FormatArray() const;
    /// <summary>
    /// Sets format array for table of contents.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FormatArray(System::ArrayPtr<System::SharedPtr<LevelFormat>> value);
    /// <summary>
    /// Gets format array length
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_FormatArrayLength();
    /// <summary>
    /// Sets format array length
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_FormatArrayLength(int32_t value);
    /// <summary>
    /// Gets table of contents title.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Text::TextFragment>& get_Title() const;
    /// <summary>
    /// Sets table of contents title.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Title(System::SharedPtr<Text::TextFragment> value);
    /// <summary>
    /// Gets is count or passed toc pages.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsCountTocPages() const;
    /// <summary>
    /// Sets is count or passed toc pages.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsCountTocPages(bool value);
    /// <summary>
    /// Gets is prefix before page number.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_PageNumbersPrefix() const;
    /// <summary>
    /// Sets is prefix before page number.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_PageNumbersPrefix(System::String value);
    /// <summary>
    /// Gets is show page numbers at Toc.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsShowPageNumbers() const;
    /// <summary>
    /// Sets is show page numbers at Toc.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsShowPageNumbers(bool value);
    /// <summary>
    /// Gets TOC line dash.
    /// </summary>
    ASPOSE_PDF_SHARED_API Text::TabLeaderType get_LineDash() const;
    /// <summary>
    /// Sets TOC line dash.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_LineDash(Text::TabLeaderType value);
    /// <summary>
    /// Gets is TOC copied to outlines.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_CopyToOutlines() const;
    /// <summary>
    /// Sets is TOC copied to outlines.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_CopyToOutlines(bool value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="TocInfo"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API TocInfo();
    
protected:

    /// <summary>
    /// Gets headings numbers for auto numnering(internal).
    /// </summary>
    const System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>>& get_AutoNumbers() const;
    /// <summary>
    /// Gets TOC pages count(for internal use).
    /// </summary>
    int32_t get_PagesCount() const;
    /// <summary>
    /// Sets TOC pages count(for internal use).
    /// </summary>
    void set_PagesCount(int32_t value);
    /// <summary>
    /// Gets inserted toc number(for internal use).
    /// </summary>
    int32_t get_InsertedTocNumber() const;
    /// <summary>
    /// Sets inserted toc number(for internal use).
    /// </summary>
    void set_InsertedTocNumber(int32_t value);
    
    static System::String GetLabelNumber(int32_t number, NumberingStyle style);
    System::SharedPtr<Text::TextSegment> GetNumber(int32_t level, System::SharedPtr<Heading> heading);
    
private:

    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> pr_AutoNumbers;
    
    /// <summary>
    /// Gets headings numbers for auto numnering(internal).
    /// </summary>
    void set_AutoNumbers(System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> value);
    
    System::SharedPtr<Aspose::Pdf::ColumnInfo> pr_ColumnInfo;
    System::ArrayPtr<System::SharedPtr<LevelFormat>> pr_FormatArray;
    System::SharedPtr<Text::TextFragment> pr_Title;
    bool pr_IsCountTocPages;
    System::String pr_PageNumbersPrefix;
    bool pr_IsShowPageNumbers;
    Text::TabLeaderType pr_LineDash;
    bool pr_CopyToOutlines;
    int32_t pr_PagesCount;
    int32_t pr_InsertedTocNumber;
    static System::ArrayPtr<System::String> UpperRoman;
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
};

} // namespace Pdf
} // namespace Aspose


