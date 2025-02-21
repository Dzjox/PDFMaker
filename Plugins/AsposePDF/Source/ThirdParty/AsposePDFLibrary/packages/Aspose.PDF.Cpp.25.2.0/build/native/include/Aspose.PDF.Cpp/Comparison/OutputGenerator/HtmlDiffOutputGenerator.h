#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.PDF.Cpp/Comparison/OutputGenerator/IStringOutputGenerator.h"
#include "Aspose.PDF.Cpp/Comparison/OutputGenerator/IFileOutputGenerator.h"
#include "Aspose.PDF.Cpp/aspose_pdf_api_defs.h"

namespace Aspose
{
namespace Pdf
{
namespace Comparison
{
class DiffOperation;
class OutputTextStyle;
} // namespace Comparison
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
namespace Text
{
namespace RegularExpressions
{
class Match;
class Regex;
} // namespace RegularExpressions
class StringBuilder;
} // namespace Text
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Comparison {

/// <summary>
/// Represents a class for generating html representation of texts differences.
/// Deleted line breaks are indicated by paragraph mark.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS HtmlDiffOutputGenerator : public Aspose::Pdf::Comparison::IStringOutputGenerator, public Aspose::Pdf::Comparison::IFileOutputGenerator
{
    typedef HtmlDiffOutputGenerator ThisType;
    typedef Aspose::Pdf::Comparison::IStringOutputGenerator BaseType;
    typedef Aspose::Pdf::Comparison::IFileOutputGenerator BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets and sets the CSS-style string for Equal operation.
    /// Example: <code>color: &#35;003300; background-color: &#35;ccff66;</code>
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_EqualStyle() const;
    /// <summary>
    /// Gets and sets the CSS-style string for Equal operation.
    /// Example: <code>color: &#35;003300; background-color: &#35;ccff66;</code>
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_EqualStyle(System::String value);
    /// <summary>
    /// Gets and sets the CSS-style string for Insert operation.
    /// Example: <code>color: &#35;003300; background-color: &#35;ccff66;</code>
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_InsertStyle() const;
    /// <summary>
    /// Gets and sets the CSS-style string for Insert operation.
    /// Example: <code>color: &#35;003300; background-color: &#35;ccff66;</code>
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_InsertStyle(System::String value);
    /// <summary>
    /// Gets and sets the CSS-style string for Delete operation.
    /// Example: <code>color: &#35;003300; background-color: &#35;ccff66;</code>
    /// </summary>
    ASPOSE_PDF_SHARED_API System::String get_DeleteStyle() const;
    /// <summary>
    /// Gets and sets the CSS-style string for Delete operation.
    /// Example: <code>color: &#35;003300; background-color: &#35;ccff66;</code>
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_DeleteStyle(System::String value);
    /// <summary>
    /// Get or set text-decoration: line-through style for the delete operation.
    /// Default value is <c>False</c>.
    /// </summary>
    ASPOSE_PDF_SHARED_API bool get_StrikethroughDeleted() const;
    /// <summary>
    /// Get or set text-decoration: line-through style for the delete operation.
    /// Default value is <c>False</c>.
    /// </summary>
    ASPOSE_PDF_SHARED_API void set_StrikethroughDeleted(bool value);
    
    /// <summary>
    /// Creates an instance of <see cref="HtmlDiffOutputGenerator"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API HtmlDiffOutputGenerator();
    /// <summary>
    /// Creates an instance of <see cref="HtmlDiffOutputGenerator"></see> class.
    /// </summary>
    /// <param name="textStyle">The styles for the changed text.</param>
    ASPOSE_PDF_SHARED_API HtmlDiffOutputGenerator(System::SharedPtr<OutputTextStyle> textStyle);
    
    /// <summary>
    /// Generates the output based on the differences between texts and saves it to a file.
    /// </summary>
    /// <param name="diffrences">The list of differences between texts.</param>
    ASPOSE_PDF_SHARED_API System::String GenerateOutput(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<DiffOperation>>> diffrences) override;
    /// <summary>
    /// Generates the output based on the differences between texts and saves it to a file.
    /// </summary>
    /// <param name="diffrences">The list of differences between texts.</param>
    /// <param name="targetFilePath">The path of the target file to save the output.</param>
    ASPOSE_PDF_SHARED_API void GenerateOutput(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<DiffOperation>>> diffrences, System::String targetFilePath) override;
    /// <summary>
    /// Generates the output based on the differences between texts and saves it to a file.
    /// </summary>
    /// <param name="diffrences">The list of differences between texts.</param>
    ASPOSE_PDF_SHARED_API System::String GenerateOutput(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<DiffOperation>>>>> diffrences) override;
    /// <summary>
    /// Generates the output based on the differences between texts and saves it to a file.
    /// </summary>
    /// <param name="diffrences">The list of differences between texts.</param>
    /// <param name="targetFilePath">The path of the target file to save the output.</param>
    ASPOSE_PDF_SHARED_API void GenerateOutput(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<DiffOperation>>>>> diffrences, System::String targetFilePath) override;
    
private:

    System::String pr_EqualStyle;
    System::String pr_InsertStyle;
    System::String pr_DeleteStyle;
    bool pr_StrikethroughDeleted;
    System::String _newLineBr;
    System::SharedPtr<System::Text::RegularExpressions::Regex> _onlyCrLf;
    System::SharedPtr<System::Text::RegularExpressions::Regex> _edgeSpaces;
    static const System::String DeleteClassName;
    static const System::String InsertClassName;
    static const System::String EqualClassName;
    static const System::String StrikethroughClassName;
    static const System::String StrikethroughStyle;
    
    void InitDefaultStyles();
    System::String GetCssClass(System::SharedPtr<DiffOperation> diff);
    System::String GenerateHtml(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<DiffOperation>>> diffrences);
    System::String SpaceReplacerMatchEvaluator(System::SharedPtr<System::Text::RegularExpressions::Match> match);
    System::String GetHtmlHead();
    System::String GetHtmlClosingEnd();
    System::String PrepareStyles();
    void AddStyle(System::SharedPtr<System::Text::StringBuilder> strb, System::String styleName, System::String styleText);
    
};

} // namespace Comparison
} // namespace Pdf
} // namespace Aspose


