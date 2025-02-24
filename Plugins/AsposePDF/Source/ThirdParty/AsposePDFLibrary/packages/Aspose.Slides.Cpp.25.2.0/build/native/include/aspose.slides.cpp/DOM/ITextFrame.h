#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "DOM/ISlideComponent.h"
#include "aspose_slides_api_api_defs.h"

/// @cond
namespace Aspose
{
namespace Slides
{
class ICell;
class IFindResultCallback;
class IHyperlinkQueries;
class IParagraph;
class IParagraphCollection;
class IShape;
class ITextFrameFormat;
class ITextHighlightingOptions;
class ITextSearchOptions;
} // namespace Slides
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Color;
} // namespace Drawing
class String;
namespace Text
{
namespace RegularExpressions
{
class Regex;
} // namespace RegularExpressions
} // namespace Text
} // namespace System
/// @endcond

namespace Aspose {

namespace Slides {

/// <summary>
/// Represents a TextFrame.
/// </summary>
class ASPOSE_SLIDES_API_SHARED_CLASS ITextFrame : public Aspose::Slides::ISlideComponent
{
    typedef ITextFrame ThisType;
    typedef Aspose::Slides::ISlideComponent BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_SLIDES_API_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the list of all paragraphs in a frame.
    /// Read-only <see cref="Aspose::Slides::IParagraphCollection">IParagraphCollection</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IParagraphCollection> get_Paragraphs() = 0;
    /// <summary>
    /// Gets the plain text for a TextFrame.
    /// Read <see cref="System::String"></see>.
    /// </summary>
    /// <value>
    /// The text.
    /// </value>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::String get_Text() = 0;
    /// <summary>
    /// Sets the plain text for a TextFrame.
    /// Write <see cref="System::String"></see>.
    /// </summary>
    /// <value>
    /// The text.
    /// </value>
    virtual ASPOSE_SLIDES_API_LOCAL_API void set_Text(System::String value) = 0;
    /// <summary>
    /// Returns the formatting object for this TextFrame object.
    /// Read-only <see cref="Aspose::Slides::ITextFrameFormat">ITextFrameFormat</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ITextFrameFormat> get_TextFrameFormat() = 0;
    /// <summary>
    /// Provides easy access to contained hyperlinks.
    /// Read-only <see cref="Aspose::Slides::IHyperlinkQueries">IHyperlinkQueries</see>.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IHyperlinkQueries> get_HyperlinkQueries() = 0;
    /// <summary>
    /// Returns the parent shape or null if the parent object does not implement the IShape interface
    /// Read-only <see cref="Aspose::Slides::IShape">IShape</see>.
    /// </summary>
    /// <example>
    /// The following code sample shows 
    /// <code>
    /// System::SharedPtr<Presentation> presentation = System::MakeObject<Presentation>(u"SomePresentation.pptx");
    /// System::SharedPtr<AutoShape> autoShape = System::ExplicitCast<AutoShape>(presentation->get_Slide(0)->get_Shape(0));
    /// 
    /// ASSERT_TRUE(autoShape->get_TextFrame()->get_ParentShape() == autoShape);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IShape> get_ParentShape() = 0;
    /// <summary>
    /// Returns the parent cell or null if the parent object does not implement the ICell interface.
    /// Read-only <see cref="Aspose::Slides::ICell">ICell</see>.
    /// </summary>
    /// <example>
    /// The following code sample shows 
    /// <code>
    /// System::SharedPtr<Presentation> presentation = System::MakeObject<Presentation>(u"SomePresentation.pptx");
    /// System::SharedPtr<Table> table = System::ExplicitCast<Table>(presentation->get_Slide(0)->get_Shape(0));
    /// 
    /// ASSERT_TRUE(table->idx_get(0, 0)->get_TextFrame()->get_ParentCell() == table->idx_get(0, 0));
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<ICell> get_ParentCell() = 0;
    
    /// <summary>
    /// Joins runs with same formatting in all paragraphs.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API void JoinPortionsWithSameFormatting() = 0;
    /// <summary>
    /// Highlights all matches of the sample text with the specified color.
    /// </summary>
    /// <param name="text">The text to highlight.</param>
    /// <param name="highlightColor">The color to highlight the text.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void HighlightText(System::String text, System::Drawing::Color highlightColor) = 0;
    /// @deprecated Use HighlightText(string text, Color highlightColor, ITextSearchOptions options, IFindResultCallback callback) method instead. The method will be removed after release of version 24.10.
    /// <summary>
    /// Highlights all matches of the sample text with the specified color.
    /// </summary>
    /// <param name="text">The text to highlight.</param>
    /// <param name="highlightColor">The color to highlight the text.</param>
    /// <param name="options">Highlighting options.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void HighlightText(System::String text, System::Drawing::Color highlightColor, System::SharedPtr<ITextHighlightingOptions> options) = 0;
    /// <summary>
    /// Highlights all matches of the sample text with the specified color.
    /// </summary>
    /// <param name="text">The text to highlight.</param>
    /// <param name="highlightColor">The color to highlight the text.</param>
    /// <param name="options">Text search options <see cref="Aspose::Slides::ITextSearchOptions">ITextSearchOptions</see>.</param>
    /// <param name="callback">The callback object for receiving search results <see cref="Aspose::Slides::IFindResultCallback">IFindResultCallback</see>.</param>
    /// <example>
    /// The following code sample shows how to highlight text in a TextFrame.
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"SomePresentation.pptx");
    /// auto shape = System::ExplicitCast<AutoShape>(presentation->get_Slide(0)->get_Shape(0));
    /// 
    /// // highlighting all words 'important'
    /// shape->get_TextFrame()->HighlightText(u"important", System::Drawing::Color::get_LightBlue());
    /// 
    /// auto textSearchOptions = System::MakeObject<TextSearchOptions>();
    /// textSearchOptions->set_WholeWordsOnly(true);
    /// 
    /// // highlighting all separate 'the' occurrences
    /// shape->get_TextFrame()->HighlightText(u"the", System::Drawing::Color::get_Violet(), textSearchOptions, nullptr);
    /// presentation->Save(u"SomePresentation-out2.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void HighlightText(System::String text, System::Drawing::Color highlightColor, System::SharedPtr<ITextSearchOptions> options, System::SharedPtr<IFindResultCallback> callback) = 0;
    /// <summary>
    /// Highlights all matches of the regular expression with the specified color.
    /// </summary>
    /// <param name="regex">The regular expression <see cref="System::Text::RegularExpressions::Regex"></see> to get strings to highlight.</param>
    /// <param name="highlightColor">The color to highlight the text.</param>
    /// <param name="callback">The callback object for receiving search results <see cref="Aspose::Slides::IFindResultCallback">IFindResultCallback</see>.</param>
    /// <example>
    /// The following code sample shows how to highlight text in a TextFrame using a regular expression.
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"SomePresentation.pptx");
    /// auto shape = System::ExplicitCast<AutoShape>(presentation->get_Slide(0)->get_Shape(0));
    /// 
    /// auto regex = System::MakeObject<System::Text::RegularExpressions::Regex>(u"\\b[^\\s]{10,}\\b");
    /// 
    /// // highlighting all words with 10 or more characters
    /// shape->get_TextFrame()->HighlightRegex(regex, System::Drawing::Color::get_Blue(), nullptr);
    /// presentation->Save(u"SomePresentation-out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void HighlightRegex(System::SharedPtr<System::Text::RegularExpressions::Regex> regex, System::Drawing::Color highlightColor, System::SharedPtr<IFindResultCallback> callback) = 0;
    /// @deprecated Use HighlightRegex(Regex regex, Color highlightColor, IFindResultCallback callback) method instead. The method will be removed after release of version 24.10.
    /// <summary>
    /// Highlights all matches of the regular expression with the specified color.
    /// </summary>
    /// <param name="regex">Text of regular expression to get text to highlight.</param>
    /// <param name="highlightColor">The color to highlight the text.</param>
    /// <param name="options">Highlighting options.</param>
    virtual ASPOSE_SLIDES_API_LOCAL_API void HighlightRegex(System::String regex, System::Drawing::Color highlightColor, System::SharedPtr<ITextHighlightingOptions> options) = 0;
    /// <summary>
    /// Replaces all occurrences of the specified text with another specified text.
    /// </summary>
    /// <param name="oldText">The string to be replaced.</param>
    /// <param name="newText">The string to replace all occurrences of oldText.</param>
    /// <param name="options">Text search options <see cref="Aspose::Slides::ITextSearchOptions">ITextSearchOptions</see>.</param>
    /// <param name="callback">The callback object for receiving search results <see cref="Aspose::Slides::IFindResultCallback">IFindResultCallback</see>.</param>
    /// <example>
    /// The following sample code shows how to replace one specified string with another specified string.
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"SomePresentation.pptx");
    /// auto shape = System::ExplicitCast<AutoShape>(presentation->get_Slide(0)->get_Shape(0));
    /// 
    /// auto textSearchOptions = System::MakeObject<TextSearchOptions>();
    /// textSearchOptions->set_WholeWordsOnly(true);
    /// 
    /// // Replace all separate 'the' occurrences with '***'
    /// shape->get_TextFrame()->ReplaceText(u"the", u"***", textSearchOptions, nullptr);
    /// presentation->Save(u"SomePresentation-out2.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void ReplaceText(System::String oldText, System::String newText, System::SharedPtr<ITextSearchOptions> options, System::SharedPtr<IFindResultCallback> callback) = 0;
    /// <summary>
    /// Replaces all matches of the regular expression with the specified string.
    /// </summary>
    /// <param name="regex">The regular expression <see cref="System::Text::RegularExpressions::Regex"></see> to get strings to replace.</param>
    /// <param name="newText">The string to replace all occurrences of the strings to be replaced.</param>
    /// <param name="callback">The callback object for receiving search results <see cref="Aspose::Slides::IFindResultCallback">IFindResultCallback</see>.</param>
    /// <example>
    /// The following code sample shows how to replace text using regular expression with the specified string.
    /// <code>
    /// auto presentation = System::MakeObject<Presentation>(u"SomePresentation.pptx");
    /// auto shape = System::ExplicitCast<AutoShape>(presentation->get_Slide(0)->get_Shape(0));
    /// 
    /// auto regex = System::MakeObject<System::Text::RegularExpressions::Regex>(u"\\b[^\\s]{10,}\\b");
    /// 
    /// // Replace all words with 10 or more characters with '***'
    /// shape->get_TextFrame()->ReplaceRegex(regex, u"***", nullptr);
    /// presentation->Save(u"SomePresentation-out.pptx", SaveFormat::Pptx);
    /// </code>
    /// </example>
    virtual ASPOSE_SLIDES_API_LOCAL_API void ReplaceRegex(System::SharedPtr<System::Text::RegularExpressions::Regex> regex, System::String newText, System::SharedPtr<IFindResultCallback> callback) = 0;
    /// <summary>
    /// Returns a paragraph in a frame at the specified index.
    /// </summary>
    virtual ASPOSE_SLIDES_API_LOCAL_API System::SharedPtr<IParagraph> get_Paragraph(int32_t index) = 0;
    
};

} // namespace Slides
} // namespace Aspose


