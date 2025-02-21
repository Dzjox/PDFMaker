#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
class Matrix;
class Point;
namespace Text
{
class MarkupSection;
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
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents a paragraph.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS MarkupParagraph final : public System::Object
{
    typedef MarkupParagraph ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Text::MarkupSection;
    friend class Aspose::Pdf::Text::PageMarkup;
    friend class Aspose::Pdf::Text::ParagraphAbsorber;
    
public:

    /// <summary>
    /// Points of polygon that describes paragraph.
    /// Starting point is lower left corner of the paragraph. And next points are in anti-clockwise sequence.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::ArrayPtr<System::SharedPtr<Point>> get_Points();
    /// <summary>
    /// Points of secondary polygon describes paragraph continuation. It will not be null if the paragraph is continued in the next column or page.
    /// Starting point is lower left corner of the paragraph. And next points are in anti-clockwise sequence.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::ArrayPtr<System::SharedPtr<Point>>>> get_SecondaryPoints() const;
    /// <summary>
    /// List of page numbers on which the paragraph is continued. It will match with page where the paragraph started if it is continuing in the next column on the same page.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<int32_t>> get_ContinuationPageNumbers() const;
    /// <summary>
    /// Collection of not empty <see cref="TextFragment"></see> objects of the paragraph.
    /// </summary>
    /// <remarks>
    /// The <see cref="TextFragment"></see> object provides access to the search occurrence text, text properties, and allows to edit text and change the text state (font, font size, color etc).
    /// </remarks>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> get_Fragments();
    /// <summary>
    /// Lines of paragraph. Each line represented by list of text fragments.
    /// </summary>
    /// <remarks>
    /// The <see cref="TextFragment"></see> object provides access to the search occurrence text, text properties, and allows to edit text and change the text state (font, font size, color etc).
    /// </remarks>
    ASPOSE_PDF_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>>>> get_Lines() const;
    /// <summary>
    /// Gets the paragraph text.
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_Text();
    /// <summary>
    /// Sets the paragraph text.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_Text(System::String value);
    
protected:

    /// <summary>
    /// Points of secondary polygon describes paragraph continuation. It will not be null if the paragraph is continued in the next column or page.
    /// Starting point is lower left corner of the paragraph. And next points are in anti-clockwise sequence.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_SecondaryPoints(System::SharedPtr<System::Collections::Generic::List<System::ArrayPtr<System::SharedPtr<Point>>>> value);
    /// <summary>
    /// List of page numbers on which the paragraph is continued. It will match with page where the paragraph started if it is continuing in the next column on the same page.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_ContinuationPageNumbers(System::SharedPtr<System::Collections::Generic::List<int32_t>> value);
    System::SharedPtr<Matrix> get_NormalizationMatrix() const;
    
    /// <summary>
    /// Creates a new instance of the <see cref="MarkupParagraph"></see> class with the specified parameters.
    /// </summary>
    /// <param name="textReplaceOptions">The text replace options.</param>
    MarkupParagraph(System::SharedPtr<TextReplaceOptions> textReplaceOptions);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MarkupParagraph, CODEPORTING_ARGS(System::SharedPtr<TextReplaceOptions> textReplaceOptions));
    
    /// <summary>
    /// Creates a new instance of the <see cref="MarkupParagraph"></see> class with the specified parameters.
    /// </summary>
    /// <param name="normalizationMatrix">The normalization matrix.</param>
    /// <param name="textReplaceOptions">The text replace options.</param>
    MarkupParagraph(System::SharedPtr<Matrix> normalizationMatrix, System::SharedPtr<TextReplaceOptions> textReplaceOptions);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(MarkupParagraph, CODEPORTING_ARGS(System::SharedPtr<Matrix> normalizationMatrix, System::SharedPtr<TextReplaceOptions> textReplaceOptions));
    /// <summary>
    /// Sets the paragraph text.
    /// </summary>
    /// <param name="value">The text value to be set.</param>
    void SetText(System::String value);
    void TransformPoints(System::SharedPtr<Matrix> matrix);
    void AddPoints(System::ArrayPtr<System::SharedPtr<Point>> points);
    void ConstructPolygon();
    
private:

    System::ArrayPtr<System::SharedPtr<Point>> _basePoints;
    System::SharedPtr<System::Collections::Generic::List<System::ArrayPtr<System::SharedPtr<Point>>>> _secondaryPoints;
    System::SharedPtr<System::Collections::Generic::List<int32_t>> _continuationPageNums;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>> _fragments;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<TextFragment>>>>> _lines;
    System::SharedPtr<Matrix> _normalizationMatrix;
    System::String _text;
    System::SharedPtr<TextReplaceOptions> _textReplaceOptions;
    
    System::String ConstructText();
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose


