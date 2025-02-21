#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Matrix;
class Rectangle;
namespace Text
{
class MarkupParagraph;
class PageMarkup;
class ParagraphAbsorber;
class TextFragment;
class TextReplaceOptions;
} // namespace Text
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
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents a markup section - the rectangular region of a page that contains text and can be visually divided from another text blocks.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS MarkupSection final : public System::Object
{
    typedef MarkupSection ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Text::PageMarkup;
    friend class Aspose::Pdf::Text::ParagraphAbsorber;
    
public:

    /// <summary>
    /// Section rectangle
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle() const;
    /// <summary>
    /// Collection of not empty <see cref="TextFragment"></see> objects that are inside the section.
    /// </summary>
    /// <remarks>
    /// The <see cref="TextFragment"></see> object provides access to the search occurrence text, text properties, and allows to edit text and change the text state (font, font size, color etc).
    /// </remarks>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> get_Fragments() const;
    /// <summary>
    /// Collection of <see cref="MarkupParagraph"></see> objects that are inside the section.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<MarkupParagraph>>> get_Paragraphs() const;
    
protected:

    /// <summary>
    /// Lines of section. Each line represented by list of text fragments.
    /// </summary>
    /// <remarks>
    /// The <see cref="TextFragment"></see> object provides access to the search occurrence text, text properties, and allows to edit text and change the text state (font, font size, color etc).
    /// </remarks>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>>>> get_Lines() const;
    int32_t get_ScaleFactor() const;
    System::SharedPtr<Matrix> get_TransformationMatrix() const;
    
    /// <summary>
    /// Creates a new instance of the <see cref="MarkupSection"></see> class with the specified parameters.
    /// </summary>
    /// <param name="rect">The markup section rectangle.</param>
    /// <param name="matrix">The normalization matrix.</param>
    /// <param name="textReplaceOptions">The text replace options.</param>
    MarkupSection(System::SharedPtr<Aspose::Pdf::Rectangle> rect, System::SharedPtr<Matrix> matrix, System::SharedPtr<TextReplaceOptions> textReplaceOptions);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MarkupSection, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Rectangle> rect, System::SharedPtr<Matrix> matrix, System::SharedPtr<TextReplaceOptions> textReplaceOptions));
    
    /// <summary>
    /// Creates a new instance of the <see cref="MarkupSection"></see> class with the specified parameters.
    /// </summary>
    /// <param name="rect">The markup section rectangle.</param>
    /// <param name="matrix">The normalization matrix.</param>
    /// <param name="textReplaceOptions">The text replace options.</param>
    /// <param name="scaleFactor">The scale factor.</param>
    MarkupSection(System::SharedPtr<Aspose::Pdf::Rectangle> rect, System::SharedPtr<Matrix> matrix, System::SharedPtr<TextReplaceOptions> textReplaceOptions, int32_t scaleFactor);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MarkupSection, CODEPORTING_ARGS(System::SharedPtr<Aspose::Pdf::Rectangle> rect, System::SharedPtr<Matrix> matrix, System::SharedPtr<TextReplaceOptions> textReplaceOptions, int32_t scaleFactor));
    /// <summary>
    /// Picks text fragments associated with the section from input list. Returns list of remaining fragments.
    /// </summary>
    /// <param name="inList">List of input text fragments.</param>
    /// <returns>List of remaining text fragments.</returns>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> PickFragments(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> inList);
    /// <summary>
    /// Distribute text of section for paragraphs.
    /// </summary>
    void ProcessParagraphs();
    /// <summary>
    /// Determine whether section text looks aligned to left
    /// </summary>
    /// <returns>True if section text looks aligned to left. Otherwise - false.</returns>
    bool IsSectionLinesAlignedToLeft();
    /// <summary>
    /// Determine whether section text looks aligned to right
    /// </summary>
    /// <returns>True if section text looks aligned to right. Otherwise - false.</returns>
    bool IsSectionLinesAlignedToRight();
    /// <summary>
    /// Distribute left aligned text of section for paragraphs.
    /// </summary>
    void ProcessParagraphsAlignedLeft();
    /// <summary>
    /// Distribute right aligned text of section for paragraphs.
    /// </summary>
    void ProcessParagraphsAlignedRight();
    void TransformPoints(System::SharedPtr<Matrix> matrix);
    static bool IsSentenceEnding(char16_t c);
    static char16_t GetFirstNotSpace(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> line, bool fromEnd);
    
private:

    System::SharedPtr<Aspose::Pdf::Rectangle> _rect;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> _fragments;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<MarkupParagraph>>> _paragraphs;
    int32_t _scaleFactor;
    System::SharedPtr<Matrix> _transformationMatrix;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>>>> _lines;
    System::SharedPtr<Matrix> _normalizationMatrix;
    System::SharedPtr<TextReplaceOptions> _textReplaceOptions;
    
    bool FirstLineRule(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> line, System::SharedPtr<MarkupParagraph>& paragraph);
    bool LovercaseLineStartRule(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> line, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> prevLine, System::SharedPtr<MarkupParagraph>& paragraph);
    bool LineFillingRule(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> line, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> prevLine, System::SharedPtr<MarkupParagraph>& paragraph, double& prevLinesMaxLength);
    bool FontSizeRule(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> line, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> prevLine, System::SharedPtr<MarkupParagraph>& paragraph);
    bool LineWithIndentRule(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> line, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> prevLine, System::SharedPtr<MarkupParagraph>& paragraph);
    bool DefaultRule(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> line, System::SharedPtr<MarkupParagraph>& paragraph);
    static System::SharedPtr<Matrix> GetNormalizationMatrix(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> fragments);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>>>> DistributeFragmentsForLines(System::SharedPtr<Matrix> normalizationMatrix);
    bool IsTextLineStartedFromCapitalLetter(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> line);
    bool IsPreviousLineFull(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> line, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> prevLine, double maxRight);
    static bool LinesIdentical(System::SharedPtr<TextFragment> line, System::SharedPtr<TextFragment> prevLine);
    static bool CharsAreSimilar(char16_t c1, char16_t c2);
    bool IsLineEndsWithHyphen(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> line);
    bool IsHyphen(char16_t c);
    bool IsSuspiciousStarting(char16_t c);
    bool IsName(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> line, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> prevLine);
    bool IsPosition(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> line, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> prevLine);
    System::String GetLineTextSimplified(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> line);
    bool IsLineWithIndent(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> line, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> prevLine, bool isFirstLine);
    bool IsFakeIndent(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> line, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> prevLine);
    double GetTextStart(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> line);
    static int32_t GetIndexOfFirstLetter(System::SharedPtr<TextFragment> textFragment);
    static bool IsValidLineStartSymbol(char16_t c);
    int32_t GetIndexOfYearNumber(System::SharedPtr<TextFragment> textFragment);
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


