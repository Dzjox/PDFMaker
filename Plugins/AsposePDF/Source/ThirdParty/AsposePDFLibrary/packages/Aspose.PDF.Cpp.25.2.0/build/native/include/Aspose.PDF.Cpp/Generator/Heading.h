#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/Text/TextFragment.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Document;
class MarginInfo;
enum class NumberingStyle;
class Page;
class PageGenerator;
class Rectangle;
namespace Text
{
class TextFragment;
class TextParagraph;
class TextSegment;
class TextState;
} // namespace Text
class TocInfo;
} // namespace Pdf
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class List;
} // namespace Generic
} // namespace Collections
class String;
namespace Xml
{
class XmlReader;
class XmlTextWriter;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Pdf {

/// <summary>
/// Represents heading.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS Heading final : public Aspose::Pdf::Text::TextFragment
{
    typedef Heading ThisType;
    typedef Aspose::Pdf::Text::TextFragment BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::PageGenerator;
    friend class Aspose::Pdf::Document;
    
public:

    /// <summary>
    /// Gets the page that contains this heading.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Aspose::Pdf::Page>& get_TocPage() const;
    /// <summary>
    /// Gets the page that contains this heading.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_TocPage(System::SharedPtr<Aspose::Pdf::Page> value);
    /// <summary>
    /// Gets the top Y of this headings.
    /// </summary>
    ASPOSE_PDF_SHARED_API double get_Top() const;
    /// <summary>
    /// Gets the top Y of this headings.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Top(double value);
    /// <summary>
    /// Gets the heading start number.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_StartNumber() const;
    /// <summary>
    /// Gets the heading start number.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_StartNumber(int32_t value);
    /// <summary>
    /// Gets the heading should be numered automatically.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsAutoSequence() const;
    /// <summary>
    /// Gets the heading should be numered automatically.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsAutoSequence(bool value);
    /// <summary>
    /// Gets the heading should be in toc list.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_IsInList() const;
    /// <summary>
    /// Gets the heading should be in toc list.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_IsInList(bool value);
    /// <summary>
    /// Gets the destination page.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Aspose::Pdf::Page>& get_DestinationPage() const;
    /// <summary>
    /// Gets the destination page.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DestinationPage(System::SharedPtr<Aspose::Pdf::Page> value);
    /// <summary>
    /// Gets the level.
    /// </summary>
    ASPOSE_PDF_SHARED_API int32_t get_Level() const;
    /// <summary>
    /// Gets the level.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Level(int32_t value);
    /// <summary>
    /// Gets style.
    /// </summary>
    ASPOSE_PDF_SHARED_API NumberingStyle get_Style() const;
    /// <summary>
    /// Sets style.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Style(NumberingStyle value);
    /// <summary>
    /// Gets user label.
    /// </summary>
    ASPOSE_PDF_SHARED_API const System::SharedPtr<Text::TextSegment>& get_UserLabel() const;
    /// <summary>
    /// Sets user label.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_UserLabel(System::SharedPtr<Text::TextSegment> value);
    
    /// <summary>
    /// Initializes a new instance of the Cell class.
    /// </summary>
    /// <param name="level">The headings level.</param>
    ASPOSE_PDF_SHARED_API Heading(int32_t level);
    
    /// <summary>
    /// Clone the heading.
    /// </summary>
    /// <returns>The cloned object</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> Clone() override;
    /// <summary>
    /// Clone the heading with all segments.
    /// </summary>
    /// <returns>The cloned object</returns>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Object> CloneWithSegments() override;
    
protected:

    /// <summary>
    /// DefaultTocInfo.
    /// </summary>
    /// <value>The page.</value>
    static System::SharedPtr<TocInfo> get_DefaultTOC();
    /// <summary>
    /// Gets the left X of this headings(for internal use).
    /// </summary>
    double get_Left() const;
    /// <summary>
    /// Gets the left X of this headings(for internal use).
    /// </summary>
    void set_Left(double value);
    /// <summary>
    /// Gets the heading number.
    /// </summary>
    System::SharedPtr<Text::TextSegment> get_Number() const;
    
    Heading();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Heading, CODEPORTING_ARGS());
    System::String GetDashString();
    /// <summary>
    /// Process headings for table of contents.
    /// </summary>
    /// <value>The heading.</value>
    /// <value>The text builder.</value>
    System::SharedPtr<Text::TextParagraph> Process(double curX, double& curY, System::SharedPtr<Aspose::Pdf::Rectangle> rect, System::SharedPtr<MarginInfo> marginInfo, double width, double realWidth, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Heading>>> keptWithNextTocLinks, System::SharedPtr<Aspose::Pdf::Page> page);
    ASPOSE_PDF_SHARED_API void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer) override;
    ASPOSE_PDF_SHARED_API void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader) override;
    
    virtual ASPOSE_PDF_SHARED_API ~Heading();
    
private:

    static System::SharedPtr<TocInfo> defaultTOC;
    System::SharedPtr<Text::TextSegment> number;
    double tabstopDefaultInterval;
    int32_t indexForLastFragment;
    System::SharedPtr<Aspose::Pdf::Page> pr_TocPage;
    double pr_Left;
    double pr_Top;
    int32_t pr_StartNumber;
    bool pr_IsAutoSequence;
    bool pr_IsInList;
    System::SharedPtr<Aspose::Pdf::Page> pr_DestinationPage;
    int32_t pr_Level;
    NumberingStyle pr_Style;
    System::SharedPtr<Text::TextSegment> pr_UserLabel;
    
    bool IsFormatArrayCorrect(System::SharedPtr<TocInfo> tocInfo);
    void ProcessLink(System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<MarginInfo> marginInfo, double width, double height, double curX, double curY);
    void ProcessDots(System::SharedPtr<Text::TextParagraph>& paragraph, System::SharedPtr<Aspose::Pdf::Text::TextState> textState, double realWidth, System::SharedPtr<Aspose::Pdf::Page> page, float subsequentLinesIndent, System::SharedPtr<Aspose::Pdf::Rectangle> rect, int32_t& dotsCount);
    System::SharedPtr<Text::TextParagraph> ProcessHeading(double curX, double curY, System::SharedPtr<Aspose::Pdf::Page> page, System::SharedPtr<Aspose::Pdf::Rectangle> rect, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Heading>>> keptWithNextTocLinks);
    void TransferParagraph(System::SharedPtr<Text::TextParagraph>& paragraph, System::SharedPtr<Text::TextFragment> fragment, System::SharedPtr<Aspose::Pdf::Rectangle> rect, System::SharedPtr<Aspose::Pdf::Page> page);
    void ProcessTabs(System::SharedPtr<Aspose::Pdf::Text::TextState> textState);
    System::SharedPtr<Text::TextParagraph> ProcessHeadingToc(double curX, double curY, System::SharedPtr<Aspose::Pdf::Page> page, double realWidth, double width, System::SharedPtr<MarginInfo> marginInfo, System::SharedPtr<Aspose::Pdf::Rectangle> rect);
    
};

} // namespace Pdf
} // namespace Aspose


