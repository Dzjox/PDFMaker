#pragma once
// Copyright (c) 2001-2025 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <cstdint>

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
class Regex;
} // namespace RegularExpressions
} // namespace Text
} // namespace System

namespace Aspose {

namespace Pdf {

namespace Comparison {

/// <summary>
/// Represents a class for generating markdown representation of texts differences.
/// Because of the markdown syntax, it is not possible to show changes to whitespace characters.
/// Selection of changes makes adding whitespace characters around formatting,
/// otherwise markdown viewer will not correctly display the text.
/// Deleted line breaks are indicated by - paragraph mark.
/// </summary>
class ASPOSE_PDF_SHARED_CLASS MarkdownDiffOutputGenerator : public Aspose::Pdf::Comparison::IStringOutputGenerator, public Aspose::Pdf::Comparison::IFileOutputGenerator
{
    typedef MarkdownDiffOutputGenerator ThisType;
    typedef Aspose::Pdf::Comparison::IStringOutputGenerator BaseType;
    typedef Aspose::Pdf::Comparison::IFileOutputGenerator BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PDF_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates an instance of <see cref="MarkdownDiffOutputGenerator"></see> class.
    /// </summary>
    ASPOSE_PDF_SHARED_API MarkdownDiffOutputGenerator();
    
    /// <summary>
    /// Generates the output based on the differences between texts and saves it to a file.
    /// </summary>
    /// <param name="diffrences">The list of differences between texts.</param>
    /// <returns>Markown text.</returns>
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
    /// <returns>Markown text.</returns>
    ASPOSE_PDF_SHARED_API System::String GenerateOutput(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<DiffOperation>>>>> diffrences) override;
    /// <summary>
    /// Generates the output based on the differences between texts and saves it to a file.
    /// </summary>
    /// <param name="diffrences">The list of differences between texts.</param>
    /// <param name="targetFilePath">The path of the target file to save the output.</param>
    ASPOSE_PDF_SHARED_API void GenerateOutput(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<DiffOperation>>>>> diffrences, System::String targetFilePath) override;
    
private:

    System::SharedPtr<System::Collections::Generic::List<char16_t>> _whiteSpaces;
    System::String _addDiffMdStartSymbols;
    System::String _addDiffMdEndSymbols;
    System::String _removeDiffMdStartSymbols;
    System::String _removeDiffMdEndSymbols;
    System::SharedPtr<System::Text::RegularExpressions::Regex> _onlyCrLf;
    System::SharedPtr<System::Text::RegularExpressions::Regex> _replaceCrLf;
    
    System::String GenerateMdElement(System::String previousOutput, System::SharedPtr<DiffOperation> currentDiff);
    int32_t CountInitialSpaces(System::String s);
    int32_t CountTrailingSpaces(System::String s);
    
};

} // namespace Comparison
} // namespace Pdf
} // namespace Aspose


